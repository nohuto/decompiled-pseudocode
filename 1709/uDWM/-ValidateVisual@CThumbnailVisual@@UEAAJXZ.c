/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000BE40 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18000E4AC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000F570 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000F64C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F768 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000F83C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000FB98 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180015580 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800194E4 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  CVisual **v4; // rcx
  int v5; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct CResource *v13; // rax
  __int64 v14; // rcx
  CSecondaryWindowRepresentation *v15; // rcx
  int v16; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax

  if ( ((_DWORD)this[10] & 0x2000) != 0 )
  {
    v2 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3Du);
      return v3;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v4 = (CVisual **)this[47];
    if ( v4 )
    {
      v5 = CSecondaryWindowRepresentation::Validate(v4);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x48u);
        return v3;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  if ( ((_DWORD)this[10] & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x50u);
      return v3;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v7 = CRenderDataVisual::UpdateLayout((CRenderDataVisual *)this, 0);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x55u);
  }
  else
  {
    if ( ((_DWORD)this[10] & 0x1000) != 0 )
    {
      v8 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5Cu);
        return v3;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
    if ( ((_DWORD)this[10] & 0x8000) != 0 )
    {
      if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
      {
        if ( ((_DWORD)this[10] & 0x10000) != 0 )
        {
          v21 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
          v3 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x68u);
            return v3;
          }
          v22 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
          v3 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x69u);
            return v3;
          }
          v23 = this[47];
          if ( v23 )
          {
            CBaseObject::Release(v23);
            this[47] = 0LL;
          }
          *((_BYTE *)this + 474) = 0;
          v24 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
          v3 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x6Cu);
            return v3;
          }
          v25 = CThumbnailVisual::UpdateSourceRect((CThumbnailVisual *)this);
          v3 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x6Du);
            return v3;
          }
          v26 = CThumbnailVisual::UpdateDestinationRect((CThumbnailVisual *)this);
          v3 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x6Eu);
            return v3;
          }
          *((_DWORD *)this + 20) &= 0xFFFE8F7F;
        }
      }
      else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual((CThumbnailVisual *)this) )
      {
        v18 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x78u);
          return v3;
        }
        v19 = CThumbnailVisual::EnsureSecondaryWindowVisual((CThumbnailVisual *)this);
        v3 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x79u);
          return v3;
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v20, &UdwmThumbnailVisualValidated_Info, 1LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v9, &UdwmThumbnailVisualValidated_Info, 0LL);
        v10 = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x7Fu);
          return v3;
        }
        v11 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x80u);
          return v3;
        }
        v12 = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x81u);
          return v3;
        }
        v13 = this[47];
        if ( v13 )
        {
          v14 = *((_QWORD *)v13 + 6);
          if ( v14 )
          {
            v27 = *(_QWORD *)(v14 + 16);
            v28 = v27 ? *(unsigned int *)(v27 + 24) : 0LL;
            v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 4)
                                                                     + 384LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v28,
                    0LL);
            v3 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x87u);
              return v3;
            }
          }
        }
        if ( !*((_BYTE *)this[46] + 34) )
          CVisual::ClearInterpolationMode((CVisual *)this);
      }
      *((_DWORD *)this + 20) &= ~0x8000u;
    }
    if ( ((_DWORD)this[10] & 0x20000) != 0 )
    {
      if ( (*((_DWORD *)this[46] + 9) & 0x30000000) == 0x10000000 )
        CVisual::SetInterpolationMode(this, 6LL);
      else
        CVisual::ClearInterpolationMode((CVisual *)this);
      *((_DWORD *)this + 20) &= ~0x20000u;
    }
    if ( ((_DWORD)this[10] & 0x40000) != 0 )
    {
      v15 = this[47];
      if ( v15 )
        CSecondaryWindowRepresentation::SnapshotIfStatic(
          v15,
          this[54],
          this[48],
          (const struct MilPointAndSizeL *)((char *)this + 500));
      *((_DWORD *)this + 20) &= ~0x40000u;
    }
    v16 = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xAFu);
  }
  return v3;
}
