/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016970 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1DC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18001D7E0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x18001DD3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *this, struct CVisual **a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  CVisual *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int updated; // eax
  struct _MARGINS v14; // [rsp+30h] [rbp-18h] BYREF
  CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v5 = CAccent::Create(*(struct IDwmChannel **)(v3 + 16), &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x250u);
LABEL_10:
    v7 = v15;
    goto LABEL_11;
  }
  v7 = v15;
  if ( *((_DWORD *)this + 70) != 3 )
  {
    updated = CAccent::UpdateAccentPolicy(
                v15,
                (const struct tagRECT *)((char *)this + 584),
                (__m128i *)((char *)this + 280),
                *((struct CResource **)this + 48));
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x254u);
      goto LABEL_11;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) == 0 )
  {
LABEL_8:
    *a2 = v7;
    if ( !v7 )
      return v6;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    goto LABEL_10;
  }
  *((_BYTE *)v7 + 367) = 1;
  *(_QWORD *)&v14.cxLeftWidth = 0LL;
  *(_QWORD *)&v14.cyTopHeight = 0LL;
  v8 = CRenderDataVisual::ClearInstructions(v7);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x25Cu);
  }
  else
  {
    CVisual::SetInsetFromParent(v7, &v14);
    *((_DWORD *)v7 + 71) = *((_DWORD *)this + 71);
    v9 = CAccent::_EnsureBorderShadowAtlas(v7);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x25Fu);
    }
    else
    {
      v10 = CAccent::_UpdateBorderShadowParts(v7);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x260u);
      }
      else
      {
        v11 = CAccent::_UpdateBorderShadowForAccent(v7);
        v6 = v11;
        if ( v11 >= 0 )
          goto LABEL_8;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x261u);
      }
    }
  }
LABEL_11:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
