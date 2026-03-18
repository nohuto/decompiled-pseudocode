/*
 * XREFs of MiAdjustPteBins @ 0x1400F09DC
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 *     MiAttemptCoalesce @ 0x1400E6760 (MiAttemptCoalesce.c)
 *     MiPteBinsNeedTrimming @ 0x1400F0AD8 (MiPteBinsNeedTrimming.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  __int64 *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 *v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 3LL;
  v10[0] = &qword_140389360;
  v1 = v10;
  v2 = 3LL;
  v10[1] = &unk_140388FA0;
  v10[2] = &unk_140388F38;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24) & 1) != 0 )
    {
      MiEmptyPteBins(*v1, 0);
      if ( (unsigned int)MiPteBinsNeedTrimming(v3, v4, v5, v6) == 1 )
        MiEmptyPteBins(v3, 1);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v7) = byte_14038900E + 1;
  byte_14038900E = v7;
  if ( (v7 & 0xF) == 0 )
  {
    v8 = v10;
    do
    {
      v7 = 0xCCCCCCCCCCCCCCCDuLL * *(_QWORD *)(*v8 + 64);
      if ( *(_QWORD *)(*v8 + 96) > *(_QWORD *)(*v8 + 64) / 0xAuLL )
        LOBYTE(v7) = MiAttemptCoalesce(*v8, 0LL, *(_QWORD *)*v8);
      ++v8;
      --v0;
    }
    while ( v0 );
  }
  return v7;
}
