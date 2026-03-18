/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0039174
 * Callers:
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0013598 (WPP_RECORDER_SF_sqqDqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rbx
  int v1; // edi
  __int64 v2; // rdx
  const char *v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  _QWORD v7[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v8; // [rsp+70h] [rbp-28h]
  struct _KEVENT Event; // [rsp+78h] [rbp-20h] BYREF

  v0 = RootDeviceExtension;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7[0] = 0LL;
  v7[1] = &Event;
  v8 = 3221225473LL;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(
         *(volatile signed __int32 **)(v0 + 712),
         (__int64)ACPIRootDeviceDiscoverDeviceCompletion,
         (__int64)v7);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v8;
  }
  if ( v1 >= 0 )
  {
    if ( v7[0] )
    {
      *(_QWORD *)(v0 + 896) = v7[0];
      _InterlockedOr64((volatile signed __int64 *)(v0 + 952), 0x4000000uLL);
    }
    v2 = *(_QWORD *)(v0 + 8);
    v3 = (const char *)&unk_1C005B1F0;
    v4 = 0x200000000000LL;
    v5 = (const char *)&unk_1C005B1F0;
    if ( (v2 & 0x200000000000LL) != 0 )
    {
      v3 = *(const char **)(v0 + 560);
      v4 = 0x400000000000LL;
      if ( (v2 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v0 + 568);
    }
    WPP_RECORDER_SF_sqqDqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v2,
      v4,
      0x1Eu,
      (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
      "ACPIRootDeviceNotifyPepDiscoverDevice",
      v0,
      *(_QWORD *)(v0 + 896),
      v1,
      v0,
      v3,
      v5);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 952), 0x2000000uLL);
  return (unsigned int)v1;
}
