/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0047070
 * Callers:
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebp
  int v11; // ecx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  struct _ERESOURCE *v14; // rdi
  int v15; // ecx
  DC *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  DC *v30; // rcx
  DC *v31; // rdi
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  HSEMAPHORE v41; // r8
  __int64 v42; // r8
  bool v43; // zf
  struct _ERESOURCE *v44; // rcx
  __int128 v45; // [rsp+30h] [rbp-48h]

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = *(_QWORD *)*a2;
  if ( !a3 )
  {
    if ( (int)IsTrapAppContainerRenderingSupported() < 0 )
      return 0LL;
    v6 = TrapAppContainerRenderingWrap(a2, (char *)this + 56, (char *)this + 48, (char *)this + 72);
    if ( v6 != 1 )
      LOBYTE(v6) = 0;
    if ( !(_BYTE)v6 )
      return 0LL;
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v10 = 0;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v11 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(
        v11,
        (unsigned int)&LockAcquireShared,
        v8,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) )
    {
      v14 = (struct _ERESOURCE *)ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v14) )
      {
        v15 = (int)ghsemGreLock;
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared();
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz(v15, (unsigned int)&LockAcquireShared, v13, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
        v10 = 1;
      }
    }
    v16 = *a2;
    v17 = *((_QWORD *)*a2 + 6);
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x4000) == 0 && (*((_DWORD *)v16 + 9) & 0x8000) == 0
      || (v18 = *(unsigned int *)(v17 + 32), (v18 & 1) == 0)
      || (v18 & 0x1000000) != 0
      || *(_DWORD *)(v17 + 2628) != 5
      && (v18 & 0x20000) == 0
      && ((v13 = *(_QWORD *)(v17 + 2592), ((v13 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*(_DWORD *)(v13 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v17 + 2144) & 0x400) != 0
      || (LOBYTE(v18) = (v18 & 0x48000000) == 0,
          ((unsigned __int8)v18 & ((*(_DWORD *)(v17 + 1840) & 0x8000000) == 0)) == 0)
      || (*(_DWORD *)(*(_QWORD *)(v17 + 16) + 32LL) & 0x1000000) != 0 )
    {
      v41 = (HSEMAPHORE)*((_QWORD *)v16 + 8);
      *(_QWORD *)this = v41;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      if ( v10 == 1 && v41 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
        v10 = 0;
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)this);
      v42 = 11LL;
      if ( *(HSEMAPHORE *)this == ghsemGreLock )
        v42 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v42);
      v18 = *((unsigned int *)this + 6);
      if ( (v18 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
      {
        LODWORD(v18) = v18 | 0x200;
        *((_DWORD *)this + 6) = v18;
      }
    }
    v19 = W32GetThreadWin32Thread(KeGetCurrentThread(), v18, v13, v16);
    if ( !v19 || !*(_DWORD *)(v19 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v23 = W32GetThreadWin32Thread(KeGetCurrentThread(), v20, v21, v22);
      if ( v23 )
      {
        *(_QWORD *)(v23 + 320) = 0LL;
        *(_QWORD *)(v23 + 312) = 0LL;
      }
      v27 = W32GetThreadWin32Thread(KeGetCurrentThread(), v24, v25, v26);
      if ( v27 )
        ++*(_DWORD *)(v27 + 104);
      v28 = (int)ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v28, (unsigned int)&LockAcquireShared, v21, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
    }
    v29 = *((unsigned int *)*a2 + 9);
    if ( (v29 & 0x1000) != 0 && (v29 & 0x4000) == 0 )
    {
      v43 = (*((_DWORD *)this + 6) & 0x1000) == 0;
LABEL_109:
      if ( v43 )
        goto LABEL_115;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      v44 = ghsemDCVisRgn;
      if ( !ghsemDCVisRgn )
        goto LABEL_115;
LABEL_114:
      ExReleaseResourceAndLeaveCriticalRegion(v44);
      PsLeavePriorityRegion();
LABEL_115:
      *((_DWORD *)this + 6) &= ~1u;
      if ( v10 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
          PsLeavePriorityRegion();
        }
      }
      return 0LL;
    }
  }
  else
  {
    v38 = W32GetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
    if ( !v38 || !*(_DWORD *)(v38 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x800000u;
      v39 = W32GetThreadWin32Thread(KeGetCurrentThread(), v29, v21, v22);
      if ( v39 )
        ++*(_DWORD *)(v39 + 104);
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      v43 = *((_QWORD *)this + 1) == 0LL;
      goto LABEL_109;
    }
  }
  else if ( *((_QWORD *)this + 1) )
  {
    goto LABEL_46;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !(unsigned int)DC::bCompute(*a2) )
  {
    if ( !*((_QWORD *)this + 1) )
      goto LABEL_115;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    v44 = ghsemDCVisRgn;
    if ( !ghsemDCVisRgn )
      goto LABEL_115;
    goto LABEL_114;
  }
LABEL_46:
  LODWORD(v30) = *((_DWORD *)this + 6);
  if ( ((unsigned int)v30 & 0x20000) == 0 )
  {
    v31 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v30 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 6) )
      {
        v32 = *((_DWORD *)v31 + 10);
        v29 = (v32 & 1) != 0 ? 1440LL : 1432LL;
        v43 = (*((_DWORD *)v31 + 9) & 0x4000) == 0;
        *((_QWORD *)v31 + 180) = *(_QWORD *)((char *)v31 + v29);
        v45 = *(_OWORD *)((char *)v31 + 1448);
        *((_DWORD *)v31 + 10) = v32 | 3;
        *(_OWORD *)((char *)v31 + 1464) = v45;
        if ( !v43 )
        {
          v33 = *((_QWORD *)v31 + 64);
          if ( *(_QWORD *)(v33 + 256) || (*(_DWORD *)(v33 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v33 + 320) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v31 + 64) + 332LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v31 + 64) + 320LL) + 64LL), 0);
          }
        }
      }
      v34 = W32GetThreadWin32Thread(KeGetCurrentThread(), v29, v21, v22);
      v35 = v34;
      if ( v34 )
      {
        *(_QWORD *)(v34 + 312) = (char *)this + 32;
        v30 = *a2;
        if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
        {
          *(_BYTE *)(v34 + 328) = 1;
          *((_QWORD *)*a2 + 301) = 0LL;
          v40 = (int)ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
            ExEnterPriorityRegionAndAcquireResourceShared();
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(
              v40,
              (unsigned int)&LockAcquireShared,
              v21,
              (_DWORD)ghsemVisRgnUniqueness,
              (__int64)L"ghsemVisRgnUniqueness");
          *(_DWORD *)(v35 + 336) = giVisRgnUniqueness;
          if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz(
              v40,
              (unsigned int)&LockRelease,
              v21,
              (_DWORD)ghsemVisRgnUniqueness,
              (__int64)L"ghsemVisRgnUniqueness");
          LODWORD(v30) = (_DWORD)ghsemVisRgnUniqueness;
          if ( ghsemVisRgnUniqueness )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
            PsLeavePriorityRegion();
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz((_DWORD)v30, (unsigned int)&LockRelease, v21, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
    LODWORD(v30) = (_DWORD)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v10 )
  {
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz((_DWORD)v30, (unsigned int)&LockRelease, v21, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion();
    }
  }
  v36 = *((_DWORD *)this + 6);
  if ( (v36 & 0x20000) != 0 )
    return 1LL;
  if ( (v36 & 0x1000) != 0 || (v36 & 0x800000) != 0 )
    *((_DWORD *)*a2 + 10) |= 2u;
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported() >= 0 && (unsigned int)DEVLOCKOBJ_bPrepareTrgDcoWrap(this, a2) )
    return 1LL;
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
