/*
 * XREFs of ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0038ED4
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0002190 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bGammaRampCapable(PDEVOBJ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)this;
  result = 0;
  if ( *(_QWORD *)this )
  {
    v2 = *(_DWORD *)(v1 + 32);
    if ( (v2 & 0x400) == 0
      && (v2 & 1) != 0
      && (unsigned int)(*(_DWORD *)(v1 + 2124) - 5) <= 1
      && *(_QWORD *)(v1 + 3240)
      && (*(_DWORD *)(v1 + 2144) & 0x10) != 0 )
    {
      return 1;
    }
  }
  return result;
}
