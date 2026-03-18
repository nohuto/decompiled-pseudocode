/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C0018144
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00734C8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0075E84 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C002364C (ACPIExtListIsMemberOfRelation.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00791CC (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // r15
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  PVOID *v14; // r12
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v18; // r14
  unsigned int v20; // ebx
  __int64 j; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rbx
  PVOID *v30; // rsi
  NTSTATUS v31; // eax
  int v32; // edx
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v42; // [rsp+C8h] [rbp+48h]

  v42 = a2;
  v4 = 0LL;
  v5 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v36 = 0LL;
  v8 = a1 + 784;
  SpinLock = &AcpiDeviceTreeLock;
  v35 = a1 + 784;
  v39 = 800LL;
  v40 = 1;
  for ( i = ACPIExtListStartEnum(&v35); ; i = ACPIExtListEnumNext(&v35) )
  {
    LOBYTE(v10) = 1;
    v11 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v35, v10) )
      break;
    if ( (*(_QWORD *)(v11 + 8) & 0x2000000000002LL) == 0 )
    {
      if ( *(_QWORD *)(v11 + 736) )
      {
        v12 = ACPIDetectCouldExtensionBeInRelation(v11, (_DWORD)v4, 0, 0, (__int64)&v41);
        if ( !v41 && v12 >= 0 )
        {
          v13 = *(_QWORD *)(v11 + 736);
          if ( v13 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v4) )
              ++v5;
          }
        }
      }
    }
  }
  v14 = v42;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v15 = *(_QWORD *)(a3 + 736);
      if ( v15 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v15, v4) )
          ++v5;
      }
    }
  }
  if ( v4 )
    v16 = v5 == *v4;
  else
    v16 = v5 == 0;
  if ( !v16 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v5 + 8, 0x44706341u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 8 * v5 + 8);
    if ( v4 )
    {
      memmove(v18 + 2, v4 + 2, 8LL * *v4);
      v20 = *v4;
    }
    else
    {
      v20 = 0;
    }
    v36 = 0LL;
    SpinLock = &AcpiDeviceTreeLock;
    v35 = v8;
    v39 = 800LL;
    v40 = 1;
    for ( j = ACPIExtListStartEnum(&v35); ; j = ACPIExtListEnumNext(&v35) )
    {
      v23 = j;
      LOBYTE(v22) = v5 > v20;
      if ( !(unsigned __int8)ACPIExtListTestElement(&v35, v22) )
        break;
      if ( !v23 )
      {
        if ( v40 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql);
        break;
      }
      if ( (*(_QWORD *)(v23 + 8) & 0x202000000000002LL) == 0
        && *(_QWORD *)(v23 + 736)
        && !(unsigned __int8)ACPIExtListIsMemberOfRelation(*(_QWORD *)(v23 + 736), v4)
        && v20 < v5 )
      {
        v25 = v20++;
        *(_QWORD *)&v18[2 * v25 + 2] = v24;
      }
    }
    if ( a3
      && (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0
      && *(_QWORD *)(a3 + 736)
      && !(unsigned __int8)ACPIExtListIsMemberOfRelation(*(_QWORD *)(a3 + 736), v4)
      && v20 < v5 )
    {
      v27 = v20++;
      *(_QWORD *)&v18[2 * v27 + 2] = v26;
    }
    *v18 = v20;
    if ( v4 )
      v28 = *v4;
    else
      v28 = 0;
    if ( v28 < v20 )
    {
      v29 = v20 - v28;
      v30 = (PVOID *)&v18[2 * v28 + 2];
      do
      {
        v31 = ObReferenceObjectByPointer(*v30, 0, 0LL, 0);
        if ( v31 < 0 )
        {
          LOBYTE(v32) = 2;
          WPP_RECORDER_SF_qd(
            WPP_GLOBAL_Control->DeviceExtension,
            v32,
            22,
            15,
            (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
            (char)*v30,
            v31);
          v33 = --*v18;
          v34 = *(void **)&v18[2 * v33 + 2];
          *(_QWORD *)&v18[2 * v33 + 2] = *v30;
          *v30 = v34;
        }
        ++v30;
        --v29;
      }
      while ( v29 );
    }
    if ( v4 )
      ExFreePoolWithTag(*v14, 0);
    *v14 = v18;
  }
  return 0LL;
}
