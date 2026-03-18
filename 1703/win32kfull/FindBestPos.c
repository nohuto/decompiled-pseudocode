/*
 * XREFs of FindBestPos @ 0x1C02135AC
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01D69B0 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C021342C (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int **a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  char *v12; // rdi
  __int128 *v13; // rax
  __int128 *v14; // rax
  __int128 v15; // xmm0
  char *v16; // rdx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int128 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL v32; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v34; // rax
  __int128 v35; // xmm0
  unsigned int *v36; // rax
  int v37; // r8d
  unsigned int *v38; // rdx
  unsigned int *v39; // rdx
  int v40; // edx
  LONG v41; // r9d
  unsigned int *v42; // r8
  unsigned int *v43; // r8
  __int64 v44; // rdi
  int v45; // eax
  int v46; // r15d
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned int *v50; // rdx
  unsigned int v51; // r8d
  unsigned int v52; // r8d
  unsigned int v53; // r8d
  unsigned int v54; // eax
  struct tagRECT v58; // [rsp+48h] [rbp-79h] BYREF
  struct tagPOINT v59; // [rsp+58h] [rbp-69h] BYREF
  __int128 v60; // [rsp+60h] [rbp-61h] BYREF
  __int128 v61; // [rsp+70h] [rbp-51h] BYREF
  __int128 v62; // [rsp+80h] [rbp-41h] BYREF
  __int128 v63; // [rsp+90h] [rbp-31h] BYREF
  unsigned int v64[4]; // [rsp+A0h] [rbp-21h]

  if ( *a7 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)a8 + 472)) )
    {
      v18 = *(_DWORD *)(v17 + 368) & 0xF;
      if ( !v18
        && (v19 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 52LL) & 1) != 0 )
      {
        v16 = (char *)(*((_QWORD *)a8 + 5) + 44LL);
      }
      else if ( v18 == 1
             && (v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
      {
        v16 = (char *)(*((_QWORD *)a8 + 5) + 60LL);
      }
      else
      {
        v16 = (char *)(*((_QWORD *)a8 + 5) + 28LL);
      }
    }
    else
    {
      v18 = *(_DWORD *)(v17 + 368) & 0xF;
      if ( !v18
        && (v21 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 52LL) & 1) != 0 )
      {
        v16 = (char *)a8 + 488;
      }
      else if ( v18 == 1 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL);
        if ( v22 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 52LL) & 1) != 0 )
            v16 = (char *)a8 + 504;
        }
      }
    }
    v63 = *(_OWORD *)v16;
    if ( !v18
      && (v23 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 52LL) & 1) != 0 )
    {
      v24 = *((_QWORD *)a8 + 5);
      v25 = (__int128 *)(v24 + 92);
    }
    else if ( v18 == 1
           && (v26 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
    {
      v24 = *((_QWORD *)a8 + 5);
      v25 = (__int128 *)(v24 + 108);
    }
    else
    {
      v24 = *((_QWORD *)a8 + 5);
      v25 = (__int128 *)(v24 + 76);
    }
    v61 = *v25;
    if ( !v18
      && (v27 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 52LL) & 1) != 0 )
    {
      v28 = (__int128 *)(v24 + 44);
    }
    else if ( v18 == 1
           && (v29 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 52LL) & 1) != 0 )
    {
      v28 = (__int128 *)(v24 + 60);
    }
    else
    {
      v28 = (__int128 *)(v24 + 28);
    }
    v15 = *v28;
  }
  else
  {
    v12 = (char *)a8 + 472;
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)a8 + 472)) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v12 = (char *)(*((_QWORD *)a8 + 5) + 44LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v12 = (char *)(*((_QWORD *)a8 + 5) + 60LL);
      }
      else
      {
        v12 = (char *)(*((_QWORD *)a8 + 5) + 28LL);
      }
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v12 = (char *)a8 + 488;
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v12 = (char *)a8 + 504;
    }
    v63 = *(_OWORD *)v12;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v13 = (__int128 *)(*((_QWORD *)a8 + 5) + 92LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v13 = (__int128 *)(*((_QWORD *)a8 + 5) + 108LL);
    }
    else
    {
      v13 = (__int128 *)(*((_QWORD *)a8 + 5) + 76LL);
    }
    v61 = *v13;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v14 = (__int128 *)(*((_QWORD *)a8 + 5) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v14 = (__int128 *)(*((_QWORD *)a8 + 5) + 60LL);
    }
    else
    {
      v14 = (__int128 *)(*((_QWORD *)a8 + 5) + 28LL);
    }
    v15 = *v14;
  }
  v62 = v15;
  if ( (a6 & 0x10000) != 0 || PtInRect(&v61, a9) && (!*a7 || (**a7 & 0x10000000) == 0) )
  {
    v60 = v61;
  }
  else
  {
    if ( *a7 )
    {
      v32 = **a7 >> 31;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30);
      if ( CurrentProcessWin32Process )
        v32 = (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) == 0;
      else
        v32 = 0;
    }
    v34 = &v62;
    if ( v32 )
      v34 = &v63;
    v35 = *v34;
    v36 = *a7;
    v60 = v35;
    if ( v36 )
      *v36 |= 0x10000000u;
  }
  if ( a5 )
  {
    v58 = *a5;
    IntersectRect(&v58.left, &v58.left, (int *)&v60);
  }
  else
  {
    v58.left = a1;
    v58.top = a2;
    v58.right = a1;
    v58.bottom = a2;
  }
  v37 = DWORD2(v60);
  if ( a3 + a1 > SDWORD2(v60) )
  {
    v38 = *a7;
    a1 = DWORD2(v60) - a3;
    if ( *a7 )
    {
      if ( (*v38 & 0x1800000) != 0 )
        *v38 ^= (*v38 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v60 )
  {
    v39 = *a7;
    a1 = v60;
    if ( *a7 )
    {
      if ( (*v39 & 0x1800000) != 0 )
        *v39 ^= (*v39 ^ 0x800000) & 0x1800000;
    }
  }
  if ( (a6 & 8) != 0 && a3 + a1 > v37 )
    a1 = v37 - a3;
  v40 = HIDWORD(v60);
  v41 = DWORD1(v60);
  if ( a4 + a2 > SHIDWORD(v60) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v60) || a2 >= SHIDWORD(v60) )
      a2 = HIDWORD(v60) - a4;
    else
      a2 -= a4;
    v42 = *a7;
    if ( *a7 )
    {
      if ( (*v42 & 0x6000000) != 0 )
        *v42 ^= (*v42 ^ 0xFDFFFFFF) & 0x6000000;
    }
  }
  if ( a2 < v41 )
  {
    v43 = *a7;
    a2 = v41;
    if ( *a7 )
    {
      if ( (*v43 & 0x6000000) != 0 )
        *v43 ^= (*v43 ^ 0x2000000) & 0x6000000;
    }
  }
  if ( (a6 & 0x20) != 0 && a4 + a2 > v40 && (a6 & 0x20000) != 0 )
    a2 = v40 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v58, &v59, a8) )
  {
    v44 = (a6 >> 5) & 2;
    v45 = (a6 & 8) != 0 ? 0 : 2;
    v64[v44] = v45;
    v64[(unsigned int)(v44 + 1)] = 2 - v45;
    v46 = 0;
    v47 = (a6 & 0x20) == 0 ? 2 : 0;
    v64[2 - (int)v44] = v47 + 1;
    v48 = 3 - (int)v44;
    v49 = 0LL;
    v64[v48] = 3 - v47;
    while ( !(unsigned int)TryRect(v64[v49], a1, a2, a3, a4, &v58, &v59, a8) )
    {
      ++v46;
      if ( ++v49 >= 4 )
        goto LABEL_137;
    }
    v50 = *a7;
    if ( !*a7 )
      goto LABEL_136;
    v51 = v64[v46];
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          if ( v53 != 1 )
          {
LABEL_136:
            LOWORD(a1) = v59.x;
            LOWORD(a2) = v59.y;
            goto LABEL_137;
          }
          v54 = *v50 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v54 = *v50 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v54 = *v50 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v54 = *v50 & 0xF07FFFFF | 0x1000000;
    }
    *v50 = v54;
    goto LABEL_136;
  }
LABEL_137:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a7);
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
