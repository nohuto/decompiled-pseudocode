/*
 * XREFs of ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x1801515C8
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180150A14 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 */

char __fastcall COverlayContext::IsFullscreenSingleMonitor(COverlayContext *this)
{
  char v1; // di
  int CurrentDisplaySet; // eax
  CDisplaySet *v3; // rbx
  CDisplaySet *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = 0;
  if ( *((_DWORD *)this + 66) == 1 && !*((_DWORD *)this + 74) || *((_QWORD *)this + 121) )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v5);
    v3 = v5;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xB9Au);
    }
    else if ( *((_DWORD *)v5 + 18) == 1 )
    {
      v1 = 1;
    }
    if ( v3 )
      CDisplaySet::Release(v3);
  }
  return v1;
}
