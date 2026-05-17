/*
 * XREFs of sub_1800637EC @ 0x1800637EC
 * Callers:
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 */

__int64 __fastcall sub_1800637EC(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rax

  v6 = sub_180063A64(a1, a2, *(_DWORD *)(a1 + 20) | a3, 0LL);
  if ( v6 == -1 )
    return 0LL;
  if ( a4 && v6 )
    *a4 = *(_QWORD *)(v6 + 8);
  if ( a5 )
  {
    if ( v6 )
      *a5 = *(unsigned __int8 *)(v6 + 2) >> 4 << 8;
    else
      *a5 = 0;
  }
  return 1LL;
}
