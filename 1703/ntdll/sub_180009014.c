/*
 * XREFs of sub_180009014 @ 0x180009014
 * Callers:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180102ACC @ 0x180102ACC (sub_180102ACC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180009014(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 32);
  result = (v3 & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(a2 + 24);
  if ( a3 )
    *a3 = v3 & 1;
  return result;
}
