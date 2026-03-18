/*
 * XREFs of PopApplyPolicy @ 0x140626324
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x140171890 (PopVideoPowerSettingCallback.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopConsoleLockPowerSettingCallback @ 0x140625870 (PopConsoleLockPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x1406259A0 (PopHardDiskPowerSettingCallback.c)
 *     PopSleepPowerSettingCallback @ 0x140625B90 (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x140625E30 (PopPowerButtonSettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x14062604C (PopBatteryUpdateAlarms.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 * Callees:
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14016EC0C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 *     PopVerifySystemPowerPolicy @ 0x1406265C4 (PopVerifySystemPowerPolicy.c)
 *     PopResetCBTriggers @ 0x140626898 (PopResetCBTriggers.c)
 */

__int64 __fastcall PopApplyPolicy(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  _OWORD *v13; // r8
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  _QWORD *v21; // rdi
  int v22; // ebx
  char v23; // r14
  __int64 v24; // r8
  __int64 v25; // rcx
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD Buf1[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h]
  _OWORD v46[7]; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+130h] [rbp+30h]
  _OWORD Data[14]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v49; // [rsp+220h] [rbp+120h]

  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v6 = a3[1];
  Data[0] = *a3;
  v7 = a3[2];
  Data[1] = v6;
  v8 = a3[3];
  Data[2] = v7;
  v9 = a3[4];
  Data[3] = v8;
  v10 = a3[5];
  Data[4] = v9;
  v11 = a3[6];
  Data[5] = v10;
  Data[6] = v11;
  v12 = a3[7];
  v13 = a3 + 8;
  Data[7] = v12;
  v14 = *((_QWORD *)v13 + 12);
  v15 = v13[1];
  Data[8] = *v13;
  v16 = v13[2];
  Data[9] = v15;
  v17 = v13[3];
  Data[10] = v16;
  v18 = v13[4];
  Data[11] = v17;
  v19 = v13[5];
  Data[12] = v18;
  Data[13] = v19;
  v49 = v14;
  v20 = PopVerifySystemPowerPolicy(Data, Buf1);
  v21 = PopPolicy;
  v22 = v20;
  if ( !memcmp(Buf1, PopPolicy, 0xE8uLL) && !a1 )
    return 0LL;
  v23 = 0;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *((_QWORD *)&v46[-1] + 3 * v24) - v21[3 * v24 + 12];
    if ( !v25 )
    {
      v25 = *((_QWORD *)&v45 + 3 * v24 + 1) - v21[3 * v24 + 13];
      if ( !v25 )
        v25 = *((_QWORD *)v46 + 3 * v24) - v21[3 * v24 + 14];
    }
    if ( v25 )
      break;
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= 4 )
      goto LABEL_11;
  }
  v23 = 1;
LABEL_11:
  v26 = PopPolicy;
  v27 = Buf1[1];
  *(_OWORD *)PopPolicy = Buf1[0];
  v28 = Buf1[2];
  v26[1] = v27;
  v29 = Buf1[3];
  v26[2] = v28;
  v30 = Buf1[4];
  v26[3] = v29;
  v31 = Buf1[5];
  v26[4] = v30;
  v32 = v45;
  v26[5] = v31;
  v33 = v46[0];
  v26[6] = v32;
  v26 += 8;
  v34 = v46[1];
  *(v26 - 1) = v33;
  v35 = v46[2];
  *v26 = v34;
  v36 = v46[3];
  v26[1] = v35;
  v37 = v46[4];
  v26[2] = v36;
  v38 = v46[5];
  v26[3] = v37;
  v39 = v46[6];
  v40 = v47;
  v26[4] = v38;
  v26[5] = v39;
  *((_QWORD *)v26 + 12) = v40;
  PopSetNotificationWork(2u);
  if ( v23 && !a2 )
    PopResetCBTriggers();
  PopInitSIdle(3);
  if ( a1 )
  {
    v22 = PopOpenPowerKey((__int64)&KeyHandle);
    if ( v22 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
      v22 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, 0xE8u);
      ZwClose(KeyHandle);
    }
  }
  return (unsigned int)v22;
}
