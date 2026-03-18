/*
 * XREFs of FindBestPos @ 0x1C021494C
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01E3140 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0214860 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C023A788 (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C023A7CC (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        __int64 **a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  __int128 v13; // xmm6
  __int128 *MonitorRectForWindow; // rax
  __int64 v15; // rcx
  struct tagWND *v16; // r14
  BOOL v17; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v19; // rax
  __int128 v20; // xmm0
  __int64 *v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  bool v27; // cf
  int v28; // eax
  int v29; // r12d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // edx
  _DWORD *v34; // rcx
  unsigned int v35; // eax
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  struct tagMONITOR *v39; // [rsp+58h] [rbp-A8h]
  struct tagRECT v40; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v46[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v50; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v51[4]; // [rsp+110h] [rbp+10h]

  v39 = a8;
  if ( **a7 )
  {
    v15 = **a7;
    if ( *(_QWORD *)(v15 + 56) )
      v16 = *(struct tagWND **)(v15 + 56);
    else
      v16 = *(struct tagWND **)(v15 + 16);
    v50 = *(_OWORD *)GetMonitorMenuRectForWindow(v46, v39, v16);
    v13 = *GetMonitorWorkRectForWindow(&v47, (__int64)v39, v16);
    v42 = v13;
    MonitorRectForWindow = GetMonitorRectForWindow(&v48, (__int64)v39, v16);
  }
  else
  {
    v50 = *(_OWORD *)GetMonitorMenuRect(v43, a8);
    v13 = *GetMonitorWorkRect(&v44, (__int64)a8);
    v42 = v13;
    MonitorRectForWindow = GetMonitorRect(&v45, (__int64)a8);
  }
  v49 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(&v42, a9) && (!**a7 || (*(_DWORD *)**a7 & 0x10000000) == 0) )
  {
    v13 = v42;
LABEL_12:
    v37 = v13;
    goto LABEL_13;
  }
  if ( **a7 )
  {
    v17 = *(_DWORD *)**a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
    if ( CurrentProcessWin32Process )
      v17 = (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x30) == 0;
    else
      v17 = 0;
  }
  v19 = &v49;
  if ( v17 )
    v19 = &v50;
  v20 = *v19;
  v21 = *a7;
  v37 = v20;
  if ( *v21 )
    *(_DWORD *)**a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v40 = *a5;
    IntersectRect(&v40, &v40.left, (int *)&v37);
  }
  else
  {
    v40.left = a1;
    v40.top = a2;
    v40.right = a1;
    v40.bottom = a2;
  }
  if ( a1 + a3 > SDWORD2(v37) )
  {
    a1 = DWORD2(v37) - a3;
    if ( **a7 )
    {
      if ( (*(_DWORD *)**a7 & 0x1800000) != 0 )
        *(_DWORD *)**a7 ^= (*(_DWORD *)**a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v37 )
  {
    a1 = v37;
    if ( **a7 )
    {
      if ( (*(_DWORD *)**a7 & 0x1800000) != 0 )
        *(_DWORD *)**a7 ^= (*(_DWORD *)**a7 ^ 0x800000) & 0x1800000;
    }
  }
  v38 = a6 & 8;
  if ( (a6 & 8) != 0 && a1 + a3 > SDWORD2(v37) )
    a1 = DWORD2(v37) - a3;
  v22 = HIDWORD(v37);
  if ( a4 + a2 > SHIDWORD(v37) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v37) || a2 >= SHIDWORD(v37) )
      a2 = HIDWORD(v37) - a4;
    else
      a2 -= a4;
    if ( **a7 && (*(_DWORD *)**a7 & 0x6000000) != 0 )
      *(_DWORD *)**a7 ^= (*(_DWORD *)**a7 ^ 0xFDFFFFFF) & 0x6000000;
    v22 = HIDWORD(v37);
  }
  if ( a2 < SDWORD1(v37) )
  {
    a2 = DWORD1(v37);
    if ( **a7 && (*(_DWORD *)**a7 & 0x6000000) != 0 )
      *(_DWORD *)**a7 ^= (*(_DWORD *)**a7 ^ 0x2000000) & 0x6000000;
    v22 = HIDWORD(v37);
  }
  if ( (a6 & 0x20) != 0 && a4 + a2 > v22 && (a6 & 0x20000) != 0 )
    a2 = v22 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v40, &v41, v39) )
  {
    v26 = (a6 >> 5) & 2;
    v27 = v38 != 0;
    v38 = -v38;
    v28 = v27 ? 0 : 2;
    v51[v26] = v28;
    v51[(unsigned int)(v26 + 1)] = 2 - v28;
    v29 = 0;
    v30 = (a6 & 0x20) == 0 ? 2 : 0;
    v51[2 - (int)v26] = v30 + 1;
    v31 = 3 - (int)v26;
    v32 = 0LL;
    v51[v31] = 3 - v30;
    while ( !(unsigned int)TryRect(v51[v32], a1, a2, a3, a4, &v40, &v41, v39) )
    {
      ++v29;
      if ( ++v32 >= 4 )
        goto LABEL_71;
    }
    if ( !**a7 )
      goto LABEL_70;
    v33 = v51[v29];
    if ( !v33 )
    {
      v23 = **a7;
      *(_DWORD *)v23 = *(_DWORD *)v23 & 0xF07FFFFF | 0x1000000;
      goto LABEL_70;
    }
    v23 = v33 - 1;
    if ( (_DWORD)v23 )
    {
      v23 = (unsigned int)(v23 - 1);
      if ( (_DWORD)v23 )
      {
        if ( (_DWORD)v23 != 1 )
        {
LABEL_70:
          LOWORD(a1) = v41.x;
          LOWORD(a2) = v41.y;
          goto LABEL_71;
        }
        v34 = (_DWORD *)**a7;
        v35 = *v34 & 0xF07FFFFF | 0x2000000;
      }
      else
      {
        v34 = (_DWORD *)**a7;
        v35 = *v34 & 0xF07FFFFF | 0x800000;
      }
    }
    else
    {
      v34 = (_DWORD *)**a7;
      v35 = *v34 & 0xF07FFFFF | 0x4000000;
    }
    *v34 = v35;
    goto LABEL_70;
  }
LABEL_71:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a7, v23, v24, v25);
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
