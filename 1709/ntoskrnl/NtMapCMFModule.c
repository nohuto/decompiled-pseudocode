/*
 * XREFs of NtMapCMFModule @ 0x1404F2994
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MUIInitializeResourceLock @ 0x1404F3344 (MUIInitializeResourceLock.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CMFRegisterEventTime @ 0x1405EDF04 (CMFRegisterEventTime.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     CMFUnmapModules @ 0x1405EEF50 (CMFUnmapModules.c)
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
  PULONG v7; // r12
  ULONG v8; // esi
  char PreviousMode; // r13
  NTSTATUS v11; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  ULONG v14; // ebx
  unsigned int v15; // r12d
  int v16; // ebx
  unsigned int v17; // r15d
  int v18; // edx
  bool v19; // r13
  PVOID *v20; // rsi
  int v21; // r12d
  signed __int64 v22; // rsi
  signed __int64 v23; // rbx
  PVOID PoolWithTag; // rax
  signed __int64 v25; // rbx
  NTSTATUS v26; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG v32; // ebx
  struct _KTHREAD *v33; // rax
  __int64 v34; // r8
  unsigned int v35; // eax
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  NTSTATUS v38; // [rsp+50h] [rbp-118h]
  char v39; // [rsp+55h] [rbp-113h]
  int v40; // [rsp+58h] [rbp-110h]
  PVOID P; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-100h]
  int v43; // [rsp+6Ch] [rbp-FCh]
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-F0h]
  __int64 v46; // [rsp+80h] [rbp-E8h] BYREF
  PVOID *v47; // [rsp+88h] [rbp-E0h]
  unsigned int v48; // [rsp+90h] [rbp-D8h]
  HANDLE Handle; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD v50[3]; // [rsp+A0h] [rbp-C8h] BYREF
  bool v51; // [rsp+ACh] [rbp-BCh]
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-B8h]
  unsigned int v53; // [rsp+B8h] [rbp-B0h]
  ULONG v54; // [rsp+BCh] [rbp-ACh]
  int v55; // [rsp+C0h] [rbp-A8h]
  NTSTATUS v56; // [rsp+C4h] [rbp-A4h]
  PVOID *v57; // [rsp+C8h] [rbp-A0h]
  int v58; // [rsp+D0h] [rbp-98h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-88h] BYREF
  int v61; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v62; // [rsp+100h] [rbp-68h]
  __int64 v63; // [rsp+108h] [rbp-60h]
  int v64; // [rsp+110h] [rbp-58h]
  __int128 v65; // [rsp+118h] [rbp-50h]
  int v67; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  P = 0LL;
  ViewSize = 0LL;
  v40 = 0;
  v42 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v11 = -1073741823;
    goto LABEL_97;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_100;
  v11 = MUIInitializeResourceLock(&CMFLock);
  v38 = v11;
  if ( (v11 & 0xC0000000) == 0xC0000000 )
    goto LABEL_77;
  if ( (What & 0x20000) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(CMFLock, 1u);
    if ( CMFFlagsCache )
    {
      if ( (CMFFlagsCache & 0xF) != 0 )
        v14 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
      else
        v14 = What | 1;
      if ( (CMFFlagsCache & 0x100000) != 0 )
      {
        if ( (v14 & 0x10000) == 0 )
        {
          v38 = -1073741672;
          goto LABEL_76;
        }
        v14 |= 0x100000u;
      }
      else if ( (CMFFlagsCache & 0x80000) != 0 )
      {
        if ( (v14 & 0x130) == 0x20 && (v14 & 0x10000) == 0 )
        {
          v38 = -1073741672;
          goto LABEL_16;
        }
        v14 |= 0x80000u;
      }
      else if ( (CMFFlagsCache & 0x40000) != 0 )
      {
        v14 |= 0x40000u;
      }
      v8 = Index;
    }
    else
    {
      v14 = What | 1;
    }
    v15 = v14 & 0xFFFFFECF;
    v42 = v15;
    v16 = v14 & 0x130;
    v67 = v16;
    v43 = (v15 & 0x40) != 0 ? 4 : 2;
    v17 = (v15 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v45 = v17;
    v40 = 10000;
    switch ( v16 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v40 = CMFCacheIndex;
        }
        else
        {
          if ( v8 >= 0x2710 )
          {
            if ( CMFFirstAccess )
            {
              CMFRegisterEventTime(1LL);
              CMFFirstAccess = 0;
            }
            break;
          }
          v40 = v8;
        }
        v19 = (v15 & 2) != 0;
        v20 = &CMFDirectorySectionPointer;
        goto LABEL_22;
      case 32:
        if ( v8 < 0x1E && CMFCacheIndex != 10000 )
        {
          v40 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
            v25 = (signed __int64)PoolWithTag;
            P = PoolWithTag;
            if ( !PoolWithTag )
            {
              v38 = -1073741801;
              goto LABEL_15;
            }
            memset(PoolWithTag, 0, 0xF0uLL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v25, 0LL) )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v16 = v67;
            v15 = v42;
          }
          v19 = (v15 & 4) != 0;
          v20 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v8);
LABEL_22:
          v47 = v20;
          goto LABEL_23;
        }
        break;
      case 256:
        v40 = CMFCacheIndex;
        v19 = (v15 & 8) != 0;
        v20 = &CMFHitsSectionPointer;
        v47 = &CMFHitsSectionPointer;
        if ( !CMFHitsSectionPointer )
        {
          CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
          v15 = v42;
          v20 = v47;
        }
LABEL_23:
        if ( *v20 )
        {
          v21 = v43;
        }
        else
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((v15 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
          {
            v18 = -1073741823;
            goto LABEL_14;
          }
          v17 = v45;
          if ( *v20 )
          {
            v21 = v43;
          }
          else
          {
            v50[0] = 0x8000000;
            v50[1] = v40;
            v50[2] = v45;
            v51 = v19;
            v53 = v15;
            v54 = Index;
            v21 = v43;
            v55 = v43;
            v57 = v20;
            v58 = v16;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            p_Event = &Event;
            v61 = 48;
            v62 = 0LL;
            v64 = 512;
            v63 = 0LL;
            v65 = 0LL;
            v38 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, &v61, 0LL, 0LL, CMFSystemThreadRoutine, v50, 0LL, 0LL);
            if ( (v38 & 0xC0000000) == 0xC0000000 )
              goto LABEL_15;
            ZwClose(Handle);
            v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v38 = v26;
            if ( v26 )
            {
              if ( v26 >= 0 )
                v38 = -1073741823;
              goto LABEL_15;
            }
            v42 = v53;
            v38 = v56;
            if ( (v56 & 0xC0000000) == 0xC0000000 )
            {
LABEL_15:
              v7 = CacheIndexOut;
LABEL_16:
              v6 = CacheFlagsOut;
LABEL_76:
              ExReleaseResourceLite(CMFLock);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v11 = v38;
              if ( (v38 & 0xC0000000) == 0xC0000000 )
                goto LABEL_77;
              v28 = 0x7FFFFFFF0000LL;
              if ( BaseAddress )
              {
                v29 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
                  v29 = (__int64)BaseAddress;
                *(_QWORD *)v29 = *(_QWORD *)v29;
                *BaseAddress = P;
                P = 0LL;
              }
              if ( ViewSizeOut )
              {
                v30 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
                  v30 = (__int64)ViewSizeOut;
                *(_DWORD *)v30 = *(_DWORD *)v30;
                *ViewSizeOut = ViewSize;
              }
              if ( v7 )
              {
                v31 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
                  v31 = (__int64)v7;
                *(_DWORD *)v31 = *(_DWORD *)v31;
                *v7 = v40;
              }
              if ( v6 )
              {
                if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
                  v28 = (__int64)v6;
                *(_DWORD *)v28 = *(_DWORD *)v28;
                *v6 = v42;
              }
              goto LABEL_96;
            }
            if ( v16 == 16 )
              CMFRegisterEventTime(2LL);
          }
          ExConvertExclusiveToSharedLite(CMFLock);
        }
        P = 0LL;
        ViewSize = 0LL;
        v46 = 0LL;
        if ( BaseAddress )
        {
          if ( v16 == 256 || (LOBYTE(v13) = v39, v38 = CMFCheckAccess(*v20, v17, v13), (v38 & 0xC0000000) != 0xC0000000) )
          {
            v38 = MmMapViewOfSection(
                    (int)*v47,
                    (int)KeGetCurrentThread()->ApcState.Process,
                    &P,
                    0,
                    0LL,
                    (__int64)&v46,
                    (__int64)&ViewSize,
                    1,
                    0x400000,
                    v21);
            if ( (v38 & 0xC0000000) == 0xC0000000 )
            {
              P = 0LL;
            }
            else if ( v67 == 256 )
            {
              v22 = CMFHitsLastFlushTime;
              v23 = MEMORY[0xFFFFF78000000014];
              if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                && v22 == _InterlockedCompareExchange64(
                            &CMFHitsLastFlushTime,
                            MEMORY[0xFFFFF78000000014],
                            CMFHitsLastFlushTime)
                && (int)CMFFlushHitsFile(P, ViewSize) < 0 )
              {
                _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v22, v23);
              }
            }
          }
        }
        goto LABEL_15;
    }
    v18 = -1073741811;
LABEL_14:
    v38 = v18;
    goto LABEL_15;
  }
  if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
  {
LABEL_100:
    v11 = -1073741811;
    goto LABEL_97;
  }
  v32 = What & 0x1C0000;
  if ( v32 == (CMFFlagsCache & 0x1C0000) )
  {
LABEL_96:
    v11 = 0;
LABEL_97:
    v38 = v11;
    goto LABEL_77;
  }
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  if ( v32 != (CMFFlagsCache & 0x1C0000) )
  {
    if ( CMFDirectorySectionPointer )
    {
      if ( !v32 )
      {
        v38 = -1073741637;
        goto LABEL_121;
      }
      if ( CMFDirectorySectionPointer )
      {
        v35 = 0x80000000;
        v48 = 0x80000000;
        if ( (CMFFlagsCache & 0x1C0000) != 0 )
          v35 = -1073741824;
        v48 = v35;
        LOBYTE(v34) = PreviousMode;
        v38 = CMFCheckAccess(CMFDirectorySectionPointer, v35, v34);
        if ( (v38 & 0xC0000000) == 0xC0000000 )
          goto LABEL_121;
      }
    }
    v36 = v32 | CMFFlagsCache & 0xFFE3FFFF;
    CMFFlagsCache = v36;
    if ( CMFDirectorySectionPointer && ((v36 & 0x80000) != 0 || (v36 & 0x100000) != 0) )
    {
      P = 0LL;
      ViewSize = 104LL;
      if ( MmMapViewInSystemSpace(CMFDirectorySectionPointer, &P, &ViewSize) >= 0 )
      {
        v37 = P;
        if ( P )
        {
          if ( ViewSize >= 0x68 )
          {
            *((_DWORD *)P + 12) &= 0xFFE3FFFF;
            v37[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
          }
          MmUnmapViewInSystemSpace(v37);
          P = 0LL;
        }
      }
      CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
      CMFRegisterEventTime(4LL);
    }
  }
  v38 = 0;
LABEL_121:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v11 = v38;
LABEL_77:
  if ( P )
  {
    MiUnmapViewOfSection((__int64)KeGetCurrentThread()->ApcState.Process, (unsigned __int64)P, 0);
    return v38;
  }
  return v11;
}
