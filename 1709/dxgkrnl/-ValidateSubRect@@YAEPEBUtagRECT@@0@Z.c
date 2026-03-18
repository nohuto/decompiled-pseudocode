/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C019082C
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C0190308 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0190724 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  __int64 left; // rcx
  LONG right; // eax
  LONG v6; // edx
  LONG top; // r10d
  LONG bottom; // r8d
  LONG v9; // r11d
  LONG v10; // ebx
  __int64 v12; // rax

  if ( ValidateRect(a1) )
  {
    left = (unsigned int)a1->left;
    right = a2->right;
    if ( (int)left < right )
    {
      v6 = a1->right;
      if ( v6 > a2->left )
      {
        top = a1->top;
        bottom = a2->bottom;
        if ( top < bottom )
        {
          v9 = a1->bottom;
          v10 = a2->top;
          if ( v9 > v10 && (int)left >= a2->left && v6 <= right && top >= v10 && v9 <= bottom )
            return 1;
        }
      }
    }
    v12 = WdLogNewEntry5_WdAssertion(left);
    *(_QWORD *)(v12 + 24) = 1301LL;
    WdLogEvent5_WdAssertion(v12);
  }
  return 0;
}
