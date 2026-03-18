/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290
 * Callers:
 *     TrapAppContainerRenderingWrap @ 0x1C0071260 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  DC *v12; // rbx
  __int64 v13; // rbx
  DC *v14; // rcx
  char v15; // bp
  __int64 v16; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  SURFACE *v22; // rdi
  __int64 v23; // rbx
  DCVISRGNSHARELOCK *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  DC *v29; // rcx
  __int64 v30; // rdx
  _BYTE v32[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  __int64 v34[7]; // [rsp+40h] [rbp-38h] BYREF
  char v35; // [rsp+88h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    if ( !gbDisableTrappedAcRendering )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 330) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v35);
        v10 = *((_QWORD *)*a1 + 64);
        if ( !v10
          || (v11 = *(_QWORD *)(v10 + 576), v11 == PsGetCurrentProcess(v9)) && *(int *)(v10 + 112) >= 0
          || (v12 = *a1, *((_QWORD *)*a1 + 61))
          && *((_DWORD *)v12 + 126)
          && !*((_DWORD *)v12 + 127)
          && (v13 = *((_QWORD *)v12 + 62), PsGetCurrentProcess(v9) == v13) )
        {
          LOBYTE(v19) = 1;
          goto LABEL_32;
        }
        v14 = *a1;
        v34[0] = 0LL;
        v33 = 0LL;
        if ( (*((_DWORD *)v14 + 9) & 0x200) != 0 )
        {
          v15 = 0;
          if ( !(unsigned int)GreGetLockCount()
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
          {
            GreAcquireSemaphore(ghsemGreLock);
            v15 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v32);
          DC::vSetRendering(*a1);
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
          if ( !CompatibleBitmapInternal )
          {
            DC::vClearRendering(*a1);
            if ( v15 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v18);
            LOBYTE(v19) = 0;
            goto LABEL_30;
          }
          LOBYTE(v16) = 5;
          v20 = HmgShareLock(**((_QWORD **)*a1 + 64), v16);
          LOBYTE(v21) = 5;
          v22 = (SURFACE *)v20;
          v34[0] = v20;
          v23 = HmgShareLock(CompatibleBitmapInternal, v21);
          v33 = v23;
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v24);
          if ( v15 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
        }
        else
        {
          v19 = GreCreateCompatibleBitmapInternal(*(HDC *)v14, 0LL, 0LL);
          if ( !v19 )
          {
LABEL_30:
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v33);
            EPALOBJ::~EPALOBJ((EPALOBJ *)v34);
LABEL_32:
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
            return v19;
          }
          LOBYTE(v26) = 5;
          v27 = HmgShareLock(**((_QWORD **)*a1 + 64), v26);
          LOBYTE(v28) = 5;
          v22 = (SURFACE *)v27;
          v34[0] = v27;
          v23 = HmgShareLock(v19, v28);
          v33 = v23;
        }
        *a2 = *(HSURF *)v22;
        *a3 = *(HSURF *)v23;
        INC_SHARE_REF_CNT(v22, v25);
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v22) )
          ++*(_DWORD *)(v23 + 332);
        *((_QWORD *)*a1 + 65) = *a2;
        v29 = *a1;
        *((_QWORD *)v29 + 64) = v23;
        DC::vInheritSurfaceDpiScale(v29);
        INC_SHARE_REF_CNT(v23, v30);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        LOBYTE(v19) = 1;
        goto LABEL_30;
      }
    }
  }
  return 1;
}
