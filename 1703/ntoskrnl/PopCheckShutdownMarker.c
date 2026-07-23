/*
 * XREFs of PopCheckShutdownMarker @ 0x140824044
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405D62A0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406D5660 (PopClearSystemSleepCheckpoint.c)
 *     PopDiagTraceDirtyTransition @ 0x14083523C (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(int a1, void *a2)
{
  char v2; // bl
  NTSTATUS SetBootStatusData; // edi
  char v6; // cl
  char result; // al
  int v8; // r9d
  int v9; // r9d
  LOGICAL CheckStamp; // [rsp+30h] [rbp-D0h]
  char v11; // [rsp+40h] [rbp-C0h] BYREF
  bool v12; // [rsp+41h] [rbp-BFh] BYREF
  char v13[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+5Ch] [rbp-A4h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  WNF_STATE_NAME StateName; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int128 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  bool *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]

  v2 = 0;
  RtlGetSetBootStatusData(a2, 1u, RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x30u, 0LL);
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_14036E648 = xmmword_140387688;
  xmmword_14036E658 = xmmword_140387698;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && hProvider.LevelPlus1 > 5
    && TlgKeywordOn(&hProvider, 0x200000000000uLL) )
  {
    v14 = WORD6(PopBsdPhysicalPowerButtonInfoAtBoot);
    v16 = WORD6(xmmword_14036E648);
    v18 = HIWORD(xmmword_14036E648);
    v19 = BYTE14(PopBsdPhysicalPowerButtonInfoAtBoot);
    v11 = HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 1;
    v15 = v8;
    v24 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v26 = &v14;
    v28 = &v15;
    v30 = &xmmword_14036E648;
    v32 = &v16;
    v34 = &v17;
    v36 = &v18;
    v38 = &v19;
    v40 = &v11;
    v42 = &v12;
    v17 = v8;
    v12 = (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 2) != 0;
    v25 = 8LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 1LL;
    v43 = 1LL;
    TlgWrite(&hProvider, &unk_1402ACD8B, 0LL, 0LL, 0xCu, &pData);
  }
  SetBootStatusData = RtlGetSetBootStatusData(a2, 1u, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  v6 = BYTE8(PopBsdPowerTransition);
  xmmword_14036E678 = *(_OWORD *)&::Buffer;
  if ( (PopSimulate & 0x200) != 0 )
  {
    v6 = BYTE8(PopBsdPowerTransition) | 1;
    BYTE8(PopBsdPowerTransitionAtBoot) = BYTE8(PopBsdPowerTransition) | 1;
  }
  StateName = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = v6 & 1;
  ZwUpdateWnfStateData(&StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
  result = BYTE8(PopBsdPowerTransitionAtBoot);
  if ( (PopSimulate & 0x400) != 0 )
  {
    HIDWORD(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    result |= 2u;
    BYTE9(PopBsdPowerTransitionAtBoot) = 1;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( SetBootStatusData >= 0 && (result & 1) != 0 )
  {
    v21 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (__int64)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (__int64)v13,
                (__int64)&v21,
                0LL) >= 0 )
    {
      v2 = v13[0];
      PopClearSystemSleepCheckpoint();
    }
    LOBYTE(v9) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             HIDWORD(PopBsdPowerTransitionAtBoot),
             v9,
             SBYTE9(PopBsdPowerTransitionAtBoot),
             PopBsdPowerTransitionAtBoot,
             CheckStamp,
             v2);
  }
  return result;
}
