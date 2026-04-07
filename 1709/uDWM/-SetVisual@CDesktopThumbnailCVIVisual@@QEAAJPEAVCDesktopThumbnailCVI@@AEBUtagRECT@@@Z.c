/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009BDDC
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000CBC0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007AB50 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18007AEF0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x18009B388 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        struct tagRECT *this,
        struct CDesktopThumbnailCVI *a2,
        const struct tagRECT *a3)
{
  volatile signed __int32 *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct CResource *v12; // rcx
  CBaseObject *v13; // rcx
  struct CRenderDataInstruction *v15; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v16; // [rsp+38h] [rbp-8h] BYREF
  struct CResource *v17; // [rsp+60h] [rbp+20h] BYREF
  struct CResource *v18; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  CopyRect(this + 20, a3);
  v7 = CDesktopThumbnailCVI::CreateBrush(a2, &v18, 0LL, &v16, a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CResource::Create(0x1Au, *(_QWORD *)(*(_QWORD *)&this[1].left + 16LL), &v17);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v5 = (volatile signed __int32 *)v17;
      v10 = CDrawGeometryInstruction::Create(v18, v17, &v15);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v11 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v15);
        v8 = v11;
        if ( v11 >= 0 )
        {
          CVisual::SetInterpolationMode((CVisual *)this, 1);
          v12 = v18;
          *(_QWORD *)&this[18].right = v18;
          if ( v12 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
            v5 = (volatile signed __int32 *)v17;
          }
          *(_QWORD *)&this[17].right = v5;
          if ( v5 )
          {
            _InterlockedIncrement(v5 + 2);
            v5 = (volatile signed __int32 *)v17;
          }
          *(_QWORD *)&this[19].left = a2;
          if ( a2 )
          {
            _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
            v5 = (volatile signed __int32 *)v17;
          }
          v13 = v16;
          *(_QWORD *)&this[18].left = v16;
          if ( v13 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
            v5 = (volatile signed __int32 *)v17;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1EDu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1ECu);
      }
      if ( v15 )
        CBaseObject::Release(v15);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1EBu);
      v5 = (volatile signed __int32 *)v17;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1EAu);
  }
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  if ( v16 )
    CBaseObject::Release(v16);
  return v8;
}
