/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GreUnlockDisplayArea @ 0x1C000CEC8 (GreUnlockDisplayArea.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreHintDCWnd @ 0x1C002A080 (GreHintDCWnd.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0065D98 (GreRedrawSpriteOverlapPresent.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0067FFC (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068128 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0069E5C (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C008A5F8 (GetOldRedirectionBitmap.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     UpdateSpriteArea @ 0x1C00E4894 (UpdateSpriteArea.c)
 *     GreForceClipRgnChange @ 0x1C00E6124 (GreForceClipRgnChange.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C0108A5C (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C010B2D8 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01EFB5C (FindSpb.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     RestoreSpb @ 0x1C01EFD48 (RestoreSpb.c)
 *     SpbCheck @ 0x1C01EFF50 (SpbCheck.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 *     GreClientRgnDone @ 0x1C02670CC (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r13
  HDC v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rdx
  int *v5; // r14
  int v6; // esi
  int *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // r14d
  __int64 v12; // rsi
  int v13; // r8d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r13d
  int v18; // eax
  _DWORD *v19; // rbx
  int v20; // edi
  __int64 v21; // rcx
  int v23; // edi
  _QWORD *v24; // rbx
  unsigned int v25; // esi
  _QWORD *v26; // rdi
  HRGN v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // esi
  unsigned int v31; // ebx
  int v32; // ecx
  int v33; // r9d
  int v34; // edx
  int v35; // r10d
  int v36; // r8d
  int v37; // eax
  _QWORD *v38; // r15
  _QWORD *v39; // rcx
  __int64 v40; // r14
  __int64 v41; // r8
  _QWORD *v42; // r8
  int v43; // r15d
  __int64 StyleWindow; // rax
  __int64 v45; // r14
  __int64 RedirectionBitmap; // rax
  __int64 v47; // r12
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // edi
  __int64 v52; // rbx
  int v53; // edx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rcx
  unsigned int v59; // r12d
  __int64 v60; // r8
  int v61; // eax
  __m128i v62; // xmm0
  int v63; // ecx
  int v64; // edx
  __int64 OldRedirectionBitmap; // rax
  HDC v66; // r15
  int v67; // eax
  int v68; // eax
  __int64 Spb; // rax
  unsigned int v70[2]; // [rsp+28h] [rbp-99h]
  __int64 v71; // [rsp+30h] [rbp-91h]
  __int64 v72; // [rsp+38h] [rbp-89h]
  int v73; // [rsp+40h] [rbp-81h]
  int v74; // [rsp+48h] [rbp-79h]
  int v75; // [rsp+50h] [rbp-71h]
  int v76; // [rsp+58h] [rbp-69h]
  int v77; // [rsp+68h] [rbp-59h]
  int valid; // [rsp+6Ch] [rbp-55h]
  int v79; // [rsp+6Ch] [rbp-55h]
  __int64 v80; // [rsp+70h] [rbp-51h] BYREF
  int v81; // [rsp+78h] [rbp-49h]
  int v82; // [rsp+7Ch] [rbp-45h]
  int v83; // [rsp+80h] [rbp-41h]
  HDC v84[2]; // [rsp+88h] [rbp-39h] BYREF
  __m128i v85; // [rsp+98h] [rbp-29h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-9h]
  HRGN v89; // [rsp+C0h] [rbp-1h]
  __m128i v90; // [rsp+C8h] [rbp+7h] BYREF
  struct tagRECT v91; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v86 = a1;
  v2 = 0LL;
  v84[0] = 0LL;
  v3 = 0;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  valid = BltValidInit((struct tagSMWP *)v1);
  if ( !valid )
    goto LABEL_36;
  v5 = 0LL;
  v6 = *(_DWORD *)(v1 + 28) - 1;
  v7 = *(int **)(v1 + 40);
  if ( v6 < 0 )
    goto LABEL_36;
  do
  {
    LOBYTE(v4) = 1;
    v8 = HMValidateHandleNoSecure(*(_QWORD *)v7, v4);
    v9 = v8;
    if ( v8 && *(_QWORD *)(v8 + 104) && (unsigned int)IsStillWindowC(*((HWND *)v7 + 1)) )
    {
      if ( *((_QWORD *)v7 + 14) == 2LL
        && ((*(_BYTE *)(v9 + 71) & 1) == 0 || *(_QWORD *)(v9 + 104) != GetDesktopWindow(v9)) )
      {
        *((_QWORD *)v7 + 14) = 0LL;
      }
      if ( !v5 )
        v5 = v7;
    }
    else
    {
      *(_QWORD *)v7 = 0LL;
      v7[8] = 6159;
    }
    v7 += 42;
    --v6;
  }
  while ( v6 >= 0 );
  if ( v5 )
  {
    v10 = *v5;
    v11 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v10) + 104LL);
    v88 = v12;
    if ( *(_QWORD *)(gpDispInfo + 24LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, (struct tagSMWP *)v1);
    *(_QWORD *)&v91.left = 0LL;
    *(_QWORD *)&v91.right = 0LL;
    v83 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v51 = *(_DWORD *)(v1 + 28) - 1;
      v52 = *(_QWORD *)(v1 + 40);
      if ( v51 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v52 )
          {
            if ( (*(_DWORD *)(v52 + 32) & 8) == 0 )
            {
              v53 = *(_DWORD *)(v52 + 72);
              if ( v53 || *(_DWORD *)(v52 + 76) )
              {
                v63 = -*(_DWORD *)(v52 + 76);
                v64 = -v53;
                v85 = *(__m128i *)(v52 + 56);
                v62 = v85;
                v85.m128i_i32[2] += v64;
                v85.m128i_i32[3] += v63;
                v85.m128i_i32[1] += v63;
                v90 = v62;
                v85.m128i_i32[0] = v64 + _mm_cvtsi128_si32(v62);
                UnionRect(&v91, &v90, &v85);
                v13 = 1;
              }
            }
          }
          v52 += 168LL;
          --v51;
        }
        while ( v51 >= 0 );
        v83 = v13;
      }
    }
    LODWORD(v80) = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 464LL) >> 14) & 2;
    zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(v12 + 71) & 2) != 0 ? 28 : 26);
    v14 = 96;
    v15 = *(_QWORD *)(v1 + 40);
    v16 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    v77 = 96;
    v89 = (HRGN)ghrgnInvalidSum;
    v81 = 0;
    v82 = v16;
    if ( (int)v16 >= 0 )
    {
      v17 = v80;
      v18 = valid;
      while ( 1 )
      {
        v79 = --v18;
        if ( *(_QWORD *)v15 )
          break;
LABEL_19:
        v15 += 168LL;
        v16 = (unsigned int)(v16 - 1);
        v82 = v16;
        if ( (int)v16 < 0 )
        {
          v12 = v88;
          LODWORD(v80) = v17;
          v1 = v86;
          goto LABEL_21;
        }
      }
      if ( (*(_DWORD *)(v15 + 32) & 8) != 0 )
      {
LABEL_18:
        v18 = v79;
        goto LABEL_19;
      }
      v17 |= 1u;
      v25 = *(_DWORD *)(v15 + 88);
      v26 = *(_QWORD **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v15);
      if ( (*((_BYTE *)v26 + 66) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v15))
          && (*((_BYTE *)v26 + 67) & 0x20) == 0 )
        {
          goto LABEL_95;
        }
        v32 = *((_DWORD *)v26 + 76);
        if ( (v32 & 0x20) == 0 && (*(_DWORD *)(v15 + 156) & 7) == 0 )
          goto LABEL_95;
        *((_DWORD *)v26 + 76) = v32 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v26, ghrgnVisNew) )
        v25 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 24LL) )
        SpbCheckRect((struct tagWND *)v26, (struct tagRECT *)v26 + 8, 1u);
      if ( (v25 & 3) == 0 && v26[22] != 1LL )
      {
        v33 = *(_DWORD *)(v15 + 64);
        v34 = *(_DWORD *)(v15 + 56);
        if ( v33 > v34 )
        {
          v35 = *(_DWORD *)(v15 + 68);
          v36 = *(_DWORD *)(v15 + 60);
          if ( v35 > v36 )
          {
            v37 = *(_DWORD *)(v15 + 76);
            v70[0] = v35 - v37;
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v34 - *(_DWORD *)(v15 + 72)),
              (unsigned int)(v36 - v37),
              (unsigned int)(v33 - *(_DWORD *)(v15 + 72)),
              *(_QWORD *)v70,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, *(_QWORD *)(v15 + 96), 1LL) >= 2
              && ((v14 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( *(_QWORD *)(v15 + 72) )
                GreOffsetRgn(ghrgnValid, *(unsigned int *)(v15 + 72), *(unsigned int *)(v15 + 76));
              v38 = v26;
              v39 = 0LL;
              while ( 1 )
              {
                v40 = v38[22];
                if ( v40 == 1 )
                  break;
                if ( v40 )
                {
                  v87 = v38[22];
                  if ( v39 )
                  {
                    v61 = PhysicalToLogicalInPlaceRgn(v39, &v87);
                    v40 = v87;
                    LODWORD(v80) = v61;
                  }
                  else
                  {
                    LODWORD(v80) = 0;
                  }
                  v59 = GreCombineRgn(ghrgnValid, ghrgnValid, v40, 4LL);
                  if ( (_DWORD)v80 )
                    GreDeleteObject(v40);
                  if ( v59 < 2 )
                    break;
                  v39 = v38;
                }
                v38 = (_QWORD *)v38[13];
                if ( !v38 || (*((_BYTE *)v38 + 71) & 2) != 0 )
                {
                  v41 = *(_QWORD *)(v15 + 120);
                  if ( (!v41 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v41, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_49;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v25 |= 4u;
LABEL_49:
      if ( (v25 & 4) == 0 )
      {
        v43 = *(_DWORD *)(v15 + 72);
        if ( *(_QWORD *)(v15 + 72) )
        {
          StyleWindow = GetStyleWindow(v26, 2568LL);
          v45 = StyleWindow;
          if ( StyleWindow )
          {
            RedirectionBitmap = GetRedirectionBitmap(StyleWindow);
            v47 = RedirectionBitmap;
            if ( RedirectionBitmap )
            {
              if ( v26 == (_QWORD *)v45 )
              {
                if ( (*(_DWORD *)(v15 + 156) & 1) == 0
                  && v43 == *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 80)
                  && *(_DWORD *)(v15 + 76) == *(_DWORD *)(v15 + 20) - *(_DWORD *)(v15 + 84) )
                {
                  goto LABEL_50;
                }
                OldRedirectionBitmap = GetOldRedirectionBitmap(v45);
                v60 = v47;
                if ( OldRedirectionBitmap )
                  v60 = OldRedirectionBitmap;
                v76 = *(_DWORD *)(v15 + 84);
                v75 = *(_DWORD *)(v15 + 80);
                v74 = -*(_DWORD *)(v15 + 76);
                v73 = -v43;
                v72 = v15 + 56;
                v71 = ghrgnValid;
                v70[1] = ghdcMem2[1];
              }
              else
              {
                v60 = RedirectionBitmap;
                v76 = *(_DWORD *)(v45 + 132);
                v75 = *(_DWORD *)(v45 + 128);
                v74 = -*(_DWORD *)(v15 + 76);
                v73 = -v43;
                v72 = v15 + 56;
                v71 = ghrgnValid;
                v70[1] = ghdcMem[1];
              }
              UpdateSpriteArea(v45, v47, v60);
              goto LABEL_50;
            }
          }
          if ( (*((_BYTE *)v26 + 66) & 8) == 0 )
          {
            v66 = v84[0];
            if ( !v84[0] )
            {
              v66 = *(HDC *)(gpDispInfo + 48LL);
              v84[0] = v66;
            }
            GreHintDCWnd(v66, *v26, 0LL, 0, 0);
            GreSelectVisRgn(v66, ghrgnValid, 2LL);
            NtGdiBitBltInternal(
              v66,
              *(_DWORD *)(v15 + 56),
              *(_DWORD *)(v15 + 60),
              *(_DWORD *)(v15 + 64) - *(_DWORD *)(v15 + 56),
              *(_DWORD *)(v15 + 68) - *(_DWORD *)(v15 + 60),
              v66,
              *(_DWORD *)(v15 + 56) - *(_DWORD *)(v15 + 72),
              *(_DWORD *)(v15 + 60) - *(_DWORD *)(v15 + 76),
              13369376,
              0,
              1);
            GreHintDCWnd(v66, 0LL, 0LL, 0, 0);
          }
        }
      }
LABEL_50:
      if ( *((char *)v26 + 56) >= 0
        || (v25 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, *(HRGN *)(v15 + 96), ghrgnVisNew, 4u, v25) )
      {
        v27 = *(HRGN *)(v15 + 96);
        if ( v27 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v27, ghrgnVisNew, 2u, v25) )
          {
LABEL_94:
            v14 = v77;
            goto LABEL_95;
          }
        }
        else
        {
          v90 = *(__m128i *)(v88 + 128);
          TransformRectBetweenCoordinateSpaces(&v90, &v90, v26, v88);
          SetRectRgnIndirect(ghrgnInvalid, &v90);
        }
LABEL_53:
        v14 = v77;
        if ( (v25 & 4) == 0 )
        {
          if ( (v77 & 0x20) != 0 )
          {
            v48 = 5LL;
            v49 = 0LL;
            v50 = ghrgnValidSum;
          }
          else
          {
            v48 = 2LL;
            v50 = ghrgnValidSum;
            v49 = ghrgnValidSum;
          }
          GreCombineRgn(v50, ghrgnValid, v49, v48);
          v14 = v77 & 0xFFFFFFDF;
          v77 &= ~0x20u;
        }
        if ( (v14 & 0x20) != 0 )
        {
          if ( (v25 & 4) != 0 )
          {
LABEL_56:
            if ( *((char *)v26 + 56) < 0 )
            {
              v68 = *(_DWORD *)(v15 + 32);
              if ( (v68 & 0x40) == 0 && (v68 & 0x87) != 7 )
              {
                Spb = FindSpb(v26);
                FreeSpb(Spb);
              }
            }
            if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v26)
              && (*((_BYTE *)v26 + 66) & 8) != 0
              && *(_QWORD *)(v15 + 112)
              && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, *(HRGN *)(v15 + 96), 4u, v25) )
            {
              GreForceClipRgnChange(v58, *v26);
            }
            v28 = *(_QWORD *)(v15 + 96);
            if ( v28 )
            {
              GreDeleteObject(v28);
              *(_QWORD *)(v15 + 96) = 0LL;
            }
            v11 = v81;
            if ( (*((_BYTE *)v26 + 61) & 1) == 0 && (*(_DWORD *)(v15 + 32) & 0x40) != 0 )
              v11 = ++v81;
            if ( (v25 & 8) != 0 )
              goto LABEL_71;
            if ( (v25 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v85);
              xxxInternalInvalidate((struct tagWND *)v26, (HRGN)1, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v85);
            }
            v80 = ghrgnInvalid;
            v29 = LogicalToPhysicalInPlaceRgn(v26, &v80);
            v30 = v29;
            if ( (v14 & 0x40) != 0 )
            {
              if ( !v79 && !v29 )
              {
                v89 = (HRGN)ghrgnInvalid;
LABEL_70:
                v14 &= ~0x40u;
                v77 = v14;
LABEL_71:
                LODWORD(v16) = v82;
                v2 = v84[0];
                goto LABEL_18;
              }
              v54 = 5LL;
              v56 = 0LL;
              v55 = ghrgnInvalidSum;
            }
            else
            {
              v54 = 2LL;
              v55 = ghrgnInvalidSum;
              v56 = ghrgnInvalidSum;
            }
            v57 = v80;
            GreCombineRgn(v55, v80, v56, v54);
            if ( v30 )
              GreDeleteObject(v57);
            goto LABEL_70;
          }
          v42 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v42 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v42, 4LL) > 1 )
          goto LABEL_56;
LABEL_95:
        *((_DWORD *)v26 + 76) &= ~2u;
        v25 |= 8u;
        goto LABEL_56;
      }
      v67 = RestoreSpb(v26, ghrgnInvalid, v84);
      if ( v67 )
      {
        if ( v67 == 2 && (v77 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v25 & 1) != 0 )
          goto LABEL_162;
      }
      else if ( (v25 & 1) != 0 )
      {
        goto LABEL_94;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_162:
      if ( (v25 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v25 |= 0x20u;
      goto LABEL_53;
    }
LABEL_21:
    if ( v83 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 32LL), &v91);
    v19 = *(_DWORD **)(v1 + 40);
    v20 = *(_DWORD *)(v1 + 28);
    while ( --v20 >= 0 )
    {
      if ( *(_QWORD *)v19 )
      {
        v16 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*v19);
        if ( (*(_BYTE *)(v16 + 66) & 8) != 0 )
          DeleteOldRedirectionBitmap(v16);
      }
      v19 += 42;
    }
    if ( (v14 & 0x40) == 0 )
    {
      if ( v11 != *(_DWORD *)(v1 + 28) || (v31 = 69, v12 == GetDesktopWindow(v12)) )
        v31 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
      xxxInternalInvalidate((struct tagWND *)v12, v89, v31);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
    }
    if ( gcountPWO )
      GreClientRgnDone(v16);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 32LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v80;
  }
  else
  {
LABEL_36:
    v23 = *(_DWORD *)(v1 + 28) - 1;
    if ( v23 >= 0 )
    {
      v24 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v24 )
        {
          GreDeleteObject(*v24);
          *v24 = 0LL;
        }
        v24 += 21;
        --v23;
      }
      while ( v23 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  zzzEndDeferWinEventNotify(v21);
  return v3;
}
