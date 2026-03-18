/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180133BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800168B8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x1800780E4 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801339F0 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArrivalOrDeparture(CDesktopRenderTarget *this)
{
  __int64 v1; // rbp
  signed int CurrentDisplaySet; // eax
  unsigned int v4; // ebx
  __int64 i; // r14
  __int64 v6; // rsi
  bool v7; // al
  signed int v8; // eax
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219898, 2u, CurrentDisplaySet, 0x340u);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v11 + 18) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * i) + 112LL);
      if ( CDisplay::HasDDAChanged((CDisplay *)v6) )
      {
        v7 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 40) + 24LL))(*(_QWORD *)(v6 + 40)) != 0;
        *(_BYTE *)(v6 + 308) = v7;
        if ( v7 && *(_BYTE *)(v6 + 305) )
        {
          v8 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                 (CDesktopRenderTarget *)((char *)this - 112),
                 (struct CDisplay *)v6);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219898, 2u, v8, 0x362u);
            break;
          }
        }
        else
        {
          DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
                                           (CDesktopRenderTarget *)((char *)this - 112),
                                           (const struct CDisplay *)v6);
          v1 = (__int64)DDAHwndRenderTargetByDisplay;
          if ( DDAHwndRenderTargetByDisplay )
          {
            CDesktopRenderTarget::RemoveRenderTarget(
              (CDesktopRenderTarget *)((char *)this - 112),
              DDAHwndRenderTargetByDisplay);
            v1 = 0LL;
          }
        }
      }
    }
  }
LABEL_14:
  ReleaseInterfaceNoNULL<CManipulationManager>(v1);
  ReleaseInterface<CDisplaySet const>(&v11);
  return v4;
}
