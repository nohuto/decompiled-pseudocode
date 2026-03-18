/*
 * XREFs of VrpPreUnloadKey @ 0x14070C8C8
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     VrpFindExactNamespaceNode @ 0x14070A40C (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  int v4; // esi
  volatile signed __int64 *v6; // rbp
  __int64 ExactNamespaceNode; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  char v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a2 + 16);
  ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(v4, (int)v3 + 16, (int)&v13);
  v11 = 0;
  if ( ExactNamespaceNode )
  {
    if ( *(int *)(ExactNamespaceNode + 56) < 0 )
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
    }
    else
    {
      v11 = -1073741790;
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6, v8, v9, v10);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return v11;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6, v8, v9, v10);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
