/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C00222A4
 * Callers:
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012AD0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001DBA0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001EC80 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0021EE4 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0022198 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0043AB0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0054394 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0054760 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  PVOID v4; // r14
  char v5; // r13
  char *v6; // rdi
  int v10; // ebx
  int v12; // eax
  int v13; // edx
  char *PoolWithTag; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  char v17; // al
  int v18; // eax
  int v19; // edx
  int v20; // edx
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v21 = 0uLL;
  if ( qword_1C0078B48 && (*((unsigned __int8 (**)(void))&xmmword_1C0078B50 + 1))() )
  {
    v12 = ACPIAmliBuildObjectPathnameUnicode(a1, &v21, 1LL);
    v10 = v12;
    if ( v12 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_24:
        v3 = (void *)*((_QWORD *)&v21 + 1);
        goto LABEL_4;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v16 = v21;
      v17 = gdwfAMLI;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v16;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (v17 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      LOBYTE(v15) = 1;
      v18 = AcpiCreateDiscoveryDeleteParameters(v6, v15, &P);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v4 = P;
        v10 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0078B50)(P);
        if ( v10 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion(v4);
          v10 = 259;
        }
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          19,
          13,
          (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
          a1,
          v10);
      }
      else
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          19,
          12,
          (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
          a1,
          v18);
        v4 = P;
      }
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        19,
        11,
        (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
        a1,
        v12);
    }
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_24;
  }
  v10 = 0;
LABEL_4:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4E706341u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4E706341u);
  if ( v10 < 0 && v5 )
    AMLIDereferenceHandleEx(a1);
  return (unsigned int)v10;
}
