/*
 * XREFs of ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x1800958BC
 * Callers:
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 * Callees:
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJAEBUInputInfo@@@Z @ 0x18008FF08 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJAEBUInputInfo@@@Z.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800901C4 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerCollection::QueueInputReport(
        SpatialInputControllerCollection *this,
        struct InputInfo *a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // rcx
  RawInputProvidersContinuousTracing *v5; // rcx
  _DWORD *v6; // rcx
  RawInputProvidersContinuousTracing *v7; // rcx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 335) & 8) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
    v4 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v4 && *v4 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::InputReportProcessed_(v5, *((_DWORD *)a2 + 1), v2, a2);
    }
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v6 && *v6 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::InputReportIgnored_(v7, *((_DWORD *)a2 + 1), L"No select");
    }
  }
  return v2;
}
