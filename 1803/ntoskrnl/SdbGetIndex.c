/*
 * XREFs of SdbGetIndex @ 0x1405FD89C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1405FCDAC (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1404F4560 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  _WORD *i; // rax
  __int64 v12; // rcx
  NTSTATUS v14; // [rsp+20h] [rbp-28h]
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  v8 = RtlRunOnceExecuteOnce(Parameter + 167, (PRTL_RUN_ONCE_INIT_FN)InitOnceScanIndexes, Parameter, &Context);
  if ( v8 < 0 )
  {
    v14 = v8;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetIndex",
      1063,
      (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]",
      v14);
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
    for ( i = (char *)Context + 4; *i; i += 20 )
    {
      if ( *i == a2 && i[1] == a3 )
      {
        v12 = 5LL * v9;
        v7 = *((_DWORD *)Context + 2 * v12);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v12 + 8);
        return v7;
      }
      ++v9;
      if ( ++v10 >= 32 )
        return v7;
    }
  }
  return v7;
}
