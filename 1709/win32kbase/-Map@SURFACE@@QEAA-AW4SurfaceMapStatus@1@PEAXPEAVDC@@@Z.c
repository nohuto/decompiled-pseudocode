/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00200B0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001F640 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C001E8CC (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00205FC (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  int v4; // eax
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // edi
  int v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *v19; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  bool v21; // zf
  char *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  HSEMAPHORE v28; // [rsp+60h] [rbp+8h] BYREF
  void *v29; // [rsp+78h] [rbp+20h] BYREF

  v29 = 0LL;
  if ( !*(_QWORD *)(a1 + 256) && (*(_DWORD *)(a1 + 116) & 1) == 0 || (*(_WORD *)(a1 + 102) & 0x800) == 0 )
    return 0LL;
  v2 = (unsigned int *)(a1 + 280);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 320) + 64LL), UserRequest, 0, 0, 0LL);
  if ( *(_DWORD *)(a1 + 280) )
  {
    do
    {
      if ( *v2 == v3 )
        break;
      v27 = *(_QWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 284);
      KeReleaseMutex((PRKMUTEX)(v27 + 64), 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 320), UserRequest, 0, 0, 0LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 320) + 64LL), UserRequest, 0, 0, 0LL);
    }
    while ( *v2 );
  }
  v4 = ++*(_DWORD *)(a1 + 288);
  *v2 = v3;
  if ( v4 > *(_DWORD *)(a1 + 292) )
    *(_DWORD *)(a1 + 292) = v4;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 320) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 320) + 64LL), UserRequest, 0, 0, 0LL);
  v5 = (struct _ERESOURCE *)ghsemMapRot;
  v28 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 == PsGetCurrentProcessWin32Process() )
  {
    if ( v5 )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v7, (unsigned int)&LockRelease, v8, (_DWORD)v5, (__int64)L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v5);
      PsLeavePriorityRegion();
      v5 = 0LL;
    }
    v9 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 272) )
  {
    v23 = (_QWORD *)(a1 + 456);
    v24 = *(_QWORD *)(a1 + 456);
    if ( *(_QWORD *)(v24 + 8) != a1 + 456 || (v25 = *(_QWORD **)(a1 + 464), (_QWORD *)*v25 != v23) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    *(_QWORD *)(a1 + 464) = a1 + 456;
    *v23 = v23;
    v26 = *(_QWORD *)(a1 + 72);
    if ( v26 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 272), v26);
  }
  v11 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v11 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  if ( v11
    || (v18 = *(_DWORD *)(a1 + 64),
        v19 = *(void **)(a1 + 256),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(),
        MapKernelSectionForUserMapping(v19, CurrentProcess, v18, &v29),
        v29) )
  {
    v12 = (_QWORD *)(a1 + 456);
    v13 = PsGetCurrentProcessWin32Process() + 224;
    v17 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
      __fastfail(3u);
    *v12 = v17;
    *(_QWORD *)(a1 + 464) = v13;
    *(_QWORD *)(v17 + 8) = v12;
    *(_QWORD *)v13 = v12;
    *(_QWORD *)(a1 + 264) = W32GetThreadWin32Thread(KeGetCurrentThread(), v14, v15, v16);
    *(_QWORD *)(a1 + 272) = PsGetCurrentProcessWin32Process();
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v21 = (*(_BYTE *)(a1 + 102) & 1) == 0;
      v22 = (char *)v29;
      *(_QWORD *)(a1 + 72) = v29;
      if ( v21 )
        *(_QWORD *)(a1 + 80) = &v22[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      else
        *(_QWORD *)(a1 + 80) = v22;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    return 0LL;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 320) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 280));
  v5 = (struct _ERESOURCE *)v28;
  v9 = 2;
LABEL_14:
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v5);
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion();
  }
  return v9;
}
