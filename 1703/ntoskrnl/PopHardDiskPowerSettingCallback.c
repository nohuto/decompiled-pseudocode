/*
 * XREFs of PopHardDiskPowerSettingCallback @ 0x1405C2F30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A880C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 */

__int64 __fastcall PopHardDiskPowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // ebx
  int v21; // eax
  __int64 v23; // rcx
  _OWORD v24[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v25[5]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-28h]
  __int64 v27; // [rsp+100h] [rbp-18h]

  v4 = *a1;
  v6 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( v6 )
  {
    v23 = *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 - v4;
    if ( *(_QWORD *)&GUID_DISK_BURST_IGNORE_THRESHOLD.Data1 == v4 )
      v23 = *(_QWORD *)GUID_DISK_BURST_IGNORE_THRESHOLD.Data4 - a1[1];
    if ( !v23 && a3 == 4 && a2 )
    {
      dword_14034BB44 = *a2;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock();
  v7 = *((_OWORD *)PopPolicy + 1);
  v24[0] = *(_OWORD *)PopPolicy;
  v8 = *((_OWORD *)PopPolicy + 2);
  v24[1] = v7;
  v9 = *((_OWORD *)PopPolicy + 3);
  v24[2] = v8;
  v10 = *((_OWORD *)PopPolicy + 4);
  v24[3] = v9;
  v11 = *((_OWORD *)PopPolicy + 5);
  v24[4] = v10;
  v12 = *((_OWORD *)PopPolicy + 6);
  v24[5] = v11;
  v24[6] = v12;
  v13 = v25;
  v24[7] = *((_OWORD *)PopPolicy + 7);
  v14 = *((_OWORD *)PopPolicy + 9);
  v25[0] = *((_OWORD *)PopPolicy + 8);
  v15 = *((_OWORD *)PopPolicy + 10);
  v25[1] = v14;
  v16 = *((_OWORD *)PopPolicy + 11);
  v25[2] = v15;
  v17 = *((_OWORD *)PopPolicy + 12);
  v25[3] = v16;
  v18 = *((_OWORD *)PopPolicy + 13);
  v19 = *((_QWORD *)PopPolicy + 28);
  v25[4] = v17;
  v26 = v18;
  v27 = v19;
  LOBYTE(v13) = 1;
  DWORD1(v26) = *a2;
  v20 = PopApplyPolicy(v13, 0LL, v24, 232LL);
  v21 = 1000 * *a2;
  if ( !v21 )
    v21 = -1;
  if ( v21 != PopDiskIdleTimeout )
  {
    PopDiskIdleTimeout = v21;
    PopUpdateDiskIdleTimeoutSetting();
  }
  PopReleasePolicyLock();
  if ( v20 >= 0 )
    return 0;
  return (unsigned int)v20;
}
