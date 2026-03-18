/*
 * XREFs of MiReferenceCfgVad @ 0x14044CB68
 * Callers:
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int *v7; // rax
  unsigned __int64 v8; // r8
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = 3LL * a3;
  v7 = MiObtainReferencedVad(a2, &v10);
  v8 = v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32);
  *(_QWORD *)(v5 + 8 * v6 + 272) = a2;
  *(_QWORD *)(v5 + 8 * v6 + 288) = v7;
  *(_QWORD *)(v5 + 8 * v6 + 280) = ((v8 + 1) << 12) - a2;
  return MiUnlockVad(a1, (__int64)v7);
}
