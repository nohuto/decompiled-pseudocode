/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x14006E310
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140509908 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     FindNodeOrParent @ 0x14006D7AC (FindNodeOrParent.c)
 *     RealSuccessor @ 0x14006E428 (RealSuccessor.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  bool v7; // zf
  PVOID *v9; // rsi
  char *v12; // rbx
  PULONG v13; // r14
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, char *, PVOID); // r15
  unsigned int v15; // eax
  char *v16; // rcx
  int v17; // ecx
  int NodeOrParent; // eax

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v12 = (char *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, char *, PVOID))PsGetHostSilo;
  v15 = Table->DeleteCount;
  v16 = v12;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, char *, PVOID))MatchFunction;
  if ( *DeleteCount != v15 )
  {
    v12 = 0LL;
    RestartKey = 0LL;
    v16 = 0LL;
  }
  if ( v16 )
    goto LABEL_7;
  NodeOrParent = FindNodeOrParent((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = (char *)RestartKey;
    goto LABEL_7;
  }
  NextFlag = 0;
  if ( NodeOrParent == 3 )
  {
    v12 = (char *)RealSuccessor(RestartKey);
LABEL_7:
    if ( NextFlag )
      v12 = (char *)RealSuccessor(v12);
    goto LABEL_9;
  }
  v12 = (char *)RestartKey;
LABEL_9:
  if ( v12 )
  {
    while ( 1 )
    {
      v17 = v14(Table, v12 + 32, MatchData);
      if ( v17 != -1073741198 )
        break;
      v12 = (char *)RealSuccessor(v12);
      if ( !v12 )
        return 0LL;
    }
    *v9 = v12;
    *v13 = Table->DeleteCount;
    if ( !v17 )
      return v12 + 32;
  }
  return 0LL;
}
