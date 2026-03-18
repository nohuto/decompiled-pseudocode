/*
 * XREFs of ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x1800C4A30
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::GetActualParallelModePolicy(
        CPartitionVerticalBlankScheduler *this,
        enum ParallelModePolicy *a2)
{
  struct CDisplay *v3; // rdi
  signed int CurrentDisplaySet; // eax
  unsigned int v5; // ebx
  signed int PrimaryDisplay; // eax
  CDisplaySet *v8; // [rsp+40h] [rbp+8h] BYREF
  struct CDisplay *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  *(_DWORD *)a2 = 1;
  v3 = 0LL;
  v9 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v8);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201D00, 2u, CurrentDisplaySet, 0xB57u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v8, &v9);
    v5 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180201D00, 2u, PrimaryDisplay, 0xB59u);
      v3 = v9;
    }
    else
    {
      v3 = v9;
      if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)v9 + 72)) )
        *(_DWORD *)a2 = CCommonRegistryData::m_parallelModePolicy;
    }
  }
  if ( v8 )
    CDisplaySet::Release(v8);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v3);
  return v5;
}
