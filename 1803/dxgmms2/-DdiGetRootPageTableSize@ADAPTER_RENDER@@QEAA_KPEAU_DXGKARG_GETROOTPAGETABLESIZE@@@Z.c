/*
 * XREFs of ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0005124
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetRootPageTableSize(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETROOTPAGETABLESIZE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_GETROOTPAGETABLESIZE *))DxgCoreInterface[47])(
           this,
           a2);
}
