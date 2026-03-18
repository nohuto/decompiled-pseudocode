/*
 * XREFs of xxxScrollWindowEx @ 0x1C006985C
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C00696B0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     GetDCOrgOnScreen @ 0x1C00F85B8 (GetDCOrgOnScreen.c)
 *     MirrorRegion @ 0x1C00FC6C4 (MirrorRegion.c)
 *     _IsDescendant @ 0x1C0134A10 (_IsDescendant.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        _QWORD *a7,
        __int16 a8)
{
  __int64 v9; // r14
  int v10; // r12d
  struct tagWND *v11; // rbx
  int v12; // r8d
  __int64 v13; // r9
  __int16 v14; // si
  int v15; // edi
  unsigned int v16; // edi
  HDC DCEx; // r13
  int v18; // r15d
  unsigned int v19; // r12d
  int v20; // edi
  struct tagWND *v21; // rcx
  bool v22; // zf
  __int64 v23; // rdi
  int v24; // eax
  struct tagRECT *v25; // r13
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r11d
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  ULONG_PTR i; // rdi
  int v34; // edx
  int v35; // r8d
  __int64 DesktopWindow; // rax
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  struct tagRECT *v42; // r8
  int v43; // edx
  unsigned int v44; // ecx
  int v45; // eax
  int v46; // r8d
  struct tagRECT v47; // xmm0
  LONG left; // r8d
  int v49; // ecx
  int v50; // edx
  int v51; // edx
  int v52; // eax
  int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  int v57; // [rsp+5Ch] [rbp-A4h]
  HRGN v58; // [rsp+60h] [rbp-A0h]
  struct tagRECT v59; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h]
  unsigned int v62; // [rsp+8Ch] [rbp-74h]
  int v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+94h] [rbp-6Ch]
  unsigned int v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+9Ch] [rbp-64h]
  int v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A4h] [rbp-5Ch]
  unsigned int v69; // [rsp+A8h] [rbp-58h]
  unsigned int v70; // [rsp+ACh] [rbp-54h]
  int v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B4h] [rbp-4Ch]
  char v73[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT *v74; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v75[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v76[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v77; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT *v78[2]; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v79; // [rsp+120h] [rbp+20h] BYREF
  int v80; // [rsp+130h] [rbp+30h] BYREF
  int v81; // [rsp+134h] [rbp+34h]
  int v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+13Ch] [rbp+3Ch]

  v9 = 0LL;
  v78[0] = a5;
  v10 = a2;
  v11 = a1;
  v12 = 0;
  v65 = 0;
  v66 = 0;
  v57 = 0;
  v60 = a4;
  v74 = a4;
  v13 = a6;
  v54 = a2;
  v58 = (HRGN)a6;
  *(_QWORD *)&v59.left = a7;
  v53 = 0;
  if ( !a1 )
  {
    v57 = 1;
    v11 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
  }
  if ( (*((_BYTE *)v11 + 66) & 0x40) != 0 )
  {
    v10 = -a2;
    v54 = -a2;
    MirrorRegion(v11, a6, 1LL);
    if ( a4 )
    {
      v41 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - a4->left;
      a4->left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - a4->right;
      a4->right = v41;
    }
    v42 = v78[0];
    v13 = a6;
    if ( v78[0] )
    {
      v43 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v78[0]->left;
      v78[0]->left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - v78[0]->right;
      v42->right = v43;
    }
    v12 = 0;
  }
  if ( v10 | a3 )
  {
    v14 = a8;
    if ( (unsigned int)IsVisible(v11) )
      goto LABEL_6;
    if ( (((a8 & 1) != 0) & (unsigned __int8)~(*((_BYTE *)v11 + 71) >> 5)) != 0 && !a4 )
    {
      v12 = 1;
      v14 = a8 & 0xFFFD;
      v53 = 1;
    }
  }
  else
  {
    v14 = a8;
  }
  if ( v13 )
  {
    SetEmptyRgn(v13);
    v12 = v53;
  }
  if ( a7 )
  {
    *a7 = 0LL;
    a7[1] = 0LL;
  }
  if ( !v12 )
    return 1LL;
LABEL_6:
  v64 = 0;
  if ( v57 )
  {
    v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v76;
    v76[1] = v11;
    ++*((_DWORD *)v11 + 2);
  }
  if ( !v12 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 384LL) + 256LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, v11) )
      {
        v64 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v15 = 65538;
  v71 = v14 & 0x8000;
  if ( v14 < 0 )
  {
    v15 = (*(_BYTE *)(*((_QWORD *)v11 + 21) + 92LL) & 0x60) != 0 ? 0x10000 : 65538;
    v63 = v14 & 1;
    if ( (v14 & 1) != 0 && (*((_BYTE *)v11 + 71) & 2) != 0 )
      v15 |= 0x80002u;
  }
  else
  {
    v63 = v14 & 1;
    if ( (v14 & 1) != 0 )
      v15 = 589826;
  }
  v73[0] = 0;
  ++gdwDeferWinEvent;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v73);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v16 = v15 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v16);
  v72 = v14 & 2;
  if ( (v14 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v65);
    if ( !a6 )
      v58 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v74 = &v79;
    GetRect((__int64)v11, &v79.left, 17);
    if ( (v16 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v18 = v10;
  v19 = a3;
  v77 = *v74;
  v20 = v16 & 2;
  if ( !v20 )
  {
    GreTransformPoints(DCEx, 1);
    v68 = 0;
    v67 = 0;
    v69 = v54;
    v70 = a3;
    GreTransformPoints(DCEx, 1);
    v18 = v69 - v67;
    v19 = v70 - v68;
  }
  if ( v53 )
  {
    v55 = 1;
  }
  else
  {
    v21 = (struct tagWND *)*((_QWORD *)v11 + 22);
    if ( v71 && (*((_BYTE *)v11 + 61) & 1) == 0 )
    {
      if ( (unsigned __int64)v21 > 1 )
      {
        GreGetRgnBox(v21, &v80);
        v44 = v19 - *((_DWORD *)v11 + 37);
        v45 = v18 - *((_DWORD *)v11 + 36);
        v83 += v44;
        v81 += v44;
        v80 += v45;
        v82 += v45;
        xxxRedrawWindow(v11, &v80, 0LL, 133);
      }
      v21 = 0LL;
    }
    v22 = v20 == 0;
    v23 = *(_QWORD *)&v59.left;
    v55 = InternalScrollDC(v21, DCEx, v54, a3, v74, v78[0], (HRGN)v21, v58, *(struct tagRECT **)&v59.left, v22);
    if ( *(_QWORD *)&v59.left && (*((_BYTE *)v11 + 66) & 0x40) != 0 )
    {
      v46 = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - **(_DWORD **)&v59.left;
      **(_DWORD **)&v59.left = *((_DWORD *)v11 + 38) - *((_DWORD *)v11 + 36) - *(_DWORD *)(*(_QWORD *)&v59.left + 8LL);
      *(_DWORD *)(v23 + 8) = v46;
    }
  }
  _ReleaseDC(DCEx);
  v24 = v53;
  v25 = v60;
  if ( !v53 )
  {
    if ( *(_QWORD *)(gpDispInfo + 24LL) )
    {
      if ( v60 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v47 = v77;
          v79 = v77;
          left = v77.left;
        }
        else
        {
          v49 = *((_DWORD *)v11 + 36);
          v50 = *((_DWORD *)v11 + 37);
          left = v49 + v77.left;
          v79.right = v77.right + v49;
          v79.left = v49 + v77.left;
          v79.top = v50 + v77.top;
          v79.bottom = v50 + v77.bottom;
          v47 = v79;
        }
        v59.right = v18 + v47.right;
        v59.bottom = v19 + v47.bottom;
        v59.top = v19 + v47.top;
        v59.left = left + v18;
        UnionRect(&v59, &v59, &v79);
      }
      else
      {
        v59 = (struct tagRECT)*((_OWORD *)v11 + 9);
      }
      SpbCheckRect(v11, &v59, 0);
    }
    v24 = 0;
  }
  v26 = v63;
  if ( v63 )
  {
    if ( !v24 && v11 == *(struct tagWND **)v9 )
    {
      if ( !v25
        || (v39 = *(_DWORD *)(v9 + 20),
            LODWORD(v78[0]) = *(_DWORD *)(v9 + 16),
            LODWORD(v78[1]) = *(_DWORD *)(v9 + 28) + LODWORD(v78[0]),
            v40 = v39 + *(_DWORD *)(v9 + 24),
            HIDWORD(v78[0]) = v39,
            HIDWORD(v78[1]) = v40,
            (unsigned int)IntersectRect((int *)v78, (int *)v78, &v77.left)) )
      {
        *(_DWORD *)(v9 + 16) += v18;
        *(_DWORD *)(v9 + 20) += v19;
      }
    }
    if ( v25 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        *(struct tagRECT *)v78 = v77;
      }
      else
      {
        v34 = *((_DWORD *)v11 + 36);
        v35 = *((_DWORD *)v11 + 37);
        LODWORD(v78[0]) = v34 + v77.left;
        LODWORD(v78[1]) = v34 + v77.right;
        HIDWORD(v78[0]) = v35 + v77.top;
        HIDWORD(v78[1]) = v35 + v77.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 14) )
    {
      OffsetChildren((_DWORD)v11, v18, v19, (unsigned __int64)v78 & -(__int64)(v25 != 0LL), 1);
      zzzLockDisplayAreaAndInvalidateDCCache(v11, (*((_BYTE *)v11 + 71) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v72 )
  {
    v31 = (_QWORD *)ghrgnSW;
    if ( v58 != (HRGN)ghrgnSW )
    {
      GreCombineRgn(ghrgnSW, v58, 0LL, 5LL);
      v31 = (_QWORD *)ghrgnSW;
    }
    GreOffsetRgn(*v31, v65, v66);
    xxxInternalInvalidate(v11, ghrgnSW, v14 & 4 | 0x81u);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v29 = -1;
  if ( !v73[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v73);
  }
  gdwDeferWinEvent += v29;
  if ( gpPendingNotifies && !gdwDeferWinEvent )
    xxxFlushDeferredWindowEvents();
  if ( v26 )
  {
    if ( v25 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v27 == DesktopWindow )
      {
        LODWORD(v60) = v18 + v77.left;
        v61 = v18 + v77.right;
        HIDWORD(v60) = v19 + v77.top;
        v38 = v19 + v77.bottom;
      }
      else
      {
        v37 = v19 + *(_DWORD *)(v27 + 148);
        v27 = (unsigned int)(v18 + *(_DWORD *)(v27 + 144));
        LODWORD(v60) = v27 + v77.left;
        v61 = v27 + v77.right;
        HIDWORD(v60) = v37 + v77.top;
        v38 = v37 + v77.bottom;
      }
      v62 = v38;
    }
    v32 = gptiCurrent;
    v75[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v75;
    v75[1] = 0LL;
    for ( i = *((_QWORD *)v11 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !v25 || (unsigned int)IntersectRect((int *)&v74, (int *)&v60, (int *)(i + 128)) )
      {
        ThreadLockExchangeAlways(i, v75);
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v51 = *(unsigned __int16 *)(i + 148);
          v52 = *(unsigned __int16 *)(i + 144);
        }
        else
        {
          v51 = (unsigned __int16)(*(_WORD *)(i + 148) - *((_WORD *)v11 + 74));
          v52 = (unsigned __int16)(*(_WORD *)(i + 144) - *((_WORD *)v11 + 72));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, (struct _LARGE_STRING *)(v52 | (v51 << 16)), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v32, v27);
  }
  if ( v64 )
    zzzInternalShowCaret();
  if ( v57 )
    ThreadUnlock1(v28, v27);
  return v55;
}
