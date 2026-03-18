/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118060
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0117400 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013B86C (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  if ( (dword_1C018F8EC & 0x40) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
  gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(a3, dword_1C018F8F8, xxxFKRepeatRateTimer);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int16 *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
}
