/*
 * XREFs of NtMapCMFModule @ 0x140568920
 * Callers:
 *     <none>
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 *     CMFRegisterEventTime @ 0x1405D2DD0 (CMFRegisterEventTime.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFUnmapModules @ 0x1407223A0 (CMFUnmapModules.c)
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  PULONG v6; // r15
  PULONG v7; // r13
  __int64 v8; // r12
  NTSTATUS v10; // edx
  ACCESS_MASK v11; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // ebx
  unsigned int v14; // r15d
  int v15; // ebx
  char *v16; // rdx
  bool v17; // r13
  PVOID *v18; // r12
  signed __int64 v19; // rsi
  signed __int64 v20; // rbx
  PVOID PoolWithTag; // rax
  signed __int64 v22; // rbx
  NTSTATUS v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  ULONG v29; // ebx
  struct _KTHREAD *v30; // rax
  int v31; // eax
  PVOID v32; // rcx
  unsigned int v33; // eax
  ACCESS_MASK v34; // esi
  _DWORD *v35; // rcx
  NTSTATUS v36; // [rsp+50h] [rbp-118h]
  KPROCESSOR_MODE PreviousMode; // [rsp+55h] [rbp-113h]
  int v38; // [rsp+58h] [rbp-110h]
  PVOID P; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-100h]
  unsigned int v41; // [rsp+6Ch] [rbp-FCh]
  int v42; // [rsp+70h] [rbp-F8h]
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-E8h] BYREF
  PVOID *v45; // [rsp+88h] [rbp-E0h]
  int v46; // [rsp+90h] [rbp-D8h]
  HANDLE Handle; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD v48[3]; // [rsp+A0h] [rbp-C8h] BYREF
  bool v49; // [rsp+ACh] [rbp-BCh]
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-B8h]
  unsigned int v51; // [rsp+B8h] [rbp-B0h]
  ULONG v52; // [rsp+BCh] [rbp-ACh]
  int v53; // [rsp+C0h] [rbp-A8h]
  NTSTATUS v54; // [rsp+C4h] [rbp-A4h]
  PVOID *v55; // [rsp+C8h] [rbp-A0h]
  int v56; // [rsp+D0h] [rbp-98h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v60; // [rsp+108h] [rbp-60h]
  int v61; // [rsp+110h] [rbp-58h]
  __int128 v62; // [rsp+118h] [rbp-50h]
  int v64; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  P = 0LL;
  ViewSize = 0LL;
  v38 = 0;
  v41 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v10 = -1073741823;
    goto LABEL_98;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_101;
  v10 = MUIInitializeResourceLock(&CMFLock);
  v36 = v10;
  v11 = -1073741824;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_78;
  if ( (What & 0x20000) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(CMFLock, 1u);
    if ( !CMFFlagsCache )
    {
      v13 = What | 1;
      goto LABEL_8;
    }
    if ( (CMFFlagsCache & 0xF) != 0 )
      v13 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
    else
      v13 = What | 1;
    if ( (CMFFlagsCache & 0x100000) != 0 )
    {
      if ( (v13 & 0x10000) == 0 )
      {
        v36 = -1073741672;
        goto LABEL_77;
      }
      v13 |= 0x100000u;
    }
    else
    {
      if ( (CMFFlagsCache & 0x80000) == 0 )
      {
        v11 = -1073741824;
        if ( (CMFFlagsCache & 0x40000) != 0 )
          v13 |= 0x40000u;
LABEL_8:
        v14 = v13 & 0xFFFFFECF;
        v41 = v14;
        v15 = v13 & 0x130;
        v64 = v15;
        if ( (v14 & 0x40) != 0 )
        {
          v42 = 4;
        }
        else
        {
          v42 = 2;
          v11 = 0x80000000;
        }
        v40 = v11;
        v38 = 10000;
        switch ( v15 )
        {
          case 16:
            if ( (unsigned int)CMFCacheIndex < 0x2710 )
            {
              v38 = CMFCacheIndex;
            }
            else
            {
              if ( (unsigned int)v8 >= 0x2710 )
              {
                if ( CMFFirstAccess )
                {
                  CMFRegisterEventTime(1LL);
                  CMFFirstAccess = 0;
                }
                break;
              }
              v38 = v8;
            }
            v17 = (v14 & 2) != 0;
            v18 = &CMFDirectorySectionPointer;
            goto LABEL_22;
          case 32:
            if ( (unsigned int)v8 < 0x1E && CMFCacheIndex != 10000 )
            {
              v38 = CMFCacheIndex;
              v16 = (char *)CMFSegmentSectionPointer;
              if ( !CMFSegmentSectionPointer )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
                v22 = (signed __int64)PoolWithTag;
                P = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v36 = -1073741801;
                  goto LABEL_16;
                }
                memset(PoolWithTag, 0, 0xF0uLL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v22, 0LL) )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v15 = v64;
                v14 = v41;
                v11 = v40;
                v16 = (char *)CMFSegmentSectionPointer;
              }
              v17 = (v14 & 4) != 0;
              v18 = (PVOID *)&v16[8 * v8];
LABEL_22:
              v45 = v18;
              goto LABEL_23;
            }
            break;
          case 256:
            v38 = CMFCacheIndex;
            v17 = (v14 & 8) != 0;
            v18 = &CMFHitsSectionPointer;
            v45 = &CMFHitsSectionPointer;
            if ( !CMFHitsSectionPointer )
            {
              CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
              v14 = v41;
              v11 = v40;
              v18 = v45;
            }
LABEL_23:
            v46 = 0x8000000;
            if ( *v18 )
              goto LABEL_24;
            ExReleaseResourceLite(CMFLock);
            ExAcquireResourceExclusiveLite(CMFLock, 1u);
            if ( ((v14 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
            {
LABEL_62:
              v36 = -1073741823;
              goto LABEL_76;
            }
            if ( !*v18 )
            {
              v48[0] = 0x8000000;
              v48[1] = v38;
              v48[2] = v11;
              v49 = v17;
              v51 = v14;
              v52 = Index;
              v53 = v42;
              v55 = v18;
              v56 = v15;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              p_Event = &Event;
              LODWORD(v59) = 48;
              *((_QWORD *)&v59 + 1) = 0LL;
              v61 = 512;
              v60 = 0LL;
              v62 = 0LL;
              v36 = PsCreateSystemThreadEx(
                      (__int64)&Handle,
                      0x1FFFFF,
                      &v59,
                      0LL,
                      0LL,
                      (__int64)CMFSystemThreadRoutine,
                      (__int64)v48,
                      0LL,
                      0LL);
              if ( (v36 & 0xC0000000) == 0xC0000000 )
                goto LABEL_76;
              ZwClose(Handle);
              v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              v36 = v23;
              if ( v23 )
              {
                if ( v23 < 0 )
                  goto LABEL_76;
                goto LABEL_62;
              }
              v41 = v51;
              v36 = v54;
              if ( (v54 & 0xC0000000) == 0xC0000000 )
                goto LABEL_76;
              if ( v15 == 16 )
                CMFRegisterEventTime(2LL);
            }
            ExConvertExclusiveToSharedLite(CMFLock);
LABEL_24:
            P = 0LL;
            ViewSize = 0LL;
            v44 = 0LL;
            if ( BaseAddress )
            {
              if ( v15 != 256 )
              {
                v36 = CMFCheckAccess((__int64)*v18, v11, PreviousMode);
                if ( (v36 & 0xC0000000) == 0xC0000000 )
                  goto LABEL_29;
              }
              v36 = MmMapViewOfSection(
                      (int)*v45,
                      (int)KeGetCurrentThread()->ApcState.Process,
                      &P,
                      0,
                      0LL,
                      (__int64)&v44,
                      (__int64)&ViewSize,
                      1,
                      0x400000,
                      v42);
              if ( (v36 & 0xC0000000) == 0xC0000000 )
              {
                P = 0LL;
LABEL_29:
                v6 = CacheFlagsOut;
                v7 = CacheIndexOut;
                goto LABEL_77;
              }
              if ( v64 != 256 )
                goto LABEL_29;
              v19 = CMFHitsLastFlushTime;
              v20 = MEMORY[0xFFFFF78000000014];
              if ( MEMORY[0xFFFFF78000000014] <= CMFHitsLastFlushTime + 36000000000LL )
                goto LABEL_29;
              if ( v19 == _InterlockedCompareExchange64(
                            &CMFHitsLastFlushTime,
                            MEMORY[0xFFFFF78000000014],
                            CMFHitsLastFlushTime)
                && (int)CMFFlushHitsFile(P, ViewSize) < 0 )
              {
                _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v19, v20);
              }
            }
LABEL_76:
            v7 = CacheIndexOut;
            goto LABEL_16;
        }
        v36 = -1073741811;
LABEL_16:
        v6 = CacheFlagsOut;
LABEL_77:
        ExReleaseResourceLite(CMFLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v10 = v36;
        if ( (v36 & 0xC0000000) == 0xC0000000 )
          goto LABEL_78;
        v25 = 0x7FFFFFFF0000LL;
        if ( BaseAddress )
        {
          v26 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
            v26 = (__int64)BaseAddress;
          *(_QWORD *)v26 = *(_QWORD *)v26;
          *BaseAddress = P;
          P = 0LL;
        }
        if ( ViewSizeOut )
        {
          v27 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
            v27 = (__int64)ViewSizeOut;
          *(_DWORD *)v27 = *(_DWORD *)v27;
          *ViewSizeOut = ViewSize;
        }
        if ( v7 )
        {
          v28 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
            v28 = (__int64)v7;
          *(_DWORD *)v28 = *(_DWORD *)v28;
          *v7 = v38;
        }
        if ( v6 )
        {
          if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
            v25 = (__int64)v6;
          *(_DWORD *)v25 = *(_DWORD *)v25;
          *v6 = v41;
        }
        goto LABEL_97;
      }
      if ( (v13 & 0x130) == 0x20 && (v13 & 0x10000) == 0 )
      {
        v36 = -1073741672;
        goto LABEL_16;
      }
      v13 |= 0x80000u;
    }
    v11 = -1073741824;
    goto LABEL_8;
  }
  if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
  {
LABEL_101:
    v10 = -1073741811;
    goto LABEL_98;
  }
  v29 = What & 0x1C0000;
  if ( v29 == (CMFFlagsCache & 0x1C0000) )
  {
LABEL_97:
    v10 = 0;
LABEL_98:
    v36 = v10;
    goto LABEL_78;
  }
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  v31 = CMFFlagsCache;
  if ( v29 != (CMFFlagsCache & 0x1C0000) )
  {
    v32 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( !v29 )
      {
        v36 = -1073741637;
        goto LABEL_122;
      }
      if ( CMFDirectorySectionPointer )
      {
        v34 = 0x80000000;
        v40 = 0x80000000;
        if ( (CMFFlagsCache & 0x1C0000) != 0 )
          v34 = -1073741824;
        v40 = v34;
        v36 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v34, PreviousMode);
        if ( (v36 & 0xC0000000) == 0xC0000000 )
          goto LABEL_122;
        v31 = CMFFlagsCache;
        v32 = CMFDirectorySectionPointer;
      }
    }
    v33 = v29 | v31 & 0xFFE3FFFF;
    CMFFlagsCache = v33;
    if ( v32 && ((v33 & 0x80000) != 0 || (v33 & 0x100000) != 0) )
    {
      P = 0LL;
      ViewSize = 104LL;
      if ( MmMapViewInSystemSpace(v32, &P, &ViewSize) >= 0 )
      {
        v35 = P;
        if ( P )
        {
          if ( ViewSize >= 0x68 )
          {
            *((_DWORD *)P + 12) &= 0xFFE3FFFF;
            v35[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
          }
          MmUnmapViewInSystemSpace(v35);
          P = 0LL;
        }
      }
      CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
      CMFRegisterEventTime(4LL);
    }
  }
  v36 = 0;
LABEL_122:
  ExReleaseResourceLite(CMFLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v10 = v36;
LABEL_78:
  if ( P )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (unsigned __int64)P, 0);
    return v36;
  }
  return v10;
}
