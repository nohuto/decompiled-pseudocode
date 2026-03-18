/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0190724
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C0190308 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0190760 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C019082C (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  __int64 v2; // rax

  if ( a1->left < a1->right && a1->top < a1->bottom )
    return 1;
  v2 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v2 + 24) = 1230LL;
  WdLogEvent5_WdAssertion(v2);
  return 0;
}
