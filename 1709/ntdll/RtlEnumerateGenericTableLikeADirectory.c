/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800F3A40
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180069A44 (FindNodeOrParent_0.c)
 *     RealSuccessor @ 0x1800700D8 (RealSuccessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
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
  PULONG v13; // r14
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, PVOID *, PVOID); // r15
  int NodeOrParent_0; // eax
  int v16; // ecx

  v7 = RestartKey;
  v11 = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))WinSqmCheckEscalationSetString;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount != Table->DeleteCount )
    v11 = 0LL;
  RestartKey = v11;
  if ( v11 )
    goto LABEL_14;
  NodeOrParent_0 = FindNodeOrParent_0((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v11 = RestartKey;
LABEL_14:
    if ( NextFlag )
      v11 = (PVOID *)RealSuccessor(v11);
    goto LABEL_16;
  }
  NextFlag = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v11 = (PVOID *)RealSuccessor(RestartKey);
    goto LABEL_14;
  }
  v11 = RestartKey;
LABEL_16:
  if ( !v11 )
    return 0LL;
  while ( 1 )
  {
    v16 = v14(Table, v11 + 4, MatchData);
    if ( v16 != -1073741198 )
      break;
    v11 = (PVOID *)RealSuccessor(v11);
    if ( !v11 )
      return 0LL;
  }
  *v7 = v11;
  *v13 = Table->DeleteCount;
  if ( v16 )
    return 0LL;
  return v11 + 4;
}
