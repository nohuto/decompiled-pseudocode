/*
 * XREFs of ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180078564
 * Callers:
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180074D90 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::GetBorderMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v3; // r11d
  char v4; // bl
  __m128i v5; // xmm0
  int v6; // r8d
  int v7; // ecx
  unsigned __int64 v8; // xmm0_8
  __int64 v9; // [rsp+0h] [rbp-18h]

  v3 = *((_DWORD *)this + 147);
  v4 = *((_BYTE *)this + 240) & 8;
  a2->cxLeftWidth = v3;
  v5 = *(__m128i *)((char *)this + (v4 != 0 ? 0x10 : 0) + 620);
  v6 = *((_DWORD *)this + 150);
  v7 = *((_DWORD *)this + 148);
  a2->cyBottomHeight = v6;
  v9 = v5.m128i_i64[0];
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  a2->cyTopHeight = v8;
  if ( v7 <= 0 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
  if ( SHIDWORD(v9) > v7 )
    v7 = HIDWORD(v9);
  a2->cxRightWidth = v7;
  if ( v4 )
  {
    a2->cyBottomHeight = v6 + 1;
    a2->cxRightWidth = v7 + 1;
  }
  else
  {
    a2->cyTopHeight = v8 + 1;
    a2->cxLeftWidth = v3 - v9;
    a2->cyBottomHeight = v6 - HIDWORD(v8);
  }
}
