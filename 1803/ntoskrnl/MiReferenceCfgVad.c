/*
 * XREFs of MiReferenceCfgVad @ 0x1405764D4
 * Callers:
 *     MiCfgInitializeProcess @ 0x1404E95B8 (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 */

_QWORD *__fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = 3LL * a3;
  v7 = MiObtainReferencedVadEx(a2, 0, &v12);
  v8 = *(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32);
  *(_QWORD *)(v5 + 8 * v6 + 376) = a2;
  *(_QWORD *)(v5 + 8 * v6 + 392) = v7;
  v9 = ((v8 + 1) << 12) - a2;
  *(_QWORD *)(v5 + 8 * v6 + 384) = v9;
  return MiUnlockVad(a1, v7, v9, v10);
}
