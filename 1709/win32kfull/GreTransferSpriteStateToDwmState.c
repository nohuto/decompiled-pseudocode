/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C0044FBC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0009F50 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C000A308 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     UserGetMiniWinInfo @ 0x1C000D1B8 (UserGetMiniWinInfo.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0012554 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0043480 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0045BE0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AD88 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B124 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C008C024 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008D104 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008EBA0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C008ED7C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008EDF8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00E725C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E7400 (DwmAsyncUpdateSprite.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00E7950 (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserGetHwndProcess @ 0x1C011BC44 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int v4; // esi
  HDEV v5; // r12
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  HSPRITE DwmSpriteObj; // rax
  __int64 v13; // rdx
  struct DWMSPRITE *v14; // rdi
  __int64 *v15; // rax
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rax
  int v21; // ebx
  void *v22; // rax
  int v23; // r9d
  __int64 v24; // rsi
  void *v25; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 Surface; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  struct _SURFOBJ *v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  SURFACE *v42; // rsi
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned __int64 HwndProcess; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rdi
  struct DwmState *v48; // rbx
  __int64 v49; // r8
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-94h] BYREF
  int v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+74h] [rbp-8Ch] BYREF
  struct DWMSPRITE *v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-78h]
  HDEV v59; // [rsp+90h] [rbp-70h] BYREF
  struct SFMLOGICALSURFACE *v60; // [rsp+98h] [rbp-68h]
  _BYTE v61[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v62[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v63[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h] BYREF
  int v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+104h] [rbp+4h]
  struct tagRECT v68; // [rsp+108h] [rbp+8h] BYREF

  v2 = a2;
  v58 = a2;
  v59 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v55);
  v5 = a1 + 18;
  if ( *((_DWORD *)a1 + 35) )
    v5 = (HDEV)(**((_QWORD **)a1 + 18) + 72LL);
  v6 = *((_QWORD *)v5 + 2);
  v51 = 0;
  while ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 72);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2) )
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v30 = *(_QWORD *)(v6 + 8);
          v31 = 0;
          v32 = *(_DWORD *)(v30 + 24);
          if ( v32 )
          {
            while ( (**(_DWORD **)(v30 + 8LL * v31 + 32) & 0x20) == 0 )
            {
              if ( ++v31 >= v32 )
                goto LABEL_19;
            }
            v6 = *(_QWORD *)(v30 + 8LL * v31 + 32);
          }
        }
      }
LABEL_19:
      DwmSpriteObj = hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, a1, 0);
      v56 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v56, DwmSpriteObj);
      v14 = v56;
      if ( v56 )
      {
        v15 = *(__int64 **)(v6 + 16);
        v16 = *(_DWORD *)(v6 + 112);
        v17 = *((_QWORD *)v56 + 24);
        v60 = (struct SFMLOGICALSURFACE *)v17;
        v18 = *v15;
        *((_DWORD *)v56 + 14) = *(_DWORD *)(v18 + 2600) + v16;
        *((_DWORD *)v14 + 15) = *(_DWORD *)(v18 + 2604) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v14 + 16) = *(_DWORD *)(v18 + 2600) + *(_DWORD *)(v6 + 112);
        *((_DWORD *)v14 + 17) = *(_DWORD *)(v18 + 2604) + *(_DWORD *)(v6 + 116);
        *((_QWORD *)v14 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v6 + 232);
        v19 = (*(_DWORD *)v6 & 1) == 0
           && (*(_DWORD *)v6 & 0x10) == 0
           && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
           && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
        *((_DWORD *)v14 + 50) = v19 | *((_DWORD *)v14 + 50) & 0xFFFFFFFE;
        v20 = *(_QWORD *)(v6 + 128);
        if ( !v20 )
          goto LABEL_23;
        *((_DWORD *)v14 + 16) += *(_DWORD *)(v20 + 32);
        *((_DWORD *)v14 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v33 = *(_QWORD *)(v6 + 240);
        if ( v33 )
        {
          LOBYTE(v13) = 5;
          v34 = HmgReferenceCheckLock(v33, v13, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v34 + 24));
          *(_DWORD *)(v17 + 256) |= 1u;
          *(_DWORD *)(v17 + 256) ^= ((unsigned __int8)*(_DWORD *)(v17 + 256) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_23;
        }
        Surface = hsurfSpCreateSurface((__int64)a1, (struct tagSIZE *)(*(_QWORD *)(v6 + 128) + 32LL));
        if ( Surface )
        {
          LOBYTE(v36) = 5;
          v37 = HmgReferenceCheckLock(Surface, v36, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v37 + 24));
          v38 = *(struct _SURFOBJ **)(v17 + 192);
          v63[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v63, v38);
          if ( v63[0] )
          {
            v39 = *(_QWORD *)(v6 + 128);
            v65 = 0LL;
            v66 = *(_DWORD *)(v39 + 32);
            v40 = *(_DWORD *)(v39 + 36);
            v41 = *(_QWORD *)(v17 + 192);
            v57 = 0LL;
            v67 = v40;
            v42 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v41);
            if ( (*((_DWORD *)v42 + 28) & 0x400) != 0 )
              v43 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 357);
            else
              v43 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v59) )
              v43 = RedirCopyBits;
            HwndProcess = UserGetHwndProcess(*((_QWORD *)v14 + 5));
            SURFACE::vAppContainerOwner(v42, HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v43)(
              *(_QWORD *)(v17 + 192),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v65,
              &v57);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v63);
LABEL_23:
          memset(v64, 0, sizeof(v64));
          v50 = 39168;
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v62, (struct DWMSPRITE *)((char *)v14 + 120));
          UserGetMiniWinInfo(*((_QWORD *)v14 + 5), (struct tagMINIWINDOWINFO *)v64, &v50);
          v21 = *(_DWORD *)(v17 + 256) & 0xC | *((_DWORD *)v14 + 50) & 1 | (2
                                                                          * (*(_DWORD *)(v17 + 256) & 1 | (4 * (*((_DWORD *)v14 + 50) & 0xE))));
          v22 = (void *)UserReferenceDwmApiPort();
          if ( (int)DwmAsyncCreateSprite(v22, v21, (__int64)v64, v50) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v17 + 192) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v17 + 256) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, a1, gpSfmState, v23);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v17,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v54,
                &v53,
                &v52,
                0LL,
                0LL);
              v24 = *((_QWORD *)v14 + 19);
              *((_QWORD *)v14 + 19) = 0LL;
              v25 = (void *)UserReferenceDwmApiPort();
              updated = DwmAsyncUpdateSprite(
                          v25,
                          (__int64)v14 + 72,
                          (__int64)v64,
                          v54,
                          v53,
                          v52,
                          *((_DWORD *)v14 + 32),
                          v24);
              v27 = v60;
              v4 = updated >= 0;
              *((_DWORD *)v60 + 64) &= ~8u;
              if ( updated >= 0 )
              {
                CAutoPushLockEx::CAutoPushLockEx(
                  (CAutoPushLockEx *)v61,
                  (struct SFMLOGICALSURFACE *)((char *)v27 + 264));
                v68.right = *((_DWORD *)v14 + 16) - *((_DWORD *)v14 + 14);
                v68.bottom = *((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 15);
                *(_QWORD *)&v68.left = 0LL;
                vSpUpdateDirtyRgn(v14, v27, 0LL, (struct _RECTL *)&v68, &v51, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v61);
                v28 = *((_QWORD *)v27 + 24);
                if ( v28 )
                  v29 = *(_QWORD *)(v28 + 8);
                else
                  v29 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v14, v27, v51, v29);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v62);
        }
        else
        {
          v4 = 0;
        }
        v2 = v58;
      }
      else
      {
        v4 = 0;
      }
      v6 = *(_QWORD *)(v6 + 24);
      if ( v14 )
        _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      goto LABEL_12;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_12:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      v45 = *((_QWORD *)a1 + 19);
      if ( v45 )
      {
        do
        {
          v46 = *(_QWORD *)(v45 + 8);
          v47 = *(_QWORD *)(v45 + 16);
          if ( v46 && (unsigned int)UserIsWindowOnDesktopAndComposed(v46, v2) )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v45 + 8), 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)(v45 + 8), (void *)v45);
          }
          v45 = v47;
        }
        while ( v47 );
      }
    }
    else
    {
      v7 = *((_QWORD *)a1 + 11);
      if ( v7 )
      {
        do
        {
          v10 = *(_QWORD *)(v7 + 72);
          v11 = *(_QWORD *)(v7 + 24);
          if ( v10 && (unsigned int)UserIsWindowOnDesktopAndComposed(v10, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(a1, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v11;
        }
        while ( v11 );
      }
    }
  }
  else
  {
    v48 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v48 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v49 = ((unsigned __int64)v48 - 24) & -(__int64)(v48 != 0LL);
      v48 = *(struct DwmState **)(v49 + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v49, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT(a1, v55);
  return v4;
}
