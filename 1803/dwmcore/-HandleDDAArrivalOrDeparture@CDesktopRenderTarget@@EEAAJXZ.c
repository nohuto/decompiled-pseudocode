/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180157D20
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001BC20 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180044BB8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180157264 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801579F4 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArrivalOrDeparture(CDesktopRenderTarget *this)
{
  __int64 v1; // rsi
  int CurrentDisplaySet; // eax
  unsigned int v4; // ebx
  __int64 i; // rbp
  __int64 v6; // r14
  bool v7; // al
  int v8; // eax
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, CurrentDisplaySet, 0x2E2u);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v11 + 18) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * i) + 168LL);
      if ( CDisplay::HasDDAChanged((CDisplay *)v6) )
      {
        v7 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 40) + 24LL))(*(_QWORD *)(v6 + 40)) != 0;
        *(_BYTE *)(v6 + 328) = v7;
        if ( v7 && *(_BYTE *)(v6 + 325) )
        {
          v8 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                 (CDesktopRenderTarget *)((char *)this - 168),
                 (struct CDisplay *)v6);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, v8, 0x304u);
            break;
          }
        }
        else
        {
          DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
                                           (CDesktopRenderTarget *)((char *)this - 168),
                                           (const struct CDisplay *)v6);
          v1 = (__int64)DDAHwndRenderTargetByDisplay;
          if ( DDAHwndRenderTargetByDisplay )
          {
            CDesktopRenderTarget::RemoveRenderTarget(
              (CDesktopRenderTarget *)((char *)this - 168),
              DDAHwndRenderTargetByDisplay);
            v1 = 0LL;
          }
        }
      }
    }
  }
LABEL_14:
  ReleaseInterfaceNoNULL<IWICBitmap>(v1);
  ReleaseInterface<CDisplaySet const>(&v11);
  return v4;
}
