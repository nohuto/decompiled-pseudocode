/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x1C000A7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0007EBC (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, int *a2)
{
  __int64 v3; // rax
  int FrameNumber; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B430);
  if ( *(_DWORD *)(v3 + 328) == 1 )
    FrameNumber = Controller_GetFrameNumber(v3, 1, 0LL, 0LL);
  else
    FrameNumber = -1;
  *a2 = FrameNumber;
  return 0LL;
}
