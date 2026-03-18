/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02106A8 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  struct tagCURSOR **v15; // rax
  __int64 i; // r8
  __int64 v17; // rax
  _QWORD *v18; // rcx
  unsigned int v19; // r15d
  __int64 v20; // r14
  struct tagOEMBITMAPINFO *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 *v24; // rax
  __int64 v25; // xmm3_8
  __int128 v26; // xmm2
  __int64 v27; // rdx
  __int64 v28; // rbx
  LONG left; // r15d
  LONG top; // r14d
  unsigned int v31; // ebx
  int v32; // r8d
  RECT v33; // [rsp+68h] [rbp-1h] BYREF
  __int128 v34; // [rsp+78h] [rbp+Fh]
  __int128 v35; // [rsp+88h] [rbp+1Fh] BYREF

  v6 = a2->bottom - a2->top;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) == 0 )
  {
    v10 = (_QWORD *)gpsi;
    goto LABEL_7;
  }
  v10 = (_QWORD *)gpsi;
  v11 = gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_7:
    v11 = *v10;
    v12 = (_DWORD *)(*v10 + 6176LL);
    goto LABEL_8;
  }
  v12 = (_DWORD *)(gpsi + 7664LL);
LABEL_8:
  if ( v6 != *v12 || a4 == *(HBRUSH *)(v11 + 5336) || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v33.left = left;
    v33.top = top;
    v33.right = left + v6;
    v33.bottom = top + v6;
    FillRect(a1, &v33, a4);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v31 = *(_DWORD *)(gpsi + 2076LL);
    else
      v31 = *(_DWORD *)(gpsi + 2464LL);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v32 = *(_DWORD *)(gpsi + 2080LL);
    else
      v32 = *(_DWORD *)(gpsi + 2468LL);
    DrawIconEx(a1, left + (int)(v6 - v31) / 2 + 1, (v6 - v32) / 2 + top, (__int64)a3, v31, v32, 0, 0LL, 3);
  }
  else
  {
    v13 = gcachedCaptions[0];
    if ( (a5 & 0x10) != 0 )
    {
      v14 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v14 = 1;
      v15 = (struct tagCURSOR **)&gcachedCaptions[3];
      for ( i = 1LL; i < 5; ++i )
      {
        if ( *v15 == a3 )
          break;
        ++v14;
        v15 += 3;
      }
    }
    if ( v14 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        v17 = 1LL;
        v18 = &gcachedCaptions[3];
        do
        {
          if ( !*v18 )
            break;
          ++v14;
          ++v17;
          v18 += 3;
        }
        while ( v17 < 4 );
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v19 = *(_DWORD *)(gpsi + 2076LL);
      else
        v19 = *(_DWORD *)(gpsi + 2464LL);
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || *(_WORD *)(gpsi + 8678LL) == 96 )
      {
        v20 = 3LL * v14;
        v21 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v20 + 1];
      }
      else
      {
        v20 = 3LL * v14;
        v21 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v20 + 2];
      }
      BltMe4Times(v21, v6, v19, *(HDC *)ghdcMem, a3, a5);
      *((_QWORD *)&v34 + 1) = a3;
      *(_QWORD *)&v34 = v20 * 8 + gcachedCaptions[0];
      v35 = v34;
      HMAssignmentLock(&v35);
      v13 = gcachedCaptions[0];
    }
    if ( v14 > 1LL )
    {
      v22 = 24LL * v14;
      v23 = v14 - 1LL;
      v14 = 1;
      while ( 1 )
      {
        v24 = (__int128 *)(v22 + v13);
        v25 = *(_QWORD *)(v22 + v13 + 16);
        v22 -= 24LL;
        v26 = *v24;
        *v24 = *(_OWORD *)(v22 + v13);
        *((_QWORD *)v24 + 2) = *(_QWORD *)(v22 + v13 + 16);
        *(_OWORD *)(v22 + gcachedCaptions[0]) = v26;
        *(_QWORD *)(v22 + gcachedCaptions[0] + 16) = v25;
        if ( !--v23 )
          break;
        v13 = gcachedCaptions[0];
      }
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || *(_WORD *)(gpsi + 8678LL) == 96 )
      v27 = gcachedCaptions[3 * v14 + 1];
    else
      v27 = gcachedCaptions[3 * v14 + 2];
    v28 = v27 + 16;
    if ( (a5 & 1) != 0 )
      v28 = v27;
    FixHDCBITSBmp();
    NtGdiBitBltInternal(
      a1,
      a2->left,
      a2->top,
      v6,
      v6,
      *(HDC *)(gpDispInfo + 56LL),
      *(_DWORD *)v28,
      *(_DWORD *)(v28 + 4),
      13369376,
      0,
      0);
  }
  a2->left += v6;
}
