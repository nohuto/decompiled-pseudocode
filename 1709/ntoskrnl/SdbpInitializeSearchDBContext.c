/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x140541D04
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x14076EAE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140541990 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     SdbpGetProcessHistory @ 0x140770114 (SdbpGetProcessHistory.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  const wchar_t *ProcessHistory; // r15
  __int64 v3; // rbx
  __int64 v4; // rdi
  wchar_t *v5; // rax
  __int64 v6; // rsi
  size_t v7; // rdi
  __int64 result; // rax
  const char *v9; // r9
  int v10; // r8d

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(const wchar_t **)(a1 + 64);
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
      v5 = (wchar_t *)AslAlloc(a1, 2LL * (unsigned int)(v3 + v4 + 1));
      ProcessHistory = v5;
      if ( !v5 )
      {
        v9 = "Failed to allocate process history buffer";
        v10 = 318;
        goto LABEL_17;
      }
      v6 = (unsigned int)v4;
      v7 = (unsigned int)v4;
      memmove(v5, *(const void **)(v1 + 32), v7 * 2);
      memmove((void *)&ProcessHistory[v7], *(const void **)(v1 + 40), 2LL * (unsigned int)v3);
      ProcessHistory[(unsigned int)v3 + v6] = 0;
    }
    else
    {
      ProcessHistory = (const wchar_t *)SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        v9 = "Failed to retrieve process history";
        v10 = 333;
LABEL_17:
        AslLogCallPrintf(1, (unsigned int)"SdbpInitializeSearchDBContext", v10, (_DWORD)v9);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, (_QWORD *)(v1 + 72));
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
