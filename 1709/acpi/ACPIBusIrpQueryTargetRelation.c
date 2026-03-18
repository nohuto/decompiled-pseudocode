/*
 * XREFs of ACPIBusIrpQueryTargetRelation @ 0x1C008C92C
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0094AB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C009E4A0 (ACPIDockIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qDqss @ 0x1C00462AC (WPP_RECORDER_SF_qDqss.c)
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
      v15 = byte_1C0067B08;
      v16 = 0;
      v17 = byte_1C0067B08;
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
        (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
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
    v12 = byte_1C0067B08;
    v13 = byte_1C0067B08;
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
    WPP_RECORDER_SF_qDqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x36u,
      (__int64)&WPP_843bede4f2e6353a81a7e5fb8ad73c2f_Traceguids,
      a2,
      16,
      v8,
      v12,
      v13);
    return 3221225626LL;
  }
}
