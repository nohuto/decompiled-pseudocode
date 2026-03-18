/*
 * XREFs of ?Create@CSectionBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B4A64
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1801B4768 (--0CSectionBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INF.c)
 */

__int64 __fastcall CSectionBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        struct CBitmapRealization **a5)
{
  CSectionBitmapRealization *v9; // rax
  unsigned int v10; // ebx
  struct CBitmapRealization *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (CSectionBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1D0uLL);
  v10 = 0;
  if ( !v9 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  v11 = CSectionBitmapRealization::CSectionBitmapRealization(v9, a1, a2, a3, a4);
  *a5 = v11;
  if ( v11 )
  {
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v10;
}
