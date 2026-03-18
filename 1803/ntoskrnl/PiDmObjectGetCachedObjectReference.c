/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1405772A0
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140507368 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405E6390 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405079F8 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140507A48 (PiDmGetCachedKeyIndex.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        _QWORD *a5)
{
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // rbp
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h] BYREF
  DEVPROPKEY **v22; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v22, &v21);
  if ( v21 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v22, v21, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v18 = *(_DWORD *)(v15 + 24 * v12 + 112);
      if ( v18 == 6 )
      {
        v19 = *(_QWORD *)(v15 + 24 * v12 + 128);
        *a5 = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v15 = BugCheckParameter2;
        Object = 0;
      }
      else if ( v18 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v15, 0LL, v16, v17);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v9 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
