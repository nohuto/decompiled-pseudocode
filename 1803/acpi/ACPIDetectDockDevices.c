/*
 * XREFs of ACPIDetectDockDevices @ 0x1C0017A8C
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildPdo @ 0x1C000BBF0 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C002364C (ACPIExtListIsMemberOfRelation.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // r14d
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  const char *v11; // rax
  const char *v12; // r8
  __int64 v13; // rcx
  bool v15; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // r14
  unsigned int v18; // edi
  __int64 j; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // ecx
  PVOID *v25; // r12
  __int64 v26; // r12
  PVOID *v27; // r15
  NTSTATUS v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-29h] BYREF
  __int64 v33; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql; // [rsp+68h] [rbp-11h]
  __int64 v36; // [rsp+78h] [rbp-1h]
  int v37; // [rsp+80h] [rbp+7h]
  unsigned int *v38; // [rsp+E0h] [rbp+67h]
  __int64 v40; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v41; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  v38 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v38 = (unsigned int *)*a2;
  }
  v33 = 0LL;
  v41 = a1 + 752;
  v32 = a1 + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v36 = 768LL;
  v37 = 1;
  for ( i = ACPIExtListStartEnum(&v32); ; i = ACPIExtListEnumNext(&v32) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v32, v4 >= 0) )
      break;
    if ( !v8 )
    {
      if ( v37 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql);
      break;
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000000LL) != 0 )
    {
      v40 = 0LL;
      v4 = ACPIGet(v8, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v40, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 952) & 0x200000) != 0 )
      {
        v9 = *(_QWORD *)(v8 + 720);
        if ( v9
          || (v10 = ACPIBuildPdo(
                      *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 720) + 8LL),
                      v8,
                      *(struct _DEVICE_OBJECT **)(a1 + 720),
                      0),
              v9 = *(_QWORD *)(v8 + 720),
              v4 = v10,
              v9) )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v9, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 >= 0 )
  {
    if ( v5 )
      v15 = v6 == *v5;
    else
      v15 = v6 == 0;
    if ( !v15 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x44706341u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( v5 )
      {
        memmove(v17 + 2, v5 + 2, 8LL * *v5);
        v18 = *v5;
      }
      else
      {
        v18 = 0;
      }
      v32 = v41;
      SpinLock = &AcpiDeviceTreeLock;
      v33 = 0LL;
      v36 = 768LL;
      v37 = 2;
      for ( j = ACPIExtListStartEnum(&v32); ; j = ACPIExtListEnumNext(&v32) )
      {
        v21 = j;
        LOBYTE(v20) = v6 > v18;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v32, v20) )
          break;
        if ( v18 < v6 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( ((v22 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v21 + 952) & 0x200000) != 0)
            && (v22 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v21 + 720) )
          {
            v23 = v18++;
            *(_QWORD *)&v17[2 * v23 + 2] = *(_QWORD *)(v21 + 736);
          }
        }
      }
      *v17 = v18;
      if ( v38 )
        v24 = *v38;
      else
        v24 = 0;
      v25 = a2;
      if ( v24 < v18 )
      {
        v26 = v18 - v24;
        v27 = (PVOID *)&v17[2 * v24 + 2];
        do
        {
          v28 = ObReferenceObjectByPointer(*v27, 0, 0LL, 0);
          if ( v28 < 0 )
          {
            LOBYTE(v29) = 2;
            WPP_RECORDER_SF_qd(
              WPP_GLOBAL_Control->DeviceExtension,
              v29,
              21,
              11,
              (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
              (char)*v27,
              v28);
            v30 = --*v17;
            v31 = *(void **)&v17[2 * v30 + 2];
            *(_QWORD *)&v17[2 * v30 + 2] = *v27;
            *v27 = v31;
          }
          ++v27;
          --v26;
        }
        while ( v26 );
        v25 = a2;
      }
      if ( v38 )
        ExFreePoolWithTag(*v25, 0);
      *v25 = v17;
    }
    return 0LL;
  }
  else
  {
    v11 = (const char *)&unk_1C005B1F0;
    v12 = (const char *)&unk_1C005B1F0;
    if ( v8 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(v8 + 560);
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(v8 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v4,
      v2,
      v11,
      v12);
    return (unsigned int)v4;
  }
}
