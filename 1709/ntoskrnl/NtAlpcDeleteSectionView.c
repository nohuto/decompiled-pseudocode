/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140460970
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x140461648 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x1404618AC (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
  PVOID v6; // rdi
  signed __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  PVOID v13; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v13 = ViewBase;
      v6 = Object;
      BugCheckParameter2 = 0LL;
      v7 = (signed __int64 *)((char *)Object + 352);
      while ( 1 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)v7, 0LL);
        v10 = AlpcpEnumerateResourcesPort(v6, v8, v9, &v13);
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        if ( v10 != -1073741267 )
          break;
        v6 = Object;
      }
      v11 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
        v5 = (unsigned __int8)AlpcpDeleteView(BugCheckParameter2) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v11);
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
