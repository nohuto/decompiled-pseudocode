/*
 * XREFs of ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x18006943C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800368F8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x18006948C (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveView(unsigned int a1)
{
  unsigned int v2; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v4; // eax

  v2 = 0;
  Instance = CAnalogCompositorManager::GetInstance();
  if ( Instance )
  {
    v4 = CAnalogCompositorManager::SetExclusiveViewImpl(Instance, a1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x67u);
  }
  return v2;
}
