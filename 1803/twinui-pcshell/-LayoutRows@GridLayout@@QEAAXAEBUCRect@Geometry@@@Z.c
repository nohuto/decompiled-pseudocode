/*
 * XREFs of ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x18029F1FC
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1802906C0 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x18028E630 (--_GGridRow@@QEAAPEAXI@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x18029F06C (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 */

void __fastcall GridLayout::LayoutRows(GridLayout *this, const RECT *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r8d
  int v11; // r10d
  int v12; // eax
  int v13; // edi
  GridRow *v14; // rsi
  int v15; // r8d
  __int64 v16; // r12
  GridRow *v17; // r12
  RECT si128; // xmm0
  RECT *v19; // r14
  int v20; // eax
  RECT v21; // xmm0
  RECT v22; // xmm1
  RECT v23; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-40h] BYREF
  RECT v25; // [rsp+40h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = 56 * v2 - 56;
    do
    {
      v7 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v6 + v7 + 32) && v5 < *((_QWORD *)this + 7) )
      {
        GridRow::`scalar deleting destructor'((GridRow *)(v6 + v7));
        v8 = *((_QWORD *)this + 7);
        if ( v5 != v8 - 1 )
        {
          memmove(
            (void *)(v6 + *((_QWORD *)this + 6)),
            (const void *)(v6 + *((_QWORD *)this + 6) + 56),
            56 * (v8 - v5) - 56);
          v8 = *((_QWORD *)this + 7);
        }
        *((_QWORD *)this + 7) = v8 - 1;
      }
      --v5;
      v6 -= 56LL;
      --v2;
    }
    while ( v2 );
    LODWORD(v2) = *((_DWORD *)this + 14);
  }
  v9 = *((_DWORD *)this + 1);
  v10 = a2->bottom - a2->top;
  v11 = *((_DWORD *)this + 2);
  v12 = (v9 + v10) / (v11 + v9);
  if ( v12 >= (int)v2 )
    v12 = v2;
  if ( v12 <= 0 )
    v13 = a2->bottom - a2->top;
  else
    v13 = v12 * v11 + v9 * (v12 - 1);
  v14 = (GridRow *)*((_QWORD *)this + 6);
  v15 = v10 - v13;
  v16 = 56LL * *((_QWORD *)this + 7);
  v23 = *a2;
  v17 = (GridRow *)((char *)v14 + v16);
  si128 = 0LL;
  rcDst = 0LL;
  v23.bottom = v15 / 2 + v11 + v23.top;
  v23.top += v15 / 2;
  if ( v14 != v17 )
  {
    v19 = (RECT *)((char *)v14 + 8);
    do
    {
      GridRow::LayoutRow(v14, (const struct Geometry::CRect *)&v23);
      v20 = *((_DWORD *)this + 1) + *((_DWORD *)this + 2);
      v21 = *v19;
      v23.bottom += v20;
      v23.top += v20;
      rcSrc2 = v21;
      UnionRect(&rcDst, &rcDst, &rcSrc2);
      v14 = (GridRow *)((char *)v14 + 56);
      v19 = (RECT *)((char *)v19 + 56);
    }
    while ( v14 != v17 );
    si128 = (RECT)_mm_load_si128((const __m128i *)&rcDst);
  }
  v25 = si128;
  v25.bottom = v13 + si128.top;
  IntersectRect(&v25, a2, &v25);
  v22 = v25;
  *((struct tagRECT *)this + 2) = rcDst;
  *((RECT *)this + 1) = v22;
  *((_BYTE *)this + 12) = *((_DWORD *)this + 11) - *((_DWORD *)this + 9) > *((_DWORD *)this + 7) - *((_DWORD *)this + 5);
}
