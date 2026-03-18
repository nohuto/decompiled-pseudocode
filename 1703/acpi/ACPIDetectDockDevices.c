/*
 * XREFs of ACPIDetectDockDevices @ 0x1C00132C4
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C008C928 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildPdo @ 0x1C00089D4 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIExtListTestElement @ 0x1C00133B8 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C004D648 (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // r14d
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v11; // rcx
  const char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v16; // r14
  unsigned int v17; // edi
  __int64 j; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  PVOID *v24; // r12
  __int64 v25; // r15
  __int64 v26; // r12
  NTSTATUS v27; // eax
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+50h] [rbp-29h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql; // [rsp+68h] [rbp-11h]
  __int64 v35; // [rsp+78h] [rbp-1h]
  int v36; // [rsp+80h] [rbp+7h]
  unsigned int *v37; // [rsp+E0h] [rbp+67h]
  __int64 v39; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  v37 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v37 = (unsigned int *)*a2;
  }
  v32 = 0LL;
  v40 = a1 + 752;
  v31 = a1 + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v35 = 768LL;
  v36 = 1;
  for ( i = ACPIExtListStartEnum(&v31); ; i = ACPIExtListEnumNext(&v31) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v31, v4 >= 0) )
      break;
    if ( !v8 )
    {
      if ( v36 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql);
      break;
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000000LL) != 0 )
    {
      v39 = 0LL;
      v4 = ACPIGet((__int64 *)v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 952) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 720) )
          v4 = ACPIBuildPdo(
                 *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 720) + 8LL),
                 v8,
                 *(struct _DEVICE_OBJECT **)(a1 + 720),
                 0);
        v11 = *(_QWORD *)(v8 + 720);
        if ( v11 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v12 = (const char *)&unk_1C0066CD0;
    v13 = (const char *)&unk_1C0066CD0;
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(v8 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(v8 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
      v4,
      v2,
      v12,
      v13);
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x44706341u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( v5 )
      {
        memmove(v16 + 2, v5 + 2, 8LL * *v5);
        v17 = *v5;
      }
      else
      {
        v17 = 0;
      }
      v31 = v40;
      SpinLock = &AcpiDeviceTreeLock;
      v32 = 0LL;
      v35 = 768LL;
      v36 = 2;
      for ( j = ACPIExtListStartEnum(&v31); ; j = ACPIExtListEnumNext(&v31) )
      {
        v20 = j;
        LOBYTE(v19) = v6 > v17;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v31, v19) )
          break;
        if ( v17 < v6 )
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( ((v21 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v20 + 952) & 0x200000) != 0)
            && (v21 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v20 + 720) )
          {
            v22 = v17++;
            *(_QWORD *)&v16[2 * v22 + 2] = *(_QWORD *)(v20 + 736);
          }
        }
      }
      *v16 = v17;
      if ( v37 )
        v23 = *v37;
      else
        v23 = 0;
      v24 = a2;
      if ( v23 < v17 )
      {
        v25 = 2LL * v23;
        v26 = v17 - v23;
        do
        {
          v27 = ObReferenceObjectByPointer(*(PVOID *)&v16[v25 + 2], 0, 0LL, 0);
          if ( v27 < 0 )
          {
            LOBYTE(v28) = 2;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              21,
              11,
              (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
              *(_QWORD *)&v16[v25 + 2],
              v27);
            v29 = --*v16;
            v30 = *(_QWORD *)&v16[2 * v29 + 2];
            *(_QWORD *)&v16[2 * v29 + 2] = *(_QWORD *)&v16[v25 + 2];
            *(_QWORD *)&v16[v25 + 2] = v30;
          }
          v25 += 2LL;
          --v26;
        }
        while ( v26 );
        v24 = a2;
      }
      if ( v37 )
        ExFreePoolWithTag(*v24, 0);
      *v24 = v16;
      return 0LL;
    }
    return 3221225626LL;
  }
}
