/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int *a6,
        __int64 a7)
{
  _DWORD *v8; // rcx
  int v9; // r15d
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r12d
  int v14; // edi
  unsigned __int64 *v15; // rbx
  int v16; // ecx
  int v17; // ebx
  int v18; // ebx
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  int v24; // r14d
  int v25; // edi
  _DWORD *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r15d
  int v37; // edi
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 v41; // [rsp+20h] [rbp-61h]
  __int128 v42; // [rsp+28h] [rbp-59h] BYREF
  __int64 v43; // [rsp+38h] [rbp-49h]
  int *v44; // [rsp+40h] [rbp-41h]
  int *v45; // [rsp+48h] [rbp-39h]
  __int64 v46; // [rsp+50h] [rbp-31h]
  _QWORD v47[4]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v48; // [rsp+78h] [rbp-9h] BYREF

  v8 = (_DWORD *)*a1;
  v9 = a3;
  v44 = a5;
  v45 = a6;
  v46 = a7;
  v42 = 0uLL;
  v11 = *((_QWORD *)v8 + 2);
  LODWORD(v41) = a4;
  if ( (*v8 & 1) != 0 )
  {
    v12 = *(unsigned __int8 *)(v11 + 71);
    v48 = 0uLL;
    v13 = 4;
    v48 = *(_OWORD *)(*((_QWORD *)v8 + 2) + 128LL);
    v14 = (v12 >> 5) & 1;
    if ( v14 )
    {
      v15 = (unsigned __int64 *)*((_QWORD *)v8 + 2);
      if ( (unsigned int)IsTrayWindow((__int64)v15) )
        xxxSendMinRectMessages(v15, (struct _LARGE_STRING *)&v48);
    }
    if ( *(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)(*(_QWORD *)(*a1 + 40) + 56LL) & 0x20) != 0 )
    {
      *(_DWORD *)*a1 |= 0x10u;
      v16 = v48;
      if ( v14 )
      {
        v17 = DWORD2(v48) - v9;
        goto LABEL_14;
      }
      v18 = a2[18] + a2[20] - v9;
    }
    else
    {
      v16 = v48;
      if ( v14 )
      {
        v17 = v48;
LABEL_14:
        if ( !v14 )
        {
          v19 = a2[19] + DWORD1(v48);
          LODWORD(v48) = a2[18] + v16;
          DWORD2(v48) = a2[20] + v48;
          v20 = a2[21];
          DWORD1(v48) = v19;
          HIDWORD(v48) = v19 + v20;
        }
        v21 = MonitorFromRect((int *)&v48, 1u);
        v22 = *a1;
        v23 = v21;
        v43 = v21;
        SmartObjStackRef<tagPOPUPMENU>::Init(v47, v22);
        MNGetPopupBoundsRect(v47, v23, &v42, 0);
        v24 = DWORD1(v42);
        if ( v14 )
        {
          v25 = DWORD1(v48) - v41;
          if ( DWORD1(v48) - (int)v41 < SDWORD1(v42) )
            v25 = HIDWORD(v48);
        }
        else
        {
          v25 = HIDWORD(v48);
        }
        v26 = (_DWORD *)*a1;
        v27 = *(_QWORD *)(*a1 + 16);
        if ( v17 >= DWORD2(v42) - v9 )
          v17 = DWORD2(v42) - v9;
        if ( (*(_BYTE *)(v27 + 66) & 0x40) != 0 )
        {
          v17 = *(_DWORD *)(v27 + 128) + *(_DWORD *)(v27 + 136) - v17 - v9;
          if ( v17 >= DWORD2(v42) - v9 )
            v17 = DWORD2(v42) - v9;
        }
        goto LABEL_38;
      }
      v18 = a2[18];
    }
    v17 = v16 + v18;
    goto LABEL_14;
  }
  v13 = 1;
  v17 = a2[18] + a2[20] + *(_DWORD *)(v11 + 128);
  v25 = a2[19] + *(_DWORD *)(v11 + 132);
  v28 = *((_QWORD *)v8 + 5);
  if ( (*(_DWORD *)(v28 + 144) & 3) != 0 )
  {
    v29 = *(unsigned int *)(v28 + 136);
    if ( (_DWORD)v29 == -1 || (unsigned int)v29 >= *(_DWORD *)(v28 + 68) )
      v30 = 0LL;
    else
      v30 = *(_QWORD *)(v28 + 96) + 152 * v29;
    v25 += *(_DWORD *)(GetDPIMetrics((__int64)v8, v28, a3, a4, v41) + 28) - *(_DWORD *)(v30 + 76);
  }
  v31 = MonitorFromWindow(*(_QWORD *)(*a1 + 16), 1u);
  v32 = *a1;
  v33 = v31;
  v43 = v31;
  SmartObjStackRef<tagPOPUPMENU>::Init(v47, v32);
  MNGetPopupBoundsRect(v47, v33, &v42, 0);
  v26 = (_DWORD *)*a1;
  v34 = *(_QWORD *)(*a1 + 16);
  if ( ((*(_BYTE *)(v34 + 66) & 0x40) != 0) != ((*(_DWORD *)*a1 >> 4) & 1)
    && *(_DWORD *)(v34 + 128) - v9 + 3 >= (int)v42 )
  {
    v17 = *(_DWORD *)(v34 + 128) - v9 + 3;
    v13 = 2;
  }
  if ( v17 + v9 > SDWORD2(v42) )
  {
    v13 = 2;
    v17 = *(_DWORD *)(v34 + 128) - v9 + 3;
  }
  v24 = DWORD1(v42);
  if ( (*(_BYTE *)(v34 + 66) & 0x40) != 0 )
    v13 ^= 3u;
LABEL_38:
  v35 = v41;
  v36 = HIDWORD(v42);
  if ( v25 + (int)v41 <= SHIDWORD(v42) )
    goto LABEL_49;
  v37 = v25 - v41;
  if ( (*v26 & 1) != 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v38 = *(_DWORD *)(gpsi + 2100LL);
    else
      v38 = *(_DWORD *)(gpsi + 2488LL);
    v25 = v37 - v38;
    if ( v25 < v24 )
      goto LABEL_48;
    v35 = v41;
    v13 = 8;
  }
  else
  {
    v25 = a2[21] + 6 + v37;
  }
  if ( v25 < v24 || v25 + v35 > v36 )
LABEL_48:
    v25 = v36 - v41;
LABEL_49:
  v39 = (_QWORD *)v46;
  if ( v17 <= (int)v42 )
    v17 = v42;
  if ( v25 <= v24 )
    v25 = v24;
  *v44 = v17;
  *v45 = v25;
  if ( v39 )
    *v39 = v43;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v13;
}
