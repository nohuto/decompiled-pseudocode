/*
 * XREFs of UsbDevice_ControllerGone @ 0x1C003369C
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C0011130 (Controller_InitiateRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_ControllerGone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a1 + 176;
  v3 = 31LL;
  do
  {
    if ( *(_QWORD *)v2 )
      result = ESM_AddEvent((PVOID)(*(_QWORD *)v2 + 288LL));
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  v5 = *(_QWORD *)(a1 + 424);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v5,
             *(_BYTE *)(a1 + 432) == 0 ? 0xC00000E5 : 0);
  }
  return result;
}
