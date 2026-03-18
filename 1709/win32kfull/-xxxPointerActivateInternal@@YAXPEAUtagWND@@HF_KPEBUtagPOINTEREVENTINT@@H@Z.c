/*
 * XREFs of ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8
 * Callers:
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerActivate @ 0x1C01CE350 (EditionPointerActivate.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CEB1C (xxxDoDeferredPointerActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C0044 (xxxSendPointerMessageWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01C3E10 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CD3BC (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01CE478 (IsModalMenuStarted.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0206C98 (xxxMNDismissIfOffMenu.c)
 */

void __fastcall xxxPointerActivateInternal(
        struct tagWND *a1,
        int a2,
        __int16 a3,
        __int64 a4,
        const struct tagPOINTEREVENTINT *a5)
{
  int v7; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 TopLevelWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 LegacyActivation; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v40[3]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v41[4]; // [rsp+78h] [rbp+7h] BYREF

  if ( !a2 || (*((_BYTE *)a1 + 307) & 4) != 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL);
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
      && !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)a1);
      if ( TopLevelWindow )
      {
        if ( a1 != *(struct tagWND **)(v12 + 120) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
          v40[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v40;
          v40[1] = TopLevelWindow;
          _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
          v18 = *(_QWORD *)(v12 + 104);
          if ( v18 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(v18 + 16)) )
          {
            v38 = *((_QWORD *)a5 + 5);
            v22 = *(__int64 **)(v19 + 584);
            if ( v22 )
              v23 = *v22;
            else
              v23 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, v23, v20, v21);
            v26 = *(_QWORD *)(v12 + 104);
            if ( (*(_DWORD *)(v26 + 368) & 0xF) == 2 )
            {
              if ( *(_QWORD *)v39[0]
                && *(_QWORD *)(*(_QWORD *)v39[0] + 16LL)
                && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 16LL) + 368LL) & 0xF) != 2
                && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 16LL) + 288LL) )
              {
                PhysicalToLogicalInPlacePointWithParent(*(_QWORD *)(*(_QWORD *)v39[0] + 16LL), (int *)&v38, 0LL);
              }
            }
            else
            {
              PhysicalToLogicalDPIPointWithHitTest(&v38, &v38, 0LL, v26);
            }
            v27 = *(_QWORD *)(v12 + 104);
            v28 = (unsigned __int16)v38 | (WORD2(v38) << 16);
            v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
            v41[0] = *(_QWORD *)(v29 + 392);
            *(_QWORD *)(v29 + 392) = v41;
            v41[1] = v27;
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
            xxxMNDismissIfOffMenu(*(_QWORD *)(v12 + 104), v28);
            ThreadUnlock1(v31, v30);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v39, v32, v33, v34);
          }
          LegacyActivation = xxxSendPointerMessageWorker(a1, 587LL, a4, *(_QWORD *)TopLevelWindow, 0LL, 177);
          if ( LegacyActivation == 1 )
            goto LABEL_28;
          if ( LegacyActivation != 3 )
            LegacyActivation = xxxQueryLegacyActivation(a1, (struct tagWND *)TopLevelWindow, a3, a5);
          if ( LegacyActivation == 1 )
LABEL_28:
            xxxActivateWindow((struct tagWND *)TopLevelWindow, 2LL);
          ThreadUnlock1(v37, v36);
        }
      }
    }
  }
  else
  {
    LOBYTE(v7) = IsMessageOnlyWindow((__int64)a1);
    if ( v7 )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      v9 = (__int64)CompositionInputWindowUIOwner;
      if ( CompositionInputWindowUIOwner )
      {
        LOBYTE(v10) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v10 )
        {
          v11 = GetTopLevelWindow(v9);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(v11 + 16),
            *(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)v11,
            0LL);
        }
      }
    }
  }
}
