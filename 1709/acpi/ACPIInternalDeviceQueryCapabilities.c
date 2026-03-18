/*
 * XREFs of ACPIInternalDeviceQueryCapabilities @ 0x1C0094C70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  __int64 SecurityContext; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // ecx
  int DeviceCapabilities; // edi
  __int64 v10; // rdx
  const char *v11; // rcx
  const char *v12; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (__int64)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v5 = *(_DWORD *)(SecurityContext + 4) & 0xFFFFFFBF | (*(_QWORD *)(DeviceExtension + 568) != 0LL ? 0x40 : 0);
  *(_DWORD *)(SecurityContext + 4) = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int64)*(unsigned int *)(DeviceExtension + 8) >> 9)) & 0x100 | 0x80;
  *(_DWORD *)(SecurityContext + 4) = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)~(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(DeviceExtension + 8)) >> 8)) & 0x4000;
  *(_DWORD *)(SecurityContext + 4) = v7;
  *(_DWORD *)(SecurityContext + 4) = v7 ^ (v7 ^ ((unsigned int)(*(_QWORD *)(DeviceExtension + 8) >> 29) << 17)) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)DeviceExtension, SecurityContext);
  if ( DeviceCapabilities < 0 )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = byte_1C0067B08;
    v12 = byte_1C0067B08;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(DeviceExtension + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(DeviceExtension + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xAu,
      (__int64)&WPP_44a8f655553a31979f24d1a9d0d6d7d4_Traceguids,
      DeviceCapabilities,
      DeviceExtension,
      v11,
      v12);
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceCapabilities;
}
