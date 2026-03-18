/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x14045FAB8
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x140461410 (IoSetDeviceInterfaceState.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404E0960 (_CmSetDeviceInterfacePathFormat.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  NTSTATUS PWSTR; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = *(__int64 **)(a1 + 184);
  PWSTR = 0;
  if ( v3 != (__int64 *)(a1 + 184) )
  {
    do
    {
      if ( *((_BYTE *)v3 + 36) )
      {
        PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v3[2]);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        LOBYTE(v7) = 1;
        PWSTR = CmSetDeviceInterfacePathFormat(v6, 0LL, v7);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        RtlInitUnicodeString(&DestinationString, 0LL);
        PWSTR = IoSetDeviceInterfaceState(&DestinationString, a2);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        ExFreePoolWithTag(0LL, 0x57706E50u);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v2 );
  }
  return (unsigned int)PWSTR;
}
