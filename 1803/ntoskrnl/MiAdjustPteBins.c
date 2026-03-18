/*
 * XREFs of MiAdjustPteBins @ 0x140080D50
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14004A270 (MiAttemptCoalesce.c)
 *     MiPteBinsNeedTrimming @ 0x140080E4C (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 3LL;
  v7[0] = &qword_1403CC5E0;
  v1 = v7;
  v2 = 3LL;
  v7[1] = &unk_1403CC258;
  v7[2] = &unk_1403CC1F8;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v1, 0LL);
      if ( (unsigned int)MiPteBinsNeedTrimming(v3) == 1 )
        MiEmptyPteBins(v3, 1LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_1403CC2BE + 1;
  byte_1403CC2BE = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = v7;
    do
    {
      v4 = 0xCCCCCCCCCCCCCCCDuLL * *(_QWORD *)(*v5 + 56);
      if ( *(_QWORD *)(*v5 + 88) > *(_QWORD *)(*v5 + 56) / 0xAuLL )
        LOBYTE(v4) = MiAttemptCoalesce(*v5, 0LL, *(_QWORD *)*v5);
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
