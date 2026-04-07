/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038790 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180013480 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800309C0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  unsigned int v1; // esi
  volatile signed __int32 *v2; // rbx
  int v5; // eax
  int v6; // eax
  volatile signed __int32 *v7; // rdi
  int inserted; // eax
  int v9; // eax
  struct _MARGINS v10; // [rsp+30h] [rbp-10h] BYREF
  struct CVisual *v11; // [rsp+60h] [rbp+20h] BYREF
  CVisual *v12; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 50) )
    return v1;
  v5 = CCanvasVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x428u);
  }
  else
  {
    v6 = CTopLevelAtlasedRectsVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v12);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x429u);
    }
    else
    {
      v7 = (volatile signed __int32 *)v11;
      v2 = (volatile signed __int32 *)v12;
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v11 + 32), v12, 0LL, 0, 1);
      v1 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x42Au);
        goto LABEL_13;
      }
      *(_QWORD *)&v10.cxLeftWidth = 0LL;
      *(_QWORD *)&v10.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((CVisual *)v2, &v10);
      v9 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (struct CVisual *)v7, 0LL, 1, 1);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x42Eu);
        goto LABEL_13;
      }
      *((_QWORD *)this + 51) = v7;
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = (volatile signed __int32 *)v11;
        v2 = (volatile signed __int32 *)v12;
      }
      *((_QWORD *)this + 50) = v2;
      if ( !v2 )
        goto LABEL_13;
      _InterlockedIncrement(v2 + 2);
    }
    v2 = (volatile signed __int32 *)v12;
  }
  v7 = (volatile signed __int32 *)v11;
LABEL_13:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v1;
}
