/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C00169A0
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A754 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x1C0016E3C (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // rdx
  void (__fastcall *v5)(__int64, __int64); // rax
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 88);
  if ( v1 )
    v2 = PortMapDeleteLunEntry(*(unsigned int *)(v1 + 56), (unsigned __int8)v3, BYTE1(v3), BYTE2(v3));
  if ( *(_QWORD *)(a1 + 1584) && (*(_BYTE *)(a1 + 154) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1576), 0);
    *(_BYTE *)(a1 + 154) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 1704) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1696), 0);
  v5 = *(void (__fastcall **)(__int64, __int64))(a1 + 672);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 600);
    if ( v7 )
    {
      v5(v7, v3);
      memset((void *)(a1 + 592), 0, 0x58uLL);
    }
  }
  return v2;
}
