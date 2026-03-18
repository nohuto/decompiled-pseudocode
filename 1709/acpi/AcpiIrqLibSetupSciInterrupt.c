/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C00903A8
 * Callers:
 *     OSInterruptVector @ 0x1C00AF5A8 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00892CC (IcCopyInputStateToDeviceState.c)
 *     IcClearPossibleData @ 0x1C0089840 (IcClearPossibleData.c)
 *     ProcessorCopyData @ 0x1C008A9C0 (ProcessorCopyData.c)
 *     IrqArbGetDeviceIrql @ 0x1C008B020 (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C008B1F8 (IcRemapInputs.c)
 *     IcCopyData @ 0x1C00905B8 (IcCopyData.c)
 *     IcAddPossibleReference @ 0x1C009066C (IcAddPossibleReference.c)
 *     IcSetPossibleInput @ 0x1C00906BC (IcSetPossibleInput.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AF040 (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00AF128 (IrqLibpSetSciConnectionData.c)
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
    result = IrqArbGetDeviceIrql(UserData + 8, (_BYTE *)UserData + 40);
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
            IcCopyInputStateToDeviceState((__int64)&IrqLibArbiterInstance, 0);
            result = IcCopyData(0LL);
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
