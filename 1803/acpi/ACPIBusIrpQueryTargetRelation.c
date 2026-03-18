/*
 * XREFs of ACPIBusIrpQueryTargetRelation @ 0x1C0071324
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00713C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00732C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C007CAB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryTargetRelation(PVOID Object, char a2, PVOID *a3)
{
  _QWORD *DeviceExtension; // rbx
  PVOID PoolWithTag; // rax
  char v8; // di
  NTSTATUS v9; // esi
  _QWORD *v10; // rax
  const char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rdx
  const char *v15; // rax
  char v16; // r10
  const char *v17; // r8
  __int64 v18; // rdx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x49706341u);
  v8 = 0;
  *a3 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
    if ( v9 < 0 )
    {
      v15 = byte_1C005B1F0;
      v16 = 0;
      v17 = byte_1C005B1F0;
      if ( DeviceExtension )
      {
        v18 = DeviceExtension[1];
        v16 = (char)DeviceExtension;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v15 = (const char *)DeviceExtension[70];
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = (const char *)DeviceExtension[71];
        }
      }
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x37u,
        (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
        a2,
        v9,
        v16,
        v15,
        v17);
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    else
    {
      v10 = *a3;
      *(_DWORD *)v10 = 1;
      v10[1] = Object;
    }
    return (unsigned int)v9;
  }
  else
  {
    v12 = byte_1C005B1F0;
    v13 = byte_1C005B1F0;
    if ( DeviceExtension )
    {
      v14 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)DeviceExtension[70];
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x36u,
      (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      a2,
      16,
      v8,
      v12,
      v13);
    return 3221225626LL;
  }
}
