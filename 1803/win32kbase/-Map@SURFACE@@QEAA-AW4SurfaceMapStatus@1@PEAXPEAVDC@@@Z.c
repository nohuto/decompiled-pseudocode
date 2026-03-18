/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C001D070
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001CE40 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C005BF78 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0069018 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edi
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  bool v19; // zf
  char *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  HSEMAPHORE v25; // [rsp+60h] [rbp+8h] BYREF
  void *v26; // [rsp+78h] [rbp+20h] BYREF

  v26 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0 || (*(_WORD *)(a1 + 102) & 0x800) == 0 )
    return 0LL;
  v2 = (unsigned int *)(a1 + 272);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v4 = *(_DWORD *)(a1 + 272);
  if ( v4 )
  {
    do
    {
      if ( v4 == v3 )
        break;
      v24 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v24 + 64), 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 312), UserRequest, 0, 0, 0LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      v4 = *v2;
    }
    while ( *v2 );
  }
  v5 = ++*(_DWORD *)(a1 + 280);
  *v2 = v3;
  if ( v5 > *(_DWORD *)(a1 + 284) )
    *(_DWORD *)(a1 + 284) = v5;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v6 = (struct _ERESOURCE *)ghsemMapRot;
  v25 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  v7 = *(_QWORD *)(a1 + 264);
  if ( v7 == PsGetCurrentProcessWin32Process() )
  {
    if ( v6 )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v8, (unsigned int)&LockRelease, v9, (_DWORD)v6, (__int64)L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v6);
      PsLeavePriorityRegion();
      v6 = 0LL;
    }
    v10 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v21 = (_QWORD *)(a1 + 528);
    v22 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v22 + 8) != a1 + 528 || (v23 = *(_QWORD **)(a1 + 536), (_QWORD *)*v23 != v21) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v21 = v21;
    if ( *(_QWORD *)(a1 + 72) )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
  }
  v12 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v12 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v12
    || (v16 = *(_DWORD *)(a1 + 64),
        v17 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(),
        MapKernelSectionForUserMapping(v17, CurrentProcess, v16, &v26),
        v26) )
  {
    v13 = (_QWORD *)(a1 + 528);
    v14 = PsGetCurrentProcessWin32Process() + 224;
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
      __fastfail(3u);
    *v13 = v15;
    *(_QWORD *)(a1 + 536) = v14;
    *(_QWORD *)(v15 + 8) = v13;
    *(_QWORD *)v14 = v13;
    *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process();
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v19 = (*(_BYTE *)(a1 + 102) & 1) == 0;
      v20 = (char *)v26;
      *(_QWORD *)(a1 + 72) = v26;
      if ( v19 )
        *(_QWORD *)(a1 + 80) = &v20[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      else
        *(_QWORD *)(a1 + 80) = v20;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    return 0LL;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v6 = (struct _ERESOURCE *)v25;
  v10 = 2;
LABEL_14:
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v6);
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion();
  }
  return v10;
}
