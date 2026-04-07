/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180005C90 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800273D0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateScene@CProjectionBorderManager@@UEAAJXZ @ 0x180032DA0 (-UpdateScene@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800A6CF0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18002EF28 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v4; // ecx
  int updated; // eax
  CVisual *v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // eax

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  v4 = v1;
  if ( (v1 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2B0u);
        return v2;
      }
      v1 = *((_DWORD *)this + 6);
    }
    v1 &= ~4u;
    *((_DWORD *)this + 6) = v1;
    v4 = v1;
  }
  if ( (v1 & 0x10) != 0 )
  {
    v10 = v4;
    if ( (*((_BYTE *)this + 40) & 1) != 0 )
    {
      v11 = *((_QWORD *)this + 6);
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 88LL))(*((_QWORD *)this + 6));
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
        v10 = *((_DWORD *)this + 6);
      }
    }
    v2 = 0;
    v1 = v10 & 0xFFFFFFEF;
    *((_DWORD *)this + 6) = v1;
  }
  v6 = (CVisual *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    v7 = CVisual::RenderRecursive(v6);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C1u);
      return v2;
    }
    v1 = *((_DWORD *)this + 6);
  }
  v8 = v1 & 0xFFFFFFF7;
  *((_DWORD *)this + 6) = v8;
  if ( (v8 & 1) != 0 )
  {
    v12 = 0LL;
    if ( *((_DWORD *)this + 38) )
    {
      do
      {
        v13 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16)
                                                                                          + 8 * v12));
        v2 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2CDu);
          return v2;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)this + 38) );
      v8 = *((_DWORD *)this + 6);
    }
    *((_DWORD *)this + 6) = v8 & 0xFFFFFFFE;
  }
  return v2;
}
