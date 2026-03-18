/*
 * XREFs of ACPIDeviceRecordDependencies @ 0x1C000EC5C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C000EE50 (ACPIDeviceDiscoverDependencies.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0044F3C (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C004FBAC (ACPIInternalGetDeviceFromNSOBJ.c)
 */

void __fastcall ACPIDeviceRecordDependencies(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 **v6; // r13
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  int v15; // edx
  __int64 *v16; // rax
  int v17; // edx
  __int64 **v18; // r8
  __int64 *v19; // rdx
  _QWORD *v20; // rcx
  __int64 **v21; // rdx
  int v22; // r9d
  int v23; // eax
  int v24; // edx
  __int64 **v25; // r8
  __int64 *v26; // rdx
  __int64 *v27; // rsi
  __int64 v28; // rax
  _DWORD *v29; // rcx
  unsigned int v30; // r12d
  void **v31; // r15
  int v32; // eax
  int v33; // edx
  __int64 v34; // r8
  PVOID v35; // rdi
  __int64 v36; // rcx
  __int64 *v37; // rdi
  __int64 *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  char v41; // al
  int v42; // eax
  int v43; // edx
  __int64 *v44; // rax
  int v45; // edx
  __int64 **v46; // r8
  __int64 *v47; // rdx
  __int64 **v48; // rdx
  int v49; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v50; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-29h] BYREF
  __int64 v52; // [rsp+60h] [rbp-21h]
  __int64 DeviceExtension; // [rsp+68h] [rbp-19h]
  PVOID Object; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v55[7]; // [rsp+78h] [rbp-9h] BYREF

  v1 = (__int64 *)*a1;
  v55[0] = &AcpiPowerPhase0List;
  v3 = v1;
  v55[1] = &AcpiPowerBlockedOnDependencyList;
  v55[2] = &AcpiPowerPhase1List;
  v55[3] = &AcpiPowerPhase2List;
  v55[4] = &AcpiPowerPhase3List;
  v55[5] = &AcpiPowerPhase4List;
  for ( v55[6] = &AcpiPowerPhase5List; v3 != a1; v3 = (__int64 *)*v3 )
  {
    v4 = v3[5];
    if ( !*(_QWORD *)(v4 + 736)
      && (*(_QWORD *)(v4 + 600) || (*(_DWORD *)(v4 + 952) & 0x400000) != 0)
      && (*(_QWORD *)(v4 + 8) & 0xA00000000000LL) == 0 )
    {
      *((_DWORD *)v3 + 14) |= 0x4000000u;
    }
  }
  if ( v1 != a1 )
  {
    do
    {
      DeviceExtension = *v1;
      ACPIDeviceDiscoverDependencies(v1, a1);
      v5 = 0;
      v6 = (__int64 **)v55;
      do
      {
        v7 = v1[5];
        v52 = v7;
        if ( *(_QWORD *)(v7 + 736) )
        {
          v9 = *v6;
          v50 = v9;
          v10 = (__int64 *)*v9;
          while ( 1 )
          {
            if ( v10 == v9 )
              goto LABEL_9;
            v11 = v10[5];
            v12 = v10;
            v10 = (__int64 *)*v10;
            if ( v1 != v12 && (v12[7] & 0x4000000) == 0 )
            {
              v13 = *(_QWORD *)(v11 + 736);
              if ( v13 )
                break;
            }
LABEL_21:
            v7 = v52;
          }
          if ( (*(_BYTE *)(v7 + 952) & 0x40) == 0 )
          {
LABEL_20:
            if ( (*(_BYTE *)(v11 + 952) & 0x40) == 0 )
              goto LABEL_21;
            v23 = IoTestDependency(*(_QWORD *)(v11 + 736), *(_QWORD *)(v7 + 736), &v51, &v49);
            if ( v23 < 0 )
            {
              LOBYTE(v24) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v24,
                21,
                22,
                (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
                v23);
            }
            else if ( (v49 & 1) != 0 )
            {
              v16 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
              if ( v16 )
              {
                v25 = (__int64 **)v12[9];
                v26 = v16 + 2;
                if ( *v25 != v12 + 8 )
                  __fastfail(3u);
                *v26 = (__int64)(v12 + 8);
                v16[3] = (__int64)v25;
                *v25 = v26;
                v12[9] = (__int64)v26;
                v20 = v1 + 10;
                v21 = (__int64 **)v1[11];
                if ( *v21 != v1 + 10 )
                  __fastfail(3u);
                goto LABEL_30;
              }
              v22 = 21;
LABEL_33:
              LOBYTE(v17) = 2;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                21,
                v22,
                (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids);
            }
            goto LABEL_43;
          }
          v14 = IoTestDependency(*(_QWORD *)(v7 + 736), v13, &v51, &v49);
          if ( v14 < 0 )
          {
            LOBYTE(v15) = 2;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              21,
              20,
              (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
              v14);
          }
          else if ( (v49 & 1) != 0 )
          {
            v16 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
            if ( !v16 )
            {
              v22 = 19;
              goto LABEL_33;
            }
            v18 = (__int64 **)v1[9];
            v19 = v16 + 2;
            if ( *v18 != v1 + 8 )
              __fastfail(3u);
            *v19 = (__int64)(v1 + 8);
            v16[3] = (__int64)v18;
            *v18 = v19;
            v1[9] = (__int64)v19;
            v20 = v12 + 10;
            v21 = (__int64 **)v12[11];
            if ( *v21 != v12 + 10 )
              __fastfail(3u);
LABEL_30:
            *v16 = (__int64)v20;
            v16[1] = (__int64)v21;
            *v21 = v16;
            v20[1] = v16;
LABEL_43:
            v9 = v50;
            goto LABEL_21;
          }
          v9 = v50;
          v7 = v52;
          goto LABEL_20;
        }
LABEL_9:
        ++v5;
        ++v6;
      }
      while ( v5 < 7 );
      v1 = (__int64 *)DeviceExtension;
    }
    while ( (__int64 *)DeviceExtension != a1 );
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v8 = (__int64 *)AcpiPowerNodeList;
LABEL_12:
  while ( v8 != &AcpiPowerNodeList )
  {
    v27 = v8;
    v8 = (__int64 *)*v8;
    if ( (v27[2] & 0x1000) != 0 )
    {
      v28 = v27[12];
      if ( v28 )
      {
        v29 = *(_DWORD **)(v28 + 32);
        v30 = 0;
        v51 = *v29;
        if ( v51 )
        {
          v31 = (void **)(v29 + 10);
          while ( 1 )
          {
            v32 = AMLIGetNameSpaceObject(*v31);
            if ( v32 >= 0 )
              break;
            WPP_RECORDER_SF_sL(
              WPP_GLOBAL_Control->DeviceExtension,
              v33,
              21,
              40,
              (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
              (__int64)*v31,
              v32);
LABEL_70:
            ++v30;
            v31 += 5;
            if ( v30 >= v51 )
              goto LABEL_12;
          }
          ACPIInternalGetDeviceFromNSOBJ(v52, &Object, v34, 0LL);
          AMLIDereferenceHandleEx(v52);
          v35 = Object;
          if ( !Object )
            goto LABEL_70;
          DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
          ObfDereferenceObject(v35);
          v36 = DeviceExtension;
          Object = 0LL;
          if ( !DeviceExtension )
            goto LABEL_70;
          v37 = (__int64 *)*a1;
          while ( 2 )
          {
            if ( v37 == a1 )
              goto LABEL_70;
            v38 = v37;
            v37 = (__int64 *)*v37;
            v39 = v38[5];
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 736);
              if ( v40 )
              {
                if ( v39 == v36 )
                {
                  v41 = 1;
                  v49 = 1;
LABEL_63:
                  if ( (v41 & 3) != 0 )
                  {
                    v44 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
                    if ( v44 )
                    {
                      v46 = (__int64 **)v27[14];
                      v47 = v44 + 2;
                      if ( *v46 != v27 + 13 )
                        __fastfail(3u);
                      *v47 = (__int64)(v27 + 13);
                      v44[3] = (__int64)v46;
                      *v46 = v47;
                      v27[14] = (__int64)v47;
                      v48 = (__int64 **)v38[11];
                      if ( *v48 != v38 + 10 )
                        __fastfail(3u);
                      *v44 = (__int64)(v38 + 10);
                      v44[1] = (__int64)v48;
                      *v48 = v44;
                      v38[11] = (__int64)v44;
                    }
                    else
                    {
                      LOBYTE(v45) = 2;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v45,
                        21,
                        42,
                        (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids);
                    }
                  }
                }
                else
                {
                  v42 = IoTestDependency(*(_QWORD *)(v36 + 736), v40, &v50, &v49);
                  if ( v42 >= 0 )
                  {
                    v41 = v49;
                    goto LABEL_63;
                  }
                  LOBYTE(v43) = 2;
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v43,
                    21,
                    41,
                    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
                    v42);
                }
              }
            }
            v36 = DeviceExtension;
            continue;
          }
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
