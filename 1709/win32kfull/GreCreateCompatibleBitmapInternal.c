/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0023138
 * Callers:
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C0103790 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C0114450 (GreCreateDIBitmapComp.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     RecolorDeskPattern @ 0x1C0126200 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01F3F00 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01F6C54 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C020CAB8 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C020EBB8 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0041524 (hsurfCreateCompatibleSurface.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 v9; // r15
  __int64 v10; // r12
  BOOL v12; // r13d
  int v13; // esi
  __int64 v14; // rbx
  struct SURFACE *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // r13
  int v20; // r14d
  __int64 *v21; // rax
  float v22; // xmm7_4
  float v23; // xmm6_4
  int v24; // eax
  __int64 CompatibleSurface; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdi
  struct SURFACE *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // edx
  __int64 *v34; // rax
  int IsGDIScalingApplicable; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  int v41; // [rsp+88h] [rbp-80h] BYREF
  float v42; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 *v43; // [rsp+90h] [rbp-78h] BYREF
  int v44; // [rsp+98h] [rbp-70h]
  unsigned int v45; // [rsp+9Ch] [rbp-6Ch]
  int v46; // [rsp+A0h] [rbp-68h]
  BOOL v47; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-60h]
  _BYTE v49[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  __int64 v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  __int64 v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+180h] [rbp+78h] BYREF
  int v58; // [rsp+188h] [rbp+80h]
  BOOL v59; // [rsp+190h] [rbp+88h]

  LODWORD(v6) = 0;
  v7 = 0;
  v9 = (int)a3;
  v10 = (int)a2;
  v58 = 0;
  v48 = __PAIR64__(a3, a2);
  v59 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v58 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v46 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v47 = v12;
  if ( (int)v10 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      v43 = 0LL;
      v44 = 0;
      v45 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v43, a1);
      if ( !v43 )
        return 0LL;
      v14 = v43[6];
      if ( (*(_DWORD *)(v14 + 32) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = (struct SURFACE *)v43[64];
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v49, (struct XDCOBJ *)&v43);
        v17 = *(_DWORD *)(v14 + 32);
        v54 = 0LL;
        v50 = 0LL;
        v56 = 0LL;
        v55 = 0LL;
        v53 = 0LL;
        v52 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v50 = *(_QWORD *)(v14 + 40);
          v51 = v14;
          GreAcquireSemaphore(v50);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v50, 11LL);
        }
        v18 = v43;
        LODWORD(v19) = 0;
        if ( *((_DWORD *)v43 + 8) == 1 )
        {
          v21 = (__int64 *)*((_QWORD *)v15 + 16);
          v16 = *((unsigned int *)v15 + 24);
          v20 = *((_DWORD *)v15 + 24);
          if ( !v21 )
          {
LABEL_16:
            v22 = 0.0;
            v23 = 0.0;
            if ( a6 )
            {
              v16 = *a6;
              if ( (_WORD)v16 == 96 )
                goto LABEL_18;
              v42 = (float)(unsigned __int16)v16 / 96.0;
              v22 = v42;
              v23 = v42;
            }
            else
            {
              v24 = *((_DWORD *)v43 + 134);
              if ( (v24 & 1) == 0 )
                goto LABEL_18;
              if ( (v24 & 2) != 0 )
                goto LABEL_18;
              IsGDIScalingApplicable = UserIsGDIScalingApplicable(0LL);
              v18 = v43;
              if ( !IsGDIScalingApplicable )
                goto LABEL_18;
              v22 = *((float *)v43 + 135);
              v23 = *((float *)v43 + 136);
            }
            if ( v22 != 0.0 )
            {
LABEL_51:
              v41 = v10;
              v42 = *(float *)&v9;
              bFToL(v16, &v41, 6LL);
              bFToL(v36, &v42, v37);
              LODWORD(v10) = v41;
              *(float *)&v9 = v42;
LABEL_19:
              if ( v46 )
              {
                if ( (*(_DWORD *)(v14 + 32) & 0x4000000) != 0 )
                {
                  if ( a5 )
                  {
                    v38 = *(_QWORD *)(v14 + 1816);
                    if ( v38 )
                    {
                      *(_QWORD *)(v38 + 104) = *a5;
                      v18 = v43;
                    }
                  }
                }
              }
              CompatibleSurface = hsurfCreateCompatibleSurface(
                                    v18[6],
                                    v20,
                                    v19,
                                    v10,
                                    v9,
                                    v59,
                                    v58,
                                    v47,
                                    0,
                                    0,
                                    0,
                                    v13,
                                    0,
                                    0,
                                    0LL);
              v27 = CompatibleSurface;
              if ( v22 != 0.0 || v23 != 0.0 )
              {
                LOBYTE(v26) = 5;
                v39 = HmgShareLockCheck(CompatibleSurface, v26);
                if ( v39 )
                {
                  v40 = v48;
                  *(_DWORD *)(v39 + 116) |= 0x800u;
                  *(_QWORD *)(v39 + 604) = v40;
                  *(float *)(v39 + 596) = v22;
                  *(float *)(v39 + 600) = v23;
                  DEC_SHARE_REF_CNT(v39);
                }
              }
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v50);
              NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v49);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
              goto LABEL_23;
            }
LABEL_18:
            if ( v23 == 0.0 )
              goto LABEL_19;
            goto LABEL_51;
          }
        }
        else
        {
          v20 = *(_DWORD *)(v14 + 2124);
          if ( (*(_DWORD *)(v14 + 2188) & 0x100) != 0 )
            goto LABEL_16;
          v21 = *(__int64 **)(v14 + 1824);
        }
        v19 = *v21;
        goto LABEL_16;
      }
      v30 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v43);
      if ( *(_DWORD *)(v32 + 32) == 1 )
      {
        v33 = *((_DWORD *)v30 + 24);
        v34 = (__int64 *)*((_QWORD *)v30 + 16);
        if ( !v34 )
          goto LABEL_39;
      }
      else
      {
        v33 = *(_DWORD *)(v14 + 2124);
        if ( (*(_DWORD *)(v14 + 2188) & 0x100) != 0 )
        {
LABEL_39:
          v27 = hsurfCreateCompatibleSurface(v14, v33, v6, v10, v9, v59, v7, v12, v31, v31, v31, v13, v31, v31, v31);
LABEL_23:
          if ( !(unsigned int)GreSetBitmapOwner(v27, 2147483650LL) )
          {
            bDeleteSurface(v27);
            v27 = 0LL;
          }
          if ( v43 )
          {
            XDCOBJ::RestoreAttributes((XDCOBJ *)&v43);
            v57 = 0;
            v28 = *v43;
            HmgDecrementExclusiveReferenceCountEx(v43, v45, &v57);
            if ( v57 )
              bDeleteDCInternalEx(v28, 0LL);
          }
          return v27;
        }
        v34 = *(__int64 **)(v14 + 1824);
      }
      v6 = *v34;
      goto LABEL_39;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
  }
}
