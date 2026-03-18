/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850
 * Callers:
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C02046BC (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SubtractRect @ 0x1C00FB1A0 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetMonitorMenuRectForWindow @ 0x1C023A7CC (GetMonitorMenuRectForWindow.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  int **v12; // rax
  __int128 v13; // xmm0
  __int128 *v14; // rax
  __int128 v15; // xmm0
  int **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-49h] BYREF
  __int128 v24; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v25[16]; // [rsp+38h] [rbp-31h] BYREF
  int v26[6]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v27; // [rsp+60h] [rbp-9h] BYREF
  __int128 v28; // [rsp+70h] [rbp+7h] BYREF
  __int128 v29; // [rsp+80h] [rbp+17h] BYREF

  v11 = *GetMonitorRectForWindow(&v24, a2, *((struct tagWND **)**a1 + 2));
  v12 = *a1;
  v27 = v11;
  if ( **v12 >= 0 )
  {
    v14 = &v29;
    v29 = v27;
  }
  else
  {
    v13 = *(_OWORD *)GetMonitorMenuRectForWindow(v25, a2, *((_QWORD *)**a1 + 2));
    v14 = &v28;
    v28 = v13;
  }
  v15 = *v14;
  v16 = *a1;
  *(_OWORD *)v26 = v15;
  if ( (*(_DWORD *)(*((_QWORD *)*v16 + 2) + 368LL) & 0xF) != 2 )
  {
    v17 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 360LL));
    v23 = v17;
    if ( v17 )
    {
      if ( v17 != a2 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v18, v8, v9, v10);
        if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 584)) )
          v21 = *(_QWORD *)(a2 + 40) + 28LL;
        else
          v21 = v20;
        PhysicalToLogicalDPIRect(v26, v21, CurrentThreadDpiAwarenessContext, &v23);
        if ( !a4 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v27, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v23);
      }
    }
  }
  if ( !a4 )
  {
LABEL_15:
    *a3 = *(_OWORD *)v26;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8, v9, v10);
  }
  SubtractRect((__int64)a3, (int *)&v27, v26);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v8, v9, v10);
}
