/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800251CC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180023364 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180042C40 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004DE7E (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  CVisual *v4; // rcx
  CVisual *v5; // rcx
  __int64 v6; // rax
  void (__fastcall *v7)(CVisual *, int); // rax

  *((_DWORD *)this + 170) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 67);
  if ( v2 )
  {
    CVisual::SetScale(
      v2,
      COERCE_FLOAT(*(_QWORD *)(*((_QWORD *)this + 90) + 180LL)),
      COERCE_FLOAT(HIDWORD(*(_QWORD *)(*((_QWORD *)this + 90) + 180LL))));
    v3 = *((_QWORD *)this + 90);
    if ( fmodf_0(*(float *)(v3 + 180), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 184), 1.0) == 0.0 )
    {
      v4 = (CVisual *)*((_QWORD *)this + 67);
      if ( (*((_BYTE *)v4 + 196) & 2) == 0 || *((_DWORD *)v4 + 50) )
      {
        *((_DWORD *)v4 + 49) |= 2u;
        v6 = *(_QWORD *)v4;
        *((_DWORD *)v4 + 50) = 0;
        v7 = *(void (__fastcall **)(CVisual *, int))(v6 + 24);
        if ( v7 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v4, 64);
        else
          v7(v4, 64);
      }
    }
    else if ( *(float *)(v3 + 180) < 1.0 || *(float *)(v3 + 184) < 1.0 )
    {
      CVisual::SetInterpolationMode(*((CVisual **)this + 67), 6);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 67));
    }
  }
  v5 = (CVisual *)*((_QWORD *)this + 36);
  if ( v5 )
    CVisual::SetScale(
      v5,
      COERCE_FLOAT(*(_QWORD *)(*((_QWORD *)this + 90) + 180LL)),
      COERCE_FLOAT(HIDWORD(*(_QWORD *)(*((_QWORD *)this + 90) + 180LL))));
}
