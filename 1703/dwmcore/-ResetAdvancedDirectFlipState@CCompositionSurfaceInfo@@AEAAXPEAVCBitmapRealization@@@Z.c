/*
 * XREFs of ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18000A658
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BF0 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::ResetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        __int64 (__fastcall ***a2)(CBitmapRealization *__hidden this, const struct _GUID *, void **))
{
  __int64 (__fastcall **v2)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v3)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  int v4; // eax
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = *a2;
  v5 = 0LL;
  v3 = *v2;
  if ( v3 == CBitmapRealization::QueryInterface )
    v4 = CBitmapRealization::QueryInterface((CBitmapRealization *)a2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v5);
  else
    v4 = v3((CBitmapRealization *)a2, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v5);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 32LL))(v5);
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
