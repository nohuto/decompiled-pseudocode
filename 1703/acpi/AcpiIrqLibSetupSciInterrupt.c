/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C0084668
 * Callers:
 *     OSInterruptVector @ 0x1C00AAB98 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     IcCopyData @ 0x1C00845B4 (IcCopyData.c)
 *     IcSetPossibleInput @ 0x1C0084DF8 (IcSetPossibleInput.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0086954 (IcCopyInputStateToDeviceState.c)
 *     ProcessorCopyData @ 0x1C00870D0 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C0087510 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C00875D8 (IcRemapInputs.c)
 *     IrqArbGetDeviceIrql @ 0x1C00882DC (IrqArbGetDeviceIrql.c)
 *     IcAddPossibleReference @ 0x1C00891D0 (IcAddPossibleReference.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00AAF94 (IrqLibpSetSciConnectionData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AB6C0 (IrqPolicyGetDistributionDisposition.c)
 */

__int64 AcpiIrqLibSetupSciInterrupt()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *UserData; // rbx
  char v2; // bp
  ULONGLONG v3; // rdx
  unsigned int v4; // edi
  char v5; // cl
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+58h] [rbp-60h] BYREF
  int v10; // [rsp+6Ch] [rbp-4Ch]
  _BYTE v11[40]; // [rsp+78h] [rbp-40h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *UserData = 1;
  UserData[2] = 1;
  v2 = 3;
  UserData[8] = 0;
  UserData[12] = 0;
  UserData[11] = 2;
  v3 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  if ( (unsigned int)v3 >= 0x10 )
  {
    v4 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  }
  else
  {
    v4 = *((_DWORD *)&IsaVectorOverrides + 2 * v3);
    v5 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
    if ( v5 != -1 )
    {
      v6 = UserData[11];
      v2 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
      if ( (v5 & 1) == 0 )
        v6 = 1;
      UserData[11] = v6;
    }
  }
  UserData[22] = v4;
  IrqLibSciGsiv = v4;
  RtlAddRange(RangeList, v3, v3, 0, 0x12u, UserData, *(PVOID *)(RootDeviceExtension + 736));
  v11[4] = 0;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             *(_QWORD *)(RootDeviceExtension + 736),
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v11,
             1,
             0,
             1,
             1,
             &v9);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v9;
    UserData[9] = v10;
    result = IrqArbGetDeviceIrql(UserData + 8, UserData + 10);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      LOBYTE(v8) = v2;
      result = IcSetPossibleInput(v4, &v9, v8, 0LL);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v4, 0LL);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState(&IrqLibArbiterInstance, 0LL);
            result = IcCopyData(0);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(UserData + 8);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
