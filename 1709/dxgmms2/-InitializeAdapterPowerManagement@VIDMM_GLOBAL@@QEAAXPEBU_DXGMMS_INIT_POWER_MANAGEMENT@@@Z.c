/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C009B0AC
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0014150 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *(_OWORD *)((char *)this + 40008) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40024) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40040) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 40056) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 40072) = *((_OWORD *)a2 + 4);
}
