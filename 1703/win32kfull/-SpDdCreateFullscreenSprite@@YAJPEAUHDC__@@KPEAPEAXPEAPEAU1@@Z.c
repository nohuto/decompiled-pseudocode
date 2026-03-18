/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C02510C0 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C001E1B4 (GreCreateSprite.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0025790 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0032418 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00A1144 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, HSPRITE *a3, HDC *a4)
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
  volatile signed __int32 *v15; // rbx
  struct SFMLOGICALSURFACE *v16; // r13
  struct _SURFOBJ *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // esi
  __int64 DisplayDC; // rdi
  __int64 v23; // rax
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  char v25[8]; // [rsp+80h] [rbp-158h] BYREF
  HSPRITE v26; // [rsp+88h] [rbp-150h]
  char v27[8]; // [rsp+90h] [rbp-148h] BYREF
  struct tagSIZE v28; // [rsp+98h] [rbp-140h] BYREF
  HDC *v29; // [rsp+A0h] [rbp-138h]
  HDC v30; // [rsp+A8h] [rbp-130h]
  unsigned int v31; // [rsp+B0h] [rbp-128h]
  _QWORD v32[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-110h] BYREF
  DC *v34[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-F8h] BYREF
  struct DWMSPRITE *v36; // [rsp+E8h] [rbp-F0h] BYREF
  struct SFMLOGICALSURFACE *v37; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v38[2]; // [rsp+F8h] [rbp-E0h] BYREF
  int v39; // [rsp+108h] [rbp-D0h]
  __int64 v40; // [rsp+110h] [rbp-C8h]
  __int64 v41; // [rsp+118h] [rbp-C0h]
  _BYTE v42[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v43; // [rsp+170h] [rbp-68h] BYREF
  __int64 v44; // [rsp+180h] [rbp-58h]
  struct tagSIZE v45; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v29 = a4;
  v31 = a2;
  v6 = -1073741811;
  v34[1] = 0LL;
  XDCOBJ::vLock(v34, a1);
  v7 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  if ( !v34[0] )
    return (unsigned int)v6;
  v9 = *((_QWORD *)v34[0] + 6);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v25);
  v33 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV(v10);
  v32[0] = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v27, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v42, (struct PDEVOBJ *)v32);
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
        v26 = 0LL;
      }
      if ( v30 )
      {
        GreDeleteDC(v30);
        v30 = 0LL;
      }
      goto LABEL_27;
    }
    v35 = v9;
    if ( v9 )
    {
      v13 = *(_DWORD *)(v9 + 32);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v35) )
        {
          v43.left = *(_DWORD *)(v9 + 2600);
          v43.top = *(_DWORD *)(v9 + 2604);
          v43.right = v43.left + *(_DWORD *)(*(_QWORD *)(v9 + 2608) + 172LL);
          v43.bottom = v43.top + *(_DWORD *)(*(_QWORD *)(v9 + 2608) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v43, 0LL, 1, 0, 0, 0, 0, 0LL);
          v7 = v14;
          v26 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v36, 0LL, v14);
            v15 = (volatile signed __int32 *)v36;
            if ( !v36 )
            {
LABEL_21:
              v4 = v29;
              goto LABEL_22;
            }
            v37 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v36 + 24);
            v16 = v37;
            vSpDwmUpdateSpriteVisibility(v36, 0);
            v28 = *(struct tagSIZE *)(*(_QWORD *)(v9 + 2608) + 172LL);
            if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v15, v16, &v28, &v37) )
            {
              v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 24);
              v38[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v38, v17);
              v44 = 0LL;
              v45 = v28;
              v32[1] = 0LL;
              v39 = 0;
              v40 = 0LL;
              v41 = 0LL;
              if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)v32, v18, v19, v20) )
                SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
              v21 = v31;
              v39 = v31 & 0xFFFFFF;
              LODWORD(v41) = 0;
              _guard_dispatch_icall_fptr();
              GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v21, 0LL, 0x20400001u, &v43, 0LL, 1, 0);
              DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
              v30 = (HDC)DisplayDC;
              if ( DisplayDC )
              {
                v23 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
                *(_DWORD *)(v23 + 112) |= 0x4000000u;
                GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 24) + 8LL));
                v6 = 0;
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
                _InterlockedDecrement(v15 + 3);
                goto LABEL_20;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v38);
            }
            _InterlockedDecrement(v15 + 3);
LABEL_20:
            v7 = v26;
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
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v42);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::RestoreAttributes((XDCOBJ *)v34);
  _InterlockedDecrement((volatile signed __int32 *)v34[0] + 3);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (HSPRITE *)W32UserProbeAddress;
  *a3 = v26;
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (HDC *)W32UserProbeAddress;
  *v4 = v30;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v27);
  SEMOBJ::vUnlock((SEMOBJ *)&v33);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
  return (unsigned int)v6;
}
