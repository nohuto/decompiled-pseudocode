/*
 * XREFs of GreDwmStartup @ 0x1C00DEA90
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 * Callees:
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AD88 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B124 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008BB84 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C008C12C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00DE328 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     GreSfmDwmStartup @ 0x1C00DEC98 (GreSfmDwmStartup.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1C00DED18 (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C00DEEA4 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1C00DEF88 (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C00DF07C (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1C00DF17C (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmStartup(__int64 a1)
{
  int v1; // esi
  int v3; // r15d
  int v4; // r14d
  unsigned int v5; // edi
  struct _RTL_GENERIC_TABLE *v6; // rax
  struct _RTL_GENERIC_TABLE *v7; // rbx
  __int64 RectRgn; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v17; // [rsp+C0h] [rbp+50h] BYREF
  int v18; // [rsp+C8h] [rbp+58h] BYREF

  v1 = 0;
  v13 = a1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v3 = 0;
  v4 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v18);
  v5 = 1;
  v6 = (struct _RTL_GENERIC_TABLE *)PALLOCMEM2(0x158uLL, 1935885383LL, 1);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v6[2].WhichOrderedElement = a1;
    LOBYTE(v3) = GrepDwmCreateComposedEvent((wchar_t *)v6) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v7[2].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)RectRgn;
    LOBYTE(v4) = RectRgn != 0;
    RtlInitializeGenericTable(
      v7,
      HwndLookupCompareTableData,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)HwndLookupAllocTableData,
      HwndLookupFreeTableData,
      0LL);
    GreInitializePushLock(&v7[1]);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    v7[1].InsertOrderList.Blink = &v7[1].InsertOrderList;
    v7[1].InsertOrderList.Flink = &v7[1].InsertOrderList;
    ObjectAttributes.Length = 48;
    v7[1].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)&v7[1].WhichOrderedElement;
    *(_QWORD *)&v7[1].WhichOrderedElement = (char *)v7 + 104;
    ObjectAttributes.Attributes = 512;
    v7[1].FreeRoutine = (PRTL_GENERIC_FREE_ROUTINE)&v7[1].AllocateRoutine;
    v7[1].AllocateRoutine = (PRTL_GENERIC_ALLOCATE_ROUTINE)&v7[1].AllocateRoutine;
    v7[4].AllocateRoutine = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v1) = ZwCreateEvent((PHANDLE)&v7[4].AllocateRoutine, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v3 && v4 && v1 )
    {
      g_pDwmState = (struct DwmState *)v7;
      v7 = 0LL;
      SpRenderHint((struct PDEVOBJ *)&v13, 0x10000u, 0LL, 0LL);
      vAccNotify(
        (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2568) != 0LL)),
        6u,
        (void *)1);
    }
    gfDwmDeviceBitmapsEnabled = bDwmDeviceBitmapsEnabled();
    gfDwmDeviceBitmapsEnabledForMultiAdapter = bDwmDeviceBitmapsEnabledForMultiAdapter();
    gfDwmOverlayTestMode = bDwmOverlayTestMode();
    gfDwmDesktopOverlaysEnabled = bDwmDesktopOverlaysEnabled();
    if ( (unsigned int)bDwmResizeOptimizationOverride(&v15, &v16, &v17) )
    {
      gdwDwmResizeOptimizationOptions = v15;
      gdwDwmResizeTimeoutGdi = v16;
      gdwDwmResizeTimeoutModern = v17;
      gfDwmResizeOptimizationOverride = 1;
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( v7 )
  {
    if ( v4 )
      GreDeleteObject(v7[2].CompareRoutine);
    if ( v3 )
    {
      CompareRoutine = v7[4].CompareRoutine;
      if ( CompareRoutine )
      {
        ObCloseHandle(CompareRoutine, 0);
        v7[4].CompareRoutine = 0LL;
      }
    }
    if ( v1 )
      ZwClose(v7[4].AllocateRoutine);
    Win32FreePool(v7, v9, v10);
  }
  if ( v3 && v4 && v1 )
    GreSfmDwmStartup();
  LEAVE_GRE_DWM_CRIT(a1, v18);
  if ( !v3 || !v4 || !v1 )
    return 0;
  return v5;
}
