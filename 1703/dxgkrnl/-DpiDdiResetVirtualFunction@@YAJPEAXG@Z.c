/*
 * XREFs of ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0041BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C002AB24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 */

__int64 __fastcall DpiDdiResetVirtualFunction(_QWORD *a1, unsigned __int16 a2)
{
  _DXGKARG_RESETVIRTUALFUNCTION v3; // [rsp+38h] [rbp+10h] BYREF

  v3.VirtualFunctionIndex = a2;
  return ADAPTER_RENDER::ResetVirtualFunction(*(struct DXGADAPTER ***)(*(_QWORD *)(a1[8] + 3704LL) + 2288LL), &v3);
}
