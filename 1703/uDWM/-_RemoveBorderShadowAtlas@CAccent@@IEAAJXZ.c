/*
 * XREFs of ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1B0
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_RemoveBorderShadowAtlas(CAccent *this)
{
  struct CVisual *v1; // rdx
  unsigned int v2; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 49);
  v2 = 0;
  if ( v1 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 50) + 32LL), v1);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 50));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x430u);
      }
      else
      {
        v7 = (CBaseObject *)*((_QWORD *)this + 50);
        if ( v7 )
        {
          CBaseObject::Release(v7);
          *((_QWORD *)this + 50) = 0LL;
        }
        v8 = (CBaseObject *)*((_QWORD *)this + 49);
        if ( v8 )
        {
          CBaseObject::Release(v8);
          *((_QWORD *)this + 49) = 0LL;
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x42Fu);
    }
  }
  return v2;
}
