/*
 * XREFs of ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800700D4
 * Callers:
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180070084 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x18006FD8C (-EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveViewImpl(CAnalogCompositorManager *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAnalogCompositorManager::EnsureExclusiveMode(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, a2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x52u);
  }
  return v5;
}
