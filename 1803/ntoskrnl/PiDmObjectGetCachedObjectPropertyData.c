/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1405078E8
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140507368 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405079F8 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140507A48 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140507D4C (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int Object; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rcx
  unsigned int v23; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v10 = a1;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v24, &v23);
  if ( v23 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v24[0], v23, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(v10, a2, (__int64 *)&BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v21 = (_DWORD *)(v18 + 8 * (v15 + 2 * v15 + 14));
      if ( *v21 <= 1u )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v21, a5, a6, a7, a8);
      ExReleasePushLockEx(v18, 0LL, v19, v20);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v12 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
