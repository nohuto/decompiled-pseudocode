/*
 * XREFs of sub_1800771D8 @ 0x1800771D8
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 * Callees:
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 */

__int64 __fastcall sub_1800771D8(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rax

  v6 = sub_18001F5E8((_RTL_SRWLOCK *)a1, a2, *(_DWORD *)(a1 + 20) | a3, 0LL);
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
