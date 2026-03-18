/*
 * XREFs of ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C00B73CC (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     IsValidMonitor @ 0x1C00FC0E4 (IsValidMonitor.c)
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01B43EC (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 */

struct tagMONITOR *__fastcall zzzNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __int128 v8; // xmm0
  __int64 v10; // r12
  struct tagMONITOR *v13; // rbx
  __int64 v14; // r8
  int v15; // edx
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // bx
  char *v18; // rax
  INT v19; // eax
  INT v20; // ecx
  int v21; // edx
  __int64 v22; // rax
  _DWORD *v23; // rbx
  struct tagMONITOR *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  INT v27; // eax
  INT v28; // ecx
  BOOL v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagMONITOR *result; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  int WindowBordersWithDpiAwareness; // eax
  LONG v38; // r8d
  int v39; // edx
  LONG v40; // r9d
  _DWORD *v41; // rdx
  int v42; // r8d
  int v43; // r9d
  int v44; // r13d
  int v45; // r10d
  int v46; // r11d
  int v47; // edi
  int v48; // r8d
  int v49; // r9d
  LONG v50; // ecx
  _DWORD *v51; // rdi
  LONG right; // ecx
  LONG v53; // edx
  int v54; // eax
  LONG left; // edx
  LONG v56; // ecx
  int v57; // ecx
  LONG bottom; // eax
  LONG v59; // edx
  int v60; // ecx
  LONG v61; // eax
  LONG top; // ecx
  LONG v63; // eax
  int v64; // eax
  int v65; // ecx
  int v66; // r8d
  int v67; // r8d
  unsigned int MonitorFlagsFromWindow; // eax
  unsigned __int16 v69; // [rsp+30h] [rbp-71h]
  int v70; // [rsp+30h] [rbp-71h]
  int v71; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int16 v72; // [rsp+3Eh] [rbp-63h]
  struct tagMONITOR *NewMonitor; // [rsp+40h] [rbp-61h] BYREF
  int v74; // [rsp+48h] [rbp-59h]
  _QWORD v75[3]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v76[3]; // [rsp+68h] [rbp-39h] BYREF
  __int128 v77; // [rsp+80h] [rbp-21h] BYREF

  v8 = (__int128)*a3;
  v74 = 0;
  v10 = 120LL * a5;
  v77 = v8;
  v13 = *(struct tagMONITOR **)((char *)a4 + v10 + 112);
  NewMonitor = v13;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v10 + 8));
    v13 = NewMonitor;
    if ( !NewMonitor )
    {
      v13 = *(struct tagMONITOR **)(GetDispInfo() + 88);
      NewMonitor = v13;
    }
  }
  v14 = *(unsigned __int16 *)((char *)a4 + v10 + 104);
  v15 = *((_DWORD *)a1 + 92) & 0xF;
  v16 = *(_WORD *)(*((_QWORD *)v13 + 5) + 128LL);
  v69 = v16;
  LOWORD(v71) = *(_WORD *)((char *)a4 + v10 + 104);
  if ( v15 != 2 )
  {
    if ( v15 )
      v17 = *(_WORD *)(gpsi + 8678LL);
    else
      v17 = 96;
    v18 = (char *)a4 + 72;
    if ( !v15 )
      v18 = (char *)a4 + 40;
    ScaleDPIRect(&v77, &v77, v14, v17, *(_QWORD *)((char *)a4 + v10 + 8), *(_QWORD *)&v18[v10]);
    v74 = 1;
    if ( !a6 )
    {
      v19 = EngMulDiv(a3->right - a3->left, v69, v17);
      v20 = a3->bottom - a3->top;
      DWORD2(v77) = v77 + v19;
      HIDWORD(v77) = DWORD1(v77) + EngMulDiv(v20, v69, v17);
    }
LABEL_13:
    v13 = NewMonitor;
    goto LABEL_14;
  }
  if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 && !a6 && v16 != (_WORD)v14 )
  {
    v75[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v75;
    ++*((_DWORD *)a1 + 2);
    v24 = NewMonitor;
    v75[1] = a1;
    v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v76;
    v76[1] = v24;
    ++*((_DWORD *)v24 + 2);
    if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v16, &v77, &v77) )
    {
      v27 = EngMulDiv(a3->right - a3->left, v69, (unsigned __int16)v71);
      v28 = a3->bottom - a3->top;
      DWORD2(v77) = v77 + v27;
      HIDWORD(v77) = DWORD1(v77) + EngMulDiv(v28, v69, (unsigned __int16)v71);
    }
    v29 = ThreadUnlock1(v26, v25) == 0;
    if ( v29 | (ThreadUnlock1(v31, v30) == 0) )
      return 0LL;
    goto LABEL_13;
  }
LABEL_14:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v21 = *((_DWORD *)a1 + 92) & 0xF;
      if ( !v21
        && (v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 52LL) & 1) != 0 )
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 92LL);
      }
      else if ( v21 == 1
             && (v33 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 52LL) & 1) != 0 )
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 108LL);
      }
      else
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 76LL);
      }
    }
    else
    {
      v34 = *((_DWORD *)a1 + 92) & 0xF;
      if ( !v34
        && (v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v35 + 8) + 52LL) & 1) != 0 )
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 44LL);
      }
      else if ( v34 == 1
             && (v36 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 52LL) & 1) != 0 )
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 60LL);
      }
      else
      {
        v23 = (_DWORD *)(*((_QWORD *)v13 + 5) + 28LL);
      }
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
    v38 = *v23 - WindowBordersWithDpiAwareness;
    a2->left = v38;
    v39 = 2 * WindowBordersWithDpiAwareness;
    v40 = v23[1] - WindowBordersWithDpiAwareness;
    result = NewMonitor;
    a2->top = v40;
    a2->right = v38 + v39 + v23[2] - *v23;
    a2->bottom = v40 + v39 + v23[3] - v23[1];
  }
  else
  {
    v41 = (_DWORD *)*((_QWORD *)v13 + 5);
    v42 = *(_DWORD *)((char *)a4 + v10 + 8);
    v43 = *(_DWORD *)((char *)a4 + v10 + 12);
    v44 = *(_DWORD *)((char *)a4 + v10 + 16) - v42;
    v45 = *(_DWORD *)((char *)a4 + v10 + 20) - v43;
    v46 = v41[7] - v42;
    v47 = v41[8] - v43;
    v71 = v42;
    v48 = v41[10] - v41[8];
    v70 = v43;
    v49 = v41[9] - v41[7];
    if ( v49 != v44 || v48 != v45 )
    {
      v46 += (((int)v77 - v71) * (v49 - v44) + v44 / 2) / v44;
      v47 += ((DWORD1(v77) - v70) * (v48 - v45) + v45 / 2) / v45;
    }
    v50 = v46 + DWORD2(v77);
    a2->left = v46 + v77;
    a2->right = v50;
    a2->top = v47 + DWORD1(v77);
    a2->bottom = v47 + HIDWORD(v77);
    v51 = (_DWORD *)*((_QWORD *)v13 + 5);
    GetWindowExtendedMargin(a1, &v71);
    right = a2->right;
    v53 = v51[21];
    if ( right > v53 )
    {
      v54 = v53 + HIWORD(v71) - right;
      a2->left += v54;
      a2->right = right + v54;
    }
    left = a2->left;
    v56 = v51[19];
    if ( a2->left < v56 )
    {
      v57 = v56 - (unsigned __int16)v71 - left;
      a2->right += v57;
      a2->left = v57 + left;
    }
    bottom = a2->bottom;
    v59 = v51[22];
    if ( bottom > v59 )
    {
      v60 = v59 + v72 - bottom;
      v61 = v59 + v72;
      a2->top += v60;
      a2->bottom = v61;
    }
    top = a2->top;
    v63 = v51[20];
    if ( top < v63 )
    {
      v64 = v63 - top;
      a2->bottom += v64;
      a2->top = top + v64;
    }
    if ( (*((_BYTE *)a1 + 70) & 4) != 0 )
    {
      v65 = 0;
      v66 = v51[21];
      if ( a2->right - HIWORD(v71) > v66 )
      {
        v65 = 1;
        a2->right = HIWORD(v71) + v66;
      }
      v67 = v51[22];
      if ( a2->bottom - v72 > v67 )
      {
        ++v65;
        a2->bottom = v72 + v67;
      }
      if ( v65 == 2 )
      {
        ++a2->left;
        --a2->right;
        ++a2->top;
        --a2->bottom;
      }
    }
    if ( v74 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
      PhysicalToLogicalDPIRect(a2, a2, MonitorFlagsFromWindow, &NewMonitor);
      return NewMonitor;
    }
    return v13;
  }
  return result;
}
