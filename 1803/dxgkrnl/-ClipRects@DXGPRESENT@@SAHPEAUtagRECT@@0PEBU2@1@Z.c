/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C01087D0
 * Callers:
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01085B4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C01B1318 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C01B1DA8 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
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
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  int v24; // r15d
  int v25; // r8d
  int v26; // r13d
  int v27; // r13d
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  LONG v31; // [rsp+30h] [rbp-40h]
  int v32; // [rsp+30h] [rbp-40h]
  int v33; // [rsp+34h] [rbp-3Ch]
  int v34; // [rsp+34h] [rbp-3Ch]
  struct tagRECT v35; // [rsp+38h] [rbp-38h] BYREF
  int v36; // [rsp+48h] [rbp-28h]
  LONG v37; // [rsp+4Ch] [rbp-24h]
  LONG v38; // [rsp+50h] [rbp-20h]
  int v39; // [rsp+54h] [rbp-1Ch]
  int v40; // [rsp+58h] [rbp-18h]
  struct tagRECT v41; // [rsp+60h] [rbp-10h] BYREF
  int v42; // [rsp+B0h] [rbp+40h]
  int v43; // [rsp+B0h] [rbp+40h]

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
      v37 = v16;
      if ( v16 < v17 )
      {
        v18 = a4->right;
        v31 = v18;
        if ( v18 > 0 && v14 < v15 && v16 < v18 )
        {
          if ( !a3 )
          {
            DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v14, v15);
            DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
            return 1LL;
          }
          v19 = (unsigned int)a3->left;
          v38 = a3->right;
          v42 = v19;
          v20 = ((v18 - v16) << 16) / (v38 - (int)v19);
          v21 = (unsigned int)a3->bottom;
          v22 = (unsigned int)a3->top;
          v36 = v20;
          v40 = v21;
          v39 = v22;
          if ( v20
            && (v21 = (unsigned int)(v21 - v22),
                v22 = (unsigned int)((v15 - v14) << 16 >> 31),
                LODWORD(v22) = ((v15 - v14) << 16) % (int)v21,
                (v33 = ((v15 - v14) << 16) / (int)v21) != 0) )
          {
            if ( DXGPRESENT::IntersectRect(&v35, a3, a1) )
            {
              v23 = v33;
              v24 = v36;
              v43 = (v37 << 16) + v36 * (v35.left - v42);
              v25 = (v14 << 16) + v33 * (v35.top - v39);
              v32 = (v31 << 16) + v36 * (v35.right - v38);
              v41.left = (v43 + 0xFFFF) >> 16;
              v41.right = v32 >> 16;
              v41.top = (v25 + 0xFFFF) >> 16;
              v26 = v33 * (v35.bottom - v40);
              v34 = v25;
              v27 = (v15 << 16) + v26;
              v41.bottom = v27 >> 16;
              if ( DXGPRESENT::IntersectRect(a2, &v41, a2) )
              {
                v35.left += (v24 + (a2->left << 16) - v43 - 1) / v24;
                v35.right += ((a2->right << 16) - v32) / v24;
                v35.top += (v23 + (a2->top << 16) - v34 - 1) / v23;
                v35.bottom += ((a2->bottom << 16) - v27) / v23;
                if ( DXGPRESENT::IntersectRect(a1, &v35, a1) )
                  return 1LL;
              }
            }
          }
          else
          {
            v28 = WdLogNewEntry5_WdWarning(v21, v22, v19);
            v29 = (_QWORD *)(v28 + 24);
            do
            {
              v30 = *(&a4->left + v4++);
              *v29++ = v30;
            }
            while ( v4 < 4 );
            WdLogEvent5_WdWarning(v28);
          }
        }
      }
    }
  }
  return 0LL;
}
