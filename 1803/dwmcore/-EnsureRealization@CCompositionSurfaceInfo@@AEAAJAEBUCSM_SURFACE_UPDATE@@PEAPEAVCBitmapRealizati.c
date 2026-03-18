/*
 * XREFs of ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180080EBC
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180082470 (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180082AC4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  unsigned int v3; // edi
  const struct CSM_SURFACE_UPDATE *v5; // rsi
  unsigned __int64 v6; // r8
  CMILCOMBase *RealizationNoRef; // rbx
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  __int64 (__fastcall *v11)(CMILCOMBase *); // rax
  CCompositionSurfaceInfo::CBindInfo *v13; // rbx
  int v14; // eax

  v3 = 0;
  *a3 = 0LL;
  v5 = a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)this + 7) != v6 )
    goto LABEL_13;
  RealizationNoRef = 0LL;
  v8 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    v9 = *((_QWORD *)this + 10);
    v10 = *((_DWORD *)a2 + 6);
    while ( 1 )
    {
      a2 = *(const struct CSM_SURFACE_UPDATE **)(v9 + 8 * v8);
      if ( *((_DWORD *)a2 + 69) == v10 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 26) )
        goto LABEL_6;
    }
    RealizationNoRef = *(CMILCOMBase **)(v9 + 8 * v8);
  }
LABEL_6:
  if ( !RealizationNoRef )
  {
LABEL_13:
    v13 = (CCompositionSurfaceInfo *)((char *)this + 48);
    v14 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v6);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1B1u);
      return v3;
    }
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(v13, *((_DWORD *)v5 + 6));
    if ( !RealizationNoRef )
      return v3;
  }
  v11 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)RealizationNoRef + 8LL);
  if ( v11 == CMILCOMBase::InternalAddRef )
    CMILCOMBase::InternalAddRef(RealizationNoRef);
  else
    ((void (__fastcall *)(CMILCOMBase *, const struct CSM_SURFACE_UPDATE *, unsigned __int64, __int64))v11)(
      RealizationNoRef,
      a2,
      v6,
      v8);
  *a3 = RealizationNoRef;
  return v3;
}
