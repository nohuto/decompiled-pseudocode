/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800222A0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x180070BB0 (-IsEmptyDrawing@CColorBrush@@UEBA_NXZ.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800C2790 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  char v2; // bl
  CSpriteVisualContent *v3; // rcx
  bool (__fastcall *v4)(CColorBrush *__hidden); // rax
  char IsEmptyDrawing; // al
  struct CDropShadow *DropShadow; // rax

  v2 = 0;
  v3 = (CSpriteVisualContent *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = *(bool (__fastcall **)(CColorBrush *__hidden))(*(_QWORD *)v3 + 192LL);
    if ( v4 == CSpriteVisualContent::IsEmptyDrawing )
      IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(v3);
    else
      IsEmptyDrawing = v4 == CColorBrush::IsEmptyDrawing ? CColorBrush::IsEmptyDrawing(v3) : ((__int64 (*)(void))v4)();
    if ( !IsEmptyDrawing )
      return 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
      return 1;
  }
  return v2;
}
