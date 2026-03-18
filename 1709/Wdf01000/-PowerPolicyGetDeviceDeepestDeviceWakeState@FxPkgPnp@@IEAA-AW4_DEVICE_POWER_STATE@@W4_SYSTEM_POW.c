/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0028830
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C002C0A4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002C21C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     WPP_IFR_SF_LL @ 0x1C009EB80 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r9
  int v5; // r10d
  _FX_DRIVER_GLOBALS *v6; // r11
  __int64 v7; // rax
  unsigned int id; // ebx
  __int64 v10; // rax
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  unsigned int v12[4]; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    if ( (unsigned int)(v2 - 1) > 4 )
    {
      id = 1;
    }
    else
    {
      *(__m128i *)v12 = _mm_load_si128((const __m128i *)&_xmm);
      v13 = 4;
      v14 = 4;
      v10 = *(unsigned __int8 *)(v5 - 1 + v4 + 1020);
      if ( (unsigned int)v10 >= 6 )
      {
        id = 0;
LABEL_13:
        WPP_IFR_SF_LL(v6, *(_BYTE *)(v4 + 1025), v3, v4, v11, *(unsigned __int8 *)(v4 + 1025), id);
        return id;
      }
      id = v12[v10];
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(v4 + 1020);
    v13 = v3 - 7;
    v14 = v3 - 7;
    *(__m128i *)v12 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)v7 >= 6 )
      id = 0;
    else
      id = v12[v7];
  }
  if ( !id || !*(_BYTE *)(v4 + 1025) )
    goto LABEL_13;
  return id;
}
