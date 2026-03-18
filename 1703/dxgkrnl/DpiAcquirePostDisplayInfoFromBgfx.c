/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C0102F30 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01032E4 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDetectPostDevice @ 0x1C011BD40 (DpiFdoDetectPostDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C011C1F4 (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(_DWORD *a1, char a2, char a3)
{
  char v6; // r15
  unsigned int v7; // r12d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rsi
  char v16; // r14
  PVOID PoolWithTag; // rsi
  KSPIN_LOCK *v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // r12
  KSPIN_LOCK *v21; // rax
  char v22; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char v29[4]; // [rsp+20h] [rbp-88h] BYREF
  NTSTATUS v30; // [rsp+24h] [rbp-84h]
  _QWORD v31[6]; // [rsp+28h] [rbp-80h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-50h] BYREF
  int v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+64h] [rbp-44h]
  int v35; // [rsp+68h] [rbp-40h]
  int v36; // [rsp+70h] [rbp-38h]

  memset(v31, 0, sizeof(v31));
  v6 = 0;
  v30 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  v7 = v30;
  if ( v30 < 0 )
    goto LABEL_8;
  v8 = v34;
  v6 = 1;
  v9 = SystemInformation;
  v10 = v33;
  a1[6] = -1;
  a1[7] = 0;
  *((_QWORD *)a1 + 2) = v9;
  LODWORD(v9) = v36;
  a1[1] = v8;
  LODWORD(v31[3]) = v8;
  v11 = v35;
  *a1 = v10;
  HIDWORD(v31[3]) = v10;
  LODWORD(v31[4]) = v11;
  v12 = v9 - 3;
  if ( !v12 )
  {
    a1[3] = 20;
    v13 = 3 * v11;
    HIDWORD(v31[4]) = 4;
    goto LABEL_5;
  }
  if ( v12 == 1 )
  {
    a1[3] = 22;
    v13 = 4 * v11;
    HIDWORD(v31[4]) = 5;
LABEL_5:
    a1[2] = v13;
    goto LABEL_6;
  }
  v6 = 0;
LABEL_6:
  v14 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 8, 0x80u, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    memset(a1 + 8, 0, 0x80uLL);
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = v15;
    WdLogEvent5_WdWarning(v28);
  }
LABEL_8:
  if ( a2 )
  {
    v16 = 0;
    PoolWithTag = 0LL;
    v18 = 0LL;
    v29[0] = 0;
    if ( !v6 )
      goto LABEL_25;
    v19 = RtlCheckRegistryKey(0, (PWSTR)&DeviceObject.Dpc.SystemArgument1);
    v20 = (unsigned int)(a1[1] * a1[2]);
    if ( v19 >= 0 )
      goto LABEL_25;
    if ( !a3 )
      goto LABEL_25;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v20, 0x74727044u);
    v21 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x74727044u);
    v18 = v21;
    if ( !PoolWithTag || !v21 )
      goto LABEL_25;
    KeInitializeSpinLock(v21 + 3);
    v22 = 0;
    v31[2] = v18;
    v31[0] = PoolWithTag;
    v31[1] = v20;
    if ( qword_1C006FC00 )
      v22 = *(_BYTE *)(*(_QWORD *)(qword_1C006FC00 + 64) + 2605LL);
    if ( byte_1C006F9D7 || (LOBYTE(v31[5]) = 1, v22) )
      LOBYTE(v31[5]) = 0;
    if ( (int)InbvSetVirtualFrameBuffer(v31, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, v31, v29);
      v16 = v29[0];
    }
    else
    {
LABEL_25:
      DxgDetermineBootImageMode(a1, 0LL, 0LL);
    }
    if ( !v16 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x74727044u);
      if ( v18 )
        ExFreePoolWithTag(v18, 0x74727044u);
    }
    v7 = v30;
  }
  if ( !v6 )
  {
    memset(a1, 0, 0x20uLL);
    a1[6] = -1;
    memset(a1 + 8, 0, 0x80uLL);
  }
  return v7;
}
