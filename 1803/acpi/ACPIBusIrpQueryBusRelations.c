/*
 * XREFs of ACPIBusIrpQueryBusRelations @ 0x1C0076C58
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00713C0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C0008A64 (WPP_RECORDER_SF_qqqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018844 (ACPIDetectPdoDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r8
  const char *v9; // rax
  const char *v10; // r10
  int v12; // edi
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8
  int v16; // r10d
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 712) )
  {
    v12 = ACPIDetectPdoDevices(a1, a3);
    if ( v12 >= 0 )
    {
      ACPIFilterRemoveNonPresentDevices((__int64)v7, *a3);
      v16 = ACPIDetectFilterDevices(a1, (__int64)*a3);
      if ( v16 < 0 )
      {
        v17 = v7[1];
        v18 = byte_1C005B1F0;
        v19 = byte_1C005B1F0;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v18 = (const char *)v7[70];
          if ( (v17 & 0x400000000000LL) != 0 )
            v19 = (const char *)v7[71];
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x22u,
          (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
          a2,
          v16,
          (char)v7,
          v18,
          v19);
      }
    }
    else
    {
      v13 = v7[1];
      v14 = byte_1C005B1F0;
      v15 = byte_1C005B1F0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)v7[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)v7[71];
      }
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x21u,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        a2,
        v12,
        (char)v7,
        v14,
        v15);
    }
    return (unsigned int)v12;
  }
  else
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = byte_1C005B1F0;
    v10 = byte_1C005B1F0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)v7[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v10 = (const char *)v7[71];
    }
    WPP_RECORDER_SF_qqqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x20u,
      (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      a2,
      0,
      (char)v7,
      v9,
      v10);
    return 3221225485LL;
  }
}
