/*
 * XREFs of ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801726F8
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801ACBCC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsurePinnedResources(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct _LUID v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
         *((_QWORD *)this + 2),
         &v6,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xF2u);
  }
  else if ( *((_DWORD *)this + 14) == 2 )
  {
    v4 = CCompositionSurfaceInfo::CBindInfo::PinResources(
           (CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4) + 48LL),
           v6);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF6u);
    else
      *((_DWORD *)this + 14) = 3;
  }
  return v3;
}
