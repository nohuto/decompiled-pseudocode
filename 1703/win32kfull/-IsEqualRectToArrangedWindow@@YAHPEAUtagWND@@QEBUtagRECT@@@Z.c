/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01F0A30
 * Callers:
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall IsEqualRectToArrangedWindow(struct tagWND *a1, const struct tagRECT *const a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&a2->left - *((_QWORD *)a1 + 16);
  if ( !v4 )
    v4 = *(_QWORD *)&a2->right - *((_QWORD *)a1 + 17);
  v5 = 0;
  if ( !v4
    || (unsigned int)GetWindowExtendedMargin((__int64)a1, &v7)
    && a2->top == *((_DWORD *)a1 + 33)
    && a2->left - (unsigned __int16)v7 == *((_DWORD *)a1 + 32)
    && a2->right + WORD1(v7) == *((_DWORD *)a1 + 34)
    && a2->bottom + HIWORD(v7) == *((_DWORD *)a1 + 35) )
  {
    return 1;
  }
  return v5;
}
