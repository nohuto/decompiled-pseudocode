/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005EA5C
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D6E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7090 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     VidSchSwitchFromContext @ 0x1C0071480 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00B53C0 (VidSchSwitchFromDevice.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*((_DWORD *)a2 + 19) & 0x10000000) != 0 )
  {
    v4 = *((_QWORD *)a2 + 15);
    if ( v4 && *(_QWORD *)(v4 + 600) )
      VidSchSwitchFromDevice();
  }
  else
  {
    v2 = *((_QWORD *)a2 + 15);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 232);
      if ( v3 )
      {
        LOBYTE(a2) = 1;
        VidSchSwitchFromContext(v3, a2);
      }
    }
  }
}
