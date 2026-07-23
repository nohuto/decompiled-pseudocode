/*
 * XREFs of SdbGetIndex @ 0x14054AB9C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14054A6A4 (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14053ADB0 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r8
  _WORD *i; // rax
  __int64 v11; // rcx
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 167, (PRTL_RUN_ONCE_INIT_FN)InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetIndex",
      1063,
      (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]");
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    for ( i = (char *)Context + 4; *i; i += 20 )
    {
      if ( *i == a2 && i[1] == a3 )
      {
        v11 = 5LL * v8;
        v7 = *((_DWORD *)Context + 2 * v11);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v11 + 8);
        return v7;
      }
      ++v8;
      if ( ++v9 >= 32 )
        return v7;
    }
  }
  return v7;
}
