/*
 * XREFs of ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180012454
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_RemoveBorderShadowAtlas(CAccent *this)
{
  struct CVisual *v1; // rdx
  unsigned int v2; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 50);
  v2 = 0;
  if ( v1 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 51) + 32LL), v1);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 51));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x43Eu);
      }
      else
      {
        v7 = (CBaseObject *)*((_QWORD *)this + 51);
        if ( v7 )
        {
          CBaseObject::Release(v7);
          *((_QWORD *)this + 51) = 0LL;
        }
        v8 = (CBaseObject *)*((_QWORD *)this + 50);
        if ( v8 )
        {
          CBaseObject::Release(v8);
          *((_QWORD *)this + 50) = 0LL;
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x43Du);
    }
  }
  return v2;
}
