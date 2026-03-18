/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x14044E76C
 * Callers:
 *     ObpMarkDirectoryTreeTemporary @ 0x14044E6F4 (ObpMarkDirectoryTreeTemporary.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140041474 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpMarkDirectoryObjectsTemporary(_QWORD *Object)
{
  __int64 v2; // rax
  _QWORD *v3; // r15
  _QWORD *v4; // r12
  __int64 *v5; // rbx
  _QWORD *v6; // r15
  char *v7; // rbp
  char v8; // r13
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _OBJECT_TYPE *v11; // r13
  _QWORD *v12; // rdi
  struct _KTHREAD *v13; // rax
  __int128 v14; // [rsp+28h] [rbp-60h] BYREF
  __int16 v15; // [rsp+46h] [rbp-42h]
  int v16; // [rsp+48h] [rbp-40h]
  _QWORD *v17; // [rsp+98h] [rbp+10h]
  _QWORD *v18; // [rsp+A0h] [rbp+18h]
  __int64 v19; // [rsp+A8h] [rbp+20h]

  v15 = 0;
  v16 = -60876;
  v14 = 0LL;
  ObpLockDirectoryExclusive((__int64)&v14, (__int64)Object);
  v2 = 37LL;
  v18 = Object;
  v19 = 37LL;
  v3 = Object;
  v4 = Object;
  v17 = Object;
  do
  {
    v5 = (__int64 *)*v3;
    if ( *v3 )
    {
      v6 = v4;
      do
      {
        v7 = (char *)v5[1];
        v8 = 0;
        if ( (*(v7 - 22) & 2) != 0 )
          v9 = (__int64)&v7[-ObpInfoMaskToOffset[*(v7 - 22) & 3] - 48];
        else
          v9 = 0LL;
        ObfReferenceObject((PVOID)v5[1]);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v7 - 32), 0LL);
        *(v7 - 21) &= ~0x10u;
        if ( (*(v7 - 21) & 0x10) == 0 && !*((_QWORD *)v7 - 5) && !*(_DWORD *)(v9 + 24) )
        {
          v11 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)];
          if ( v11 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v7);
          v12 = v5;
          *v6 = *v5;
          v5 = (__int64 *)*v5;
          if ( v11 == ObpDirectoryObjectType )
          {
            v13 = KeGetCurrentThread();
            --v13->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            *v12 = ObpPendingObjectDirectoryList;
            ObpPendingObjectDirectoryList = v12;
            ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            ObfDereferenceObject(v7);
            ExFreePoolWithTag(v12, 0);
          }
          *(_QWORD *)v9 = 0LL;
          ObfDereferenceObject(Object);
          v8 = 1;
        }
        ExReleasePushLockEx((ULONG_PTR)(v7 - 32), 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v7);
        if ( !v8 )
        {
          v6 = v5;
          v5 = (__int64 *)*v5;
        }
      }
      while ( v5 );
      v3 = v18;
      v4 = v17;
      v2 = v19;
    }
    ++v4;
    ++v3;
    --v2;
    v17 = v4;
    v19 = v2;
    v18 = v3;
  }
  while ( v2 );
  ObpUnlockDirectory((__int64)Object, (__int64)&v14);
}
