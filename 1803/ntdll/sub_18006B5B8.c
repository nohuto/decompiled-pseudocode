/*
 * XREFs of sub_18006B5B8 @ 0x18006B5B8
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 * Callees:
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B5EC @ 0x18006B5EC (sub_18006B5EC.c)
 */

void __fastcall sub_18006B5B8(__int64 a1)
{
  __int64 v2; // rax
  PVOID *v3; // rcx

  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = sub_18006B5EC();
    v3 = *(PVOID **)(a1 + 80);
    if ( (PVOID *)v2 != v3 )
      sub_18006B460(v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
