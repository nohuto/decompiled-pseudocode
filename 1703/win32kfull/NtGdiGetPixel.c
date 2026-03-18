/*
 * XREFs of NtGdiGetPixel @ 0x1C0073B60
 * Callers:
 *     <none>
 * Callees:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00742FC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B1C8 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0137314 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPixel(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  DC *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DC *v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  struct REGION *v20; // rdx
  int v21; // ecx
  int v22; // ebx
  bool v23; // zf
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v25; // rcx
  __int64 v26; // rbx
  DC *v27; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  HSURF *v32; // rdi
  __int64 v33; // rax
  DC *v34; // r14
  __int64 v35; // rbx
  HSURF v36; // rsi
  DC *v37; // rcx
  char v38; // bl
  __int64 v39; // rax
  DCVISRGNSHARELOCK *v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+60h] [rbp-A0h] BYREF
  DC *v44[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v45[8]; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch]
  __int128 v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  DC *v51[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  HDC v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h] BYREF
  char v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  char *v59; // [rsp+F0h] [rbp-10h] BYREF
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]
  DC *v62[2]; // [rsp+100h] [rbp+0h] BYREF
  int v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+114h] [rbp+14h]
  _BYTE v65[20]; // [rsp+11Ch] [rbp+1Ch]
  int v66; // [rsp+130h] [rbp+30h] BYREF
  int v67; // [rsp+134h] [rbp+34h]
  int v68; // [rsp+138h] [rbp+38h]
  int v69; // [rsp+13Ch] [rbp+3Ch]
  _DWORD v70[2]; // [rsp+140h] [rbp+40h] BYREF
  int v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v73[4]; // [rsp+150h] [rbp+50h] BYREF
  int v74; // [rsp+154h] [rbp+54h]
  int v75; // [rsp+158h] [rbp+58h]
  int v76; // [rsp+15Ch] [rbp+5Ch]
  int v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+1A0h] [rbp+A0h]
  int v79; // [rsp+1A8h] [rbp+A8h]
  int v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+E0h]

  v43 = -1;
  v4 = a2;
  v44[1] = 0LL;
  LOBYTE(a2) = 1;
  v44[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v44[0] )
    return v43;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v44) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v44[0] + 3);
    return v43;
  }
  v6 = v44[0];
  if ( (*((_DWORD *)v44[0] + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v44[0]);
    v6 = v44[0];
  }
  if ( !v6 )
    return v43;
  bSpDwmValidateSurface((struct XDCOBJ *)v44, v4, a3, 1, 1);
  v51[1] = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v51[0] = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v48, (struct XDCOBJ *)v44, 0) )
  {
    v11 = v44[0];
    v12 = *((_QWORD *)v44[0] + 64);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 592) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v12 + 592) )
          goto LABEL_57;
        v11 = v44[0];
      }
      v13 = *(_DWORD *)(v12 + 112);
      if ( (v13 & 0x800) != 0 )
      {
        v14 = UserSurfaceAccessCheck(*(_QWORD *)(v12 + 584), v7, v9, v10);
      }
      else
      {
        if ( (v13 & 0x10000000) == 0 )
        {
LABEL_19:
          v60 = *(_DWORD *)(*((_QWORD *)v11 + 10) + 68LL);
          v61 = *(_DWORD *)(*((_QWORD *)v11 + 10) + 312LL) & 1;
          if ( (*(_DWORD *)(*((_QWORD *)v11 + 10) + 352LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v59, (struct XDCOBJ *)v44, 0x204u, 0);
            v15 = v59;
            v11 = v44[0];
          }
          else
          {
            v15 = (char *)v11 + 336;
            v59 = (char *)v11 + 336;
          }
          v16 = *((_DWORD *)v15 + 8) & 0x43;
          v46 = v4;
          v47 = a3;
          if ( (_BYTE)v16 != 67 )
          {
            bCvtPts1(v15, &v46, 1LL);
            a3 = v47;
            v4 = v46;
          }
          v66 = v4;
          v68 = v4 + 1;
          v69 = a3 + 1;
          v67 = a3;
          v17 = 1432LL;
          if ( (*((_BYTE *)v11 + 40) & 1) != 0 )
            v17 = 1440LL;
          v18 = (_DWORD *)((char *)v11 + v17);
          v66 = v4 + *v18;
          v68 = *v18 + v4 + 1;
          v67 = a3 + v18[1];
          v69 = v18[1] + a3 + 1;
          if ( !*((_QWORD *)v11 + 196) || (*((_DWORD *)v11 + 10) & 1) == 0 || !(unsigned int)DC::bDpiScaledSurface(v11) )
            v19 = *((_QWORD *)v11 + 194);
          if ( v19 )
          {
            v20 = DC::prgnRao(v11);
          }
          else if ( !*((_QWORD *)v11 + 195)
                 || (*((_DWORD *)v11 + 10) & 1) == 0
                 || !(unsigned int)DC::bDpiScaledSurface(v11) )
          {
            v20 = (struct REGION *)*((_QWORD *)v11 + 193);
          }
          v78 = 0LL;
          v79 = 0;
          v80 = 1;
          v81 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v73, v20, (struct ERECTL *)&v66, 0);
          if ( v74 != v76 && v75 != v77 )
          {
            v21 = *((_DWORD *)v44[0] + 28);
            if ( (v21 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v44[0] + 10) + 112LL) || (v22 = 1, (v21 & 0x10000000) == 0) )
              v22 = 0;
            v43 = 0;
            v64 = 0LL;
            *(_QWORD *)&v65[8] = 0LL;
            *(_QWORD *)v65 = 0LL;
            v63 = *(_DWORD *)(v12 + 96);
            *(_QWORD *)&v65[12] = 1LL;
            v64 = 0x100000001LL;
            *(_QWORD *)&v65[4] = 0LL;
            if ( v63 == 1 )
            {
              v70[0] = 7;
              v71 = 8;
            }
            else if ( v63 == 2 )
            {
              v70[0] = 1;
              v71 = 2;
            }
            else
            {
              v70[0] = 0;
              v71 = 1;
            }
            v56 = 0LL;
            v57 = 0;
            v58 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v56, (struct _DEVBITMAPINFO *)&v63, &v43, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v23 = (*(_DWORD *)(v12 + 112) & 0x400) == 0;
              v70[1] = 0;
              v72 = 1;
              if ( v23 )
                v24 = EngCopyBits;
              else
                v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v12 + 48) + 2856LL);
              v25 = 0LL;
              if ( v56 )
                v25 = v56 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v24)(
                     v25,
                     v12 + 24,
                     0LL,
                     xloIdent,
                     v70,
                     &v66)
                && !v22 )
              {
                v43 = ulIndexToRGB(*(_QWORD *)(v12 + 128), *((_QWORD *)v44[0] + 12), v43);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v56);
          }
          goto LABEL_57;
        }
        v14 = UserScreenAccessCheck(v8, v7, v9, v10);
      }
      if ( v14 )
      {
        v11 = v44[0];
        goto LABEL_19;
      }
    }
  }
LABEL_57:
  XDCOBJ::RestoreAttributes((XDCOBJ *)v44);
  _InterlockedDecrement((volatile signed __int32 *)v44[0] + 3);
  if ( v51[0] )
  {
    v26 = *((_QWORD *)v51[0] + 6);
    if ( (v50 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v48);
      if ( (v50 & 0x10) != 0 )
      {
        *((_DWORD *)v51[0] + 9) &= ~0x4000u;
        v27 = v51[0];
        *((_QWORD *)v51[0] + 64) = *(_QWORD *)(v26 + 2568);
        DC::vInheritSurfaceDpiScale(v27);
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v48);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v51);
    v51[0] = 0LL;
  }
  if ( (v50 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v50 &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( (_QWORD)v48 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v48);
    GreReleaseSemaphoreInternal(v48);
  }
  if ( (v50 & 8) != 0 )
    v50 &= ~8u;
  if ( *((_QWORD *)&v48 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v48 + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)&v48 + 1));
  }
  if ( v53 )
  {
    v62[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v62, v54);
    LOBYTE(v29) = 5;
    v30 = HmgShareLock(v52, v29);
    LOBYTE(v31) = 5;
    v32 = (HSURF *)v30;
    v33 = HmgShareLock(v53, v31);
    v34 = v62[0];
    v35 = v33;
    v36 = *v32;
    v37 = v62[0];
    *((_QWORD *)v62[0] + 64) = v33;
    DC::vInheritSurfaceDpiScale(v37);
    DEC_SHARE_REF_CNT(v32);
    DEC_SHARE_REF_CNT(v35);
    GreDereferenceObject(v36, 1u);
    v54 = 0LL;
    v52 = 0LL;
    *((_DWORD *)v34 + 9) |= v55;
    if ( (*((_DWORD *)v34 + 9) & 0x200) != 0 )
    {
      v38 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v38 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v45);
      LOBYTE(v42) = 5;
      v39 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v42);
      if ( v39 )
        SURFACE::bDeleteSurface(v39, 0LL, 1LL);
      *((_QWORD *)v34 + 65) = 0LL;
      DC::vClearRendering(v34);
      v53 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v40);
      if ( v38 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      LOBYTE(v42) = 5;
      v41 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v42);
      if ( v41 )
        SURFACE::bDeleteSurface(v41, 0LL, 1LL);
      *((_QWORD *)v34 + 65) = 0LL;
      v53 = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v62);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v43;
}
