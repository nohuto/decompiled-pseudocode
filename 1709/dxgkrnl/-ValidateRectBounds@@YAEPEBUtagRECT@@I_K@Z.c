/*
 * XREFs of ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0190760
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z @ 0x1C0190308 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0190724 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateRectBounds(const struct tagRECT *a1, unsigned int a2, unsigned __int64 a3)
{
  LONG right; // r8d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  if ( !ValidateRect(a1) )
    return 0;
  right = a1->right;
  if ( !a2 )
    a2 = a1->right;
  v8 = a2 * (unsigned __int64)(unsigned int)(a1->bottom - 1);
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 1266LL;
LABEL_4:
    WdLogEvent5_WdAssertion(v9);
    return 0;
  }
  if ( (int)v8 + right < (unsigned int)v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 1271LL;
    goto LABEL_4;
  }
  if ( (unsigned int)(v8 + right) > a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 1276LL;
    goto LABEL_4;
  }
  return 1;
}
