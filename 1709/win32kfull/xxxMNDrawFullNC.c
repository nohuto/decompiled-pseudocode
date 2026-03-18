/*
 * XREFs of xxxMNDrawFullNC @ 0x1C0216BF0
 * Callers:
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 *     xxxSendUAHMenuMessage @ 0x1C0080D50 (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetBrushOrg @ 0x1C011CB2C (GreGetBrushOrg.c)
 *     DrawFrame @ 0x1C0139C54 (DrawFrame.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C02169C0 (MNDrawEdge.c)
 */

_QWORD *__fastcall xxxMNDrawFullNC(struct tagWND *a1, __int64 a2, __int64 **a3)
{
  HDC v4; // r15
  int v6; // ebx
  __int64 v7; // r9
  HDC DCEx; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  LONG bottom; // r12d
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  LONG right; // ebx
  __int64 v21; // r13
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  const struct tagDPIMETRICS *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  RECT v31; // [rsp+38h] [rbp-39h] BYREF
  __int64 *v32[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v33[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v34[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v35[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v36[4]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v37; // [rsp+E8h] [rbp+77h] BYREF

  v4 = (HDC)a2;
  v6 = 0;
  v7 = **a3;
  if ( *(_QWORD *)(v7 + 40) )
  {
    if ( a2 )
      DCEx = (HDC)a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(**a3 + 40)) && *(_QWORD *)(**a3 + 16) )
    {
      v10 = *(_QWORD *)(**a3 + 16);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)a3, v7);
      v36[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v36;
      v36[1] = v10;
      if ( v10 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      v6 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16), 149LL, *(_QWORD *)(**a3 + 40), (__int64)DCEx);
      ThreadUnlock1(v13, v12);
    }
    a2 = **a3;
    if ( *(_QWORD *)(a2 + 40) )
    {
      if ( v6 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, **a3, (__int64)a3, v7);
        MNDrawArrow(DCEx, v34, 4294967293LL);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, **a3, v28, v29);
        MNDrawArrow(DCEx, v35, 4294967292LL);
      }
      else
      {
        v31.right = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v31.bottom = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        *(_QWORD *)&v31.left = 0LL;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), v4, &v31, 0x2000);
          bottom = v31.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v31, 5, 8207);
          DrawFrame(DCEx, &v31.left, 1, 120);
          ++v31.left;
          --v31.right;
          ++v31.top;
          bottom = v31.bottom - 1;
        }
        v15 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v37);
        if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 128LL) )
        {
          v16 = *(_QWORD *)(**a3 + 40);
          v17 = *(unsigned int *)(v16 + 136);
          if ( (_DWORD)v17 == -1 || (unsigned int)v17 >= *(_DWORD *)(v16 + 68) )
            v18 = 0LL;
          else
            v18 = *(_QWORD *)(v16 + 96) + 152 * v17;
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(v18 + 76), 0LL);
          v19 = *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 128LL);
        }
        else
        {
          v19 = *(_QWORD *)(gpsi + 4712LL);
        }
        v21 = GreSelectBrush(DCEx, v19);
        v31.right -= v31.left;
        right = v31.right;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v31.left, v31.top, right, *((_DWORD *)DPIMETRICS + 7), 15728673);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, **a3, v23, v24);
        MNDrawArrow(DCEx, v32, 4294967293LL);
        v25 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v31.left, v15, v31.right, *((_DWORD *)v25 + 7), 15728673);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, **a3, v26, v27);
        MNDrawArrow(DCEx, v33, 4294967292LL);
        GreSetBrushOrg(DCEx, v37, SHIDWORD(v37), 0LL);
        GreSelectBrush(DCEx, v21);
      }
      if ( !v4 )
        goto LABEL_28;
    }
    else if ( !v4 && DCEx )
    {
LABEL_28:
      _ReleaseDC(DCEx);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a3, a2, (__int64)a3, v7);
}
