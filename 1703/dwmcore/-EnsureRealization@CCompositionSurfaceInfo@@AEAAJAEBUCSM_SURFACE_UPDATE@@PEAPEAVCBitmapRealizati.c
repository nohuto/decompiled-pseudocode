/*
 * XREFs of ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180076DDC
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180076E90 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180075CF8 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  struct CBitmapRealization *RealizationNoRef; // rbx
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rax
  int v11; // eax

  v3 = *((_QWORD *)a2 + 2);
  v4 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 7) != v3
    || (RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                             (CCompositionSurfaceInfo *)((char *)this + 48),
                             *((_DWORD *)a2 + 6))) == 0LL )
  {
    v11 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v3);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1B1u);
      return v4;
    }
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         *((_DWORD *)a2 + 6));
    if ( !RealizationNoRef )
      return v4;
  }
  v9 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)RealizationNoRef + 8LL);
  if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef(RealizationNoRef);
  else
    v9(RealizationNoRef);
  *a3 = RealizationNoRef;
  return v4;
}
