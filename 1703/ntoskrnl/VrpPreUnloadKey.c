/*
 * XREFs of VrpPreUnloadKey @ 0x14067D3BC
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     VrpFindExactNamespaceNode @ 0x14067B5B4 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  int v4; // esi
  volatile signed __int64 *v6; // rbp
  __int64 ExactNamespaceNode; // rax
  unsigned int v8; // edi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a2 + 16);
  ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(v4, (int)v3 + 16, (int)&v10);
  v8 = 0;
  if ( ExactNamespaceNode )
  {
    if ( *(int *)(ExactNamespaceNode + 48) < 0 )
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
      return v8;
    }
    v8 = -1073741790;
  }
  else
  {
    v8 = -1073741772;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
