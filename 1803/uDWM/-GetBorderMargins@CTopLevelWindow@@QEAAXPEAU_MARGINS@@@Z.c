/*
 * XREFs of ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180081978
 * Callers:
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F6B4 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::GetBorderMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  bool v3; // bl
  int v4; // r8d
  int v5; // r11d
  __m128i v6; // xmm0
  int v7; // ecx
  unsigned __int64 v8; // xmm0_8
  int v9; // ecx
  __int64 v10; // [rsp+0h] [rbp-18h]

  v3 = (*((_BYTE *)this + 240) & 8) != 0;
  v4 = *((_DWORD *)this + 148);
  v5 = *((_DWORD *)this + 147);
  a2->cxLeftWidth = v5;
  v6 = *(__m128i *)((char *)this + 16 * v3 + 620);
  v7 = *((_DWORD *)this + 150);
  a2->cyBottomHeight = v7;
  v10 = v6.m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  a2->cyTopHeight = v8;
  if ( v4 <= 0 )
    v4 = *(_DWORD *)(*((_QWORD *)this + 90) + 96LL);
  if ( SHIDWORD(v10) > v4 )
    v4 = HIDWORD(v10);
  a2->cxRightWidth = v4;
  if ( v3 )
  {
    v9 = v7 + 1;
    a2->cxRightWidth = v4 + 1;
  }
  else
  {
    v9 = v7 - HIDWORD(v8);
    a2->cyTopHeight = v8 + 1;
    a2->cxLeftWidth = v5 - v10;
  }
  a2->cyBottomHeight = v9;
}
