/*
 * XREFs of MmCheckProcessShadow @ 0x1400CF100
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 */

__int64 MmCheckProcessShadow()
{
  unsigned __int16 *v0; // rsi
  unsigned __int8 v1; // di
  unsigned int v2; // ebx
  __int64 v3; // r8

  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v1 = MiLockWorkingSetShared((__int64)v0);
  v2 = MiCheckProcessShadow((__int64)v0, 13);
  MiUnlockWorkingSetShared((__int64)v0, v1, v3);
  return v2;
}
