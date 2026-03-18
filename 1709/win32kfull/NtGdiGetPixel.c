/*
 * XREFs of NtGdiGetPixel @ 0x1C002B850
 * Callers:
 *     <none>
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B06C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C013DA04 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPixel(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DC *v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  char *v12; // rdx
  __int64 v13; // rdx
  struct REGION *v14; // rdx
  int v15; // ecx
  int v16; // edi
  bool v17; // zf
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v19; // rcx
  __int64 v20; // rbx
  DC *v21; // rax
  __int64 v23; // rbx
  __int64 ThreadWin32Thread; // rax
  int v25; // eax
  DC *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rax
  DC *v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rsi
  DC *v35; // rcx
  char v36; // bl
  __int64 v37; // rax
  DCVISRGNSHARELOCK *v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+60h] [rbp-A0h] BYREF
  DC *v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[4]; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
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
  __int64 v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+118h] [rbp+18h]
  __int64 v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  int v67; // [rsp+130h] [rbp+30h] BYREF
  int v68; // [rsp+134h] [rbp+34h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  _DWORD v71[2]; // [rsp+140h] [rbp+40h] BYREF
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v74[4]; // [rsp+150h] [rbp+50h] BYREF
  int v75; // [rsp+154h] [rbp+54h]
  int v76; // [rsp+158h] [rbp+58h]
  int v77; // [rsp+15Ch] [rbp+5Ch]
  int v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  int v80; // [rsp+1A8h] [rbp+A8h]
  int v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+E0h]

  v41 = -1;
  v4 = a2;
  v43 = 0LL;
  LOBYTE(a2) = 1;
  v42 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v42 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v42) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
      return v41;
    }
    if ( (*((_DWORD *)v42 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v42);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v42 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)&v42, v4, a3, 1, 1);
    v51[1] = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v51[0] = 0LL;
    v54 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v48, (struct XDCOBJ *)&v42, 0) )
      goto LABEL_36;
    v7 = v42;
    v8 = *((_QWORD *)v42 + 64);
    if ( !v8 )
      goto LABEL_36;
    if ( *(_DWORD *)(v8 + 592) )
    {
      if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v8 + 592) )
        goto LABEL_36;
      v7 = v42;
    }
    v9 = *(_DWORD *)(v8 + 112);
    if ( (v9 & 0x800) != 0 )
    {
      v25 = UserSurfaceAccessCheck(*(_QWORD *)(v8 + 584), v5);
    }
    else
    {
      if ( (v9 & 0x10000000) == 0 )
      {
LABEL_11:
        v60 = *(_DWORD *)(*((_QWORD *)v7 + 10) + 68LL);
        v61 = *(_DWORD *)(*((_QWORD *)v7 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v59, (struct XDCOBJ *)&v42, 0x204u, 0);
          v10 = (unsigned __int64)v59;
          v7 = v42;
        }
        else
        {
          v10 = (unsigned __int64)v7 + 336;
          v59 = (char *)v7 + 336;
        }
        v11 = *(_DWORD *)(v10 + 32) & 0x43;
        v46 = v4;
        v47 = a3;
        if ( (_BYTE)v11 != 67 )
        {
          bCvtPts1(v10, &v46, 1LL);
          a3 = v47;
          v4 = v46;
        }
        v67 = v4;
        v69 = v4 + 1;
        v70 = a3 + 1;
        v68 = a3;
        v12 = (char *)v7 + 8 * (*((_DWORD *)v7 + 10) & 1);
        v67 = v4 + *((_DWORD *)v12 + 358);
        v69 = *((_DWORD *)v12 + 358) + v4 + 1;
        v68 = a3 + *((_DWORD *)v12 + 359);
        v70 = *((_DWORD *)v12 + 359) + a3 + 1;
        if ( !*((_QWORD *)v7 + 196) || (*((_DWORD *)v7 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v7) )
          v13 = *((_QWORD *)v7 + 194);
        if ( v13 )
        {
          v14 = DC::prgnRao(v7);
        }
        else if ( !*((_QWORD *)v7 + 195) || (*((_DWORD *)v7 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v7) )
        {
          v14 = (struct REGION *)*((_QWORD *)v7 + 193);
        }
        v79 = 0LL;
        v80 = 0;
        v81 = 1;
        v82 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v74, v14, (struct ERECTL *)&v67, 0);
        if ( v75 != v77 && v76 != v78 )
        {
          v15 = *((_DWORD *)v42 + 28);
          if ( (v15 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v42 + 10) + 112LL) || (v16 = 1, (v15 & 0x10000000) == 0) )
            v16 = 0;
          v41 = 0;
          v63 = 0LL;
          v64 = 0LL;
          v66 = 0LL;
          LODWORD(v63) = *(_DWORD *)(v8 + 96);
          HIDWORD(v63) = 1;
          LODWORD(v64) = 1;
          v65 = 0LL;
          LODWORD(v66) = 1;
          if ( (_DWORD)v63 == 1 )
          {
            v71[0] = 7;
            v72 = 8;
          }
          else if ( (_DWORD)v63 == 2 )
          {
            v71[0] = 1;
            v72 = 2;
          }
          else
          {
            v71[0] = 0;
            v72 = 1;
          }
          v56 = 0LL;
          v57 = 0;
          v58 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v56, (struct _DEVBITMAPINFO *)&v63, &v41, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v17 = (*(_DWORD *)(v8 + 112) & 0x400) == 0;
            v71[1] = 0;
            v73 = 1;
            v18 = v17
                ? EngCopyBits
                : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v8 + 48) + 2856LL);
            v19 = v56 ? v56 + 24 : 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v18)(
                   v19,
                   v8 + 24,
                   0LL,
                   xloIdent,
                   v71,
                   &v67)
              && !v16 )
            {
              v41 = ulIndexToRGB(*(_QWORD *)(v8 + 128), *((_QWORD *)v42 + 12), v41);
            }
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v56);
        }
        goto LABEL_36;
      }
      v25 = UserScreenAccessCheck(v6, v5);
    }
    if ( v25 )
    {
      v7 = v42;
      goto LABEL_11;
    }
LABEL_36:
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v42);
    v45 = 0;
    v20 = *(_QWORD *)v42;
    HmgDecrementExclusiveReferenceCountEx(v42, HIDWORD(v43), &v45);
    if ( v45 )
      bDeleteDCInternalEx(v20, 0LL);
    v21 = v51[0];
    if ( v51[0] )
    {
      v23 = *((_QWORD *)v51[0] + 6);
      if ( (v50 & 0x1000) != 0 )
      {
        DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v48);
        if ( (v50 & 0x10) != 0 )
        {
          *((_DWORD *)v51[0] + 9) &= ~0x4000u;
          v26 = v51[0];
          *((_QWORD *)v51[0] + 64) = *(_QWORD *)(v23 + 2568);
          DC::vInheritSurfaceDpiScale(v26);
        }
        DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v48);
        v21 = v51[0];
      }
      if ( v21 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v51);
      v51[0] = 0LL;
    }
    if ( (v50 & 0x1000) != 0 )
    {
      GreDecLockCount();
      v50 &= ~0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
    }
    else if ( (v50 & 0x800000) != 0 )
    {
      GreDecLockCount();
      v50 &= ~0x800000u;
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
      LOBYTE(v27) = 5;
      v28 = HmgShareLock(v52, v27);
      LOBYTE(v29) = 5;
      v30 = (__int64 *)v28;
      v31 = HmgShareLock(v53, v29);
      v32 = v62[0];
      v33 = v31;
      v34 = *v30;
      v35 = v62[0];
      *((_QWORD *)v62[0] + 64) = v31;
      DC::vInheritSurfaceDpiScale(v35);
      DEC_SHARE_REF_CNT(v30);
      DEC_SHARE_REF_CNT(v33);
      GreDereferenceObject(v34, 1LL);
      v54 = 0LL;
      v52 = 0LL;
      *((_DWORD *)v32 + 9) |= v55;
      if ( (*((_DWORD *)v32 + 9) & 0x200) != 0 )
      {
        v36 = 0;
        if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
        {
          GreAcquireSemaphoreSharedInternal(ghsemGreLock);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
          v36 = 1;
        }
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v44);
        LOBYTE(v40) = 5;
        v37 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v40);
        if ( v37 )
          SURFACE::bDeleteSurface(v37, 0LL, 1LL);
        *((_QWORD *)v32 + 65) = 0LL;
        DC::vClearRendering(v32);
        v53 = 0LL;
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v38);
        if ( v36 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
      }
      else
      {
        LOBYTE(v40) = 5;
        v39 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v40);
        if ( v39 )
          SURFACE::bDeleteSurface(v39, 0LL, 1LL);
        *((_QWORD *)v32 + 65) = 0LL;
        v53 = 0LL;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v62);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
  }
  return v41;
}
