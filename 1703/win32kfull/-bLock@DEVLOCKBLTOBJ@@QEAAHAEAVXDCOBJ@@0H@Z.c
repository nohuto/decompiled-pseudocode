/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0071C6C (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00730B0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00731EC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00732F0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C024A588 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v6; // ebx
  DC **v7; // r13
  int v8; // edi
  BOOL v9; // r10d
  int v10; // r11d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rax
  BOOL v25; // r8d
  __int64 *v26; // rax
  __int64 v27; // rbx
  DC *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  BOOL v31; // eax
  unsigned __int64 v32; // r8
  int v33; // r9d
  unsigned __int64 v34; // rdx
  int v35; // edi
  int v36; // edi
  __int64 v37; // rcx
  int v38; // edx
  DC *v39; // rcx
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rbx
  __int64 v43; // rcx
  int v44; // r8d
  __int64 v45; // rax
  DC *v46; // rcx
  DC *v47; // rax
  _QWORD *v49; // rcx
  int v50; // edi
  __int64 v51; // rbx
  __int64 v52; // rax
  int v53; // edi
  __int64 v54; // rcx
  int v55; // r8d
  __int64 v56; // rax
  DC *v57; // rcx
  __int64 *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ebx
  DC *v62; // rcx
  __int64 v63; // rcx
  int v64; // edx
  DC *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // eax
  int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // rdx
  signed __int32 v72[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v73; // [rsp+60h] [rbp+8h] BYREF
  __int64 v74; // [rsp+68h] [rbp+10h] BYREF

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
  if ( TrapAppContainerRenderingWorker((DC **)a2, (HSURF *)this + 16, (HSURF *)this + 15, (unsigned int *)this + 36)
    && TrapAppContainerRenderingWorker((DC **)a3, (HSURF *)this + 20, (HSURF *)this + 19, 0LL) )
  {
    v6 = 1;
    v7 = (DC **)((char *)this + 80);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    v8 = 0;
    if ( (!DWMSPRITEREF::bValid(a3) || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
      && (!DWMSPRITEREF::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
    {
      goto LABEL_28;
    }
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v8 = 1;
    }
    v9 = DWMSPRITEREF::bValid(a3);
    if ( !v9 || !DWMSPRITEREF::bValid(a2) )
    {
LABEL_24:
      if ( v9 )
      {
        v73 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
        v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v73);
      }
      if ( DWMSPRITEREF::bValid(a2) )
      {
        v74 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v74);
      }
LABEL_28:
      v14 = 2;
      v15 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
      if ( (v15 & 0x200) != 0 )
      {
        if ( (v15 & 0x8000) == 0 || !v6 )
        {
          *((_QWORD *)this + 1) = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
          *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
          if ( v8 && *((_QWORD *)this + 1) == ghsemGreLock )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
            v8 = 0;
          }
          GreAcquireSemaphore(*((_QWORD *)this + 1));
          v16 = *((_QWORD *)this + 1);
          v17 = 2LL;
          if ( v16 != ghsemGreLock )
            v17 = 11LL;
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v16, v17);
        }
        if ( (!DWMSPRITEREF::bValid(a2) || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
          && !(unsigned int)GreGetLockCount() )
        {
          *((_DWORD *)this + 18) |= 0x1000u;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            v19 = *ThreadWin32Thread;
            if ( v19 )
            {
              *(_QWORD *)(v19 + 320) = 0LL;
              *(_QWORD *)(v19 + 312) = 0LL;
            }
          }
          GreIncLockCount();
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
        }
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
        {
          v20 = (*((_DWORD *)this + 18) & 0x1000) == 0;
LABEL_80:
          if ( !v20 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
          *((_DWORD *)this + 18) &= ~1u;
          if ( v8 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
          return 0LL;
        }
      }
      if ( DWMSPRITEREF::bValid(a2) )
      {
        v21 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v21 & 0x200) != 0 )
        {
          if ( (v21 & 0x8000) == 0 || !v6 )
          {
            *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
            *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
            if ( v8 && *(_QWORD *)this == ghsemGreLock )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
              v8 = 0;
            }
            GreAcquireSemaphore(*(_QWORD *)this);
            if ( *(_QWORD *)this != ghsemGreLock )
              v14 = 11;
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v14);
            v22 = *((_DWORD *)this + 18);
            if ( (v22 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
              *((_DWORD *)this + 18) = v22 | 0x200;
          }
          if ( !(unsigned int)GreGetLockCount() )
          {
            *((_DWORD *)this + 18) |= 0x1000u;
            v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v23 )
            {
              v24 = *v23;
              if ( v24 )
              {
                *(_QWORD *)(v24 + 320) = 0LL;
                *(_QWORD *)(v24 + 312) = 0LL;
              }
            }
            GreIncLockCount();
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          }
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
          {
            v20 = (*((_DWORD *)this + 18) & 0x1000) == 0;
            goto LABEL_80;
          }
        }
      }
      v25 = DWMSPRITEREF::bValid(a2);
      if ( v25 && (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0
        || (*((_DWORD *)this + 18) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0
        || v25
        && ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0)
        && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0
        && !DC::bCompute(*(DC **)a2)
        || ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
        && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
        && !DC::bCompute(*(DC **)a3) )
      {
        v20 = *((_QWORD *)this + 2) == 0LL;
        goto LABEL_80;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
          goto LABEL_106;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
        {
          if ( *((_QWORD *)this + 15) )
            UserIsCurrentProcessImmersiveAppContainer();
          else
            DC::vSetRendering(*(DC **)a2);
          v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v26 )
          {
            v27 = *v26;
            if ( *v26 )
            {
              *(_QWORD *)(v27 + 312) = v7;
              if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
              {
                *(_BYTE *)(v27 + 328) = 1;
                *(_QWORD *)(*(_QWORD *)a2 + 2408LL) = 0LL;
                GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
                *(_DWORD *)(v27 + 336) = giVisRgnUniqueness;
                EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
                GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
              }
            }
          }
        }
        v28 = *(DC **)a3;
        if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v28 + 9) & 0x200) != 0 )
        {
          if ( *((_QWORD *)this + 19) )
            UserIsCurrentProcessImmersiveAppContainer();
          else
            DC::vSetRendering(v28);
          v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v29 )
          {
            v30 = *v29;
            if ( v30 )
              *(_QWORD *)(v30 + 320) = a3;
          }
        }
      }
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
LABEL_106:
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
        return 1LL;
      DWMSPRITEREF::bValid(a3);
      v31 = DWMSPRITEREF::bValid(a2);
      if ( v31 )
        v34 = *(_QWORD *)(*(_QWORD *)a2 + 512LL);
      else
        v34 = 0LL;
      v35 = 0;
      if ( !v32 || !v34 || v32 == v34 )
      {
        if ( v31 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
          v35 = 1;
        if ( (!DWMSPRITEREF::bValid(a2) || **(_QWORD **)a2 != **(_QWORD **)a3)
          && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v69, 0) )
        {
          goto LABEL_137;
        }
LABEL_195:
        if ( v35
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 32LL) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)a2 + 512LL)
          && *(_QWORD *)this )
        {
          goto LABEL_137;
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
              v70 = *((_QWORD *)this + 5);
              if ( v70 )
                DEC_SHARE_REF_CNT(v70);
              bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
              *((_QWORD *)this + 5) = 0LL;
            }
            *((_QWORD *)this + 7) = 0LL;
            *((_QWORD *)this + 8) = 0LL;
            goto LABEL_137;
          }
          hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL);
          EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
          v71 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 1) = 0LL;
          *((_QWORD *)this + 4) = 0LL;
          if ( v71 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v71);
            GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
            *((_QWORD *)this + 2) = 0LL;
          }
        }
        return 1LL;
      }
      if ( v32 < v34 )
      {
        *((_DWORD *)this + 18) = v33 | 0x8000;
        v36 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 96), **(HDC **)a3);
          v37 = *((_QWORD *)this + 12);
          if ( v37 )
          {
            v38 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v38 & 1) != 0 && (v38 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
            {
              *(_DWORD *)(v37 + 36) |= 0x4000u;
              v39 = (DC *)*((_QWORD *)this + 12);
              *((_QWORD *)v39 + 64) = *((_QWORD *)this + 14);
              DC::vInheritSurfaceDpiScale(v39);
              *((_DWORD *)this + 18) |= 0x20u;
            }
            if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
            {
              v36 = 0;
              *(_DWORD *)(*((_QWORD *)this + 12) + 44LL) |= 1u;
            }
            goto LABEL_127;
          }
          v36 = 0;
        }
        *((_QWORD *)this + 12) = 0LL;
LABEL_127:
        v35 = v36 ^ 1;
        _InterlockedOr(v72, 0);
        v40 = *(_QWORD *)a2;
        v41 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
        {
          v42 = *(_QWORD *)(v40 + 48);
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v40);
          v43 = *(_QWORD *)(v42 + 1416);
          if ( *v7 )
          {
            v44 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
            if ( (v44 & 1) != 0 && (v44 & 0x4000) == 0 && v43 && !*((_QWORD *)this + 15) )
            {
              *((_DWORD *)*v7 + 9) |= 0x4000u;
              v45 = SURFOBJ_TO_SURFACE_NOT_NULL(v43);
              v46 = *v7;
              *((_QWORD *)v46 + 64) = v45;
              DC::vInheritSurfaceDpiScale(v46);
              *((_DWORD *)this + 18) |= 0x10u;
            }
            if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
            {
              v47 = *v7;
LABEL_136:
              *((_DWORD *)v47 + 11) |= 1u;
LABEL_137:
              *((_DWORD *)this + 18) &= ~1u;
              return 0LL;
            }
            goto LABEL_195;
          }
          v41 = 0;
        }
        *v7 = 0LL;
        goto LABEL_141;
      }
      v49 = *(_QWORD **)a2;
      v50 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v51 = v49[6];
        v52 = HmgLockEx(*v49, 1LL, *((unsigned int *)this + 23));
        *v7 = (DC *)v52;
        if ( v52 )
        {
          if ( (!*((_DWORD *)this + 23)
             || (*(_DWORD *)(*(_QWORD *)(v52 + 48) + 32LL) & 0x8000) != 0
             && (v53 = *(_DWORD *)(v52 + 2544), v53 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
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
        v54 = *(_QWORD *)(v51 + 1416);
        if ( *v7 )
        {
          v55 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v55 & 1) != 0 && (v55 & 0x4000) == 0 && v54 && !*((_QWORD *)this + 15) )
          {
            *((_DWORD *)*v7 + 9) |= 0x4000u;
            v56 = SURFOBJ_TO_SURFACE_NOT_NULL(v54);
            v57 = *v7;
            *((_QWORD *)v57 + 64) = v56;
            DC::vInheritSurfaceDpiScale(v57);
            *((_DWORD *)this + 18) |= 0x10u;
          }
          if ( (unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
          {
            v50 = 1;
          }
          else
          {
            v50 = 0;
            *((_DWORD *)*v7 + 11) |= 1u;
          }
          goto LABEL_164;
        }
        v50 = 0;
      }
      *v7 = 0LL;
LABEL_164:
      v35 = v50 ^ 1;
      _InterlockedOr(v72, 0);
      v58 = *(__int64 **)a3;
      v41 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        v59 = *v58;
        LOBYTE(v58) = 1;
        v60 = HmgLockEx(v59, v58, *((unsigned int *)this + 27));
        *((_QWORD *)this + 12) = v60;
        if ( v60 )
        {
          if ( (!*((_DWORD *)this + 27)
             || (*(_DWORD *)(*(_QWORD *)(v60 + 48) + 32LL) & 0x8000) != 0
             && (v61 = *(_DWORD *)(v60 + 2544), v61 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
            && (unsigned int)XDCOBJ::bSaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 96)) )
          {
            v62 = (DC *)*((_QWORD *)this + 12);
            if ( (*((_DWORD *)v62 + 134) & 4) != 0 )
              DC::vMarkTransformDirty(v62);
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 12LL));
            *((_QWORD *)this + 12) = 0LL;
          }
        }
        v63 = *((_QWORD *)this + 12);
        if ( v63 )
        {
          v64 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v64 & 1) != 0 && (v64 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 19) )
          {
            *(_DWORD *)(v63 + 36) |= 0x4000u;
            v65 = (DC *)*((_QWORD *)this + 12);
            *((_QWORD *)v65 + 64) = *((_QWORD *)this + 14);
            DC::vInheritSurfaceDpiScale(v65);
            *((_DWORD *)this + 18) |= 0x20u;
          }
          v66 = *((_QWORD *)this + 12);
          if ( v66 )
          {
            if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
            {
              v67 = *(_QWORD *)(v66 + 512);
              if ( v67 )
              {
                v68 = SURFACE::Map(v67, this, 0LL);
                if ( v68 == 2 )
                {
                  v47 = (DC *)*((_QWORD *)this + 12);
                  goto LABEL_136;
                }
                if ( v68 == 1 )
                  *((_DWORD *)this + 18) |= 0x80u;
              }
            }
          }
          goto LABEL_195;
        }
        v41 = 0;
      }
      *((_QWORD *)this + 12) = 0LL;
LABEL_141:
      if ( !v41 )
        goto LABEL_137;
      goto LABEL_195;
    }
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
    if ( ((v12 ^ v11) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 80LL) + 8LL) & 0x4000) != 0 && (v11 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) & 0x4000) == 0 )
      {
LABEL_23:
        v6 = 0;
        goto LABEL_24;
      }
      v13 = (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x8000) == 0;
    }
    else
    {
      if ( (v12 & 0x200) == 0 || (v11 & 0x200) == 0 || (v12 & 0x8000) == 0 )
        goto LABEL_23;
      v13 = (v11 & 0x8000) == 0;
    }
    if ( !v13 )
    {
LABEL_22:
      v6 = v10;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  return 0LL;
}
