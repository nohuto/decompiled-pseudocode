/*
 * XREFs of ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C003DFE8
 * Callers:
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00FAD24 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGammaRampCapable(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return 0LL;
  result = *(_DWORD *)(v1 + 32) & 0x401;
  if ( (_DWORD)result != 1
    || (unsigned int)(*(_DWORD *)(v1 + 2124) - 5) > 1
    || !*(_QWORD *)(v1 + 3240)
    || (*(_DWORD *)(v1 + 2144) & 0x10) == 0 )
  {
    return 0LL;
  }
  return result;
}
