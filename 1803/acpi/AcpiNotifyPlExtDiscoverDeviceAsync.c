/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984
 * Callers:
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000D6A0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C000EE40 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F4D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00109A0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0038C70 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0039174 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009528 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C00332D8 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C00336B0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  _BYTE *v4; // rbp
  char v5; // r13
  char *v6; // rdi
  int v10; // ebx
  char v11; // si
  void *DeviceExtension; // rcx
  unsigned __int16 v13; // ax
  char *PoolWithTag; // rax
  __int128 v15; // xmm0
  char v16; // al
  int v17; // eax
  char v18; // dl
  void *v19; // rdx
  char v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v22 = 0uLL;
  if ( qword_1C0066B88 && (*((unsigned __int8 (**)(void))&xmmword_1C0066B90 + 1))() )
  {
    v10 = ACPIAmliBuildObjectPathnameUnicode((__int64)a1, (__int64)&v22, 1);
    if ( v10 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
LABEL_17:
        v3 = (void *)*((_QWORD *)&v22 + 1);
        goto LABEL_18;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v15 = v22;
      v16 = gdwfAMLI;
      *((_QWORD *)v6 + 1) = v6;
      *(_QWORD *)v6 = v6;
      *(_OWORD *)(v6 + 56) = v15;
      *((_QWORD *)v6 + 5) = a2;
      *((_QWORD *)v6 + 6) = a3;
      dword_1C00677B8 = 0;
      pszDest = 0;
      v11 = 4;
      if ( (v16 & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      v5 = 1;
      *((_QWORD *)v6 + 2) = a1;
      v17 = AcpiCreateDiscoveryDeleteParameters(v6, 1, &P);
      v10 = v17;
      v18 = v17;
      if ( v17 < 0 )
      {
        v11 = 2;
        v4 = P;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v13 = 12;
        goto LABEL_16;
      }
      v4 = P;
      v10 = ((__int64 (__fastcall *)(PVOID, _QWORD))xmmword_1C0066B90)(P, (unsigned int)v17);
      if ( v10 != 259 )
      {
        AcpiNotifyDiscoverDeleteMainCompletion(v4);
        v10 = 259;
      }
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v13 = 13;
    }
    else
    {
      v11 = 2;
      DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
      v13 = 11;
    }
    v18 = v10;
LABEL_16:
    v21 = v18;
    v19 = &WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids;
    LOBYTE(v19) = v11;
    WPP_RECORDER_SF_qd(
      (_DWORD)DeviceExtension,
      (_DWORD)v19,
      19,
      v13,
      (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
      (char)a1,
      v21);
    if ( v10 == 259 )
      return (unsigned int)v10;
    goto LABEL_17;
  }
  v10 = 0;
LABEL_18:
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
