/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C011FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C011FF34 (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, int a3)
{
  struct _EPROCESS *CurrentProcess; // rax

  if ( gUMPDSecurityLevel == 2
    || gUMPDSecurityLevel
    && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(dhsurf, gUMPDSecurityLevel),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess))
    || (unsigned int)ValidUmpdSizl(a2) )
  {
    if ( (unsigned int)(a3 - 1) <= 7 )
      return EngCreateDeviceSurface(dhsurf, a2, a3 | 0x8000u);
  }
  else if ( gfUMPDDebug )
  {
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n", 3796);
  }
  return 0LL;
}
