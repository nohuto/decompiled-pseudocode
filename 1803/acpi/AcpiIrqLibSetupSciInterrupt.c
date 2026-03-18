/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C008CBC8
 * Callers:
 *     OSInterruptVector @ 0x1C009902C (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 *     IrqArbGetDeviceIrql @ 0x1C00906A0 (IrqArbGetDeviceIrql.c)
 *     IcAddPossibleReference @ 0x1C0091DE8 (IcAddPossibleReference.c)
 *     IcClearPossibleData @ 0x1C00921E0 (IcClearPossibleData.c)
 *     IcCopyData @ 0x1C0092288 (IcCopyData.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00923E0 (IcCopyInputStateToDeviceState.c)
 *     IcRemapInputs @ 0x1C009266C (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C00928A8 (IcSetPossibleInput.c)
 *     IrqLibpSetSciConnectionData @ 0x1C009CA50 (IrqLibpSetSciConnectionData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C009CBF4 (IrqPolicyGetDistributionDisposition.c)
 */

__int64 AcpiIrqLibSetupSciInterrupt()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *UserData; // rbx
  __int64 result; // rax
  char v3; // bp
  ULONGLONG v4; // rdx
  unsigned int v5; // edi
  char v6; // cl
  int v7; // eax
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
  v3 = 3;
  UserData[8] = 0;
  UserData[12] = 0;
  UserData[11] = 2;
  v4 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  if ( (unsigned int)v4 < 0x10 )
  {
    v5 = *((_DWORD *)&IsaVectorOverrides + 2 * v4);
    v6 = *((_BYTE *)&IsaVectorOverrides + 8 * v4 + 4);
    if ( v6 != -1 )
    {
      v7 = UserData[11];
      v3 = *((_BYTE *)&IsaVectorOverrides + 8 * v4 + 4);
      if ( (v6 & 1) == 0 )
        v7 = 1;
      UserData[11] = v7;
    }
  }
  else
  {
    v5 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  }
  UserData[22] = v5;
  IrqLibSciGsiv = v5;
  RtlAddRange(RangeList, v4, v4, 0, 0x12u, UserData, *(PVOID *)(RootDeviceExtension + 736));
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
      LOBYTE(v8) = v3;
      result = IcSetPossibleInput(v5, &v9, v8, 0LL);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v5, 0LL);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState(&IrqLibArbiterInstance, 0LL);
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
