/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x140507E74
 * Callers:
 *     PiDmObjectUpdateCachedCmProperty @ 0x140506908 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140506EC0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140504430 (PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405079F8 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140507A48 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataFree @ 0x1405D3614 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1405D364C (PiDmCacheDataEncode.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        SIZE_T NumberOfBytes)
{
  bool v10; // r15
  __int64 v11; // r14
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rdi
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v16; // r13
  __int64 v17; // r9
  __int64 v18; // rcx
  const void *v19; // rdi
  unsigned int *v20; // r8
  unsigned int v21; // eax
  int ObjectProperty; // eax
  void *v23; // rbx
  int v24; // esi
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // [rsp+60h] [rbp-19h] BYREF
  void *Buf1; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-9h] BYREF
  DEVPROPKEY **v32; // [rsp+78h] [rbp-1h] BYREF
  unsigned int *v33; // [rsp+80h] [rbp+7h]
  unsigned int Size; // [rsp+D0h] [rbp+57h] BYREF
  int Size_4; // [rsp+D4h] [rbp+5Bh]
  __int64 v36; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( !a4 )
  {
    Size_4 = HIDWORD(a3);
    BugCheckParameter2 = 0LL;
    Buf1 = 0LL;
    Size = 0;
    v10 = 0;
    PiDmGetCacheKeys(a1, &v32, &v29);
    if ( v29 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v32, v29, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v18 = 3 * v13;
        v19 = Buf2;
        v20 = (unsigned int *)(v16 + 112 + 8 * v18);
        v21 = *v20;
        v33 = v20;
        v29 = v21;
        if ( v21 <= 1 )
        {
          PiDmCacheDataEncode(
            a6,
            Buf2,
            (unsigned int)NumberOfBytes,
            LODWORD(v32[v18 + 1]),
            HIDWORD(v32[v18 + 1]),
            v16 + 112 + 8 * v18);
          v10 = v29 == 0;
        }
        ExReleasePushLockEx(v16, 0LL, (__int64)v20, v17);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( !v10 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           a2,
                           a1,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v36,
                           &Buf1,
                           &Size,
                           0x10000);
        v23 = Buf1;
        v24 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          LODWORD(v36) = 0;
          v24 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v23 = 0LL;
            Buf1 = 0LL;
          }
          v25 = 0;
        }
        else
        {
          v25 = Size;
        }
        if ( v24 < 0 || (_DWORD)v36 != a6 || v25 != (_DWORD)NumberOfBytes )
          goto LABEL_26;
        if ( v23 )
        {
          if ( !v19 )
            goto LABEL_26;
        }
        else if ( v19 )
        {
          goto LABEL_26;
        }
        if ( !v25 )
          goto LABEL_20;
        if ( !v23 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)BugCheckParameter2);
          return;
        }
        if ( !memcmp(v23, v19, v25) )
        {
LABEL_20:
          if ( v23 )
            ExFreePoolWithTag(v23, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        PiDmCacheDataFree(v33);
        ExReleasePushLockEx(BugCheckParameter2, 0LL, v27, v28);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v23 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
