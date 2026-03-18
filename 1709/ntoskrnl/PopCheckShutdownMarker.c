/*
 * XREFs of PopCheckShutdownMarker @ 0x140827D14
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     RtlGetSystemBootStatusEx @ 0x1405AC080 (RtlGetSystemBootStatusEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405E9890 (ExGetFirmwareEnvironmentVariable.c)
 *     PopClearSystemSleepCheckpoint @ 0x14070B184 (PopClearSystemSleepCheckpoint.c)
 *     PopDiagTraceDirtyTransition @ 0x14086C3E8 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(int a1)
{
  char v2; // bl
  char result; // al
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  int v6; // r9d
  char v7; // [rsp+50h] [rbp-B0h] BYREF
  bool v8; // [rsp+51h] [rbp-AFh] BYREF
  char v9[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+90h] [rbp-70h]
  __int128 *v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int128 *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int128 *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  int *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  int *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  char *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  bool *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]

  v18 = 14;
  v20 = 48;
  v19 = &PopBsdPhysicalPowerButtonInfo;
  v21 = 7;
  v22 = &PopBsdPowerTransition;
  v23 = 32;
  RtlGetSystemBootStatusEx((__int64)&v18, 2u);
  v2 = 0;
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_14038D430 = xmmword_1403A2B60;
  xmmword_14038D440 = xmmword_1403A2B70;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && pCallbackContext.LevelPlus1 > 5
    && TlgKeywordOn(&pCallbackContext, 0x200000000000uLL) )
  {
    v10 = WORD2(v4);
    v12 = WORD6(xmmword_14038D430);
    v15 = BYTE6(v4);
    v11 = v4;
    v13 = v4;
    v5 = HIBYTE(v4);
    v7 = v5 & 1;
    v14 = HIWORD(*((_QWORD *)&xmmword_14038D430 + 1));
    v26 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v28 = &v10;
    v30 = &v11;
    v32 = &xmmword_14038D430;
    v34 = &v12;
    v36 = &v13;
    v38 = &v14;
    v40 = &v15;
    v42 = &v7;
    v44 = &v8;
    v8 = (v5 & 2) != 0;
    v27 = 8LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 8LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 1LL;
    TlgWrite(&pCallbackContext, &unk_1402D0D3C, 0LL, 0LL, 0xCu, &pData);
  }
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_14038D460 = *(_OWORD *)&Buffer;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  v24 = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v16 = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData((__int64)&v24, (__int64)&v16, 4LL);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    BYTE9(PopBsdPowerTransitionAtBoot) = 1;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    v17 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (__int64)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (__int64)v9,
                (__int64)&v17,
                0LL) >= 0 )
    {
      v2 = v9[0];
      PopClearSystemSleepCheckpoint(1);
    }
    LOBYTE(v6) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             WORD6(PopBsdPowerTransitionAtBoot),
             v6,
             SBYTE9(PopBsdPowerTransitionAtBoot),
             PopBsdPowerTransitionAtBoot,
             0,
             v2,
             BYTE14(PopBsdPowerTransitionAtBoot) & 0xF);
  }
  return result;
}
