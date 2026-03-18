/*
 * XREFs of SBSA32InitializePort @ 0x1402CC480
 * Callers:
 *     <none>
 * Callees:
 *     SBSAInitializePort @ 0x1402CC4A0 (SBSAInitializePort.c)
 */

__int64 __fastcall SBSA32InitializePort(int a1, int a2, int a3, int a4)
{
  return SBSAInitializePort(a1, a2, a3, a4, 32);
}
