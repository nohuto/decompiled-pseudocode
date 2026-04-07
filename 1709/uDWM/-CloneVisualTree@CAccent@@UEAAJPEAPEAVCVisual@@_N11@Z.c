/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038790
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180008B64 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180036358 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *this, struct CVisual **a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  CVisual *v7; // rbx
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int updated; // eax
  int v13; // eax
  struct _MARGINS v14; // [rsp+30h] [rbp-18h] BYREF
  CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v5 = CAccent::Create(*(struct IDwmChannel **)(v3 + 16), &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x255u);
LABEL_7:
    v7 = v15;
    goto LABEL_8;
  }
  v7 = v15;
  if ( *((_DWORD *)this + 70) == 3
    || (v8 = CAccent::UpdateAccentPolicy(
               v15,
               (const struct tagRECT *)this + 37,
               (__m128i *)((char *)this + 280),
               *((struct CResource **)this + 49)),
        v6 = v8,
        v8 >= 0) )
  {
    if ( (*((_BYTE *)this + 284) & 0xE0) == 0 )
    {
LABEL_5:
      *a2 = v7;
      if ( !v7 )
        return v6;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      goto LABEL_7;
    }
    *((_BYTE *)v7 + 375) = 1;
    *(_QWORD *)&v14.cxLeftWidth = 0LL;
    *(_QWORD *)&v14.cyTopHeight = 0LL;
    v10 = CRenderDataVisual::ClearInstructions(v7);
    v6 = v10;
    if ( v10 >= 0 )
    {
      CVisual::SetInsetFromParent((struct _MARGINS *)v7, &v14);
      *((_DWORD *)v7 + 71) = *((_DWORD *)this + 71);
      v11 = CAccent::_EnsureBorderShadowAtlas(v7);
      v6 = v11;
      if ( v11 >= 0 )
      {
        updated = CAccent::_UpdateBorderShadowParts(v7);
        v6 = updated;
        if ( updated >= 0 )
        {
          v13 = CAccent::_UpdateBorderShadowForAccent((CVisual **)v7);
          v6 = v13;
          if ( v13 >= 0 )
            goto LABEL_5;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x266u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x265u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x264u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x261u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x259u);
  }
LABEL_8:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
