/*
 * XREFs of ACPIDockIrpStartDevice @ 0x1C009EE60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C000EF34 (ACPIInternalClearFlags.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C00446E0 (ACPIBuildSynchronizationRequest.c)
 */

__int64 __fastcall ACPIDockIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  int v3; // edi
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  const char *v8; // rax
  const char *v9; // r8
  __int64 v10; // r9
  const char *v11; // rax
  __int64 v12; // r8
  const char *v13; // r10
  __int64 v14; // rdx
  const char *v15; // r8
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // r8
  const char *v19; // rdx
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  v6 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v6 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_1C0067B08;
    v9 = byte_1C0067B08;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v5 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v5 + 568);
    }
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x1Bu,
      (__int64)&WPP_84bf64a8fce331eef589e5074f165c26_Traceguids,
      (char)a2,
      v5,
      v8,
      v9);
    v3 = -1073741823;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
  {
LABEL_32:
    *(_DWORD *)(v5 + 200) = 2;
    *(_DWORD *)(v5 + 320) = 2;
    goto LABEL_33;
  }
  KdDisableDebugger();
  v21 = 0LL;
  v3 = ACPIGet((__int64 *)v6, 1262699615, 277086210, 1LL, 4, 0LL, 0LL, (__int64)&v21, 0LL);
  if ( v3 >= 0 )
  {
    v22 = 0LL;
    v3 = ACPIGet((__int64 *)v6, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v22, 0LL);
  }
  KdEnableDebugger();
  if ( v3 >= 0 )
  {
    v11 = byte_1C0067B08;
    if ( (*(_BYTE *)(v6 + 8) & 2) != 0 )
    {
      if ( v21 )
      {
        v12 = *(_QWORD *)(v5 + 8);
        v13 = byte_1C0067B08;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v13 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x1Cu,
          (__int64)&WPP_84bf64a8fce331eef589e5074f165c26_Traceguids,
          (char)a2,
          v21,
          v5,
          v11,
          v13);
      }
      else
      {
        v14 = *(_QWORD *)(v5 + 8);
        v15 = byte_1C0067B08;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v11 = *(const char **)(v5 + 560);
          if ( (v14 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v5 + 568);
        }
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x12u,
          0x1Du,
          (__int64)&WPP_84bf64a8fce331eef589e5074f165c26_Traceguids,
          (char)a2,
          v5,
          v11,
          v15);
      }
      v3 = -1073741823;
    }
    else if ( v21 == 1 )
    {
      v18 = *(_QWORD *)(v5 + 8);
      v19 = byte_1C0067B08;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(v5 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(v5 + 568);
      }
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_84bf64a8fce331eef589e5074f165c26_Traceguids,
        (char)a2,
        v3,
        v5,
        v11,
        v19);
    }
    else
    {
      v16 = *(_QWORD *)(v5 + 8);
      v17 = byte_1C0067B08;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(v5 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(v5 + 568);
      }
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x12u,
        0x1Eu,
        (__int64)&WPP_84bf64a8fce331eef589e5074f165c26_Traceguids,
        (char)a2,
        v5,
        v11,
        v17);
    }
  }
  ACPIBuildSynchronizationRequest(
    RootDeviceExtension,
    (__int64)ACPIBuildIssueNotifyInvalidateRelations,
    RootDeviceExtension,
    v10,
    1);
  if ( v3 >= 0 )
  {
    ACPIInternalClearFlags((void *)(v5 + 8), 0x400000000LL);
    goto LABEL_32;
  }
LABEL_33:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
