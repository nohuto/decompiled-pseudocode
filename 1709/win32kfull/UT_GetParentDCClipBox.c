/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C007F478
 * Callers:
 *     xxxFillWindow @ 0x1C007EFB0 (xxxFillWindow.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 * Callees:
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, int *a3)
{
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(a1 + 168) + 100LL) >= 0 )
    return 1LL;
  GetRect(a1, v6, 17);
  return IntersectRect(a3, a3, v6);
}
