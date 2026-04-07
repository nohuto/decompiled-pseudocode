/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001FC44
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180020260 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x18000E8E8 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x18000E9AC (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18000EB7C (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18001B44C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001FA14 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001FA7C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001FFBC (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180021BDC (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D3C (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  unsigned int v2; // ebp
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned int *v9; // rdi
  char v10; // si
  struct CAtlasedImage *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  char v16; // al
  __int64 v17; // rbp
  int v18; // ecx
  unsigned __int8 v19; // si
  unsigned __int8 v20; // al
  int v21; // r14d
  CVisual *v22; // rcx
  void (__fastcall *v23)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v24; // rbx
  int v25; // eax
  int v26; // esi
  CAtlasedRectsVisual *v28; // rcx
  int inserted; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  float v33; // xmm5_4
  __int64 v34; // rcx
  float v35; // [rsp+60h] [rbp+8h] BYREF
  float v36; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 280);
  v2 = *((_DWORD *)this + 94);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x124u);
  }
  else
  {
    v8 = *((_DWORD *)this + 94);
    if ( (v8 || v2 != 1) && (v8 != 1 || v2) )
    {
      v9 = (unsigned int *)*((_QWORD *)this + 3);
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v9 = (unsigned int *)this;
    }
    v11 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
    if ( v9 != *((unsigned int **)v11 + 10) )
    {
      v28 = (CAtlasedRectsVisual *)*((_QWORD *)v11 + 10);
      if ( v28 )
        CAtlasedRectsVisual::RemoveAtlasImage(v28, v11);
      inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                   (CAtlasedRectsVisual *)v9,
                   *((struct CAtlasedImage **)this + 36),
                   v9[66]);
      v7 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x13Bu);
        return v7;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    if ( v10 )
    {
      v30 = *((_QWORD *)this + 49);
      if ( !v30 || *(_BYTE *)(v30 + 72) )
      {
        *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v35, &v36);
        v33 = v35;
        *((float *)this + 95) = v36;
        *((float *)this + 96) = v33;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 95));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 96));
      v31 = CButton::DrawStateW((__int64)this, *((_QWORD *)this + 37), v2);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x151u);
      }
      else
      {
        v32 = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
        v7 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x153u);
      }
    }
    else
    {
      CButton::DeactivateTimeline(this, (__int64 *)this + 49);
      v13 = *((_QWORD *)this + 37);
      v14 = *(CBaseObject **)(v13 + 72);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *(_QWORD *)(v13 + 72) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v13, 1u, 0x2000u);
      }
      CAtlasButton::SetGlyphImage(
        v13,
        0LL,
        v12,
        (int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 50)));
      v15 = *(CBaseObject **)(v13 + 136);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *(_QWORD *)(v13 + 136) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v13, 1u, 0x2000u);
      }
      v16 = (*((_BYTE *)this + 280) & 0x20) != 0;
      if ( *(_BYTE *)(v13 + 160) != v16 )
      {
        v34 = *(_QWORD *)(v13 + 80);
        *(_BYTE *)(v13 + 160) = v16;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 24LL))(v34, 0x2000LL);
      }
      v7 = 0;
      v17 = *((_QWORD *)this + 36);
      v18 = (int)floor_0((float)(*((float *)this + 100) * 255.0) + 0.5);
      v19 = -1;
      if ( v18 > 255 )
      {
        v20 = -1;
      }
      else
      {
        v20 = 0;
        if ( v18 >= 0 )
          v20 = v18;
      }
      v21 = 16843009 * v20;
      if ( v21 != *(_DWORD *)(v17 + 68) )
      {
        *(_DWORD *)(v17 + 96) |= 2u;
        v22 = *(CVisual **)(v17 + 80);
        if ( v22 )
        {
          v23 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v22 + 24LL);
          if ( v23 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v22, 0x2000u);
          else
            v23(v22, 0x2000u);
        }
        *(_DWORD *)(v17 + 68) = v21;
      }
      v24 = (CAtlasedImage *)*((_QWORD *)this + 37);
      v25 = (int)floor_0(0.5);
      if ( v25 <= 255 )
      {
        v19 = 0;
        if ( v25 >= 0 )
          v19 = v25;
      }
      v26 = 16843009 * v19;
      if ( v26 != *((_DWORD *)v24 + 17) )
      {
        CAtlasedImage::SetDirtyFlags(v24, 2u, 0x2000u);
        *((_DWORD *)v24 + 17) = v26;
      }
    }
  }
  return v7;
}
