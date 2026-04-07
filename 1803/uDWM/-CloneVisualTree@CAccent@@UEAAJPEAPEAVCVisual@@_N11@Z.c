/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18003B370
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002CD0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180003460 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800038E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CF18 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *this, struct CVisual **a2)
{
  int updated; // eax
  unsigned int v5; // edi
  CVisual *v6; // rbx
  __int64 v8; // rdx
  struct _MARGINS v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVisual *v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  updated = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v5 = updated;
  if ( updated < 0 )
  {
    v8 = 593LL;
    goto LABEL_19;
  }
  v6 = v11;
  if ( *((_DWORD *)this + 70) != 3 )
  {
    updated = CAccent::UpdateAccentPolicy(
                v11,
                (const struct tagRECT *)this + 37,
                (__m128i *)((char *)this + 280),
                *((struct CResource **)this + 49));
    v5 = updated;
    if ( updated < 0 )
    {
      v8 = 597LL;
      goto LABEL_19;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    *((_BYTE *)v6 + 375) = 1;
    *(_QWORD *)&v9.cxLeftWidth = 0LL;
    *(_QWORD *)&v9.cyTopHeight = 0LL;
    updated = CRenderDataVisual::ClearInstructions(v6);
    v5 = updated;
    if ( updated >= 0 )
    {
      CVisual::SetInsetFromParent((struct _MARGINS *)v6, &v9);
      *((_DWORD *)v6 + 71) = *((_DWORD *)this + 71);
      updated = CAccent::_EnsureBorderShadowAtlas(v6);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = CAccent::_UpdateBorderShadowParts(v6);
        v5 = updated;
        if ( updated >= 0 )
        {
          updated = CAccent::_UpdateBorderShadowForAccent((CVisual **)v6);
          v5 = updated;
          if ( updated >= 0 )
            goto LABEL_5;
          v8 = 610LL;
        }
        else
        {
          v8 = 609LL;
        }
      }
      else
      {
        v8 = 608LL;
      }
    }
    else
    {
      v8 = 605LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated,
      v9.cxLeftWidth);
    goto LABEL_8;
  }
LABEL_5:
  *a2 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v5 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  return v5;
}
