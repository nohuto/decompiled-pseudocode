/*
 * XREFs of sub_180084574 @ 0x180084574
 * Callers:
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 */

bool __fastcall sub_180084574(void *a1, void *a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  v4 = sub_18003660C(a1, (__int64)a2, 0, 1);
  if ( !v4 )
    return 0;
  v5 = sub_18003660C(a2, v3, 0, 0);
  if ( !v5 )
    return 0;
  if ( *v4 != -20054323 || *v5 != -20054323 )
    return 1;
  v6 = *(_QWORD *)(v4 + 7) - *(_QWORD *)(v5 + 7);
  if ( !v6 )
    v6 = *(_QWORD *)(v4 + 9) - *(_QWORD *)(v5 + 9);
  return !v6;
}
