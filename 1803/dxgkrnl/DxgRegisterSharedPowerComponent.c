/*
 * XREFs of DxgRegisterSharedPowerComponent @ 0x1C01878F4
 * Callers:
 *     DpiSharedPowerRegister @ 0x1C01FBA3C (DpiSharedPowerRegister.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C003295C (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 */

__int64 __fastcall DxgRegisterSharedPowerComponent(
        struct DXGADAPTER *a1,
        void *a2,
        void (*a3)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a4)(void *, void *),
        void (*a5)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a6)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  return DXGGLOBAL::RegisterSharedPowerComponent(Global, a1, a2, a3, a4, a5, a6);
}
