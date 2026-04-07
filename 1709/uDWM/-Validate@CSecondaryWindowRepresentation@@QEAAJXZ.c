/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000BE40 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009E790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18000ED48 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CVisual **this)
{
  unsigned int v1; // edi
  int updated; // eax
  CVisual *v4; // rcx
  int v5; // eax
  CVisual *v7; // rcx
  __int64 v8; // rsi
  int v9; // eax

  v1 = 0;
  if ( ((_BYTE)this[3] & 4) != 0 )
  {
    if ( this[6] )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual((CSecondaryWindowRepresentation *)this);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2B1u);
        return v1;
      }
    }
    *((_DWORD *)this + 6) &= ~4u;
  }
  if ( ((_BYTE)this[3] & 0x10) != 0 )
  {
    if ( ((_BYTE)this[5] & 1) != 0 )
    {
      v7 = this[6];
      if ( v7 )
      {
        (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 88LL))(v7);
        (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this[7] + 88LL))(this[7]);
      }
    }
    v1 = 0;
    *((_DWORD *)this + 6) &= ~0x10u;
  }
  v4 = this[6];
  if ( v4 && (v5 = CVisual::RenderRecursive(v4), v1 = v5, v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2C2u);
  }
  else
  {
    *((_DWORD *)this + 6) &= ~8u;
    if ( ((_BYTE)this[3] & 1) != 0 )
    {
      v8 = 0LL;
      if ( *((_DWORD *)this + 38) )
      {
        while ( 1 )
        {
          v9 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this[16] + v8));
          v1 = v9;
          if ( v9 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 38) )
            goto LABEL_21;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2CEu);
      }
      else
      {
LABEL_21:
        *((_DWORD *)this + 6) &= ~1u;
      }
    }
  }
  return v1;
}
