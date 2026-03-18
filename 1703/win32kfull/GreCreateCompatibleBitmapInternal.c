/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C007DB44
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C002A968 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00F6890 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C010AD08 (GreCreateDIBitmapComp.c)
 *     CreateCaptionStrip @ 0x1C0113380 (CreateCaptionStrip.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01E7EF4 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01EAC70 (MNCreateAnimationBitmap.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020CD28 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009F8A0 (hsurfCreateCompatibleSurface.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C026B1C8 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _LUID *a5,
        _WORD *a6)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 v8; // r15
  __int64 v10; // r12
  BOOL v12; // r13d
  int v13; // esi
  __int64 v14; // rbx
  struct SURFACE *v15; // r14
  DC *v16; // rdi
  __int64 v17; // r13
  __int64 *v18; // rax
  __int64 v19; // rcx
  BOOL IsZero; // r14d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 CompatibleSurface; // rbx
  struct SURFACE *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // edx
  __int64 *v29; // rax
  int IsGDIScalingApplicable; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // xmm0_8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  DC *v38; // [rsp+98h] [rbp-70h] BYREF
  int v39; // [rsp+A0h] [rbp-68h]
  int v40; // [rsp+A4h] [rbp-64h]
  int v41; // [rsp+A8h] [rbp-60h]
  BOOL v42; // [rsp+ACh] [rbp-5Ch]
  unsigned __int64 v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h] BYREF
  char v45[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+E0h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  int v53; // [rsp+170h] [rbp+68h]
  BOOL v54; // [rsp+178h] [rbp+70h]
  int v55; // [rsp+180h] [rbp+78h]

  LODWORD(v6) = 0;
  v7 = 0;
  v8 = (int)a3;
  v10 = (int)a2;
  v53 = 0;
  v43 = __PAIR64__(a3, a2);
  v54 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v53 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v41 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v42 = v12;
  if ( (int)v10 <= 0 || (int)v8 <= 0 || (unsigned __int64)(v8 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      v38 = 0LL;
      v39 = 0;
      v40 = 0;
      XDCOBJ::vLock(&v38, a1);
      if ( !v38 )
        return 0LL;
      v14 = *((_QWORD *)v38 + 6);
      v44 = v14;
      if ( (*(_DWORD *)(v14 + 32) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = (struct SURFACE *)*((_QWORD *)v38 + 64);
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v45, (struct XDCOBJ *)&v38);
        v48 = 1;
        v50 = 0LL;
        v46 = 0LL;
        v52 = 0LL;
        v51 = 0LL;
        v49 = 0LL;
        if ( (*(_DWORD *)(v14 + 32) & 1) != 0 )
        {
          *(_QWORD *)&v46 = *(_QWORD *)(v14 + 40);
          v47 = v14;
          GreAcquireSemaphore(v46);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v46, 11LL);
        }
        v16 = v38;
        LODWORD(v17) = 0;
        if ( *((_DWORD *)v38 + 8) == 1 )
        {
          v18 = (__int64 *)*((_QWORD *)v15 + 16);
          v55 = *((_DWORD *)v15 + 24);
          if ( !v18 )
            goto LABEL_16;
        }
        else
        {
          v55 = *(_DWORD *)(v14 + 2124);
          if ( (*(_DWORD *)(v14 + 2188) & 0x100) != 0 )
          {
LABEL_16:
            v36 = 0LL;
            if ( a6 )
            {
              if ( *a6 != 96 )
              {
                *(float *)&v36 = (float)(unsigned __int16)*a6 / 96.0;
                *((float *)&v36 + 1) = *(float *)&v36;
              }
            }
            else if ( (*((_DWORD *)v38 + 134) & 3) == 1 )
            {
              IsGDIScalingApplicable = UserIsGDIScalingApplicable(0LL);
              v16 = v38;
              if ( IsGDIScalingApplicable )
              {
                v37 = *(_QWORD *)((char *)v38 + 540);
                v36 = v37;
              }
            }
            IsZero = EFLOAT::bIsZero((EFLOAT *)&v36);
            if ( !IsZero || !EFLOAT::bIsZero((EFLOAT *)((char *)&v36 + 4)) )
            {
              v37 = __PAIR64__(v8, v10);
              bFToL(v19, &v37, 6LL);
              bFToL(v31, (char *)&v37 + 4, v32);
              LODWORD(v10) = v37;
              v21 = 0LL;
              LODWORD(v8) = HIDWORD(v37);
            }
            if ( v41 != (_DWORD)v21 && (*(_DWORD *)(v14 + 32) & 0x4000000) != 0 && a5 )
            {
              PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v44, a5);
              v16 = v38;
            }
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *((_QWORD *)v16 + 6),
                                  v55,
                                  v17,
                                  v10,
                                  v8,
                                  v54,
                                  v53,
                                  v42,
                                  v21,
                                  v21,
                                  v21,
                                  v13,
                                  v21,
                                  v21,
                                  v21);
            if ( !IsZero || !EFLOAT::bIsZero((EFLOAT *)((char *)&v36 + 4)) )
            {
              LOBYTE(v22) = 5;
              v33 = HmgShareLockCheck(CompatibleSurface, v22);
              if ( v33 )
              {
                v34 = v36;
                v35 = v43;
                *(_DWORD *)(v33 + 116) |= 0x800u;
                *(_QWORD *)(v33 + 596) = v34;
                *(_QWORD *)(v33 + 604) = v35;
                DEC_SHARE_REF_CNT(v33);
              }
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v46);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v45);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            goto LABEL_24;
          }
          v18 = *(__int64 **)(v14 + 1824);
        }
        v17 = *v18;
        goto LABEL_16;
      }
      v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v38);
      if ( *(_DWORD *)(v27 + 32) == 1 )
      {
        v28 = *((_DWORD *)v25 + 24);
        v29 = (__int64 *)*((_QWORD *)v25 + 16);
        if ( !v29 )
          goto LABEL_39;
      }
      else
      {
        v28 = *(_DWORD *)(v14 + 2124);
        if ( (*(_DWORD *)(v14 + 2188) & 0x100) != 0 )
        {
LABEL_39:
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                v14,
                                v28,
                                v6,
                                v10,
                                v8,
                                v54,
                                v7,
                                v12,
                                v26,
                                v26,
                                v26,
                                v13,
                                v26,
                                v26,
                                v26);
LABEL_24:
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          if ( v38 )
          {
            XDCOBJ::RestoreAttributes((XDCOBJ *)&v38);
            _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
          }
          return CompatibleSurface;
        }
        v29 = *(__int64 **)(v14 + 1824);
      }
      v6 = *v29;
      goto LABEL_39;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v8, 1LL, 1LL, 0LL);
  }
}
