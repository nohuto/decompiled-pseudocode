/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C001665C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C001E508 (DwmAsyncCreateSprite.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0025C08 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0026890 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0026A6C (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0026AE8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006E8C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00842FC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C009CF8C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C009D63C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C009D7AC (DwmAsyncUpdateSprite.c)
 *     UserGetHwndProcess @ 0x1C00A02B4 (UserGetHwndProcess.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00A02E8 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00A23F4 (UserIsWindowOnDesktopAndComposed.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00BC760 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00BC880 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0257424 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int v4; // esi
  HDEV v5; // r12
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // r9d
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // rdi
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rax
  BOOL v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  HSURF Surface; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _SURFOBJ *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  SURFACE *v31; // r15
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  struct _EPROCESS *HwndProcess; // rax
  __int64 v34; // rdx
  struct tagWND *v35; // rax
  int v36; // ebx
  void *v37; // rax
  int v38; // r9d
  __int64 v39; // rsi
  void *v40; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v42; // rbx
  __int64 v43; // r9
  unsigned __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rdi
  struct DwmState *v50; // rbx
  __int64 v51; // r8
  unsigned int v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  struct DWMSPRITE *v57; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v58[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-78h]
  HDEV v60; // [rsp+90h] [rbp-70h] BYREF
  struct SFMLOGICALSURFACE *v61; // [rsp+98h] [rbp-68h]
  _BYTE v62[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v63[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v65[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v66; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v67[7]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = a2;
  v59 = a2;
  v60 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v56);
  v5 = a1 + 18;
  if ( *((_DWORD *)a1 + 35) )
    v5 = (HDEV)(**((_QWORD **)a1 + 18) + 72LL);
  v6 = *((_QWORD *)v5 + 2);
  v52 = 0;
  do
  {
    if ( !v6 )
      break;
    v9 = *(_QWORD *)(v6 + 72);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2) )
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v10 = *(_QWORD *)(v6 + 8);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 24);
          if ( v12 )
          {
            while ( (**(_DWORD **)(v10 + 8LL * v11 + 32) & 0x20) == 0 )
            {
              if ( ++v11 >= v12 )
                goto LABEL_18;
            }
            v6 = *(_QWORD *)(v10 + 8LL * v11 + 32);
          }
        }
      }
LABEL_18:
      DwmSpriteObj = hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, a1, 0);
      v57 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v57, DwmSpriteObj);
      v15 = v57;
      if ( v57 )
      {
        v16 = *(__int64 **)(v6 + 16);
        v17 = *(_DWORD *)(v6 + 112);
        v4 = 1;
        v18 = *((_QWORD *)v57 + 24);
        v61 = (struct SFMLOGICALSURFACE *)v18;
        v19 = *v16;
        *((_DWORD *)v57 + 14) = *(_DWORD *)(v19 + 2600) + v17;
        *((_DWORD *)v15 + 15) = *(_DWORD *)(v19 + 2604) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v15 + 16) = *(_DWORD *)(v19 + 2600) + *(_DWORD *)(v6 + 112);
        *((_DWORD *)v15 + 17) = *(_DWORD *)(v19 + 2604) + *(_DWORD *)(v6 + 116);
        *((_QWORD *)v15 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v15 + 20) = *(_DWORD *)(v6 + 232);
        v20 = (*(_DWORD *)v6 & 1) == 0
           && (*(_DWORD *)v6 & 0x10) == 0
           && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
           && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
        *((_DWORD *)v15 + 50) = v20 | *((_DWORD *)v15 + 50) & 0xFFFFFFFE;
        v21 = *(_QWORD *)(v6 + 128);
        if ( v21 )
        {
          *((_DWORD *)v15 + 16) += *(_DWORD *)(v21 + 32);
          *((_DWORD *)v15 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
          v22 = *(_QWORD *)(v6 + 240);
          if ( v22 )
          {
            LOBYTE(v14) = 5;
            v23 = HmgReferenceCheckLock(v22, v14, 0LL);
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v18, a1, (struct _SURFOBJ *)(v23 + 24));
            *(_DWORD *)(v18 + 256) |= 1u;
            *(_DWORD *)(v18 + 256) ^= ((unsigned __int8)*(_DWORD *)(v18 + 256) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          }
          else
          {
            Surface = hsurfSpCreateSurface(a1, (struct tagSIZE *)(*(_QWORD *)(v6 + 128) + 32LL));
            if ( Surface )
            {
              LOBYTE(v25) = 5;
              v26 = HmgReferenceCheckLock(Surface, v25, 0LL);
              SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v18, a1, (struct _SURFOBJ *)(v26 + 24));
              v27 = *(struct _SURFOBJ **)(v18 + 192);
              v64[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v64, v27);
              if ( v64[0] )
              {
                v28 = *(_QWORD *)(v6 + 128);
                v65[0] = 0;
                v65[1] = 0;
                v65[2] = *(_DWORD *)(v28 + 32);
                v29 = *(_DWORD *)(v28 + 36);
                v30 = *(_QWORD *)(v18 + 192);
                v58[0] = 0;
                v58[1] = 0;
                v65[3] = v29;
                v31 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v30);
                if ( (*((_DWORD *)v31 + 28) & 0x400) != 0 )
                  v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 357);
                else
                  v32 = EngCopyBits;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v60) )
                  v32 = RedirCopyBits;
                HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v15 + 5));
                SURFACE::vAppContainerOwner(v31, HwndProcess);
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *))v32)(
                  *(_QWORD *)(v18 + 192),
                  *(_QWORD *)(v6 + 128),
                  0LL,
                  0LL,
                  v65,
                  v58);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v64);
            }
            else
            {
              v4 = 0;
            }
          }
        }
        if ( v4 )
        {
          memset(v67, 0, sizeof(v67));
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v63, (struct DWMSPRITE *)((char *)v15 + 120));
          LOBYTE(v34) = 1;
          v35 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v15 + 5), v34);
          if ( v35 )
            InitializeMiniWinInfo(v35, (struct tagMINIWINDOWINFO *)v67);
          v36 = *(_DWORD *)(v18 + 256) & 0xC | *((_DWORD *)v15 + 50) & 1 | (2
                                                                          * (*(_DWORD *)(v18 + 256) & 1 | (4 * (*((_DWORD *)v15 + 50) & 0xE))));
          v37 = (void *)UserReferenceDwmApiPort();
          if ( (int)DwmAsyncCreateSprite(v37, v36, (__int64)v67) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v18 + 192) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v18 + 256) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v18, a1, gpSfmState, v38);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v18,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v55,
                &v54,
                &v53,
                0LL,
                0LL);
              v39 = *((_QWORD *)v15 + 19);
              *((_QWORD *)v15 + 19) = 0LL;
              v40 = (void *)UserReferenceDwmApiPort();
              updated = DwmAsyncUpdateSprite(
                          v40,
                          (__int64)v15 + 72,
                          (__int64)v67,
                          v55,
                          v54,
                          v53,
                          *((_DWORD *)v15 + 32),
                          v39);
              v42 = v61;
              v4 = updated >= 0;
              *((_DWORD *)v61 + 64) &= ~8u;
              if ( updated >= 0 )
              {
                CAutoPushLockEx::CAutoPushLockEx(
                  (CAutoPushLockEx *)v62,
                  (struct SFMLOGICALSURFACE *)((char *)v42 + 264));
                v66.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
                v66.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
                *(_QWORD *)&v66.left = 0LL;
                vSpUpdateDirtyRgn(v15, v42, 0LL, &v66, &v52, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v62);
                v43 = *((_QWORD *)v42 + 24);
                if ( v43 )
                  v44 = *(_QWORD *)(v43 + 8);
                else
                  v44 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v15, v42, v52, v44);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v63);
        }
        v2 = v59;
      }
      else
      {
        v4 = 0;
      }
      v6 = *(_QWORD *)(v6 + 24);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 24);
    }
  }
  while ( v4 );
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
          v48 = *(_QWORD *)(v7 + 72);
          v49 = *(_QWORD *)(v7 + 24);
          if ( v48 && (unsigned int)UserIsWindowOnDesktopAndComposed(v48, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(a1, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v49;
        }
        while ( v49 );
      }
    }
  }
  else
  {
    v50 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v50 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v51 = ((unsigned __int64)v50 - 24) & -(__int64)(v50 != 0LL);
      v50 = *(struct DwmState **)(v51 + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v51, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT(a1, v56);
  return v4;
}
