/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0022408 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0022528 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F5FD4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024BE90 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0276DBC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  XDCOBJ *v6; // rdi
  DC **v7; // r14
  int v8; // ebx
  int v9; // ebp
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // edx
  int v13; // r8d
  bool v14; // zf
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KTHREAD *v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KTHREAD *v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rbx
  DC *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _KTHREAD *v49; // rbx
  __int64 *v50; // rax
  __int64 v51; // rax
  int v52; // r8d
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  int v56; // ebp
  int v57; // edx
  DC *v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rdx
  int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // edi
  __int64 v67; // rcx
  int v68; // r8d
  __int64 v69; // rax
  DC *v70; // rcx
  DC *v71; // r8
  __int64 v72; // rbx
  unsigned int v73; // eax
  unsigned int v74; // edi
  DC *v75; // rax
  __int64 v77; // rbx
  __int64 v78; // rcx
  int v79; // edx
  __int64 v80; // rax
  DC *v81; // rcx
  DC *v82; // r8
  __int64 v83; // rbx
  unsigned int v84; // eax
  unsigned int v85; // edi
  char *v86; // rbx
  int v87; // edx
  DC *v88; // rcx
  __int64 v89; // rcx
  int v90; // eax
  int v91; // eax
  _QWORD *v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  int v95; // eax
  signed __int32 v96[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v97; // [rsp+60h] [rbp+8h] BYREF
  __int64 v98; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = **(_QWORD **)a2;
  *((_QWORD *)this + 21) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 16, (HSURF *)this + 15, (unsigned int *)this + 36)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 20, (HSURF *)this + 19, 0LL) )
  {
    return 0LL;
  }
  v6 = (DEVLOCKBLTOBJ *)((char *)this + 96);
  v7 = (DC **)((char *)this + 80);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v8 = 1;
  v9 = 0;
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0
    || *(_QWORD *)a2 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v9 = 1;
    }
    v10 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      goto LABEL_25;
    v11 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v97 = *(_QWORD *)(v10 + 48);
      v8 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v97);
LABEL_25:
      if ( *(_QWORD *)a2 )
      {
        v98 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v8 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v98);
      }
      goto LABEL_27;
    }
    v12 = *(_DWORD *)(v11 + 36);
    v13 = *(_DWORD *)(v10 + 36);
    if ( ((v13 ^ v12) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 8LL) & 0x4000) != 0 && (v12 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 80) + 8LL) & 0x4000) == 0 )
      {
LABEL_23:
        v8 = 0;
        goto LABEL_24;
      }
      v14 = (*(_DWORD *)(v10 + 36) & 0x8000) == 0;
    }
    else
    {
      if ( (v13 & 0x200) == 0 || (v12 & 0x200) == 0 || (v13 & 0x8000) == 0 )
        goto LABEL_23;
      v14 = (v12 & 0x8000) == 0;
    }
    if ( !v14 )
    {
LABEL_22:
      v8 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_27:
  v15 = 2;
  v16 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v16 & 0x8000) == 0 || !v8 )
    {
      *((_QWORD *)this + 1) = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      if ( v9 && *((_QWORD *)this + 1) == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v9 = 0;
      }
      GreAcquireSemaphore(*((_QWORD *)this + 1));
      v17 = *((_QWORD *)this + 1);
      v18 = 2LL;
      if ( v17 != ghsemGreLock )
        v18 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v17, v18);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21, v22) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v25 = *ThreadWin32Thread;
          if ( v25 )
          {
            *(_QWORD *)(v25 + 320) = 0LL;
            *(_QWORD *)(v25 + 312) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 96);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
    {
      v26 = (*((_DWORD *)this + 18) & 0x1000) == 0;
LABEL_81:
      if ( !v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 18) &= ~1u;
      if ( v9 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  v27 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v28 = *(_DWORD *)(v27 + 36);
    if ( (v28 & 0x200) != 0 )
    {
      if ( (v28 & 0x8000) == 0 || !v8 )
      {
        *(_QWORD *)this = *(_QWORD *)(v27 + 64);
        *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        if ( v9 && *(_QWORD *)this == ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
          v9 = 0;
        }
        GreAcquireSemaphore(*(_QWORD *)this);
        if ( *(_QWORD *)this != ghsemGreLock )
          v15 = 11;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
        v29 = *((_DWORD *)this + 18);
        if ( (v29 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
          *((_DWORD *)this + 18) = v29 | 0x200;
      }
      if ( !(unsigned int)GreGetLockCount() )
      {
        *((_DWORD *)this + 18) |= 0x1000u;
        v34 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v31, v30, v32, v33) )
        {
          v35 = (__int64 *)PsGetThreadWin32Thread(v34);
          if ( v35 )
          {
            v36 = *v35;
            if ( v36 )
            {
              *(_QWORD *)(v36 + 320) = 0LL;
              *(_QWORD *)(v36 + 312) = 0LL;
            }
          }
        }
        GreIncLockCount();
        GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
      }
      v27 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
      {
        v26 = (*((_DWORD *)this + 18) & 0x1000) == 0;
        goto LABEL_81;
      }
    }
    if ( v27 && (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(v27 + 36) & 0x80000) != 0 )
      goto LABEL_80;
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
    || v27
    && ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(v27 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v27 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v27)
    || ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
LABEL_80:
    v26 = *((_QWORD *)this + 2) == 0LL;
    goto LABEL_81;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_111;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 15) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v41 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37, v39, v40) )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v41);
        if ( v42 )
        {
          v43 = *v42;
          if ( *v42 )
          {
            *(_QWORD *)(v43 + 312) = v7;
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
            {
              *(_BYTE *)(v43 + 328) = 1;
              *(_QWORD *)(*(_QWORD *)a2 + 2408LL) = 0LL;
              GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              *(_DWORD *)(v43 + 336) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v44 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v44 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 19) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v44);
      v49 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v46, v45, v47, v48) )
      {
        v50 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v50 )
        {
          v51 = *v50;
          if ( v51 )
            *(_QWORD *)(v51 + 320) = a3;
        }
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_111:
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v52 = *((_DWORD *)this + 18);
  if ( (v52 & 0x1000) != 0 )
  {
    if ( *(_QWORD *)a3 )
      v53 = *(_QWORD *)(*(_QWORD *)a3 + 512LL);
    else
      v53 = 0LL;
    v54 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      v55 = *(_QWORD *)(v54 + 512);
    else
      v55 = 0LL;
    v56 = 0;
    if ( !v53 || !v55 || v53 == v55 )
    {
      if ( !v54 )
        goto LABEL_228;
      v91 = DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1);
      v92 = *(_QWORD **)a2;
      if ( !v91 )
        v56 = 1;
      if ( !v92 || *v92 != **(_QWORD **)a3 )
      {
LABEL_228:
        if ( !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v52, 0) )
          goto LABEL_167;
      }
LABEL_229:
      if ( v56
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 32LL) & 0x8000) != 0
        && *(_QWORD *)(*(_QWORD *)a2 + 512LL)
        && *(_QWORD *)this )
      {
        goto LABEL_167;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 32LL) & 0x8000) != 0
        && *(_QWORD *)(*(_QWORD *)a3 + 512LL)
        && *((_QWORD *)this + 1) )
      {
        *((_QWORD *)this + 8) = a3;
        *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 32LL);
        if ( !bCopySurface(
                (DEVLOCKBLTOBJ *)((char *)this + 40),
                (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 512LL) + 24LL)) )
        {
          if ( *((_QWORD *)this + 5) )
          {
            v93 = *((_QWORD *)this + 5);
            if ( v93 )
              DEC_SHARE_REF_CNT(v93);
            bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
            *((_QWORD *)this + 5) = 0LL;
          }
          *((_QWORD *)this + 7) = 0LL;
          *((_QWORD *)this + 8) = 0LL;
          goto LABEL_167;
        }
        hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL);
        EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
        GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
        v94 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 1) = 0LL;
        *((_QWORD *)this + 4) = 0LL;
        if ( v94 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v94);
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
          *((_QWORD *)this + 2) = 0LL;
        }
      }
      goto LABEL_244;
    }
    if ( v53 < v55 )
    {
      *((_DWORD *)this + 18) = v52 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock(v6, **(HDC **)a3);
        if ( *(_QWORD *)v6 )
        {
          v57 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v57 & 1) != 0 && (v57 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
          {
            *(_DWORD *)(*(_QWORD *)v6 + 36LL) |= 0x4000u;
            v58 = *(DC **)v6;
            *((_QWORD *)v58 + 64) = *((_QWORD *)this + 14);
            DC::vInheritSurfaceDpiScale(v58);
            *((_DWORD *)this + 18) |= 0x20u;
          }
          if ( *(_QWORD *)v6 )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v59 = *(_QWORD *)(*(_QWORD *)v6 + 512LL);
              if ( v59 )
              {
                v60 = SURFACE::Map(v59, this, 0LL);
                if ( v60 == 2 )
                {
                  v56 = 1;
                  *(_DWORD *)(*(_QWORD *)v6 + 44LL) |= 1u;
                }
                else if ( v60 == 1 )
                {
                  *((_DWORD *)this + 18) |= 0x80u;
                }
              }
            }
          }
          goto LABEL_141;
        }
        v56 = 1;
      }
      *(_QWORD *)v6 = 0LL;
LABEL_141:
      _InterlockedOr(v96, 0);
      v61 = *(__int64 **)a2;
      v62 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v63 = v61[6];
        v64 = *v61;
        LOBYTE(v61) = 1;
        v65 = HmgLockEx(v64, v61, *((unsigned int *)this + 23));
        *v7 = (DC *)v65;
        if ( v65 )
        {
          if ( (!*((_DWORD *)this + 23)
             || (*(_DWORD *)(*(_QWORD *)(v65 + 48) + 32LL) & 0x8000) != 0
             && (v66 = *(_DWORD *)(v65 + 2544), v66 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
            && (unsigned int)XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 80)) )
          {
            if ( (*((_DWORD *)*v7 + 134) & 4) != 0 )
              DC::vMarkTransformDirty(*v7);
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)*v7 + 3);
            *v7 = 0LL;
          }
        }
        else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        {
          PsGetWin32KFilterSet();
        }
        v67 = *(_QWORD *)(v63 + 1416);
        if ( *v7 )
        {
          v68 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v68 & 1) != 0 && (v68 & 0x4000) == 0 && v67 && !*((_QWORD *)this + 15) )
          {
            *((_DWORD *)*v7 + 9) |= 0x4000u;
            v69 = SURFOBJ_TO_SURFACE_NOT_NULL(v67);
            v70 = *v7;
            *((_QWORD *)v70 + 64) = v69;
            DC::vInheritSurfaceDpiScale(v70);
            *((_DWORD *)this + 18) |= 0x10u;
          }
          v71 = *v7;
          if ( *v7 )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v72 = *((_QWORD *)v71 + 64);
              if ( v72 )
              {
                v73 = SURFACE::Map(*((_QWORD *)v71 + 64), this, v71);
                v74 = v73;
                if ( v73 <= 1 )
                {
                  if ( (*(_DWORD *)(v72 + 112) & 0x800) != 0
                    && *(_QWORD *)(v72 + 256)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v72 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                  {
                    *((_DWORD *)this + 18) |= 0x2000u;
                  }
                  if ( v74 == 1 )
                    *((_DWORD *)this + 18) |= 0x40u;
                }
                else if ( v73 == 2 )
                {
                  v75 = *v7;
LABEL_166:
                  *((_DWORD *)v75 + 11) |= 1u;
LABEL_167:
                  *((_DWORD *)this + 18) &= ~1u;
                  return 0LL;
                }
              }
            }
          }
          goto LABEL_229;
        }
        v62 = 0;
      }
      *v7 = 0LL;
      goto LABEL_180;
    }
    if ( (*(_DWORD *)(v54 + 36) & 0x200) != 0 )
    {
      v77 = *(_QWORD *)(v54 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v54);
      v78 = *(_QWORD *)(v77 + 1416);
      if ( *v7 )
      {
        v79 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v79 & 1) != 0 && (v79 & 0x4000) == 0 && v78 && !*((_QWORD *)this + 15) )
        {
          *((_DWORD *)*v7 + 9) |= 0x4000u;
          v80 = SURFOBJ_TO_SURFACE_NOT_NULL(v78);
          v81 = *v7;
          *((_QWORD *)v81 + 64) = v80;
          DC::vInheritSurfaceDpiScale(v81);
          *((_DWORD *)this + 18) |= 0x10u;
        }
        v82 = *v7;
        if ( *v7 )
        {
          if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
          {
            v83 = *((_QWORD *)v82 + 64);
            if ( v83 )
            {
              v84 = SURFACE::Map(*((_QWORD *)v82 + 64), this, v82);
              v85 = v84;
              if ( v84 <= 1 )
              {
                if ( (*(_DWORD *)(v83 + 112) & 0x800) != 0
                  && *(_QWORD *)(v83 + 256)
                  && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                {
                  *((_DWORD *)this + 18) |= 0x400u;
                }
                if ( (*(_DWORD *)(v83 + 112) & 0x10) != 0
                  && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
                {
                  *((_DWORD *)this + 18) |= 0x2000u;
                }
                if ( v85 == 1 )
                  *((_DWORD *)this + 18) |= 0x40u;
              }
              else if ( v84 == 2 )
              {
                v56 = 1;
                *((_DWORD *)*v7 + 11) |= 1u;
              }
            }
          }
        }
        goto LABEL_207;
      }
      v56 = 1;
    }
    *v7 = 0LL;
LABEL_207:
    _InterlockedOr(v96, 0);
    v62 = 1;
    v86 = (char *)this + 96;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 96), **(HDC **)a3);
      if ( *(_QWORD *)v86 )
      {
        v87 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
        if ( (v87 & 1) != 0 && (v87 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
        {
          *(_DWORD *)(*(_QWORD *)v86 + 36LL) |= 0x4000u;
          v88 = *(DC **)v86;
          *((_QWORD *)v88 + 64) = *((_QWORD *)this + 14);
          DC::vInheritSurfaceDpiScale(v88);
          *((_DWORD *)this + 18) |= 0x20u;
        }
        if ( *(_QWORD *)v86 )
        {
          if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
          {
            v89 = *(_QWORD *)(*(_QWORD *)v86 + 512LL);
            if ( v89 )
            {
              v90 = SURFACE::Map(v89, this, 0LL);
              if ( v90 == 2 )
              {
                v75 = *(DC **)v86;
                goto LABEL_166;
              }
              if ( v90 == 1 )
                *((_DWORD *)this + 18) |= 0x80u;
            }
          }
        }
        goto LABEL_229;
      }
      v62 = 0;
    }
    *(_QWORD *)v86 = 0LL;
LABEL_180:
    if ( !v62 )
      goto LABEL_167;
    goto LABEL_229;
  }
LABEL_244:
  v95 = *((_DWORD *)this + 18);
  if ( (v95 & 0x1000) != 0 || (v95 & 0x800000) != 0 )
  {
    if ( *(_QWORD *)a2 )
      *(_DWORD *)(*(_QWORD *)a2 + 40LL) |= 2u;
    if ( *(_QWORD *)a3 )
      *(_DWORD *)(*(_QWORD *)a3 + 40LL) |= 2u;
  }
  return 1LL;
}
