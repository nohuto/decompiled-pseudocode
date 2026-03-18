/*
 * XREFs of ACPIPowerNodeDiscoverDependencies @ 0x1C001F6C0
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C001EF00 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0012FD8 (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

void __fastcall ACPIPowerNodeDiscoverDependencies(_QWORD **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  void **v7; // r14
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  PVOID v11; // rdi
  __int64 DeviceExtension; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // al
  int v18; // eax
  int v19; // edx
  _QWORD *v20; // rax
  int v21; // edx
  __int64 **v22; // r8
  __int64 *v23; // rdx
  _QWORD *v24; // rdx
  volatile signed __int32 *v25; // [rsp+40h] [rbp-48h]
  PVOID Object[8]; // [rsp+48h] [rbp-40h] BYREF
  int v27; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+18h]
  char v29; // [rsp+A8h] [rbp+20h] BYREF

  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
      if ( (v3[2] & 0x1000) != 0 )
      {
        v4 = v3[12];
        if ( v4 )
        {
          v5 = *(_DWORD **)(v4 + 32);
          v6 = 0;
          v28 = *v5;
          if ( v28 )
            break;
        }
      }
LABEL_26:
      if ( v2 == &AcpiPowerNodeList )
        goto LABEL_27;
    }
    v7 = (void **)(v5 + 10);
    while ( 1 )
    {
      v8 = AMLIGetNameSpaceObject(*v7);
      if ( v8 >= 0 )
        break;
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        21,
        40,
        (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
        (__int64)*v7,
        v8);
LABEL_25:
      ++v6;
      v7 += 5;
      if ( v6 >= v28 )
        goto LABEL_26;
    }
    ACPIInternalGetDeviceFromNSOBJ(v25, Object, v10);
    AMLIDereferenceHandleEx(v25);
    v11 = Object[0];
    if ( !Object[0] )
      goto LABEL_25;
    DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object[0]);
    ObfDereferenceObject(v11);
    Object[0] = 0LL;
    if ( !DeviceExtension )
      goto LABEL_25;
    v13 = *a1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v13 == a1 )
            goto LABEL_25;
          v14 = v13;
          v13 = (_QWORD *)*v13;
          v15 = v14[5];
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 736);
            if ( v16 )
              break;
          }
        }
        if ( v15 != DeviceExtension )
          break;
        v17 = 1;
        v27 = 1;
LABEL_19:
        if ( (v17 & 3) != 0 )
        {
          v20 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( v20 )
          {
            v22 = (__int64 **)v3[14];
            v23 = v20 + 2;
            if ( *v22 != v3 + 13 )
              __fastfail(3u);
            *v23 = (__int64)(v3 + 13);
            v20[3] = v22;
            *v22 = v23;
            v3[14] = (__int64)v23;
            v24 = (_QWORD *)v14[11];
            if ( (_QWORD *)*v24 != v14 + 10 )
              __fastfail(3u);
            *v20 = v14 + 10;
            v20[1] = v24;
            *v24 = v20;
            v14[11] = v20;
          }
          else
          {
            LOBYTE(v21) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              21,
              42,
              (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids);
          }
        }
      }
      v18 = IoTestDependency(*(_QWORD *)(DeviceExtension + 736), v16, &v29, &v27);
      if ( v18 >= 0 )
      {
        v17 = v27;
        goto LABEL_19;
      }
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        21,
        41,
        (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
        v18);
    }
  }
LABEL_27:
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
