/*
 * XREFs of ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x18006FD8C
 * Callers:
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800700D4 (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogCompositorManager::EnsureExclusiveMode(CAnalogCompositorManager *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  if ( !*(_QWORD *)this )
  {
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 25))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
           &GUID_ad9a1415_d7c0_48fe_810f_2cf1efa8f436,
           &v7);
    v1 = v3;
    if ( v3 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, CAnalogCompositorManager *))(*(_QWORD *)v7 + 32LL))(v7, this);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x42u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x40u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3Eu);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v1;
}
