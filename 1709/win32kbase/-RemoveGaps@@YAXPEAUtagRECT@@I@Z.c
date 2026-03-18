/*
 * XREFs of ?RemoveGaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DA6C
 * Callers:
 *     AlignRects @ 0x1C0092384 (AlignRects.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C013D798 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C013D9C4 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

void __fastcall RemoveGaps(struct tagRECT *a1, int a2)
{
  struct tagRECT **v4; // rdi
  struct tagRECT **v5; // r9
  struct tagRECT *v6; // rbx
  unsigned int v7; // r11d
  struct tagRECT *v8; // r10
  LONG left; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  struct tagRECT *v12; // rcx
  struct tagRECT *v13; // rsi
  struct tagRECT **v14; // rdi
  unsigned __int64 v15; // rbx
  struct tagRECT **v16; // rax
  struct tagRECT *v17; // rdx
  struct tagRECT *v18; // [rsp+20h] [rbp-A8h] BYREF
  struct tagRECT *v19; // [rsp+28h] [rbp-A0h] BYREF

  CenterRectangles(a1, a2);
  v4 = &v18;
  v5 = &v18;
  v6 = &a1[a2];
  v7 = -1;
  v8 = a1;
  if ( a1 < v6 )
  {
    do
    {
      left = v8->left;
      v10 = v8->right - v8->left;
      *v4 = v8;
      v11 = abs32(left + v10 / 2) + abs32(v8->top + (v8->bottom - v8->top) / 2);
      if ( v11 < v7 )
        v5 = v4;
      ++v4;
      ++v8;
      if ( v11 >= v7 )
        v11 = v7;
      v7 = v11;
    }
    while ( v8 < v6 );
    if ( v5 != &v18 )
    {
      v12 = *v5;
      *v5 = v18;
      v18 = v12;
    }
  }
  v13 = a1 + 1;
  v14 = &v19;
  if ( v13 < v6 )
  {
    v15 = ((unsigned __int64)((char *)v6 - (char *)v13 - 1) >> 4) + 1;
    do
    {
      v16 = AddNextContiguousRectangle(&v18, v14, a2);
      if ( v16 != v14 )
      {
        v17 = *v16;
        *v16 = *v14;
        *v14 = v17;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
}
