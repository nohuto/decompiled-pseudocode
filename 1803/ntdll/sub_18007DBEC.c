/*
 * XREFs of sub_18007DBEC @ 0x18007DBEC
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 */

bool __fastcall sub_18007DBEC(void *a1, void *a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  v4 = sub_180033B60(a1, (__int64)a2, 0, 1);
  if ( !v4 )
    return 0;
  v5 = sub_180033B60(a2, v3, 0, 0);
  if ( !v5 )
    return 0;
  if ( *v4 != -20054323 || *v5 != -20054323 )
    return 1;
  v6 = *(_QWORD *)(v4 + 7) - *(_QWORD *)(v5 + 7);
  if ( !v6 )
    v6 = *(_QWORD *)(v4 + 9) - *(_QWORD *)(v5 + 9);
  return !v6;
}
