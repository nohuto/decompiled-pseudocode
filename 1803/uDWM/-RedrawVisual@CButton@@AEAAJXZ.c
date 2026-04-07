/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180005454 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x1800168A4 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001690C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180016CAC (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18001910C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800205D4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180020664 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18002457C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800246E4 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180074410 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  int *v2; // rsi
  unsigned int v3; // r14d
  int v5; // eax
  unsigned int v6; // r8d
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // edi
  unsigned int *v11; // rdi
  char v12; // bp
  struct CAtlasedImage *v13; // rdx
  CAtlasedRectsVisual *v14; // rcx
  char *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  CBaseObject *v18; // rcx
  char v19; // al
  int inserted; // eax
  int v22; // eax
  int v23; // eax
  float v24; // xmm5_4
  __int64 v25; // rcx
  float v26; // [rsp+50h] [rbp+8h] BYREF
  float v27; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 280);
  v2 = (int *)((char *)this + 376);
  v3 = *((_DWORD *)this + 94);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 3;
  }
  *v2 = v5;
  v6 = *v2;
  v7 = *((float *)this + 100);
  if ( *v2 == 1 )
    v8 = FLOAT_1_0;
  else
    v8 = *((float *)this + 101);
  *((float *)this + 100) = v8;
  if ( v7 != v8 )
  {
    CVisual::SetDirtyFlags(this, 0x8000u);
    v6 = *v2;
  }
  v9 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 36), v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x124u);
  }
  else
  {
    if ( (v3 != 1 || *v2) && (*v2 != 1 || v3) )
    {
      v11 = (unsigned int *)*((_QWORD *)this + 3);
      v12 = 0;
    }
    else
    {
      v12 = 1;
      v11 = (unsigned int *)this;
    }
    v13 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
    v14 = (CAtlasedRectsVisual *)*((_QWORD *)v13 + 10);
    if ( v11 != (unsigned int *)v14 )
    {
      if ( v14 )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(v14, v13);
        v13 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
      }
      inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)v11, v13, v11[66]);
      v10 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x13Bu);
        return v10;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    v15 = (char *)this + 392;
    if ( v12 )
    {
      if ( !*(_QWORD *)v15 || *(_BYTE *)(*(_QWORD *)v15 + 72LL) )
      {
        *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v26, &v27);
        v24 = v26;
        *((float *)this + 95) = v27;
        *((float *)this + 96) = v24;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 95));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 96));
      v22 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 37), v3);
      v10 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x151u);
      }
      else
      {
        v23 = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
        v10 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x153u);
      }
    }
    else
    {
      CButton::DeactivateTimeline(this, (__int64 *)this + 49);
      v16 = *((_QWORD *)this + 37);
      CAtlasedImage::SetBitmapSource((CAtlasedImage *)v16, 0LL);
      CAtlasButton::SetGlyphImage(
        v16,
        0LL,
        v17,
        (unsigned int)(int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 55)));
      v18 = *(CBaseObject **)(v16 + 136);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *(_QWORD *)(v16 + 136) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v16, 1u, 0x2000u);
      }
      v19 = (*((_BYTE *)this + 280) & 0x20) != 0;
      if ( *(_BYTE *)(v16 + 160) != v19 )
      {
        v25 = *(_QWORD *)(v16 + 80);
        *(_BYTE *)(v16 + 160) = v19;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, 0x2000LL);
      }
      v10 = 0;
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 100));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), 0.0);
    }
  }
  return v10;
}
