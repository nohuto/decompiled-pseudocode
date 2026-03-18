/*
 * XREFs of ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18004BBC4
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BC64 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180076560 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  int v8; // eax
  CMILCOMBase *RealizationNoRef; // rbx
  __int64 (__fastcall *v10)(CMILCOMBase *); // rax

  v3 = *((_QWORD *)a2 + 2);
  v4 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 7) == v3 )
  {
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         *((_DWORD *)a2 + 6));
    if ( RealizationNoRef )
      goto LABEL_4;
  }
  v8 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v3);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1B1u);
    return v4;
  }
  RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                       (CCompositionSurfaceInfo *)((char *)this + 48),
                       *((_DWORD *)a2 + 6));
  if ( RealizationNoRef )
  {
LABEL_4:
    v10 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)RealizationNoRef + 8LL);
    if ( v10 == CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(RealizationNoRef);
    else
      v10(RealizationNoRef);
    *a3 = RealizationNoRef;
  }
  return v4;
}
