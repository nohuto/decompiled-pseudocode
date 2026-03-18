/*
 * XREFs of DxgRegisterSharedPowerComponent @ 0x1C0184D2C
 * Callers:
 *     DpiSharedPowerRegister @ 0x1C01C5E78 (DpiSharedPowerRegister.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z @ 0x1C0196520 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z.c)
 */

__int64 __fastcall DxgRegisterSharedPowerComponent(
        struct DXGADAPTER *a1,
        void *a2,
        void (*a3)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a4)(void *, void *))
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
  return DXGGLOBAL::RegisterSharedPowerComponent(Global, a1, a2, a3, a4);
}
