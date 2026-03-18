/*
 * XREFs of HvlGetSharedPageVa @ 0x140584D94
 * Callers:
 *     MiInitializeSharedUserData @ 0x1408C7258 (MiInitializeSharedUserData.c)
 * Callees:
 *     <none>
 */

__int64 HvlGetSharedPageVa()
{
  return HvlpReferenceTscPage;
}
