/*
 * XREFs of ?ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE@@@Z @ 0x18012EA24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 *     ?GetPrimaryAdapter@CHolographicViewerContent@@AEAAJAEAU_LUID@@PEAPEAUHMONITOR__@@@Z @ 0x1801A55B8 (-GetPrimaryAdapter@CHolographicViewerContent@@AEAAJAEAU_LUID@@PEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CHolographicViewerContent::ProcessCreate(
        struct CD3DDeviceLevel1 **this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE *a3)
{
  int PrimaryAdapter; // eax
  CDisplayManager *v5; // rcx
  unsigned int v6; // ebx
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  struct CD3DDeviceLevel1 *v9; // rbx
  int D3DDevice; // eax
  CDisplaySet *v12; // [rsp+48h] [rbp+10h] BYREF
  HMONITOR v13; // [rsp+50h] [rbp+18h] BYREF
  struct _LUID v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = (HMONITOR)a3;
  v12 = 0LL;
  PrimaryAdapter = CHolographicViewerContent::GetPrimaryAdapter((CHolographicViewerContent *)this, &v14, &v13);
  v6 = PrimaryAdapter;
  if ( PrimaryAdapter < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryAdapter, 0x155u);
  }
  else
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v5, &v12);
    v6 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x157u);
    }
    else if ( v13
           && (DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v12, v13, (struct DisplayId *)&v13),
               v6 = DisplayIdFromMonitor,
               DisplayIdFromMonitor < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x15Bu);
    }
    else
    {
      v9 = this[2];
      CComposition::GetHolographicManager(v9);
      D3DDevice = CD3DDeviceManager::GetD3DDevice(
                    (CD3DDeviceManager *)&g_D3DDeviceManager,
                    (struct _GUID *)((char *)v9 + 324),
                    v14,
                    this + 8);
      v6 = D3DDevice;
      if ( D3DDevice < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x16Au);
      else
        CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
  }
  ReleaseInterface<CDisplaySet const>(&v12);
  return v6;
}
