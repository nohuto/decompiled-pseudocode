/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C01011E8 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThread @ 0x1C011BC30 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDetectPostDevice @ 0x1C011C11C (DpiFdoDetectPostDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C011C5D4 (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(unsigned int *a1, char a2, char a3)
{
  char v5; // r14
  char v6; // di
  __int64 v7; // rcx
  char v8; // r13
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r12
  char v18; // r15
  PVOID PoolWithTag; // rsi
  KSPIN_LOCK *v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // r12
  KSPIN_LOCK *v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+20h] [rbp-88h] BYREF
  NTSTATUS v30; // [rsp+24h] [rbp-84h]
  _QWORD v31[6]; // [rsp+28h] [rbp-80h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-48h]
  unsigned int v34; // [rsp+64h] [rbp-44h]
  int v35; // [rsp+68h] [rbp-40h]
  int v36; // [rsp+70h] [rbp-38h]

  v29[0] = a2;
  memset(v31, 0, sizeof(v31));
  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    if ( qword_1C0060A80 )
    {
      v7 = *(_QWORD *)(qword_1C0060A80 + 64);
      v5 = *(_BYTE *)(v7 + 2605);
      if ( v5 )
        v6 = *(_BYTE *)(v7 + 2606);
    }
  }
  v8 = 0;
  v30 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v30 >= 0 )
  {
    v10 = v34;
    v8 = 1;
    v11 = SystemInformation;
    v12 = v33;
    a1[6] = -1;
    a1[7] = 0;
    *((_QWORD *)a1 + 2) = v11;
    LODWORD(v11) = v36;
    a1[1] = v10;
    LODWORD(v31[3]) = v10;
    v13 = v35;
    *a1 = v12;
    HIDWORD(v31[3]) = v12;
    LODWORD(v31[4]) = v13;
    v14 = v11 - 3;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v8 = 0;
LABEL_10:
        v16 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 8, 0x80u, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          memset(a1 + 8, 0, 0x80uLL);
          v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v28 + 24) = v17;
          WdLogEvent5_WdWarning(v28);
        }
        goto LABEL_12;
      }
      a1[3] = 22;
      v15 = 4 * v13;
      HIDWORD(v31[4]) = 5;
    }
    else
    {
      a1[3] = 20;
      v15 = 3 * v13;
      HIDWORD(v31[4]) = 4;
    }
    a1[2] = v15;
    goto LABEL_10;
  }
LABEL_12:
  if ( !v29[0] )
    goto LABEL_25;
  v18 = 0;
  v29[0] = 0;
  if ( v6 )
  {
    LOBYTE(v9) = v6;
    DxgDetermineBootImageMode(a1, 0LL, v9, v29);
    if ( v29[0] && (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) >= 0 )
      goto LABEL_25;
LABEL_28:
    InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
    goto LABEL_25;
  }
  if ( !a3 )
    goto LABEL_28;
  PoolWithTag = 0LL;
  v20 = 0LL;
  if ( !v8 )
    goto LABEL_38;
  v21 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
  v22 = a1[1] * a1[2];
  if ( v21 >= 0 )
    goto LABEL_38;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v22, 0x74727044u);
  v23 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x74727044u);
  v20 = v23;
  if ( !PoolWithTag || !v23 )
    goto LABEL_38;
  KeInitializeSpinLock(v23 + 3);
  v31[2] = v20;
  v31[0] = PoolWithTag;
  v31[1] = v22;
  if ( byte_1C0060857 )
  {
    LOBYTE(v31[5]) = 0;
  }
  else if ( !v5 || v33 > 0xBB8 || (LOBYTE(v31[5]) = 0, v34 > 0x7D0) )
  {
    LOBYTE(v31[5]) = 1;
  }
  if ( (int)InbvSetVirtualFrameBuffer(v31, DpiEnterSystemDisplay) >= 0 )
  {
    DxgDetermineBootImageMode(a1, v31, 0LL, v29);
    v18 = v29[0];
  }
  else
  {
LABEL_38:
    DxgDetermineBootImageMode(a1, 0LL, 0LL, 0LL);
  }
  if ( !v18 )
  {
    InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
    if ( v20 )
      ExFreePoolWithTag(v20, 0x74727044u);
  }
LABEL_25:
  if ( !v8 )
  {
    memset(a1, 0, 0x20uLL);
    a1[6] = -1;
    memset(a1 + 8, 0, 0x80uLL);
  }
  return (unsigned int)v30;
}
