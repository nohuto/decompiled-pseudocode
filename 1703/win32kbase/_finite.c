/*
 * XREFs of _finite @ 0x1C009DC50
 * Callers:
 *     ?SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0026040 (-SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl finite(double X)
{
  return ((*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) - 0x7FF0000000000000LL) >> 63;
}
