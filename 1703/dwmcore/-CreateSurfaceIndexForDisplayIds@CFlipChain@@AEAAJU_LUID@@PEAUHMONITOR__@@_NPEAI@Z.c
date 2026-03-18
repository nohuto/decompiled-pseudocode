/*
 * XREFs of ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x18012D42C
 * Callers:
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800B104C (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x18016248C (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 */

__int64 __fastcall CFlipChain::CreateSurfaceIndexForDisplayIds(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int *a5)
{
  CDisplaySet *v6; // rsi
  unsigned int v7; // r8d
  int CurrentDisplaySet; // eax
  unsigned int v12; // edi
  int DisplayIdFromMonitor; // eax
  int v14; // eax
  int v15; // eax
  CDisplaySet *v17; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-31h] BYREF
  char v19; // [rsp+50h] [rbp-21h]
  int v20; // [rsp+54h] [rbp-1Dh]
  __int64 v21; // [rsp+58h] [rbp-19h]
  _BYTE v22[64]; // [rsp+60h] [rbp-11h] BYREF
  int v23; // [rsp+E0h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = DisplayId::None;
  v17 = 0LL;
  v23 = DisplayId::None;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v17);
    v12 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x483u);
      v6 = v17;
      goto LABEL_13;
    }
    v6 = v17;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v17, a3, (struct DisplayId *)&v23);
    v12 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x486u);
      *((_QWORD *)this + 33) = a3;
      goto LABEL_13;
    }
    v7 = v23;
  }
  v14 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId((__int64)this, *(_QWORD *)&a2, v7);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v20 = 0;
    v21 = 0LL;
    v18[0] = a2;
    v18[1] = a3;
    v19 = a4;
    memset_0(v22, 0, 0x38uLL);
    if ( a5 )
      *a5 = *((_DWORD *)this + 62);
    v15 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((char *)this + 224, v18);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4A6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x492u);
    *((struct _LUID *)this + 32) = a2;
  }
LABEL_13:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v12;
}
