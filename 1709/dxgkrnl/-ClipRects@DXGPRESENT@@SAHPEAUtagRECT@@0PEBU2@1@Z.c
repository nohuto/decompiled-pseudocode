/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C00FD180
 * Callers:
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00FD014 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00F2794 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C01B54F8 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rdi
  LONG top; // eax
  LONG bottom; // ecx
  LONG left; // edx
  LONG right; // r8d
  LONG v14; // r13d
  LONG v15; // r12d
  LONG v16; // edx
  int v17; // ecx
  LONG v18; // eax
  __int64 v19; // r8
  int v20; // kr00_4
  __int64 v21; // rcx
  __int64 v22; // rdx
  LONG v23; // ecx
  int v24; // r15d
  int v25; // ebx
  int v26; // r8d
  int v27; // r13d
  int v28; // r13d
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  LONG v32; // [rsp+30h] [rbp-40h]
  int v33; // [rsp+30h] [rbp-40h]
  int v34; // [rsp+34h] [rbp-3Ch]
  int v35; // [rsp+34h] [rbp-3Ch]
  struct tagRECT v36; // [rsp+38h] [rbp-38h] BYREF
  int v37; // [rsp+48h] [rbp-28h]
  LONG v38; // [rsp+4Ch] [rbp-24h]
  LONG v39; // [rsp+50h] [rbp-20h]
  LONG v40; // [rsp+54h] [rbp-1Ch]
  LONG v41; // [rsp+58h] [rbp-18h]
  struct tagRECT v42; // [rsp+60h] [rbp-10h] BYREF
  int v43; // [rsp+B0h] [rbp+40h]
  int v44; // [rsp+B0h] [rbp+40h]

  v4 = 0LL;
  if ( a3 )
  {
    top = a3->top;
    if ( top >= a1->bottom )
      return 0LL;
    bottom = a3->bottom;
    if ( bottom <= a1->top )
      return 0LL;
    left = a3->left;
    if ( a3->left >= a1->right )
      return 0LL;
    right = a3->right;
    if ( right <= a1->left || top >= bottom || left >= right )
      return 0LL;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      DXGPRESENT::ClipIntervals(&a1->top, &a1->bottom, &a2->top, &a2->bottom, a3->top, a3->bottom);
      DXGPRESENT::ClipIntervals(&a1->left, &a1->right, &a2->left, &a2->right, a3->left, a3->right);
    }
    return 1LL;
  }
  v14 = a4->top;
  if ( v14 < a2->bottom - a2->top )
  {
    v15 = a4->bottom;
    if ( v15 > 0 )
    {
      v16 = a4->left;
      v17 = a2->right - a2->left;
      v38 = v16;
      if ( v16 < v17 )
      {
        v18 = a4->right;
        v32 = v18;
        if ( v18 > 0 && v14 < v15 && v16 < v18 )
        {
          if ( !a3 )
          {
            DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v14, v15);
            DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
            return 1LL;
          }
          v19 = (unsigned int)a3->left;
          v39 = a3->right;
          v20 = (v18 - v16) << 16;
          v22 = (unsigned int)(v20 >> 31);
          v21 = (unsigned int)(v39 - v19);
          v43 = v19;
          LODWORD(v22) = v20 % (int)v21;
          v37 = v20 / (int)v21;
          if ( v20 / (int)v21
            && (v23 = a3->bottom,
                v40 = a3->top,
                v41 = v23,
                v21 = (unsigned int)(v23 - v40),
                v22 = (unsigned int)((v15 - v14) << 16 >> 31),
                LODWORD(v22) = ((v15 - v14) << 16) % (int)v21,
                (v34 = ((v15 - v14) << 16) / (int)v21) != 0) )
          {
            if ( DXGPRESENT::IntersectRect(&v36, a3, a1) )
            {
              v24 = v34;
              v25 = v37;
              v44 = (v38 << 16) + v37 * (v36.left - v43);
              v26 = (v14 << 16) + v34 * (v36.top - v40);
              v33 = (v32 << 16) + v37 * (v36.right - v39);
              v42.left = (v44 + 0xFFFF) >> 16;
              v42.right = v33 >> 16;
              v42.top = (v26 + 0xFFFF) >> 16;
              v27 = v34 * (v36.bottom - v41);
              v35 = v26;
              v28 = (v15 << 16) + v27;
              v42.bottom = v28 >> 16;
              if ( DXGPRESENT::IntersectRect(a2, &v42, a2) )
              {
                v36.left += (v25 + (a2->left << 16) - v44 - 1) / v25;
                v36.right += ((a2->right << 16) - v33) / v25;
                v36.top += (v24 + (a2->top << 16) - v35 - 1) / v24;
                v36.bottom += ((a2->bottom << 16) - v28) / v24;
                if ( DXGPRESENT::IntersectRect(a1, &v36, a1) )
                  return 1LL;
              }
            }
          }
          else
          {
            v29 = WdLogNewEntry5_WdWarning(v21, v22, v19);
            v30 = (_QWORD *)(v29 + 24);
            do
            {
              v31 = *(&a4->left + v4++);
              *v30++ = v31;
            }
            while ( v4 < 4 );
            WdLogEvent5_WdWarning(v29);
          }
        }
      }
    }
  }
  return 0LL;
}
