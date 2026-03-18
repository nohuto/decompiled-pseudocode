/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0021E50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C0022A90 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  char v13; // si
  DC *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  SURFACE *v19; // rdi
  __int64 v20; // rbx
  DC *v21; // rcx
  __int64 v22; // rbx
  char v23; // r12
  __int64 v24; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  DCVISRGNSHARELOCK *v29; // rcx
  _BYTE v30[56]; // [rsp+30h] [rbp-38h] BYREF
  char v31; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  if ( gbDisableTrappedAcRendering )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( *(_BYTE *)(ThreadWin32Thread + 330) )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
  v11 = *((_QWORD *)*a1 + 64);
  if ( !v11
    || (v12 = *(_QWORD *)(v11 + 576), v12 == PsGetCurrentProcess()) && *(int *)(v11 + 112) >= 0
    || (v14 = *a1, *((_QWORD *)*a1 + 61))
    && *((_DWORD *)v14 + 126)
    && !*((_DWORD *)v14 + 127)
    && (v22 = *((_QWORD *)v14 + 62), PsGetCurrentProcess() == v22) )
  {
    v13 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v23 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v23 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v30);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
      if ( CompatibleBitmapInternal )
      {
        LOBYTE(v24) = 5;
        v27 = HmgShareLock(**((_QWORD **)*a1 + 64), v24);
        LOBYTE(v28) = 5;
        v19 = (SURFACE *)v27;
        v20 = HmgShareLock(CompatibleBitmapInternal, v28);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v29);
        if ( v23 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        goto LABEL_15;
      }
      DC::vClearRendering(*a1);
      if ( v23 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v26);
    }
    else
    {
      v16 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
      if ( v16 )
      {
        LOBYTE(v15) = 5;
        v17 = HmgShareLock(**((_QWORD **)*a1 + 64), v15);
        LOBYTE(v18) = 5;
        v19 = (SURFACE *)v17;
        v20 = HmgShareLock(v16, v18);
LABEL_15:
        *a2 = *(HSURF *)v19;
        *a3 = *(HSURF *)v20;
        INC_SHARE_REF_CNT(v19);
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v19) )
          ++*(_DWORD *)(v20 + 332);
        *((_QWORD *)*a1 + 65) = *a2;
        v21 = *a1;
        *((_QWORD *)v21 + 64) = v20;
        DC::vInheritSurfaceDpiScale(v21);
        INC_SHARE_REF_CNT(v20);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v13 = 1;
        DEC_SHARE_REF_CNT(v20);
        DEC_SHARE_REF_CNT(v19);
        goto LABEL_10;
      }
    }
    v13 = 0;
  }
LABEL_10:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  return v13;
}
