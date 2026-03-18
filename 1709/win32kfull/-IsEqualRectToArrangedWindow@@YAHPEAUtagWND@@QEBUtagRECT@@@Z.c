/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01D8748
 * Callers:
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall IsEqualRectToArrangedWindow(struct tagWND *a1, const struct tagRECT *const a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v8; // [rsp+32h] [rbp+Ah]
  unsigned __int16 v9; // [rsp+36h] [rbp+Eh]

  v4 = *(_QWORD *)&a2->left - *((_QWORD *)a1 + 16);
  if ( !v4 )
    v4 = *(_QWORD *)&a2->right - *((_QWORD *)a1 + 17);
  v5 = 0;
  if ( !v4
    || (unsigned int)GetWindowExtendedMargin((__int64)a1, (__int64)&v7)
    && a2->top == *((_DWORD *)a1 + 33)
    && a2->left - v7 == *((_DWORD *)a1 + 32)
    && a2->right + v8 == *((_DWORD *)a1 + 34)
    && a2->bottom + v9 == *((_DWORD *)a1 + 35) )
  {
    return 1;
  }
  return v5;
}
