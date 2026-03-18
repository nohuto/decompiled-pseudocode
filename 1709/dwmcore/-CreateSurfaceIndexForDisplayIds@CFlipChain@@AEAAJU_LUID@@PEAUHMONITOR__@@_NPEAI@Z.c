/*
 * XREFs of ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165228
 * Callers:
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165E24 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x1801787F0 (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18018EB98 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
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
  signed int CurrentDisplaySet; // eax
  unsigned int v12; // edi
  signed int DisplayIdFromMonitor; // eax
  signed int v14; // eax
  signed int v15; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0x482u);
      v6 = v17;
      goto LABEL_13;
    }
    v6 = v17;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v17, a3, (struct DisplayId *)&v23);
    v12 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DisplayIdFromMonitor, 0x485u);
      *((_QWORD *)this + 34) = a3;
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
      *a5 = *((_DWORD *)this + 64);
    v15 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((char *)this + 232, v18);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x4A5u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x491u);
    *((struct _LUID *)this + 33) = a2;
  }
LABEL_13:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v12;
}
