/*
 * XREFs of ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x18001FE1C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x18008C660 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CPreComputeContext::GetInflateSizeForAntiAliasing(CPreComputeContext *this, const struct CVisual *a2)
{
  bool (__fastcall *v2)(CSpriteVisual *__hidden); // rax
  bool HasAntialiasedContent; // al

  if ( *((_DWORD *)this + 42) || *((_BYTE *)a2 + 88) >= 0x80u )
    return FLOAT_4_0;
  v2 = *(bool (__fastcall **)(CSpriteVisual *__hidden))(*(_QWORD *)a2 + 272LL);
  if ( v2 == CSpriteVisual::HasAntialiasedContent )
    HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent(a2);
  else
    HasAntialiasedContent = v2(a2);
  if ( HasAntialiasedContent )
    return FLOAT_0_5;
  else
    return 0.0;
}
