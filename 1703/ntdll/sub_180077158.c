/*
 * XREFs of sub_180077158 @ 0x180077158
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

unsigned __int8 *__fastcall sub_180077158(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx

  if ( (a2 & 0xF) != 0 )
  {
    sub_1800A4DFC(9, a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    sub_1800A4DFC(8, a1, (_DWORD)v2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
