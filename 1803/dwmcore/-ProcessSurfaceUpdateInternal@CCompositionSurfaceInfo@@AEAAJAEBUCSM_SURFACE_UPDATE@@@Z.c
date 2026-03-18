/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800498E0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800807D8 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180080EBC (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rax
  int v6; // eax
  struct CBitmapRealization *v7; // rbx
  __int64 (__fastcall *v8)(CBitmapRealization *); // rax
  CBitmapRealization *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v10 = 0LL;
  v5 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)this + 7) != v5 )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
    v5 = *((_QWORD *)a2 + 2);
  }
  if ( v5 )
  {
    v6 = CCompositionSurfaceInfo::EnsureRealization(this, a2, &v10);
    v7 = v10;
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x172u);
    }
    else
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 48);
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v7,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 40),
        0);
    }
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v7 + 16LL);
      if ( v8 == CBitmapRealization::Release )
        CBitmapRealization::Release(v7);
      else
        v8(v7);
    }
  }
  return v2;
}
