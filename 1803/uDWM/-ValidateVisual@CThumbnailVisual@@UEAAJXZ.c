/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180005C90 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18001251C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180012638 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18001270C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180012A68 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180025B08 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x18002E6EC (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v16; // eax
  CSecondaryWindowRepresentation *v17; // rcx
  int v18; // eax
  CSecondaryWindowRepresentation *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x2000) != 0 )
  {
    v16 = CThumbnailVisual::EnsureVisualBrush(this);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3Du);
      return v4;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
    *((_DWORD *)this + 20) &= ~0x2000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v17 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v17 )
    {
      v18 = CSecondaryWindowRepresentation::Validate(v17);
      v4 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x48u);
        return v4;
      }
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x80u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x50u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v5 = CRenderDataVisual::UpdateLayout(this, 0);
  v4 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x55u);
  }
  else
  {
    v6 = *((_DWORD *)this + 20);
    if ( (v6 & 0x1000) != 0 )
    {
      v7 = CThumbnailVisual::UpdateDestinationRect(this);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5Cu);
        return v4;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x8000);
      *((_DWORD *)this + 20) &= ~0x1000u;
      v6 = *((_DWORD *)this + 20);
    }
    if ( (v6 & 0x8000) != 0 )
    {
      if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      {
        if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
        {
          v23 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
          v4 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x68u);
            return v4;
          }
          v24 = CRenderDataVisual::ClearInstructions(this);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x69u);
            return v4;
          }
          v25 = (CBaseObject *)*((_QWORD *)this + 47);
          if ( v25 )
          {
            CBaseObject::Release(v25);
            *((_QWORD *)this + 47) = 0LL;
          }
          *((_BYTE *)this + 474) = 0;
          v26 = CThumbnailVisual::EnsureVisualBrush(this);
          v4 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x6Cu);
            return v4;
          }
          v27 = CThumbnailVisual::UpdateSourceRect(this);
          v4 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x6Du);
            return v4;
          }
          v28 = CThumbnailVisual::UpdateDestinationRect(this);
          v4 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x6Eu);
            return v4;
          }
          *((_DWORD *)this + 20) &= 0xFFFE8F7F;
        }
      }
      else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
      {
        v20 = CRenderDataVisual::ClearInstructions(this);
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x78u);
          return v4;
        }
        v21 = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x79u);
          return v4;
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v22, &UdwmThumbnailVisualValidated_Info, 1LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v8, &UdwmThumbnailVisualValidated_Info, 0LL);
        v9 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x7Fu);
          return v4;
        }
        v10 = CRenderDataVisual::ClearInstructions(this);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x80u);
          return v4;
        }
        v11 = CThumbnailVisual::EnsureVisualBrush(this);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x81u);
          return v4;
        }
        v12 = *((_QWORD *)this + 47);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 48);
          if ( v13 )
          {
            v29 = *(_QWORD *)(v13 + 16);
            v30 = v29 ? *(unsigned int *)(v29 + 24) : 0LL;
            v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 4)
                                                                     + 400LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v30,
                    0LL);
            v4 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x87u);
              return v4;
            }
          }
        }
        if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
          CVisual::ClearInterpolationMode(this);
      }
      *((_DWORD *)this + 20) &= ~0x8000u;
      v6 = *((_DWORD *)this + 20);
    }
    if ( (v6 & 0x20000) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x30000000) == 0x10000000 )
        CVisual::SetInterpolationMode(this, 6LL);
      else
        CVisual::ClearInterpolationMode(this);
      *((_DWORD *)this + 20) &= ~0x20000u;
      v6 = *((_DWORD *)this + 20);
    }
    if ( (v6 & 0x40000) != 0 )
    {
      v19 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
      if ( v19 )
      {
        CSecondaryWindowRepresentation::SnapshotIfStatic(
          v19,
          *((struct CResource **)this + 54),
          *((struct CResource **)this + 48),
          (CThumbnailVisual *)((char *)this + 500));
        v6 = *((_DWORD *)this + 20);
      }
      *((_DWORD *)this + 20) = v6 & 0xFFFBFFFF;
    }
    v14 = CRenderDataVisual::ValidateVisual(this);
    v4 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xAFu);
  }
  return v4;
}
