/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0211DD8 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  unsigned int v6; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 i; // rcx
  int v19; // ebx
  struct tagCURSOR **v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  struct tagOEMBITMAPINFO *v25; // rsi
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // xmm3_8
  __int128 v29; // xmm2
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rbx
  LONG left; // edi
  LONG top; // esi
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  int v44; // eax
  RECT v45; // [rsp+68h] [rbp-1h] BYREF
  __int128 v46; // [rsp+78h] [rbp+Fh]
  __int128 v47; // [rsp+88h] [rbp+1Fh] BYREF

  v6 = a2->bottom - a2->top;
  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4) & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 432)
    || (v14 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v11, v12) + 432)
                          + 8LL),
        (*(_DWORD *)(v14 + 52) & 1) == 0)
    || *(_WORD *)(PsGetCurrentProcessWin32Process(v14) + 284) == 96 )
  {
    v15 = gpsi;
    v16 = (_DWORD *)(gpsi + 7472LL);
  }
  else
  {
    v15 = gpsi;
    v16 = (_DWORD *)(gpsi + 8960LL);
  }
  if ( v6 != *v16 || a4 == *(HBRUSH *)(v15 + 4928) || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v45.left = left;
    v45.top = top;
    v45.right = left + v6;
    v45.bottom = top + v6;
    FillRect(a1, &v45, a4);
    DpiForSystem = GetDpiForSystem(v38, v37);
    DpiDependentMetric = GetDpiDependentMetric(20LL, DpiForSystem);
    v43 = GetDpiForSystem(v42, v41);
    v44 = GetDpiDependentMetric(21LL, v43);
    DrawIconEx(
      a1,
      left + (int)(v6 - DpiDependentMetric) / 2 + 1,
      (int)(v6 - v44) / 2 + top,
      (__int64)a3,
      DpiDependentMetric,
      v44,
      0,
      0LL,
      3u);
  }
  else
  {
    v17 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v19 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v19 = 1;
      i = 1LL;
      v20 = (struct tagCURSOR **)&gcachedCaptions[3];
      do
      {
        if ( *v20 == a3 )
          break;
        ++v19;
        ++i;
        v20 += 3;
      }
      while ( i < 5 );
    }
    if ( v19 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1;
        v21 = &gcachedCaptions[3];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v21 )
            break;
          ++v19;
          v21 += 3;
        }
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext(i, v17, v11, v12) & 0xF) != 0
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v23) + 284) == 96 )
      {
        v24 = 3LL * v19;
        v25 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v24 + 1];
      }
      else
      {
        v24 = 3LL * v19;
        v25 = (struct tagOEMBITMAPINFO *)gcachedCaptions[v24 + 2];
      }
      v26 = GetDpiForSystem(v23, v22);
      v27 = GetDpiDependentMetric(20LL, v26);
      BltMe4Times(v25, v6, v27, *(HDC *)ghdcMem, a3, a5);
      *((_QWORD *)&v46 + 1) = a3;
      *(_QWORD *)&v46 = v24 * 8 + gcachedCaptions[0];
      v47 = v46;
      HMAssignmentLock(&v47);
    }
    if ( v19 > 1LL )
    {
      v17 = 24LL * v19;
      v11 = v19 - 1LL;
      v19 = 1;
      do
      {
        i = v17 + gcachedCaptions[0];
        v28 = *(_QWORD *)(v17 + gcachedCaptions[0] + 16);
        v17 -= 24LL;
        v29 = *(_OWORD *)i;
        *(_OWORD *)i = *(_OWORD *)(v17 + gcachedCaptions[0]);
        *(_QWORD *)(i + 16) = *(_QWORD *)(v17 + gcachedCaptions[0] + 16);
        *(_OWORD *)(v17 + gcachedCaptions[0]) = v29;
        *(_QWORD *)(v17 + gcachedCaptions[0] + 16) = v28;
        --v11;
      }
      while ( v11 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(i, v17, v11, v12) & 0xF) != 0
      || *(_WORD *)(PsGetCurrentProcessWin32Process(v30) + 284) == 96 )
    {
      v33 = gcachedCaptions[3 * v19 + 1];
    }
    else
    {
      v33 = gcachedCaptions[3 * v19 + 2];
    }
    v34 = v33 + 16;
    if ( (a5 & 1) != 0 )
      v34 = v33;
    FixHDCBITSBmpEx(0LL, v33, v31, v32);
    NtGdiBitBltInternal(
      a1,
      a2->left,
      a2->top,
      v6,
      v6,
      *(HDC *)(gpDispInfo + 56LL),
      *(_DWORD *)v34,
      *(_DWORD *)(v34 + 4),
      13369376,
      0,
      0);
  }
  a2->left += v6;
}
