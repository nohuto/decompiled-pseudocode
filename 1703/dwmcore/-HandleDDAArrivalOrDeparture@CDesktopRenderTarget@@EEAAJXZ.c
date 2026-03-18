/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801474C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18006A5F8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x180130BF4 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180146B38 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18014729C (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArrivalOrDeparture(CDesktopRenderTarget *this)
{
  __int64 v1; // rsi
  int CurrentDisplaySet; // eax
  unsigned int v4; // ebx
  __int64 i; // r14
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, CurrentDisplaySet, 0x344u);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v11 + 18) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * i) + 112LL);
      if ( CDisplay::HasDDAChanged((CDisplay *)v6) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 40) + 24LL))(*(_QWORD *)(v6 + 40));
        *(_BYTE *)(v6 + 298) = v7 != 0;
        if ( v7 && *(_BYTE *)(v6 + 295) )
        {
          v8 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                 (CDesktopRenderTarget *)((char *)this - 112),
                 (struct CDisplay *)v6);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, v8, 0x366u);
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
  ReleaseInterfaceNoNULL<CD2DPencil>(v1);
  ReleaseInterface<CDisplaySet const>(&v11);
  return v4;
}
