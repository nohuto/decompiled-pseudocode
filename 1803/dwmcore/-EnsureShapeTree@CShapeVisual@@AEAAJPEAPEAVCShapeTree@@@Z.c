/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801A3914
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801A3A0C (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801A3AD0 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  struct CShapeTree *v2; // rax
  unsigned int v3; // edi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax

  v2 = (struct CShapeTree *)*((_QWORD *)this + 31);
  v3 = 0;
  if ( !v2 )
  {
    v6 = WPF::ProcessHeapImpl::AllocClear(0x70uLL);
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 2);
      v6[2] = 0;
      *((_QWORD *)v6 + 2) = v7;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      v6[8] = 0;
      *((_BYTE *)v6 + 80) = 1;
      *((_QWORD *)v6 + 11) = 0LL;
      *((_QWORD *)v6 + 12) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
      *(_QWORD *)v6 = &CShapeTree::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x58u);
      return v3;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v6);
    v8 = CVisual::SetContent(this, (struct CContent *)v6);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5Au);
      CMILCOMBase::InternalRelease((CMILCOMBase *)v6);
      return v3;
    }
    CMILCOMBase::InternalRelease((CMILCOMBase *)v6);
    v2 = (struct CShapeTree *)*((_QWORD *)this + 31);
  }
  *a2 = v2;
  return v3;
}
