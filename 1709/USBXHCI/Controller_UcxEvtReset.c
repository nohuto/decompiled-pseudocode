/*
 * XREFs of Controller_UcxEvtReset @ 0x1C0013880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  if ( Controller_IsControllerAccessible(v2) )
    Controller_InternalReset(v2, v3, v4);
  else
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), 2u, 4u, 0xB1u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))qword_1C004F858)(
           *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
           a1,
           &v6);
}
