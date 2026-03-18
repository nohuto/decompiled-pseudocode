/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00A0948
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00138F0 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *(_OWORD *)((char *)this + 40584) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40600) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40616) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 40632) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 40648) = *((_OWORD *)a2 + 4);
}
