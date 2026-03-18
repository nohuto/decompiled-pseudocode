/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024E138
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0252B50 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003D6D0 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C008BF64 (GreCreateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008D104 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00E4670 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r14d
  HSPRITE v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  HDEV HDEV; // r15
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  HSPRITE v14; // rax
  __int64 v15; // r8
  volatile signed __int32 *v16; // rbx
  struct SFMLOGICALSURFACE *v17; // r13
  struct _SURFOBJ *v18; // rdx
  unsigned int v19; // esi
  __int64 DisplayDC; // rdi
  __int64 v21; // rax
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  _BYTE v23[8]; // [rsp+80h] [rbp-158h] BYREF
  HSPRITE v24; // [rsp+88h] [rbp-150h]
  _BYTE v25[8]; // [rsp+90h] [rbp-148h] BYREF
  struct tagSIZE v26; // [rsp+98h] [rbp-140h] BYREF
  HDC *v27; // [rsp+A0h] [rbp-138h]
  HDC v28; // [rsp+A8h] [rbp-130h]
  unsigned int v29; // [rsp+B0h] [rbp-128h]
  _QWORD v30[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-110h] BYREF
  DC *v32[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-F8h] BYREF
  struct DWMSPRITE *v34; // [rsp+E8h] [rbp-F0h] BYREF
  struct SFMLOGICALSURFACE *v35; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v36[2]; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+108h] [rbp-D0h]
  __int64 v38; // [rsp+110h] [rbp-C8h]
  __int64 v39; // [rsp+118h] [rbp-C0h]
  _BYTE v40[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v41; // [rsp+170h] [rbp-68h] BYREF
  __int64 v42; // [rsp+180h] [rbp-58h]
  struct tagSIZE v43; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v27 = a4;
  v29 = a2;
  v6 = -1073741811;
  v32[1] = 0LL;
  XDCOBJ::vLock(v32, a1);
  v7 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  if ( !v32[0] )
    return (unsigned int)v6;
  v9 = *((_QWORD *)v32[0] + 6);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
  v31 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV(v10);
  v30[0] = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v25, v12, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)v30);
  if ( HDEV && ((_DWORD)HDEV[8] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_23:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v24 = 0LL;
      }
      if ( v28 )
      {
        GreDeleteDC(v28);
        v28 = 0LL;
      }
      goto LABEL_27;
    }
    v33 = v9;
    if ( v9 )
    {
      v13 = *(_DWORD *)(v9 + 32);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
        {
          v41.left = *(_DWORD *)(v9 + 2600);
          v41.top = *(_DWORD *)(v9 + 2604);
          v41.right = v41.left + *(_DWORD *)(*(_QWORD *)(v9 + 2608) + 172LL);
          v41.bottom = v41.top + *(_DWORD *)(*(_QWORD *)(v9 + 2608) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v41, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v14;
          v24 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v34, 0LL, v14);
            v16 = (volatile signed __int32 *)v34;
            if ( !v34 )
            {
LABEL_21:
              v4 = v27;
              goto LABEL_22;
            }
            v35 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v34 + 24);
            v17 = v35;
            vSpDwmUpdateSpriteVisibility(v34, 0LL, v15);
            v26 = *(struct tagSIZE *)(*(_QWORD *)(v9 + 2608) + 172LL);
            if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v16, v17, &v26, &v35) )
            {
              v18 = (struct _SURFOBJ *)*((_QWORD *)v17 + 24);
              v36[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v36, v18);
              v42 = 0LL;
              v43 = v26;
              v30[1] = 0LL;
              v37 = 0LL;
              v38 = 0LL;
              v39 = 0LL;
              if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)v30) )
                SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v17 + 24));
              v19 = v29;
              LODWORD(v37) = v29 & 0xFFFFFF;
              LODWORD(v39) = 0;
              _guard_dispatch_icall_fptr();
              GreUpdateSprite(
                HDEV,
                0LL,
                (SFMLOGICALSURFACE *)v7,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                v19,
                0LL,
                0x20400001u,
                &v41,
                0LL,
                1,
                0);
              DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
              v28 = (HDC)DisplayDC;
              if ( DisplayDC )
              {
                v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v17 + 24));
                *(_DWORD *)(v21 + 112) |= 0x4000000u;
                GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v17 + 24) + 8LL));
                v6 = 0;
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
                _InterlockedDecrement(v16 + 3);
                goto LABEL_20;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
            }
            _InterlockedDecrement(v16 + 3);
LABEL_20:
            v7 = v24;
            goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_22:
  if ( v6 < 0 )
    goto LABEL_23;
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v24;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v28;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v25);
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
  return (unsigned int)v6;
}
