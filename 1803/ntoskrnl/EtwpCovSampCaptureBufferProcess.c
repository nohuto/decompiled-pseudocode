/*
 * XREFs of EtwpCovSampCaptureBufferProcess @ 0x1407B358C
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B3E20 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1407B3294 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextAddAddresses @ 0x1407B4058 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampContextAddSamples @ 0x1407B414C (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x1407B7014 (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddSamples(BugCheckParameter2);
    goto LABEL_7;
  }
  if ( (unsigned int)EtwpCovSampStackHashCheck(a1, v4, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
  {
LABEL_6:
    v5 = BugCheckParameter2;
  }
  else
  {
    v5 = BugCheckParameter2;
    EtwpCovSampContextAddAddresses(BugCheckParameter2);
  }
LABEL_7:
  if ( v5 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_1403A1CE0);
    KeLeaveCriticalRegion();
  }
}
