/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, _DWORD *a2, int a3, int a4, LONG *a5, LONG *a6, __int64 a7)
{
  int v8; // r13d
  __int64 *v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  char v14; // di
  unsigned int v15; // r12d
  char v16; // di
  __int64 v17; // r8
  __int64 v18; // r9
  LONG left; // ecx
  LONG v20; // ebx
  int v21; // ebx
  LONG v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r9
  LONG bottom; // edi
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // ecx
  struct tagMONITOR *v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // edi
  LONG v43; // r15d
  _DWORD *v44; // rcx
  unsigned int DpiForSystem; // eax
  _QWORD *v46; // rcx
  __int128 v48; // [rsp+20h] [rbp-61h] BYREF
  __int64 v49; // [rsp+30h] [rbp-51h]
  LONG *v50; // [rsp+38h] [rbp-49h]
  LONG *v51; // [rsp+40h] [rbp-41h]
  __int64 v52; // [rsp+48h] [rbp-39h]
  int **v53[2]; // [rsp+50h] [rbp-31h] BYREF
  int **v54[2]; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v55; // [rsp+70h] [rbp-11h] BYREF

  v50 = a5;
  v8 = a4;
  v51 = a6;
  v52 = a7;
  v48 = 0uLL;
  v11 = *a1;
  LODWORD(v49) = a4;
  v12 = (*(_DWORD *)*v11 & 1) == 0;
  v13 = *(_QWORD *)(**a1 + 16);
  if ( !v12 )
  {
    v14 = *(_BYTE *)(v13 + 71);
    *(_QWORD *)&v55.left = 0LL;
    *(_QWORD *)&v55.right = 0LL;
    v15 = 4;
    v55 = *(struct tagRECT *)(*(_QWORD *)(**a1 + 16) + 128LL);
    v16 = v14 & 0x20;
    if ( v16 && (unsigned int)IsTrayWindow(*(_QWORD *)(**a1 + 16)) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (struct _LARGE_STRING *)&v55, v17, v18);
    if ( *(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 56LL) & 0x20) != 0 )
    {
      *(_DWORD *)**a1 |= 0x10u;
      left = v55.left;
      if ( v16 )
      {
        v20 = v55.right - a3;
        goto LABEL_14;
      }
      v21 = a2[18] + a2[20] - a3;
    }
    else
    {
      left = v55.left;
      if ( v16 )
      {
        v20 = v55.left;
LABEL_14:
        if ( !v16 )
        {
          v22 = a2[19] + v55.top;
          v55.left = a2[18] + left;
          v55.right = a2[20] + v55.left;
          v23 = a2[21];
          v55.top = v22;
          v55.bottom = v22 + v23;
        }
        v24 = MonitorFromRect(&v55, 1u, 0);
        v25 = *a1;
        v49 = v24;
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v53, *v25, v26, v27);
        MNGetPopupBoundsRect(v53, v49, &v48, 0);
        if ( v16 )
        {
          bottom = v55.top - v8;
          if ( v55.top - v8 < SDWORD1(v48) )
            bottom = v55.bottom;
        }
        else
        {
          bottom = v55.bottom;
        }
        v31 = (unsigned int)(DWORD2(v48) - a3);
        if ( v20 >= (int)v31 )
          v20 = DWORD2(v48) - a3;
        if ( (*(_BYTE *)(*(_QWORD *)(**a1 + 16) + 66LL) & 0x40) != 0 )
        {
          v32 = *(_QWORD *)(**a1 + 16);
          v28 = (unsigned int)(*(_DWORD *)(v32 + 136) + *(_DWORD *)(v32 + 128) - v20);
          v20 = *(_DWORD *)(v32 + 136) + *(_DWORD *)(v32 + 128) - v20 - a3;
          if ( v20 >= (int)v31 )
            v20 = DWORD2(v48) - a3;
        }
        goto LABEL_38;
      }
      v21 = a2[18];
    }
    v20 = left + v21;
    goto LABEL_14;
  }
  v15 = 1;
  v20 = a2[18] + a2[20] + *(_DWORD *)(v13 + 128);
  bottom = a2[19] + *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 132LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 144LL) & 3) != 0 )
  {
    v33 = **a1;
    v34 = *(_QWORD *)(v33 + 40);
    v35 = *(unsigned int *)(v34 + 136);
    if ( (_DWORD)v35 == -1 || (unsigned int)v35 >= *(_DWORD *)(v34 + 68) )
      v36 = 0LL;
    else
      v36 = *(_QWORD *)(v34 + 96) + 152 * v35;
    v37 = *(_DWORD *)(GetDPIMetrics(v33, v34) + 28) - *(_DWORD *)(v36 + 76);
    v8 = v49;
    bottom += v37;
  }
  v38 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1, 0);
  v39 = *a1;
  v49 = (__int64)v38;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v54, *v39, v40, v41);
  MNGetPopupBoundsRect(v54, v49, &v48, 0);
  v31 = 2LL;
  v28 = (*(_DWORD *)**a1 >> 4) & 1;
  if ( ((*(_BYTE *)(*(_QWORD *)(**a1 + 16) + 66LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
    && *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL) - a3 + 3 >= (int)v48 )
  {
    v20 = *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL) - a3 + 3;
    v15 = 2;
  }
  if ( v20 + a3 > SDWORD2(v48) )
  {
    v15 = 2;
    v20 = *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL) - a3 + 3;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(**a1 + 16) + 66LL) & 0x40) != 0 )
    v15 ^= 3u;
LABEL_38:
  if ( bottom + v8 <= SHIDWORD(v48) )
  {
    v43 = DWORD1(v48);
  }
  else
  {
    v42 = bottom - v8;
    v43 = DWORD1(v48);
    v44 = (_DWORD *)**a1;
    if ( (*v44 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v44, v28);
      bottom = v42 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < v43 )
      {
LABEL_45:
        bottom = HIDWORD(v48) - v8;
        goto LABEL_47;
      }
      v15 = 8;
    }
    else
    {
      bottom = a2[21] + 6 + v42;
    }
    if ( bottom < v43 || bottom + v8 > SHIDWORD(v48) )
      goto LABEL_45;
  }
LABEL_47:
  if ( v20 <= (int)v48 )
    v20 = v48;
  v46 = (_QWORD *)v52;
  if ( bottom <= v43 )
    bottom = v43;
  *v50 = v20;
  *v51 = bottom;
  if ( v46 )
    *v46 = v49;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v28, v31, v29);
  return v15;
}
