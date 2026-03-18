/*
 * XREFs of ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C013C280
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C028A540 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bSandboxedClient(UMPDOBJ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_DWORD *)this + 109) )
    return *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  return v1;
}
