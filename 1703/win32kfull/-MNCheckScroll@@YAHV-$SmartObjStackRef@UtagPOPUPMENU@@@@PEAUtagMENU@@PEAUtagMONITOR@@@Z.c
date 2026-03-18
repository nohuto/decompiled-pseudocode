/*
 * XREFs of ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C0202C40
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 DPIMetrics; // rax
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // ebx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // r9
  _DWORD *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ebx
  __int64 v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 v32; // [rsp+28h] [rbp-30h]
  _QWORD v33[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a1;
  v31 = 0LL;
  v32 = 0LL;
  SmartObjStackRef<tagPOPUPMENU>::Init(v33, v4);
  MNGetPopupBoundsRect(v33, a3, &v31, 0LL);
  v10 = HIDWORD(v32) - HIDWORD(v31);
  v11 = *(_DWORD *)(a2 + 116);
  if ( v11 && v11 < v10 )
    v10 = *(_DWORD *)(a2 + 116);
  v12 = *(_QWORD *)(a2 + 96);
  if ( v12 && *(_DWORD *)(v12 + 80) == *(_DWORD *)(a2 + 72) && *(_DWORD *)(a2 + 76) + 6 > v10 )
  {
    DPIMetrics = GetDPIMetrics(v12, v7, v8, v9, v31);
    v14 = *(_QWORD *)(a2 + 96);
    v15 = 0;
    v16 = *(unsigned int *)(a2 + 68);
    v17 = v14;
    v18 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v10;
    if ( (int)v16 > 0 )
    {
      do
      {
        if ( *(_DWORD *)(v17 + 76) > v18 )
          break;
        ++v15;
        v17 += 152LL;
      }
      while ( v15 < (int)v16 );
    }
    v19 = v15 == 0;
    v20 = v17 - 152;
    v21 = (unsigned int)(v16 - 1);
    if ( v19 )
      v20 = v17;
    v22 = 0;
    v23 = *(unsigned int *)(v20 + 76);
    *(_DWORD *)(a2 + 76) = v23;
    if ( (int)v21 >= 0 )
    {
      v24 = (_DWORD *)(v14 + 152LL * (int)v21 + 84);
      do
      {
        v22 += *v24;
        if ( v22 > (unsigned int)v23 )
          break;
        v24 -= 38;
        v21 = (unsigned int)(v21 - 1);
      }
      while ( (int)v21 >= 0 );
    }
    v25 = (unsigned int)(v21 + 1);
    if ( (_DWORD)v21 == (_DWORD)v16 - 1 )
      v25 = (unsigned int)v21;
    *(_DWORD *)(a2 + 140) = v25;
    if ( *(_DWORD *)(a2 + 136) > (int)v25 )
      *(_DWORD *)(a2 + 136) = v25;
    v26 = *(_DWORD *)(a2 + 136);
    if ( v26 == (_DWORD)v25 )
    {
      *(_DWORD *)(a2 + 144) |= 3u;
    }
    else
    {
      v19 = v26 == 0;
      v27 = *(_DWORD *)(a2 + 144);
      if ( v19 )
        v28 = v27 & 0xFFFFFFFC | 2;
      else
        v28 = v27 & 0xFFFFFFFC | 1;
      *(_DWORD *)(a2 + 144) = v28;
    }
    v29 = *(_DWORD *)(a2 + 76) + 2 * *(_DWORD *)(GetDPIMetrics(v25, v21, v16, v23, v31) + 28);
  }
  else
  {
    *(_DWORD *)(a2 + 144) &= 0xFFFFFFFC;
    *(_DWORD *)(a2 + 136) = 0;
    *(_DWORD *)(a2 + 140) = 0;
    v29 = *(_DWORD *)(a2 + 76);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v29;
}
