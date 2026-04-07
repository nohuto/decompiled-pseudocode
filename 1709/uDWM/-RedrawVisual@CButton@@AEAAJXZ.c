/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x1800162C0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x18000AF44 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180015C04 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180015C6C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180016014 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800203A4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180020430 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x1800241D8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180024338 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x180024A6C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x18006D678 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  unsigned int v3; // ebp
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int *v9; // rdi
  char v10; // si
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  CBaseObject *v14; // rcx
  char v15; // al
  int inserted; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  float v21; // xmm5_4
  __int64 v22; // rcx
  float v23; // [rsp+50h] [rbp+8h] BYREF
  float v24; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 280);
  v3 = *((_DWORD *)this + 94);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      *((_DWORD *)this + 94) = ((v1 & 4) != 0) + 1;
    else
      *((_DWORD *)this + 94) = 0;
  }
  else
  {
    *((_DWORD *)this + 94) = 3;
  }
  v4 = *((float *)this + 100);
  if ( *((_DWORD *)this + 94) == 1 )
    v5 = FLOAT_1_0;
  else
    v5 = *((float *)this + 101);
  *((float *)this + 100) = v5;
  if ( v4 != v5 )
    CVisual::SetDirtyFlags(this, 0x8000u);
  v6 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 36), *((_DWORD *)this + 94));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x124u);
  }
  else
  {
    v8 = *((_DWORD *)this + 94);
    if ( (v8 || v3 != 1) && (v8 != 1 || v3) )
    {
      v9 = (unsigned int *)*((_QWORD *)this + 3);
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v9 = (unsigned int *)this;
    }
    v11 = *((_QWORD *)this + 36);
    if ( v9 != *(unsigned int **)(v11 + 80) )
    {
      if ( *(_QWORD *)(v11 + 80) )
        CAtlasedRectsVisual::RemoveAtlasImage(
          *(CAtlasedRectsVisual **)(v11 + 80),
          *((struct CAtlasedImage **)this + 36));
      inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                   (CAtlasedRectsVisual *)v9,
                   *((struct CAtlasedImage **)this + 36),
                   v9[66]);
      v7 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x13Bu);
        return v7;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    if ( v10 )
    {
      v18 = *((_QWORD *)this + 49);
      if ( !v18 || *(_BYTE *)(v18 + 72) )
      {
        *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v23, &v24);
        v21 = v23;
        *((float *)this + 95) = v24;
        *((float *)this + 96) = v21;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 95));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 96));
      v19 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 37), v3);
      v7 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x151u);
      }
      else
      {
        v20 = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
        v7 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x153u);
      }
    }
    else
    {
      CButton::DeactivateTimeline(this, (__int64 *)this + 49);
      v12 = *((_QWORD *)this + 37);
      CAtlasedImage::SetBitmapSource((CAtlasedImage *)v12, 0LL);
      CAtlasButton::SetGlyphImage(
        v12,
        0LL,
        v13,
        (unsigned int)(int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 56)));
      v14 = *(CBaseObject **)(v12 + 136);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *(_QWORD *)(v12 + 136) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v12, 1u, 0x2000u);
      }
      v15 = (*((_BYTE *)this + 280) & 0x20) != 0;
      if ( *(_BYTE *)(v12 + 160) != v15 )
      {
        v22 = *(_QWORD *)(v12 + 80);
        *(_BYTE *)(v12 + 160) = v15;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 0x2000LL);
      }
      v7 = 0;
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 100));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), 0.0);
    }
  }
  return v7;
}
