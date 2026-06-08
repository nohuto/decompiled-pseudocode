/*
 * XREFs of EvtDeviceSetPower @ 0x1C0001710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EvtDeviceSetPower(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v5; // rax

  v2 = *(_DWORD **)(a2 + 184);
  if ( !v2[4] && v2[6] == 1 && (v2[2] & 0xF0000) != 0x10000 )
    *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 a1,
                 off_1C0013048)
             + 76) = 1;
  v5 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v5 + 272))(WdfDriverGlobals, a1, a2);
}
