/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C017A210
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C01775E4 (-DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct DXGPROCESSVMWP **a2,
        __int64 a3)
{
  ULONG v3; // eax
  ADAPTER_RENDER *v4; // rcx
  _DXGKARG_RESETVIRTUALFUNCTION v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 6);
  v4 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
  v6.VirtualFunctionIndex = v3;
  return ADAPTER_RENDER::DdiResetVirtualFunction(v4, &v6, a3);
}
