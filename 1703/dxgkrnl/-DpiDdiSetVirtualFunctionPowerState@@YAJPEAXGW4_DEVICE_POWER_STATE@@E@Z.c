/*
 * XREFs of ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0041C30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C0033EA0 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiSetVirtualFunctionPowerState(
        _QWORD *a1,
        unsigned __int16 a2,
        DEVICE_POWER_STATE a3,
        BOOLEAN a4)
{
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, 0LL);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v7 = DxgkDdiSetVirtualFunctionPowerState(*(_QWORD *)(v10 + 3704), a2, a3, a4);
    v11 = v7;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return v7;
}
