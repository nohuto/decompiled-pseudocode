/*
 * XREFs of ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C013DBA4
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DD7C (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 */

struct tagRECT *__fastcall RemoveOverlap(struct tagRECT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  LONG right; // r10d
  struct tagRECT *v4; // rbx
  LONG left; // r11d
  LONG top; // r9d
  LONG bottom; // r8d
  LONG v9; // r14d
  int v10; // edi
  int v11; // r12d
  int v12; // esi
  LONG v13; // ebp
  int v14; // r13d
  int v15; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // r11d
  int v19; // edx
  _DWORD *v20; // rcx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // eax
  struct tagRECT *v27; // rcx
  int v28; // edx
  int v29; // edx
  int v30; // r8d
  int v31; // r8d
  struct tagRECT *result; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-58h]
  LONG v35; // [rsp+90h] [rbp+18h]
  unsigned __int64 v36; // [rsp+98h] [rbp+20h]

  right = a1->right;
  v4 = a2;
  left = a1->left;
  top = a1->top;
  bottom = a1->bottom;
  v9 = a3->right;
  v10 = left + (right - left) / 2;
  LODWORD(v36) = v10;
  v11 = top + (bottom - top) / 2;
  v12 = a2->left + (a2->right - a2->left) / 2;
  LODWORD(v33) = v12;
  v13 = a3->bottom;
  v14 = a2->top + (a2->bottom - a2->top) / 2;
  v15 = 0;
  v35 = a3->top;
  HIDWORD(v33) = v14;
  if ( v9 == right )
    v15 = 2;
  v16 = 0;
  v17 = a3->left == left;
  v18 = 1;
  if ( v17 )
    v16 = 2;
  v19 = ((v16 | (a3->top == top)) ^ (v15 | (v13 == bottom))) - 1;
  if ( (v19 & 2) == 0 )
    goto LABEL_17;
  HIDWORD(v36) = top + (bottom - top) / 2;
  if ( PtInRect(a3, v36) || PtInRect(v20, v33) )
  {
    v22 = v10 - v12;
    if ( v10 - v12 < 0 )
      v22 = v12 - v10;
    v23 = v11 - v14;
    if ( v11 - v14 < 0 )
      v23 = v14 - v11;
    if ( v22 >= v23 )
      goto LABEL_9;
    v19 = 0;
LABEL_17:
    if ( v19 == v18 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( v9 - v21 <= v13 - v35 )
  {
LABEL_9:
    v19 = v18;
    goto LABEL_19;
  }
  v19 = 0;
LABEL_18:
  v10 = v11;
  v12 = v14;
LABEL_19:
  v24 = (unsigned int)v10 >> 31;
  v25 = -v12;
  if ( v12 >= 0 )
    v25 = v12;
  v26 = -v10;
  if ( v10 >= 0 )
    v26 = v10;
  if ( v25 >= v26 )
  {
    v27 = v4;
    v24 = (unsigned int)v12 >> 31;
    v4 = a1;
  }
  else
  {
    v27 = a1;
  }
  if ( v19 == v18 )
  {
    if ( v24 )
      v28 = v27->left + v4->left - v27->right;
    else
      v28 = v4->right;
    v29 = v28 - v27->left;
    v30 = 0;
  }
  else
  {
    if ( v24 )
      v31 = v27->top + v4->top - v27->bottom;
    else
      v31 = v4->bottom;
    v30 = v31 - v27->top;
    v29 = 0;
  }
  v27->left += v29;
  result = v27;
  v27->right += v29;
  v27->bottom += v30;
  v27->top += v30;
  return result;
}
