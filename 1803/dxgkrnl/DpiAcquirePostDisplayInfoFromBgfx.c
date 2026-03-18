/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0CCC (DpiFdoHandleSystemPower.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F2824 (DpiFdoDetectPostDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStartAdapterThread @ 0x1C01FA590 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C017033C (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(unsigned int *a1, char a2, char a3)
{
  char v5; // r15
  char v6; // di
  __int64 v7; // rcx
  char v8; // r13
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // r14
  PVOID PoolWithTag; // rsi
  KSPIN_LOCK *v24; // rdi
  NTSTATUS v25; // eax
  __int64 v26; // r12
  KSPIN_LOCK *v27; // rax
  _BYTE v28[4]; // [rsp+20h] [rbp-60h] BYREF
  NTSTATUS v29; // [rsp+24h] [rbp-5Ch]
  __int64 v30[6]; // [rsp+28h] [rbp-58h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-20h]
  unsigned int v33; // [rsp+64h] [rbp-1Ch]
  int v34; // [rsp+68h] [rbp-18h]
  int v35; // [rsp+70h] [rbp-10h]

  v28[0] = a2;
  memset(v30, 0, sizeof(v30));
  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    if ( qword_1C007A9D8 )
    {
      v7 = *(_QWORD *)(qword_1C007A9D8 + 64);
      v5 = *(_BYTE *)(v7 + 2605);
      if ( v5 )
        v6 = *(_BYTE *)(v7 + 2606);
    }
  }
  v8 = 0;
  v29 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v29 >= 0 )
  {
    v9 = v33;
    v8 = 1;
    v10 = SystemInformation;
    v11 = v32;
    a1[6] = -1;
    a1[7] = 0;
    *((_QWORD *)a1 + 2) = v10;
    LODWORD(v10) = v35;
    a1[1] = v9;
    LODWORD(v30[3]) = v9;
    v12 = v34;
    *a1 = v11;
    HIDWORD(v30[3]) = v11;
    LODWORD(v30[4]) = v12;
    v13 = v10 - 3;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v8 = 0;
        goto LABEL_12;
      }
      a1[3] = 22;
      v14 = 4 * v12;
      HIDWORD(v30[4]) = 5;
    }
    else
    {
      a1[3] = 20;
      v14 = 3 * v12;
      HIDWORD(v30[4]) = 4;
    }
    a1[2] = v14;
LABEL_12:
    v15 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 8, 0x80u, 0LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(a1 + 8, 0, 0x80uLL);
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v16;
      WdLogEvent5_WdWarning(v20);
    }
  }
  if ( !v28[0] )
    goto LABEL_19;
  v21 = 0;
  v28[0] = 0;
  if ( v6 )
  {
    DxgDetermineBootImageMode((__int64)a1, 0LL, v6, v28);
    if ( !v28[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a3 )
    {
LABEL_18:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      goto LABEL_19;
    }
    PoolWithTag = 0LL;
    v24 = 0LL;
    if ( !v8 )
      goto LABEL_33;
    v25 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v26 = a1[1] * a1[2];
    if ( v25 >= 0 )
      goto LABEL_33;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v26, 0x74727044u);
    v27 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x74727044u);
    v24 = v27;
    if ( !PoolWithTag || !v27 )
      goto LABEL_33;
    KeInitializeSpinLock(v27 + 3);
    v30[2] = (__int64)v24;
    v30[0] = (__int64)PoolWithTag;
    v30[1] = v26;
    if ( !v5 || v32 > 0xBB8 || (LOBYTE(v30[5]) = 0, v33 > 0x7D0) )
      LOBYTE(v30[5]) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(v30, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode((__int64)a1, v30, 0, v28);
      v21 = v28[0];
    }
    else
    {
LABEL_33:
      DxgDetermineBootImageMode((__int64)a1, 0LL, 0, 0LL);
    }
    if ( !v21 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x74727044u);
      if ( v24 )
        ExFreePoolWithTag(v24, 0x74727044u);
    }
  }
LABEL_19:
  if ( !v8 )
  {
    memset(a1, 0, 0x20uLL);
    a1[6] = -1;
    memset(a1 + 8, 0, 0x80uLL);
  }
  return (unsigned int)v29;
}
