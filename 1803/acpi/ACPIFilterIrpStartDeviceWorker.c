/*
 * XREFs of ACPIFilterIrpStartDeviceWorker @ 0x1C007C270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C000167C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeInitializePciDevice @ 0x1C0041548 (ACPIWakeInitializePciDevice.c)
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C00861A8 (PnpCmResourcesExcludeSidebandResources.c)
 */

void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  PVOID v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // eax
  int v12; // r14d
  const char *v13; // r12
  char *IrpText; // rax
  int v15; // edx
  const char *v16; // r8
  const char *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // rax
  int v23; // edx
  unsigned int v24; // r14d
  const char *v25; // r8
  const char *v26; // r10
  NTSTATUS v27; // r8d
  __int64 v28; // rcx
  char *v29; // rax
  __int16 v30; // dx
  char v31; // r8
  const char *v32; // r10
  char v33; // [rsp+38h] [rbp-80h]
  struct _KEVENT Event; // [rsp+60h] [rbp-58h] BYREF
  PVOID P; // [rsp+C0h] [rbp+8h] BYREF
  PVOID v36; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+18h]

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 40);
  v4 = DeviceExtension;
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v36 = 0LL;
  v7 = *(_QWORD *)(v3 + 184);
  v8 = *(_QWORD *)(DeviceExtension + 112);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(v7 + 8);
  v37 = v9;
  if ( v8 )
  {
    v11 = PnpCmResourcesExcludeSidebandResources(v8, v10, v9, (unsigned int)&P, (__int64)&v36);
    v5 = P;
    v12 = v11;
    v6 = v36;
  }
  else
  {
    v12 = -1073741772;
  }
  v13 = byte_1C005B1F0;
  if ( v12 == -1073741772 )
  {
    LOBYTE(v12) = 0;
  }
  else if ( v12 >= 0 )
  {
    if ( *v5 != 1 || v5[4] )
    {
      *(_QWORD *)(v7 + 8) = v5;
      *(_QWORD *)(v7 + 16) = v6;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
  }
  else
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v15 + 5,
      v15 + 25,
      v18,
      *(_QWORD *)(a1 + 40),
      IrpText,
      v12,
      v4,
      v17,
      v16);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v19 - 72) = *(_OWORD *)v19;
  *(_OWORD *)(v19 - 56) = *(_OWORD *)(v19 + 16);
  *(_OWORD *)(v19 - 40) = *(_OWORD *)(v19 + 32);
  *(_QWORD *)(v19 - 24) = *(_QWORD *)(v19 + 48);
  *(_BYTE *)(v19 - 69) = 0;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v20 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v20 - 8) = &Event;
  *(_BYTE *)(v20 - 69) = -32;
  v21 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v21 = 0x400000000000LL;
  v22 = ACPIDebugGetIrpText(v21, 0);
  v33 = v12;
  v24 = v23 + 5;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    v23 + 5,
    v23 + 26,
    (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
    *(_QWORD *)(a1 + 40),
    v22,
    v33,
    v4,
    v26,
    v25);
  v27 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), *(PIRP *)(a1 + 40));
  if ( v27 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v27 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v27 >= 0 )
  {
    *(_QWORD *)(v7 + 16) = v37;
    *(_QWORD *)(v7 + 8) = v10;
    if ( (*(_QWORD *)(v4 + 8) & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v4 + 720));
  }
  else
  {
    v28 = 0x200000000000LL;
    if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v4 + 560);
      v28 = 0x400000000000LL;
    }
    v29 = ACPIDebugGetIrpText(v28, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v24,
      v30 + 27,
      (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
      *(_QWORD *)(a1 + 40),
      v29,
      v31,
      v4,
      v13,
      v32);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
