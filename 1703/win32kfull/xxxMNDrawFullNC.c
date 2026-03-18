/*
 * XREFs of xxxMNDrawFullNC @ 0x1C013E3E8
 * Callers:
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D3A0 (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C0029144 (GreSetBrushOrg.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreGetBrushOrg @ 0x1C0114B20 (GreGetBrushOrg.c)
 *     DrawFrame @ 0x1C0135058 (DrawFrame.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C0215A64 (MNDrawEdge.c)
 */

_QWORD *__fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 *a3)
{
  int v3; // r15d
  HDC DCEx; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  LONG v13; // edx
  LONG v14; // ecx
  LONG top; // eax
  LONG bottom; // r15d
  LONG right; // r12d
  LONG left; // r13d
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // r12d
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v26; // rax
  RECT v28; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v29[5]; // [rsp+48h] [rbp-28h] BYREF
  int v30; // [rsp+C0h] [rbp+50h]
  __int64 v31; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0;
  if ( *(_QWORD *)(*a3 + 40) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*a3 + 40)) )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        *(_QWORD *)&v28.left = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v28;
        *(_QWORD *)&v28.right = v9;
        ++*(_DWORD *)(v9 + 8);
        v3 = xxxSendUAHMenuMessage(*(_QWORD *)(*a3 + 16), 149LL, *(_QWORD *)(*a3 + 40), (__int64)DCEx);
        ThreadUnlock1(v11, v10);
      }
    }
    v12 = *(_QWORD *)(*a3 + 40);
    if ( v12 )
    {
      if ( v3 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v29, *a3);
        MNDrawArrow(DCEx, v29, 4294967293LL);
        SmartObjStackRef<tagPOPUPMENU>::Init(v29, *a3);
        MNDrawArrow(DCEx, v29, 4294967292LL);
      }
      else
      {
        v13 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        v14 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v28.top = 0;
        v28.left = 0;
        v28.bottom = v13;
        v28.right = v14;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(v12, a2, &v28, 0x2000LL);
          top = v28.top;
          bottom = v28.bottom;
          right = v28.right;
          left = v28.left;
        }
        else
        {
          DrawEdge(DCEx, &v28, 5u, 8207);
          DrawFrame(DCEx, &v28.left, 1, 120);
          top = v28.top + 1;
          left = v28.left + 1;
          right = v28.right - 1;
          bottom = v28.bottom - 1;
        }
        v30 = top;
        v19 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v31);
        v20 = *(_QWORD *)(*a3 + 40);
        if ( *(_QWORD *)(v20 + 128) )
        {
          v21 = *(unsigned int *)(v20 + 136);
          if ( (_DWORD)v21 == -1 || (unsigned int)v21 >= *(_DWORD *)(v20 + 68) )
            v22 = 0LL;
          else
            v22 = *(_QWORD *)(v20 + 96) + 152 * v21;
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(v22 + 76), 0LL);
          v23 = *(_QWORD *)(*(_QWORD *)(*a3 + 40) + 128LL);
        }
        else
        {
          v23 = *(_QWORD *)(gpsi + 5120LL);
        }
        *(_QWORD *)&v28.left = GreSelectBrush(DCEx, v23);
        v24 = right - left;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, left, v30, v24, *((_DWORD *)DPIMETRICS + 7), 15728673);
        SmartObjStackRef<tagPOPUPMENU>::Init(v29, *a3);
        MNDrawArrow(DCEx, v29, 4294967293LL);
        v26 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, left, v19, v24, *((_DWORD *)v26 + 7), 15728673);
        SmartObjStackRef<tagPOPUPMENU>::Init(v29, *a3);
        MNDrawArrow(DCEx, v29, 4294967292LL);
        GreSetBrushOrg(DCEx, v31, SHIDWORD(v31), 0LL);
        GreSelectBrush(DCEx, *(_QWORD *)&v28.left);
      }
      if ( !a2 )
        goto LABEL_26;
    }
    else if ( !a2 && DCEx )
    {
LABEL_26:
      _ReleaseDC(DCEx);
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a3);
}
