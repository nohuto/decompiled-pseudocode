/*
 * XREFs of ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0091D3C
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000114C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS::SafeAttach(PRKPROCESS *this, struct _KAPC_STATE *a2)
{
  KeStackAttachProcess(*this, a2);
}
