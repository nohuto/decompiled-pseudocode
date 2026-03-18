/*
 * XREFs of ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C0DC8
 * Callers:
 *     ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x180015C60 (-DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180134910 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??_GCComposeTop@@QEAAPEAXI@Z @ 0x180132B98 (--_GCComposeTop@@QEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CComposeTop>(CComposeTop **a1, unsigned int a2)
{
  CComposeTop *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = CComposeTop::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
