/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x1C00130E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  if ( *(_DWORD *)(v3 + 328) == 1 )
    *a2 = Controller_GetFrameNumber(v3, 1, 0LL, 0LL);
  else
    *a2 = -1;
  return 0LL;
}
