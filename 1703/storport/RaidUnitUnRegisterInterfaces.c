/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C003F5FC
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     PortMapDeleteLunEntry @ 0x1C0046DCC (PortMapDeleteLunEntry.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = PortMapDeleteLunEntry(*(unsigned int *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 1552) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1544), 0);
  if ( *(_QWORD *)(a1 + 1672) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1664), 0);
  v5 = *(void (**)(void))(a1 + 640);
  if ( v5 && *(_QWORD *)(a1 + 568) )
  {
    v5();
    memset((void *)(a1 + 560), 0, 0x58uLL);
  }
  return v4;
}
