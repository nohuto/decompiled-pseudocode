/*
 * XREFs of xxxScrollWindowEx @ 0x1C006C6B0
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C006C500 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetDCOrgOnScreen @ 0x1C00809E4 (GetDCOrgOnScreen.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     OffsetChildren @ 0x1C00FDC68 (OffsetChildren.c)
 *     MirrorRegion @ 0x1C0107644 (MirrorRegion.c)
 *     _IsDescendant @ 0x1C01398D0 (_IsDescendant.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  __int64 v9; // r12
  int v10; // esi
  struct tagWND *v11; // rbx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // edx
  struct tagRECT *v15; // r8
  int v16; // edx
  __int16 v17; // si
  __int64 ThreadWin32Thread; // rax
  int v19; // edi
  unsigned int v21; // ecx
  unsigned __int64 v22; // r14
  unsigned int v23; // edi
  HDC DCEx; // r13
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  int v27; // edi
  struct tagWND *v28; // rcx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  bool v31; // zf
  struct tagRECT *v32; // rdi
  int v33; // r8d
  int v34; // eax
  struct tagRECT *v35; // r13
  struct tagRECT v36; // xmm0
  LONG left; // r8d
  int v38; // ecx
  int v39; // edx
  LONG v40; // edx
  LONG v41; // ecx
  int v42; // edx
  int v43; // r8d
  unsigned __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 DesktopWindow; // rax
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  ULONG_PTR i; // rdi
  int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  int v57; // [rsp+5Ch] [rbp-A4h]
  HRGN v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+6Ch] [rbp-94h]
  int v61; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+74h] [rbp-8Ch]
  struct tagRECT v63; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v64; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+94h] [rbp-6Ch]
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  unsigned int v68; // [rsp+A0h] [rbp-60h]
  unsigned int v69; // [rsp+A4h] [rbp-5Ch]
  unsigned int v70; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+ACh] [rbp-54h]
  unsigned int v72; // [rsp+B0h] [rbp-50h]
  unsigned int v73; // [rsp+B4h] [rbp-4Ch]
  int v74; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v75; // [rsp+C0h] [rbp-40h]
  struct tagRECT *v76; // [rsp+C8h] [rbp-38h]
  struct tagRECT *v77; // [rsp+D0h] [rbp-30h]
  struct tagRECT *v78; // [rsp+D8h] [rbp-28h]
  _QWORD v79[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v80[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v81[4]; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v82; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v83; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v84; // [rsp+140h] [rbp+40h] BYREF
  int v85; // [rsp+150h] [rbp+50h] BYREF
  int v86; // [rsp+154h] [rbp+54h]
  int v87; // [rsp+158h] [rbp+58h]
  int v88; // [rsp+15Ch] [rbp+5Ch]

  v9 = 0LL;
  v77 = a5;
  v10 = a2;
  v11 = a1;
  v12 = 0;
  v64 = 0;
  v65 = 0;
  v57 = 0;
  v76 = a4;
  v75 = a4;
  v13 = a6;
  v54 = a2;
  v58 = (HRGN)a6;
  v78 = (struct tagRECT *)a7;
  v53 = 0;
  if ( !a1 )
  {
    v57 = 1;
    v11 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL);
  }
  if ( (*((_BYTE *)v11 + 66) & 0x40) != 0 )
  {
    v10 = -a2;
    v54 = -a2;
    MirrorRegion(v11, a6, 1LL);
    if ( a4 )
    {
      v14 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - a4->left;
      a4->left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - a4->right;
      a4->right = v14;
    }
    v15 = v77;
    v13 = a6;
    if ( v77 )
    {
      v16 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v77->left;
      v77->left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v77->right;
      v15->right = v16;
    }
    v12 = 0;
  }
  if ( !(v10 | a3) )
    goto LABEL_26;
  if ( (unsigned int)IsVisible(v11) )
  {
    v17 = a8;
    goto LABEL_16;
  }
  if ( (*((_BYTE *)v11 + 71) & 0x20) != 0 )
  {
LABEL_26:
    v17 = a8;
  }
  else
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !a4 )
    {
      v12 = 1;
      v17 = a8 & 0xFFFD;
      v53 = 1;
    }
  }
  if ( v13 )
  {
    SetEmptyRgn(v13);
    v12 = v53;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v12 )
    return 1LL;
LABEL_16:
  v61 = 0;
  if ( v57 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v80[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v80;
    v80[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  }
  if ( !v53 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 408LL) + 288LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, v11) )
      {
        v61 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v19 = 65538;
  v74 = v17 & 0x8000;
  if ( v17 < 0 )
  {
    v19 = (*(_BYTE *)(*((_QWORD *)v11 + 21) + 100LL) & 0x60) != 0 ? 0x10000 : 65538;
    v59 = v17 & 1;
    if ( (v17 & 1) != 0 && (*((_BYTE *)v11 + 71) & 2) != 0 )
      v19 |= 0x80002u;
  }
  else
  {
    v59 = v17 & 1;
    if ( (v17 & 1) != 0 )
      v19 = 589826;
  }
  ++gdwDeferWinEvent;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v21 = 0;
    v60 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v21 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v21 >= gdwAtomicCheckLogSize )
          goto LABEL_44;
      }
      v22 = (unsigned __int64)v21 << 6;
      *(_DWORD *)(v22 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v22 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v22 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v22 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v60 = v62;
  }
LABEL_44:
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v23 = v19 | 0x60000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v23);
  if ( (v17 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v64);
    if ( !a6 )
      v58 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v75 = &v83;
    GetRect((__int64)v11, &v83.left, 17);
    if ( (v23 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v25 = v54;
  v26 = a3;
  v82 = *v75;
  v27 = v23 & 2;
  if ( !v27 )
  {
    GreTransformPoints(DCEx, 1);
    v67 = 0;
    v66 = 0;
    v68 = v54;
    v69 = a3;
    GreTransformPoints(DCEx, 1);
    v25 = v68 - v66;
    v26 = v69 - v67;
  }
  if ( v53 )
  {
    v55 = 1;
  }
  else
  {
    v28 = (struct tagWND *)*((_QWORD *)v11 + 22);
    if ( v74 && (*((_BYTE *)v11 + 61) & 1) == 0 )
    {
      if ( (unsigned __int64)v28 > 1 && (unsigned int)GreGetRgnBox(v28, &v85) )
      {
        v29 = v26 - *((_DWORD *)v11 + 37);
        v30 = v25 - *((_DWORD *)v11 + 36);
        v88 += v29;
        v86 += v29;
        v85 += v30;
        v87 += v30;
        xxxRedrawWindow(v11, &v85, 0LL, 133LL);
      }
      v28 = 0LL;
    }
    v31 = v27 == 0;
    v32 = v78;
    v55 = InternalScrollDC(v28, DCEx, v54, a3, v75, v77, (HRGN)v28, v58, v78, v31);
    if ( v32 && (*((_BYTE *)v11 + 66) & 0x40) != 0 )
    {
      v33 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v32->left;
      v32->left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v32->right;
      v32->right = v33;
    }
  }
  _ReleaseDC(DCEx);
  v34 = v53;
  v35 = v76;
  if ( !v53 )
  {
    if ( *(_QWORD *)(gpDispInfo + 24LL) )
    {
      if ( v76 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v36 = v82;
          v83 = v82;
          left = v82.left;
        }
        else
        {
          v38 = *((_DWORD *)v11 + 36);
          v39 = *((_DWORD *)v11 + 37);
          left = v38 + v82.left;
          v83.right = v82.right + v38;
          v83.left = v38 + v82.left;
          v83.top = v39 + v82.top;
          v83.bottom = v39 + v82.bottom;
          v36 = v83;
        }
        v63.right = v25 + v36.right;
        v63.bottom = v26 + v36.bottom;
        v63.top = v26 + v36.top;
        v63.left = left + v25;
        UnionRect(&v63, &v63, &v83);
      }
      else
      {
        v63 = (struct tagRECT)*((_OWORD *)v11 + 9);
      }
      SpbCheckRect(v11, &v63, 0);
    }
    v34 = 0;
  }
  if ( v59 )
  {
    if ( !v34 && v11 == *(struct tagWND **)v9 )
    {
      if ( !v35
        || (v40 = *(_DWORD *)(v9 + 24),
            v84.left = *(_DWORD *)(v9 + 20),
            v84.right = *(_DWORD *)(v9 + 32) + v84.left,
            v41 = v40 + *(_DWORD *)(v9 + 28),
            v84.top = v40,
            v84.bottom = v41,
            (unsigned int)IntersectRect(&v84, &v84.left, &v82.left)) )
      {
        *(_DWORD *)(v9 + 20) += v25;
        *(_DWORD *)(v9 + 24) += v26;
      }
    }
    if ( v35 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        v84 = v82;
      }
      else
      {
        v42 = *((_DWORD *)v11 + 36);
        v43 = *((_DWORD *)v11 + 37);
        v84.left = v42 + v82.left;
        v84.right = v42 + v82.right;
        v84.top = v43 + v82.top;
        v84.bottom = v43 + v82.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 14) )
    {
      OffsetChildren((_DWORD)v11, v25, v26, (unsigned __int64)&v84 & -(__int64)(v35 != 0LL), (v17 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache(v11, (*((_BYTE *)v11 + 71) & 2) != 0 ? 4 : 2);
    }
  }
  if ( (v17 & 2) != 0 )
  {
    if ( v58 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v58, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v64, v65);
    xxxInternalInvalidate(v11, ghrgnSW, v17 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v45 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v44 = v45;
            if ( *(_DWORD *)(((unsigned __int64)v45 << 6) + gpAtomickCheckStacks) == v60 )
              break;
            if ( ++v45 >= gdwAtomicCheckLogSize )
              goto LABEL_97;
          }
          v44 = (unsigned __int64)v45 << 6;
          *(_DWORD *)(v44 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_97:
  zzzEndDeferWinEventNotify(v44);
  if ( v59 )
  {
    if ( v35 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v46 == DesktopWindow )
      {
        v70 = v25 + v82.left;
        v72 = v25 + v82.right;
        v71 = v26 + v82.top;
        v49 = v26 + v82.bottom;
      }
      else
      {
        v50 = v26 + *(_DWORD *)(v46 + 148);
        v46 = v25 + *(_DWORD *)(v46 + 144);
        v70 = v46 + v82.left;
        v72 = v46 + v82.right;
        v71 = v50 + v82.top;
        v49 = v50 + v82.bottom;
      }
      v73 = v49;
    }
    v51 = gptiCurrent;
    v79[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v79;
    v79[1] = 0LL;
    for ( i = *((_QWORD *)v11 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !v35 || (unsigned int)IntersectRect(v81, (int *)&v70, (int *)(i + 128)) )
      {
        ThreadLockExchangeAlways(i, v79);
        GetDesktopWindow((__int64)v11);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v51, v46);
  }
  if ( v61 )
    zzzInternalShowCaret();
  if ( v57 )
    ThreadUnlock1(v47, v46);
  return v55;
}
