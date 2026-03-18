/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x14061F27C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14061F6FC (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpGetProcessHistory @ 0x1407D73D8 (SdbpGetProcessHistory.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 ProcessHistory; // r15
  __int64 v3; // rbx
  __int64 v4; // rdi
  PVOID v5; // rax
  __int64 v6; // rsi
  size_t v7; // rdi
  __int64 result; // rax

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(_QWORD *)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v3 = -1LL;
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v4) );
      do
        ++v3;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v3) );
      v5 = AslAlloc(a1, 2LL * (unsigned int)(v3 + v4 + 1));
      ProcessHistory = (__int64)v5;
      if ( !v5 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpInitializeSearchDBContext",
          337,
          (unsigned int)"Failed to allocate process history buffer");
        return 0LL;
      }
      v6 = (unsigned int)v4;
      v7 = 2LL * (unsigned int)v4;
      memmove(v5, *(const void **)(v1 + 32), v7);
      memmove((void *)(v7 + ProcessHistory), *(const void **)(v1 + 40), 2LL * (unsigned int)v3);
      *(_WORD *)(ProcessHistory + 2 * ((unsigned int)v3 + v6)) = 0;
    }
    else
    {
      ProcessHistory = SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpInitializeSearchDBContext",
          352,
          (unsigned int)"Failed to retrieve process history");
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, v1 + 72);
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
