/*
 * XREFs of sub_180028C10 @ 0x180028C10
 * Callers:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18001A390 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 */

__int64 sub_180028C10()
{
  NTSTATUS v0; // eax
  __int32 v1; // ecx
  int v2; // r8d
  unsigned int v5; // ecx
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_18015BFB8
    && ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18015BFB8, 4u, 0LL) < 0 )
  {
    dword_18015BFB8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&stru_18015C320, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( sub_180095680(&stru_18015C320, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&stru_18015C320, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&stru_18015C320, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  sub_1800F7568((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_18015BFB8 = (2147483629 * (unsigned __int64)(unsigned int)dword_18015BFB8 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&dword_1801596A0[dword_1801598A0 & 0x7F], dword_18015BFB8);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(_RDX) = 0;
  }
  v5 = _RDX ^ v1;
  _InterlockedExchangeAdd(&dword_1801598A0, v5);
  return v5;
}
