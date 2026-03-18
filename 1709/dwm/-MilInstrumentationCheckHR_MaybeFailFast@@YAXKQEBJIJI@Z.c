/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001130 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001290 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400012E0 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400014F0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001E70 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002010 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020B0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400023B0 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1400024D0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400029E0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002AA0 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x140007CB0 (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140007D90 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400080A0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140008410 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400084B0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x140001990 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1400019B0 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x14000874C (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140008838 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  bool v8; // al
  unsigned int v9; // ecx
  const int *v10; // r11
  char v11; // r10

  v8 = IsOOM(a4);
  if ( (a1 & 0x10) == 0 || !v8 )
  {
    if ( !v10 || !a3 )
    {
      v10 = (const int *)&unk_14000BB90;
      a3 = 9;
    }
    if ( IsHRInList(v9, v10, a3) )
      goto LABEL_6;
LABEL_12:
    MilInstrumentationHandleFailure_MaybeFailFast(v9, a4, a1, a5);
    return;
  }
  if ( !v10 || !a3 || !IsHRInList(v9, v10, a3) )
    goto LABEL_12;
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(1u, a4, a5);
  }
}
