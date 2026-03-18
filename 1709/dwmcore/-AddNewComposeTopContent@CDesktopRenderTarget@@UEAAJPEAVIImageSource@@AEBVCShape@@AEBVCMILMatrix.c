/*
 * XREFs of ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180132FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x1801284C4 (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18017D390 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::AddNewComposeTopContent(
        CDesktopRenderTarget *this,
        struct IImageSource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v4; // ebx
  char *v9; // rax
  CComposition *v10; // rcx
  signed int v11; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( *((_QWORD *)this + 32) )
    goto LABEL_6;
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
  v10 = (CComposition *)*((_QWORD *)this - 12);
  *((_QWORD *)this + 32) = v9;
  v11 = CComposition::NotifyDesktopDirectScreenWrite(v10);
  v4 = v11;
  if ( v11 >= 0 )
LABEL_6:
    CComposeTop::AddNewContent(*((CComposeTop **)this + 32), a2, a3, a4);
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x76Bu);
  return v4;
}
