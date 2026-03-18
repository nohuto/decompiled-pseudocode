/*
 * XREFs of ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18011B470
 * Callers:
 *     ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18011AE94 (-DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqdddd @ 0x1801A8950 (McTemplateU0xqdddd.c)
 */

void __fastcall CD3DDeviceLevel1::DiscardView(CD3DDeviceLevel1 *this, struct ID3D11View *a2, const struct tagRECT *a3)
{
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // r9d

  if ( a2 )
  {
    v4 = (int)a2;
    (*(void (__fastcall **)(_QWORD, struct ID3D11View *, const struct tagRECT *, __int64))(**((_QWORD **)this + 82)
                                                                                         + 1064LL))(
      *((_QWORD *)this + 82),
      a2,
      a3,
      1LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xqdddd(v6, v5, v4, v7, a3->left, a3->top, a3->right, a3->bottom);
  }
}
