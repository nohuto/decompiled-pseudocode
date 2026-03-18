/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x14004C610
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140488028 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x14004C79C (RealSuccessor.c)
 *     FindNodeOrParent_0 @ 0x14004CB00 (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
  PVOID *v7; // rsi
  PVOID *v11; // rbx
  PULONG v12; // r14
  __int64 (__fastcall *v13)(PRTL_AVL_TABLE, PVOID *, PVOID); // r15
  int v14; // ecx
  int NodeOrParent_0; // eax

  v7 = RestartKey;
  v11 = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v12 = DeleteCount;
  v13 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))PsGetHostSilo;
  if ( MatchFunction )
    v13 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount != Table->DeleteCount )
    v11 = 0LL;
  RestartKey = v11;
  if ( v11 )
    goto LABEL_7;
  NodeOrParent_0 = FindNodeOrParent_0(Table, Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v11 = RestartKey;
    goto LABEL_7;
  }
  NextFlag = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v11 = (PVOID *)RealSuccessor(RestartKey);
LABEL_7:
    if ( NextFlag )
      v11 = (PVOID *)RealSuccessor(v11);
    goto LABEL_9;
  }
  v11 = RestartKey;
LABEL_9:
  if ( v11 )
  {
    while ( 1 )
    {
      v14 = v13(Table, v11 + 4, MatchData);
      if ( v14 != -1073741198 )
        break;
      v11 = (PVOID *)RealSuccessor(v11);
      if ( !v11 )
        return 0LL;
    }
    *v7 = v11;
    *v12 = Table->DeleteCount;
    if ( !v14 )
      return v11 + 4;
  }
  return 0LL;
}
