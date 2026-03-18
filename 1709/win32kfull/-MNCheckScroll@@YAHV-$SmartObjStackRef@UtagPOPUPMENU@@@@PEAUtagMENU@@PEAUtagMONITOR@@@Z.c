/*
 * XREFs of ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C02046BC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 DPIMetrics; // rax
  __int64 v15; // r10
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  _DWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // ebx
  __int64 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+28h] [rbp-20h]
  _QWORD v34[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a1;
  v32 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, *v5, a3, a4);
  ((void (__fastcall *)(_QWORD *, __int64, __int64 *, _QWORD))MNGetPopupBoundsRect)(v34, a3, &v32, 0LL);
  v11 = HIDWORD(v33) - HIDWORD(v32);
  v12 = *(_DWORD *)(a2 + 116);
  if ( v12 && v12 < v11 )
    v11 = *(_DWORD *)(a2 + 116);
  v13 = *(_QWORD *)(a2 + 96);
  if ( v13 && *(_DWORD *)(v13 + 80) == *(_DWORD *)(a2 + 72) && *(_DWORD *)(a2 + 76) + 6 > v11 )
  {
    DPIMetrics = GetDPIMetrics(v13, v8);
    v15 = *(_QWORD *)(a2 + 96);
    v16 = 0;
    v17 = *(_DWORD *)(a2 + 68);
    v18 = v15;
    v19 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v11;
    if ( v17 > 0 )
    {
      do
      {
        if ( *(_DWORD *)(v18 + 76) > v19 )
          break;
        ++v16;
        v18 += 152LL;
      }
      while ( v16 < v17 );
    }
    v20 = v16 == 0;
    v21 = v18 - 152;
    v22 = (unsigned int)(v17 - 1);
    if ( v20 )
      v21 = v18;
    v23 = 0;
    v24 = *(_DWORD *)(v21 + 76);
    *(_DWORD *)(a2 + 76) = v24;
    if ( (int)v22 >= 0 )
    {
      v25 = (_DWORD *)(v15 + 152LL * (int)v22 + 84);
      do
      {
        v23 += *v25;
        if ( v23 > v24 )
          break;
        v25 -= 38;
        v22 = (unsigned int)(v22 - 1);
      }
      while ( (int)v22 >= 0 );
    }
    v26 = (unsigned int)(v22 + 1);
    if ( (_DWORD)v22 == v17 - 1 )
      v26 = (unsigned int)v22;
    *(_DWORD *)(a2 + 140) = v26;
    if ( *(_DWORD *)(a2 + 136) > (int)v26 )
      *(_DWORD *)(a2 + 136) = v26;
    v27 = *(_DWORD *)(a2 + 136);
    if ( v27 == (_DWORD)v26 )
    {
      *(_DWORD *)(a2 + 144) |= 3u;
    }
    else
    {
      v20 = v27 == 0;
      v28 = *(_DWORD *)(a2 + 144);
      if ( v20 )
        v29 = v28 & 0xFFFFFFFC | 2;
      else
        v29 = v28 & 0xFFFFFFFC | 1;
      *(_DWORD *)(a2 + 144) = v29;
    }
    v30 = *(_DWORD *)(a2 + 76) + 2 * *(_DWORD *)(GetDPIMetrics(v26, v22) + 28);
  }
  else
  {
    *(_DWORD *)(a2 + 144) &= 0xFFFFFFFC;
    *(_DWORD *)(a2 + 136) = 0;
    *(_DWORD *)(a2 + 140) = 0;
    v30 = *(_DWORD *)(a2 + 76);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8, v9, v10);
  return v30;
}
