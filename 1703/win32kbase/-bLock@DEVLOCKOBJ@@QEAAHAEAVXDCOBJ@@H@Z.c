/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038070
 * Callers:
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vSetRendering@DC@@QEAAXXZ @ 0x1C00392D0 (-vSetRendering@DC@@QEAAXXZ.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  DC *v6; // rdx
  int v7; // esi
  PERESOURCE v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  struct _ERESOURCE *v11; // rdi
  __int64 v12; // rcx
  DC *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  PERESOURCE v23; // rcx
  int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  bool v34; // zf
  struct _ERESOURCE *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = *(_QWORD *)*a2;
  if ( !a3
    && ((int)IsTrapAppContainerRenderingSupported() < 0
     || (unsigned int)TrapAppContainerRenderingWrap(a2, (char *)this + 56, (char *)this + 48, (char *)this + 72) != 1) )
  {
    return 0LL;
  }
  if ( (int)((__int64 (*)(void))IsDEVLOCKOBJ_bPrepareTrgDcoSupported)() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap(this, 0LL);
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v6 = *a2;
  v7 = 0;
  v8 = (PERESOURCE)*((unsigned int *)*a2 + 9);
  if ( ((unsigned __int16)v8 & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v8, &LockAcquireShared);
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v10 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v10 + 104) )
    {
      v11 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v11) )
      {
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v12, &LockAcquireShared);
        v7 = 1;
      }
    }
    v13 = *a2;
    v14 = *((_QWORD *)*a2 + 10);
    v15 = *((_QWORD *)*a2 + 6);
    v38 = v15;
    if ( (*(_DWORD *)(v14 + 8) & 0x4000) == 0 && (*((_DWORD *)v13 + 9) & 0x8000) == 0
      || (v16 = *(_DWORD *)(v15 + 32), (v16 & 0x1000001) != 1)
      || *(_DWORD *)(v15 + 2628) != 5 && (v16 & 0x20000) == 0 && !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v38)
      || (*(_DWORD *)(v15 + 2144) & 0x400) != 0
      || (v16 & 0x48000000) != 0
      || (*(_DWORD *)(v15 + 1840) & 0x8000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v15 + 16) + 32LL) & 0x1000000) != 0 )
    {
      *(_QWORD *)this = *((_QWORD *)v13 + 8);
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      if ( v7 == 1 && *(PERESOURCE *)this == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion(v31);
        }
        v7 = 0;
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)this);
      v32 = 11LL;
      if ( *(PERESOURCE *)this == ghsemGreLock )
        v32 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v32);
      v33 = *((_DWORD *)this + 6);
      if ( (v33 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v33 | 0x200;
    }
    v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v17 || (v18 = *v17) == 0 || !*(_DWORD *)(v18 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v19 )
      {
        v20 = *v19;
        if ( v20 )
        {
          *(_QWORD *)(v20 + 320) = 0LL;
          *(_QWORD *)(v20 + 312) = 0LL;
        }
      }
      v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
      {
        v22 = *v21;
        if ( v22 )
          ++*(_DWORD *)(v22 + 104);
      }
      v23 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v23, &LockAcquireShared);
    }
    v6 = *a2;
    v8 = (PERESOURCE)*((unsigned int *)*a2 + 9);
    if ( (*((_DWORD *)*a2 + 9) & 0x5000) == 0x1000 )
    {
      v34 = (*((_DWORD *)this + 6) & 0x1000) == 0;
LABEL_89:
      if ( v34 )
        goto LABEL_92;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      v35 = ghsemDCVisRgn;
      if ( !ghsemDCVisRgn )
        goto LABEL_92;
LABEL_91:
      ExReleaseResourceAndLeaveCriticalRegion(v35);
      PsLeavePriorityRegion(v36);
LABEL_92:
      *((_DWORD *)this + 6) &= ~1u;
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion(v37);
        }
      }
      return 0LL;
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && ((unsigned int)v8 & 0x80000) != 0 )
  {
    v34 = *((_QWORD *)this + 1) == 0LL;
    goto LABEL_89;
  }
  if ( ((*((_DWORD *)this + 6) & 0x1000) != 0 || !*((_QWORD *)this + 1))
    && ((unsigned __int8)v8 & 0x10) != 0
    && !(unsigned int)DC::bCompute(v6) )
  {
    if ( !*((_QWORD *)this + 1) )
      goto LABEL_92;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    v35 = ghsemDCVisRgn;
    if ( !ghsemDCVisRgn )
      goto LABEL_92;
    goto LABEL_91;
  }
  v24 = *((_DWORD *)this + 6);
  if ( (v24 & 0x20000) == 0 )
  {
    v8 = (PERESOURCE)*a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (v24 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 6) )
        DC::vSetRendering((DC *)v8);
      v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v25 )
      {
        v26 = *v25;
        if ( *v25 )
        {
          *(_QWORD *)(v26 + 312) = (char *)this + 32;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_BYTE *)(v26 + 328) = 1;
            *((_QWORD *)*a2 + 301) = 0LL;
            if ( ghsemVisRgnUniqueness )
              ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v8, &LockAcquireShared);
            *(_DWORD *)(v26 + 336) = giVisRgnUniqueness;
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v8, &LockRelease);
            v8 = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
              PsLeavePriorityRegion(v30);
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v8, &LockRelease);
    v8 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v27);
    }
  }
  if ( v7 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v8, &LockRelease);
    v8 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v28);
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0
    || (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported(v8) >= 0 && (unsigned int)DEVLOCKOBJ_bPrepareTrgDcoWrap(this, a2) )
  {
    return 1LL;
  }
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
