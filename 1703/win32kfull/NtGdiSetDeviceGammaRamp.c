/*
 * XREFs of NtGdiSetDeviceGammaRamp @ 0x1C02953F0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C00E6DB8 (GreSetDeviceGammaRamp.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetDeviceGammaRamp(HDC a1, void *a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  struct _EPROCESS *CurrentProcess; // rax

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(W32UserProbeAddress);
    LOBYTE(v4) = (unsigned int)bIsProcessLocalSystem(CurrentProcess) == 0;
    return (unsigned int)GreSetDeviceGammaRamp(a1, a2, v4, 0);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
