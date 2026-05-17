/*
 * XREFs of sub_18006377C @ 0x18006377C
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

unsigned __int8 *__fastcall sub_18006377C(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (int)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    sub_18009A5F0(v5, v4, v3, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
