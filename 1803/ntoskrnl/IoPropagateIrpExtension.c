/*
 * XREFs of IoPropagateIrpExtension @ 0x1400A9E90
 * Callers:
 *     <none>
 * Callees:
 *     IoPropagateIrpExtensionEx @ 0x1400A9EB0 (IoPropagateIrpExtensionEx.c)
 */

__int64 __fastcall IoPropagateIrpExtension(__int64 a1, __int64 a2, unsigned int a3)
{
  return IoPropagateIrpExtensionEx(a1, a2, 0LL, a3);
}
