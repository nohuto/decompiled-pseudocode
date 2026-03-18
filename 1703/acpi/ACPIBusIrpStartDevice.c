/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C008B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x1C00467C0 (ACPIModuleFilterStartResources.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C004FE58 (ACPIQueryGedDeviceInterface.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0093F98 (PcisuppAcquirePciInterfaces.c)
 *     AcpiArblibCommitResources @ 0x1C009C860 (AcpiArblibCommitResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A61F0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A63E0 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // rbp
  __int64 StartContext; // rbx
  int result; // eax
  int v7; // eax
  int v8; // edx
  __int64 v9; // r13
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  StartContext = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( (*(_DWORD *)(StartContext + 8) & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)(StartContext + 296) )
    {
      KeInitializeEvent((PRKEVENT)(StartContext + 248), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(StartContext + 272), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
                 (PVOID)StartContext);
      if ( result < 0 )
        return result;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(StartContext + 296) = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( (*(_QWORD *)(StartContext + 952) & 0x4000000000LL) != 0 )
  {
    v7 = ACPIQueryGedDeviceInterface((_QWORD *)StartContext);
    if ( v7 < 0 )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        8,
        59,
        (__int64)&WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
        v7);
    }
  }
  if ( (*(_QWORD *)(StartContext + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(StartContext + 184) )
  {
    ACPIModuleFilterStartResources(0x2000000000LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v9 = *(_QWORD *)(v2 + 8);
    v10 = (_QWORD *)(StartContext + 192);
    v11 = 0;
    while ( 1 )
    {
      v12 = *v10;
      result = AcpiArblibCommitResources(*v10, v9);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v12 + 168) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(v12 + 136, *(_QWORD *)(v12 + 176));
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(v12 + 136, *(_QWORD *)(v12 + 176));
        if ( result < 0 )
          break;
      }
      v13 = *v10;
      ++v11;
      ++v10;
      *(_BYTE *)(v13 + 130) = 1;
      if ( v11 >= 3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = ACPIInitStartDevice(
               (ULONG_PTR)DeviceObject,
               v2,
               (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
