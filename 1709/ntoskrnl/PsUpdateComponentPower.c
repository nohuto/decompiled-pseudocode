/*
 * XREFs of PsUpdateComponentPower @ 0x1400D4850
 * Callers:
 *     PspSetProcessEnergyTrackingStateCallback @ 0x14050B9F0 (PspSetProcessEnergyTrackingStateCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14050D3E4 (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     RtlInterlockedTimelineBitmapUpdate @ 0x14000800C (RtlInterlockedTimelineBitmapUpdate.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14050D500 (PoEnergyContextUpdateComponentPower.c)
 */

signed __int64 __fastcall PsUpdateComponentPower(PEPROCESS a1, __int64 a2, unsigned __int64 a3)
{
  volatile signed __int64 *v4; // r8
  __int64 v5; // rcx
  volatile signed __int64 *v6; // rcx
  signed __int64 result; // rax

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  v4 = (volatile signed __int64 *)a1[2].ActiveProcessors.Bitmap[15];
  if ( v4 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      if ( !a3 )
        return result;
      _InterlockedExchangeAdd64(v4 + 8, a3);
      v5 = 35LL;
      goto LABEL_7;
    }
    if ( (_DWORD)a2 == 2 )
    {
      if ( !a3 )
        return result;
      _InterlockedExchangeAdd64(v4 + 9, HIDWORD(a3));
      result = _InterlockedExchangeAdd64(v4 + 11, (unsigned int)a3);
      v5 = 36LL;
      goto LABEL_7;
    }
    if ( (_DWORD)a2 != 3 )
      return PoEnergyContextUpdateComponentPower(a1, a2, a3);
    if ( a3 )
    {
      _InterlockedExchangeAdd64(v4 + 10, HIDWORD(a3));
      result = _InterlockedExchangeAdd64(v4 + 12, (unsigned int)a3);
      v5 = 37LL;
LABEL_7:
      v6 = &v4[v5];
      if ( v6 )
        return RtlInterlockedTimelineBitmapUpdate(v6, KiTimelineBitmapTime);
    }
  }
  return result;
}
