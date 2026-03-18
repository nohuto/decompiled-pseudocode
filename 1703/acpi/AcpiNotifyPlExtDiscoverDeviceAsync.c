/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002686C
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000C600 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000E9F0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C00264AC (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0026760 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0027F70 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C00440F0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0053854 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0053C20 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  void *v4; // r14
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
  unsigned int v20; // eax
  int v21; // edx
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  void *v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v23 = 0LL;
  v6 = 0LL;
  v22 = 0uLL;
  if ( qword_1C0076A88 && (*((unsigned __int8 (**)(void))&xmmword_1C0076A90 + 1))() )
  {
    v12 = ACPIAmliBuildObjectPathnameUnicode((__int64)a1, (__int64)&v22, 1);
    v10 = v12;
    if ( v12 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_24:
        v3 = (void *)*((_QWORD *)&v22 + 1);
        goto LABEL_4;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v16 = v22;
      v17 = gdwfAMLI;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v16;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      dword_1C00776F8 = 0;
      pszDest = 0;
      if ( (v17 & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      LOBYTE(v15) = 1;
      v18 = AcpiCreateDiscoveryDeleteParameters(v6, v15, &v23);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v4 = v23;
        v20 = ((__int64 (__fastcall *)(void *))xmmword_1C0076A90)(v23);
        v10 = v20;
        if ( v20 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion(v4, v20);
          v10 = 259;
        }
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          19,
          13,
          (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
          (char)a1,
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
          (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
          (char)a1,
          v18);
        v4 = v23;
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
        (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
        (char)a1,
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
    AMLIDereferenceHandleEx(a1, 0LL);
  return (unsigned int)v10;
}
