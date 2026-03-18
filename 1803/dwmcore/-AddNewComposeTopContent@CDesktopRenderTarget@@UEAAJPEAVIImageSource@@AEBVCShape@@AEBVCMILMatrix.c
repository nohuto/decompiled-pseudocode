/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180157150
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x180157EA8 (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801AD81C (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(
        CDesktopRenderTarget *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  CComposeTop *v6; // rcx
  char *v9; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (CComposeTop *)*((_QWORD *)this + 19);
  if ( !v6 )
  {
    v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xA0uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_WORD *)v9 + 40) = 32085;
    *((_OWORD *)v9 + 1) = _xmm;
    *((_OWORD *)v9 + 2) = _xmm;
    *((_OWORD *)v9 + 3) = _xmm;
    *((_OWORD *)v9 + 4) = _xmm;
    *((_WORD *)v9 + 74) = 32085;
    *(_OWORD *)(v9 + 84) = _xmm;
    *(_OWORD *)(v9 + 100) = _xmm;
    *(_OWORD *)(v9 + 116) = _xmm;
    *(_OWORD *)(v9 + 132) = _xmm;
    *((_QWORD *)v9 + 19) = 0LL;
    *((_QWORD *)this + 19) = v9;
    CDesktopRenderTarget::NotifyDesktopDirectScreenWrite((CDesktopRenderTarget *)((char *)this - 168));
    v6 = (CComposeTop *)*((_QWORD *)this + 19);
  }
  CComposeTop::AddNewContent(v6, a2, a3, a4);
  return 0LL;
}
