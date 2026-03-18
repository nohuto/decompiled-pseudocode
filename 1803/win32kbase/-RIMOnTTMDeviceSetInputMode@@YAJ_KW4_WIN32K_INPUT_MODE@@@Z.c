/*
 * XREFs of ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00F64B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00F6688 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     WPP_RECORDER_SF_dqdS @ 0x1C00F6B0C (WPP_RECORDER_SF_dqdS.c)
 *     WPP_RECORDER_SF_qDDSD @ 0x1C00F705C (WPP_RECORDER_SF_qDDSD.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00F73CC (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned int v6; // esi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 336);
  v6 = -1073741823;
  v15 = *(_DWORD *)(a1 + 832);
  HIDWORD(v13) = HIDWORD(a1);
  WPP_RECORDER_SF_qdd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 21);
  RIMLockExclusive(v3 + 96);
  if ( *(_DWORD *)(a1 + 832) == a2 )
    goto LABEL_10;
  switch ( a2 )
  {
    case 0:
LABEL_9:
      *(_DWORD *)(a1 + 832) = a2;
      WPP_RECORDER_SF_dqdS(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v8,
        v9,
        v12,
        a2,
        a1,
        *(_BYTE *)(a1 + 48),
        *(_QWORD *)(a1 + 216));
      DbgPrintRIMAlways(
        "rimttm:RIMOnTTMDeviceSetInputMode: TTM set input mode to %d for pRimDev=%p type=%d ustrName=%ls\n",
        *(_DWORD *)(a1 + 832),
        (const void *)a1,
        *(unsigned __int8 *)(a1 + 48),
        *(const wchar_t **)(a1 + 216));
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    case 1:
LABEL_8:
      rimInvalidateInputs((struct RIMDEV *)a1);
      goto LABEL_9;
    case 2:
      v10 = *(_DWORD *)(v3 + 76);
      if ( (v10 & gWakeOnDeviceTypes) != 0 )
      {
        WPP_RECORDER_SF_qDDSD(WPP_GLOBAL_Control->DeviceExtension, v10, v8, v9);
        DbgPrintRIMAlways(
          "rimttm:RIMOnTTMDeviceSetInputMode ignored for pRimDev=%p type=%08x rimtype=%08x ustrName=%ls! Can't set PowerI"
          "nputFiltered for devices: %08x\n",
          (const void *)a1,
          *(unsigned __int8 *)(a1 + 48),
          *(_DWORD *)(v3 + 76),
          *(const wchar_t **)(a1 + 216),
          gWakeOnDeviceTypes);
        goto LABEL_9;
      }
      goto LABEL_8;
  }
  LODWORD(v13) = a2;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x17u,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v13,
    a2,
    v15);
LABEL_11:
  *(_QWORD *)(v3 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v13) = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x19u,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v13);
  return v6;
}
