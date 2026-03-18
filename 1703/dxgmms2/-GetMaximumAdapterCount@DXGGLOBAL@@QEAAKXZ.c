/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AB0
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C004DA40 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C004DB90 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C004E800 (VidSchTerminateProcess.c)
 *     VidSchCreateProcess @ 0x1C004EC60 (VidSchCreateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this)
{
  return ((__int64 (__fastcall *)(DXGGLOBAL *))DxgCoreInterface[5])(this);
}
