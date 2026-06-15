/*
 * XREFs of Pdcv2ActivationClientSetBrokeredProcessId @ 0x180065238
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180060130 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive2 @ 0x18005A720 (PdcAcquireRwLockExclusive2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18005AC04 (PdcReleaseRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID @ 0x1800652E8 (Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID.c)
 */

__int64 __fastcall Pdcv2ActivationClientSetBrokeredProcessId(__int64 a1, int a2)
{
  char v2; // bp
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  unsigned int v7; // ebx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v9 = 0;
  if ( a1 )
  {
    v3 = a1;
    if ( *(_DWORD *)(a1 + 16) == 1094927440 )
    {
      v4 = *(_DWORD **)(a1 + 24);
      if ( *v4 == 843138128 )
      {
        PdcAcquireRwLockExclusive2((__int64)(v4 + 2), &v9);
        v2 = v9;
        *(_DWORD *)(a1 + 584) = a2;
        v7 = 0;
      }
      else
      {
        v3 = 0LL;
        v7 = -1073741585;
        v4 = 0LL;
      }
    }
    else
    {
      v7 = -1073741585;
      v3 = 0LL;
    }
  }
  else
  {
    v7 = -1073741585;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID(v3, v4, v7);
  if ( v2 )
    PdcReleaseRwLockExclusive2((__int64)(v4 + 2), &v9);
  return v7;
}
