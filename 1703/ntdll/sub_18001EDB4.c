/*
 * XREFs of sub_18001EDB4 @ 0x18001EDB4
 * Callers:
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18001EDB4(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v4 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *a3 = v4;
  if ( v4 == a2 + 80 )
    *a3 = v4 + 4096;
  v5 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 <= *a3 )
    return 0;
  *a4 = v5 - *a3;
  return 1;
}
