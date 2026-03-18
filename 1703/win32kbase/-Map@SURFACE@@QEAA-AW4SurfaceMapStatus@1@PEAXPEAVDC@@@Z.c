/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C002C7B0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C002B7C0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C002CB1C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C002CCB8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD30 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C00891C4 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vLockSimple@W32PIDLOCK@@QEAAXK@Z @ 0x1C00EBA8C (-vLockSimple@W32PIDLOCK@@QEAAXK@Z.c)
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00EBB30 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rbx
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // rdx
  void *v17; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)a1) && (*(_WORD *)(a1 + 102) & 0x800) != 0 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    W32PIDLOCK::vLockSimple((W32PIDLOCK *)(a1 + 280), CurrentProcessId & 0xFFFFFFFC);
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(a1 + 280));
    v18 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    v3 = *(_QWORD *)(a1 + 272);
    if ( v3 == PsGetCurrentProcessWin32Process() )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      v4 = 1;
LABEL_15:
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      return v4;
    }
    if ( *(_QWORD *)(a1 + 272) )
    {
      v5 = (_QWORD *)(a1 + 456);
      v6 = *(_QWORD *)(a1 + 456);
      v7 = *(_QWORD **)(a1 + 464);
      if ( *(_QWORD *)(v6 + 8) != a1 + 456 || (_QWORD *)*v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)(a1 + 464) = a1 + 456;
      *v5 = v5;
      if ( *(_QWORD *)(a1 + 72) )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 272));
    }
    v8 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v8 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
    if ( !v8 )
    {
      v9 = *(_DWORD *)(a1 + 64);
      v10 = *(void **)(a1 + 256);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
      MapKernelSectionForUserMapping(v10, CurrentProcess, v9, &v17);
      if ( !v17 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v18);
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(a1 + 280));
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 280));
        v4 = 2;
        goto LABEL_15;
      }
    }
    v13 = (_QWORD *)(a1 + 456);
    v14 = PsGetCurrentProcessWin32Process() + 224;
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
      __fastfail(3u);
    *v13 = v15;
    *(_QWORD *)(a1 + 464) = v14;
    *(_QWORD *)(v15 + 8) = v13;
    *(_QWORD *)v14 = v13;
    *(_QWORD *)(a1 + 264) = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(a1 + 272) = PsGetCurrentProcessWin32Process();
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v16 = (char *)v17;
      *(_QWORD *)(a1 + 72) = v17;
      if ( (*(_BYTE *)(a1 + 102) & 1) != 0 )
        *(_QWORD *)(a1 + 80) = v16;
      else
        *(_QWORD *)(a1 + 80) = &v16[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
  }
  return 0LL;
}
