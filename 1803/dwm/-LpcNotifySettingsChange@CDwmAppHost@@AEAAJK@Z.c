/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001100
 * Callers:
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140001190 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001210 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012D0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002980 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400014E0 (--1CPortClient@@UEAA@XZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x140001550 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140006470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2, void *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v8)(_BYTE *, __int64, CDwmAppHost **, __int64); // [rsp+48h] [rbp-50h]
  __int64 v9; // [rsp+60h] [rbp-38h]
  CDwmAppHost *v10; // [rsp+A0h] [rbp+8h] BYREF

  v10 = this;
  if ( !*(&g_dwmAppHost + 1) )
    return 0LL;
  CPortClient::CPortClient((CPortClient *)v7, a2, a3);
  v9 = (__int64)*(&g_dwmAppHost + 1);
  LODWORD(v10) = 1073741872;
  HIDWORD(v10) = a2;
  v4 = v8(v7, 1073741872LL, &v10, 8LL);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x135u);
  CPortClient::~CPortClient((CPortClient *)v7);
  return v5;
}
