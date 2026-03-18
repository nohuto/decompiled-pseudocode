/*
 * XREFs of DxgkDdiSetVirtualFunctionPowerState @ 0x1C0033EA0
 * Callers:
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0041C30 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C0029134 (-DdiSetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@.c)
 */

__int64 __fastcall DxgkDdiSetVirtualFunctionPowerState(__int64 a1, __int64 a2, DEVICE_POWER_STATE a3, BOOLEAN a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rax
  struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE v7; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)&v7.Wake = 0;
  v7.VirtualFunctionIndex = (unsigned __int16)a2;
  v7.PowerState = a3;
  v4 = *(_QWORD *)(a1 + 2288);
  v7.Wake = a4;
  if ( (unsigned int)(unsigned __int16)a2 < *(_DWORD *)(v4 + 1128)
    && (a1 = (unsigned __int16)a2,
        a2 = *(_QWORD *)(*(_QWORD *)(v4 + 1136) + 8LL * (unsigned __int16)a2),
        result = 0LL,
        a2) )
  {
    if ( !*(_BYTE *)(a2 + 121) )
      return ADAPTER_RENDER::DdiSetVirtualFunctionPowerState((ADAPTER_RENDER *)v4, &v7);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v6 + 24) = v7.VirtualFunctionIndex;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  return result;
}
