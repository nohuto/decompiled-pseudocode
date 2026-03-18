/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90
 * Callers:
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01C884C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerActivate @ 0x1C01C9F40 (EditionPointerActivate.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CA6DC (xxxDoDeferredPointerActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01065A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxSendPointerMessageWorker @ 0x1C01BC354 (xxxSendPointerMessageWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C0630 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C90F8 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01CA040 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0205008 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        int a2,
        __int16 a3,
        __int64 a4,
        const struct tagPOINTEREVENTINT *a5)
{
  int v8; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rsi
  struct tagWND *v14; // rcx
  __int64 TopLevelWindow; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 LegacyActivation; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v29[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v30[3]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v31[5]; // [rsp+80h] [rbp+Fh] BYREF

  if ( !a2 || (*((_BYTE *)a1 + 307) & 4) != 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v14) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v13 + 88) )
        {
          v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v29;
          v29[1] = TopLevelWindow;
          ++*(_DWORD *)(TopLevelWindow + 8);
          v16 = *(_QWORD *)(v13 + 72);
          if ( v16 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v16 + 16)) )
          {
            v28 = *((_QWORD *)a5 + 5);
            v18 = *(_QWORD **)(v17 + 528);
            if ( v18 )
              v18 = (_QWORD *)*v18;
            SmartObjStackRef<tagPOPUPMENU>::Init(v31, (__int64)v18);
            v19 = *(_QWORD *)(v13 + 72);
            if ( (*(_DWORD *)(v19 + 368) & 0xF) == 2 )
            {
              if ( v31[0] )
              {
                v20 = *(_QWORD *)(v31[0] + 16LL);
                if ( v20 )
                {
                  if ( (*(_DWORD *)(v20 + 368) & 0xF) != 2 && *(_QWORD *)(v20 + 288) )
                    PhysicalToLogicalInPlacePointWithParent(v20, (int *)&v28, 0LL);
                }
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v28, &v28, 0LL, v19);
            }
            v21 = *(_QWORD *)(v13 + 72);
            v22 = (unsigned __int16)v28 | (WORD2(v28) << 16);
            v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v30;
            v30[1] = v21;
            ++*(_DWORD *)(v21 + 8);
            xxxMNDismissIfOffMenu(*(_QWORD *)(v13 + 72), v22);
            ThreadUnlock1(v24, v23);
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v31);
          }
          LegacyActivation = xxxSendPointerMessageWorker(a1, 587LL, a4, *(_QWORD *)TopLevelWindow, 0LL, 177);
          if ( LegacyActivation == 1 )
            goto LABEL_27;
          if ( LegacyActivation != 3 )
            LegacyActivation = xxxQueryLegacyActivation(a1, (struct tagWND *)TopLevelWindow, a3, a5);
          if ( LegacyActivation == 1 )
LABEL_27:
            xxxActivateWindow((struct tagWND *)TopLevelWindow, 2LL);
          ThreadUnlock1(v27, v26);
        }
      }
    }
  }
  else
  {
    LOBYTE(v8) = IsMessageOnlyWindow((__int64)a1);
    if ( v8 )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      v10 = (__int64)CompositionInputWindowUIOwner;
      if ( CompositionInputWindowUIOwner )
      {
        LOBYTE(v11) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v11 )
        {
          v12 = (__int64 *)GetTopLevelWindow(v10);
          PostEventMessageEx(v12[2], *(_QWORD *)(v12[2] + 384), 6u, 0LL, 0, 0LL, *v12, 0LL);
        }
      }
    }
  }
}
