/*
 * XREFs of ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GreForceClipRgnChange @ 0x1C0005328 (GreForceClipRgnChange.c)
 *     GreUnlockDisplayArea @ 0x1C0007D78 (GreUnlockDisplayArea.c)
 *     DeleteOldRedirectionBitmap @ 0x1C001D698 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C001D6EC (GetOldRedirectionBitmap.c)
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0024790 (GreRedrawSpriteOverlapPresent.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0025E60 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00659FC (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00682F4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreHintDCWnd @ 0x1C0071B30 (GreHintDCWnd.c)
 *     IsThreadDesktopComposed @ 0x1C00CCDD0 (IsThreadDesktopComposed.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00FCC50 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FF554 (LogicalToPhysicalInPlaceRgn.c)
 *     UpdateSpriteArea @ 0x1C013534C (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01E3B40 (FindSpb.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     RestoreSpb @ 0x1C01E3D2C (RestoreSpb.c)
 *     SpbCheck @ 0x1C01E3F34 (SpbCheck.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 *     GreClientRgnDone @ 0x1C026830C (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r13
  unsigned int v2; // r12d
  __int64 v3; // r15
  int *v4; // r14
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rsi
  int v12; // r8d
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r13
  _DWORD *v18; // rbx
  int v19; // edi
  int v21; // edi
  _QWORD *v22; // rbx
  unsigned int v23; // esi
  __int64 v24; // rdi
  HRGN v25; // rdx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // esi
  unsigned int v31; // ebx
  int v32; // ecx
  int v33; // r9d
  int v34; // edx
  int v35; // r10d
  int v36; // r8d
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // r8
  _QWORD *v41; // r8
  int v42; // r15d
  __int64 StyleWindow; // rax
  __int64 v44; // r14
  __int64 RedirectionBitmap; // rax
  __int64 v46; // r12
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdi
  int v54; // edi
  __int64 v55; // rbx
  int v56; // edx
  unsigned int v57; // r12d
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  __m128i v61; // xmm0
  int v62; // ecx
  int v63; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v65; // r15
  int v66; // eax
  __int64 Spb; // rax
  unsigned int v68[2]; // [rsp+28h] [rbp-A9h]
  __int64 v69; // [rsp+30h] [rbp-A1h]
  __int64 v70; // [rsp+38h] [rbp-99h]
  int v71; // [rsp+40h] [rbp-91h]
  int v72; // [rsp+48h] [rbp-89h]
  int v73; // [rsp+50h] [rbp-81h]
  int v74; // [rsp+58h] [rbp-79h]
  int v75; // [rsp+68h] [rbp-69h]
  int valid; // [rsp+6Ch] [rbp-65h]
  int v77; // [rsp+6Ch] [rbp-65h]
  int v78; // [rsp+70h] [rbp-61h]
  int v79; // [rsp+74h] [rbp-5Dh]
  int v80; // [rsp+78h] [rbp-59h]
  __int64 v81; // [rsp+80h] [rbp-51h] BYREF
  int v82; // [rsp+88h] [rbp-49h]
  __int64 v83; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v84[2]; // [rsp+98h] [rbp-39h] BYREF
  HRGN v85[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-19h] BYREF
  char v87[8]; // [rsp+C0h] [rbp-11h] BYREF
  struct tagSMWP *v88; // [rsp+C8h] [rbp-9h]
  __m128i v89; // [rsp+D8h] [rbp+7h] BYREF
  struct tagRECT v90; // [rsp+E8h] [rbp+17h] BYREF

  v1 = a1;
  v88 = a1;
  v2 = 0;
  v3 = 0LL;
  v80 = 0;
  v83 = 0LL;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  valid = BltValidInit(v1);
  if ( !valid )
    goto LABEL_39;
  v4 = 0LL;
  v5 = *((_DWORD *)v1 + 7) - 1;
  v6 = *((_QWORD *)v1 + 5);
  if ( v5 < 0 )
    goto LABEL_39;
  do
  {
    v7 = HMValidateHandleNoSecure(*(_QWORD *)v6, 1);
    v8 = v7;
    if ( v7 && *(_QWORD *)(v7 + 104) && (unsigned int)IsStillWindowC(*(HWND *)(v6 + 8)) )
    {
      if ( *(_QWORD *)(v6 + 112) == 2LL
        && ((*(_BYTE *)(v8 + 71) & 1) == 0 || *(_QWORD *)(v8 + 104) != GetDesktopWindow(v8)) )
      {
        *(_QWORD *)(v6 + 112) = 0LL;
      }
      if ( !v4 )
        v4 = (int *)v6;
    }
    else
    {
      *(_QWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 32) = 6159;
    }
    v6 += 168LL;
    --v5;
  }
  while ( v5 >= 0 );
  if ( v4 )
  {
    v9 = *v4;
    v10 = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v9) + 104LL);
    v84[0] = v11;
    if ( *(_QWORD *)(gpDispInfo + 24LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v11, v1);
    *(_QWORD *)&v90.left = 0LL;
    *(_QWORD *)&v90.right = 0LL;
    v82 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v54 = *((_DWORD *)v1 + 7) - 1;
      v55 = *((_QWORD *)v1 + 5);
      if ( v54 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v55 )
          {
            if ( (*(_DWORD *)(v55 + 32) & 8) == 0 )
            {
              v56 = *(_DWORD *)(v55 + 72);
              if ( v56 || *(_DWORD *)(v55 + 76) )
              {
                v62 = -*(_DWORD *)(v55 + 76);
                v63 = -v56;
                *(_OWORD *)v85 = *(_OWORD *)(v55 + 56);
                v61 = *(__m128i *)v85;
                LODWORD(v85[1]) += v63;
                HIDWORD(v85[1]) += v62;
                HIDWORD(v85[0]) += v62;
                v89 = v61;
                LODWORD(v85[0]) = v63 + _mm_cvtsi128_si32(v61);
                UnionRect(&v90, &v89, v85);
                v12 = 1;
              }
            }
          }
          v55 += 168LL;
          --v54;
        }
        while ( v54 >= 0 );
        v82 = v12;
      }
    }
    zzzLockDisplayAreaAndInvalidateDCCache(
      v11,
      (*(_BYTE *)(v11 + 71) & 2) != 0 ? 12 : 10,
      (unsigned __int64)&v90 & -(__int64)(v12 != 0));
    v13 = 96;
    v14 = *((_QWORD *)v1 + 5);
    v15 = (unsigned int)(*((_DWORD *)v1 + 7) - 1);
    v75 = 96;
    v85[0] = (HRGN)ghrgnInvalidSum;
    v78 = 0;
    v79 = v15;
    if ( (int)v15 >= 0 )
    {
      v16 = valid;
      v17 = v11;
      while ( 1 )
      {
        v77 = --v16;
        if ( *(_QWORD *)v14 )
          break;
LABEL_19:
        v14 += 168LL;
        v15 = (unsigned int)(v15 - 1);
        v79 = v15;
        if ( (int)v15 < 0 )
        {
          v1 = v88;
          v11 = v84[0];
          goto LABEL_21;
        }
      }
      if ( (*(_DWORD *)(v14 + 32) & 8) != 0 )
      {
LABEL_18:
        v16 = v77;
        goto LABEL_19;
      }
      v23 = *(_DWORD *)(v14 + 88);
      v80 = 1;
      v24 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)v14);
      if ( (*(_BYTE *)(v24 + 66) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)v14))
          && (*(_BYTE *)(v24 + 67) & 0x20) == 0 )
        {
          goto LABEL_101;
        }
        v32 = *(_DWORD *)(v24 + 304);
        if ( (v32 & 0x20) == 0 && (*(_DWORD *)(v14 + 156) & 7) == 0 )
          goto LABEL_101;
        *(_DWORD *)(v24 + 304) = v32 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v24, ghrgnVisNew) )
        v23 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 24LL) )
        SpbCheckRect((struct tagWND *)v24, (struct tagRECT *)(v24 + 128), 1u);
      if ( (v23 & 3) == 0 && *(_QWORD *)(v24 + 176) != 1LL )
      {
        v33 = *(_DWORD *)(v14 + 64);
        v34 = *(_DWORD *)(v14 + 56);
        if ( v33 > v34 )
        {
          v35 = *(_DWORD *)(v14 + 68);
          v36 = *(_DWORD *)(v14 + 60);
          if ( v35 > v36 )
          {
            v68[0] = v35 - *(_DWORD *)(v14 + 76);
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v34 - *(_DWORD *)(v14 + 72)),
              (unsigned int)(v36 - *(_DWORD *)(v14 + 76)),
              (unsigned int)(v33 - *(_DWORD *)(v14 + 72)),
              *(_QWORD *)v68,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, *(_QWORD *)(v14 + 96), 1LL) >= 2
              && ((v13 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( *(_QWORD *)(v14 + 72) )
                GreOffsetRgn(ghrgnValid, *(unsigned int *)(v14 + 72), *(unsigned int *)(v14 + 76));
              v37 = v24;
              v38 = 0LL;
              while ( 1 )
              {
                v39 = *(_QWORD *)(v37 + 176);
                if ( v39 == 1 )
                  break;
                if ( v39 )
                {
                  v86 = *(_QWORD *)(v37 + 176);
                  if ( v38 )
                  {
                    v60 = PhysicalToLogicalInPlaceRgn(v38, &v86);
                    v39 = v86;
                    LODWORD(v81) = v60;
                  }
                  else
                  {
                    LODWORD(v81) = 0;
                  }
                  v57 = GreCombineRgn(ghrgnValid, ghrgnValid, v39, 4LL);
                  if ( (_DWORD)v81 )
                    GreDeleteObject(v39);
                  if ( v57 < 2 )
                    break;
                  v38 = v37;
                }
                v37 = *(_QWORD *)(v37 + 104);
                if ( !v37 || (*(_BYTE *)(v37 + 71) & 2) != 0 )
                {
                  v40 = *(_QWORD *)(v14 + 120);
                  if ( (!v40 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v40, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_52;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v23 |= 4u;
LABEL_52:
      if ( (v23 & 4) == 0 )
      {
        v42 = *(_DWORD *)(v14 + 72);
        if ( *(_QWORD *)(v14 + 72) )
        {
          StyleWindow = GetStyleWindow(v24, 2568LL);
          v44 = StyleWindow;
          if ( StyleWindow )
          {
            RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
            v46 = RedirectionBitmap;
            if ( RedirectionBitmap )
            {
              if ( v24 == v44 )
              {
                if ( (*(_DWORD *)(v14 + 156) & 1) == 0
                  && v42 == *(_DWORD *)(v14 + 16) - *(_DWORD *)(v14 + 80)
                  && *(_DWORD *)(v14 + 76) == *(_DWORD *)(v14 + 20) - *(_DWORD *)(v14 + 84) )
                {
                  goto LABEL_53;
                }
                OldRedirectionBitmap = GetOldRedirectionBitmap(v44);
                v59 = v46;
                if ( OldRedirectionBitmap )
                  v59 = OldRedirectionBitmap;
                v74 = *(_DWORD *)(v14 + 84);
                v73 = *(_DWORD *)(v14 + 80);
                v72 = -*(_DWORD *)(v14 + 76);
                v71 = -v42;
                v70 = v14 + 56;
                v69 = ghrgnValid;
                v68[1] = ghdcMem2[1];
              }
              else
              {
                v59 = RedirectionBitmap;
                v74 = *(_DWORD *)(v44 + 132);
                v73 = *(_DWORD *)(v44 + 128);
                v72 = -*(_DWORD *)(v14 + 76);
                v71 = -v42;
                v70 = v14 + 56;
                v69 = ghrgnValid;
                v68[1] = ghdcMem[1];
              }
              UpdateSpriteArea(v44, v46, v59);
              goto LABEL_53;
            }
          }
          if ( (*(_BYTE *)(v24 + 66) & 8) == 0 )
          {
            v65 = v83;
            if ( !v83 )
            {
              v65 = *(_QWORD *)(gpDispInfo + 48LL);
              v83 = v65;
            }
            GreHintDCWnd(v65, *(_QWORD *)v24, 0, 0, 0);
            GreSelectVisRgn(v65, ghrgnValid, 2LL);
            v74 = 1;
            v73 = 0;
            v72 = 13369376;
            v71 = *(_DWORD *)(v14 + 60) - *(_DWORD *)(v14 + 76);
            LODWORD(v70) = *(_DWORD *)(v14 + 56) - *(_DWORD *)(v14 + 72);
            v69 = v65;
            NtGdiBitBltInternal(
              v65,
              *(unsigned int *)(v14 + 56),
              *(unsigned int *)(v14 + 60),
              (unsigned int)(*(_DWORD *)(v14 + 64) - *(_DWORD *)(v14 + 56)));
            GreHintDCWnd(v65, 0, 0, 0, 0);
          }
        }
      }
LABEL_53:
      if ( ((*(_BYTE *)(v24 + 56) >> 7) & ((v23 & 2) == 0)) == 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, *(HRGN *)(v14 + 96), ghrgnVisNew, 4u, v23) )
      {
        v25 = *(HRGN *)(v14 + 96);
        if ( v25 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v25, ghrgnVisNew, 2u, v23) )
          {
LABEL_100:
            v13 = v75;
            goto LABEL_101;
          }
        }
        else
        {
          v89 = *(__m128i *)(v17 + 128);
          TransformRectBetweenCoordinateSpaces(&v89, &v89, v24, v17);
          SetRectRgnIndirect(ghrgnInvalid, &v89);
        }
LABEL_56:
        v13 = v75;
        if ( (v23 & 4) == 0 )
        {
          if ( (v75 & 0x20) != 0 )
          {
            v47 = 5LL;
            v48 = 0LL;
            v49 = ghrgnValidSum;
          }
          else
          {
            v47 = 2LL;
            v49 = ghrgnValidSum;
            v48 = ghrgnValidSum;
          }
          GreCombineRgn(v49, ghrgnValid, v48, v47);
          v13 = v75 & 0xFFFFFFDF;
          v75 &= ~0x20u;
        }
        if ( (v13 & 0x20) != 0 )
        {
          if ( (v23 & 4) != 0 )
          {
LABEL_59:
            v26 = *(_DWORD *)(v14 + 32);
            if ( ((*(_BYTE *)(v24 + 56) >> 7) & ((v26 & 0x40) == 0)) != 0 && (v26 & 0x87) != 7 )
            {
              Spb = FindSpb(v24);
              FreeSpb(Spb);
            }
            if ( (unsigned int)IsToplevelWindowDesktopComposed(v24)
              && (*(_BYTE *)(v24 + 66) & 8) != 0
              && *(_QWORD *)(v14 + 112)
              && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, *(HRGN *)(v14 + 96), 4u, v23) )
            {
              GreForceClipRgnChange(v58, *(struct PDEVOBJ **)v24);
            }
            v27 = *(_QWORD *)(v14 + 96);
            if ( v27 )
            {
              GreDeleteObject(v27);
              *(_QWORD *)(v14 + 96) = 0LL;
            }
            v28 = v78 + 1;
            if ( (((*(_BYTE *)(v14 + 32) & 0x40) != 0) & (unsigned __int8)~*(_BYTE *)(v24 + 61)) == 0 )
              v28 = v78;
            v78 = v28;
            v10 = v28;
            if ( (v23 & 8) != 0 )
              goto LABEL_76;
            if ( (v23 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v87);
              xxxInternalInvalidate((struct tagWND *)v24, (HRGN)1, 0x485u);
              if ( !v87[0] )
              {
                --gdwInAtomicOperation;
                UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v87);
              }
            }
            v81 = ghrgnInvalid;
            v29 = LogicalToPhysicalInPlaceRgn(v24, &v81);
            v30 = v29;
            if ( (v13 & 0x40) != 0 )
            {
              if ( !v77 && !v29 )
              {
                v85[0] = (HRGN)ghrgnInvalid;
LABEL_75:
                v13 &= ~0x40u;
                v78 = v10;
                v75 = v13;
LABEL_76:
                LODWORD(v15) = v79;
                v3 = v83;
                goto LABEL_18;
              }
              v50 = 5LL;
              v52 = 0LL;
              v51 = ghrgnInvalidSum;
            }
            else
            {
              v50 = 2LL;
              v51 = ghrgnInvalidSum;
              v52 = ghrgnInvalidSum;
            }
            v53 = v81;
            GreCombineRgn(v51, v81, v52, v50);
            if ( v30 )
              GreDeleteObject(v53);
            goto LABEL_75;
          }
          v41 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v41 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v41, 4LL) > 1 )
          goto LABEL_59;
LABEL_101:
        *(_DWORD *)(v24 + 304) &= ~2u;
        v23 |= 8u;
        goto LABEL_59;
      }
      v66 = RestoreSpb(v24, ghrgnInvalid, &v83);
      if ( v66 )
      {
        if ( v66 == 2 && (v75 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v23 & 1) != 0 )
          goto LABEL_166;
      }
      else if ( (v23 & 1) != 0 )
      {
        goto LABEL_100;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_166:
      if ( (v23 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v23 |= 0x20u;
      goto LABEL_56;
    }
LABEL_21:
    if ( v82 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 32LL), &v90);
    v18 = (_DWORD *)*((_QWORD *)v1 + 5);
    v19 = *((_DWORD *)v1 + 7);
    while ( --v19 >= 0 )
    {
      if ( *(_QWORD *)v18 )
      {
        v15 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*v18);
        if ( (*(_BYTE *)(v15 + 66) & 8) != 0 )
          DeleteOldRedirectionBitmap(v15);
      }
      v18 += 42;
    }
    if ( (v13 & 0x40) == 0 )
    {
      if ( v10 != *((_DWORD *)v1 + 7) || (v31 = 69, v11 == GetDesktopWindow(v11)) )
        v31 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v84);
      xxxInternalInvalidate((struct tagWND *)v11, v85[0], v31);
      if ( !LOBYTE(v84[0]) )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v84);
      }
    }
    if ( gcountPWO )
      GreClientRgnDone(v15);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 32LL));
    if ( v3 )
    {
      GreSelectVisRgn(v3, 0LL, 1LL);
      GreGetBounds(v3, 0LL, 0LL);
    }
    v2 = v80;
  }
  else
  {
LABEL_39:
    v21 = *((_DWORD *)v1 + 7) - 1;
    if ( v21 >= 0 )
    {
      v22 = (_QWORD *)(*((_QWORD *)v1 + 5) + 96LL);
      do
      {
        if ( *v22 )
        {
          GreDeleteObject(*v22);
          *v22 = 0LL;
        }
        v22 += 21;
        --v21;
      }
      while ( v21 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v2;
}
