/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalSetFlags @ 0x1C002A604 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C007D9F8 (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  _BYTE *v2; // rcx
  _QWORD *v4; // rcx
  int v5; // eax
  PVOID v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-48h] BYREF

  v2 = (_BYTE *)(a1 + 952);
  if ( (*v2 & 1) != 0 )
    return 0LL;
  ACPIInternalSetFlags(v2, 1uLL);
  P[0] = 0LL;
  memset(v11, 0, sizeof(v11));
  v4 = *(_QWORD **)(a1 + 712);
  v10 = PCI_ROOT_BUS_DSM_UUID;
  v5 = ACPIAmliEvaluateDsm(v4, (__int64)&v10, 2u, 7u, (__int64)v11, P);
  v6 = P[0];
  if ( v5 >= 0 && *((_WORD *)P[0] + 1) == 4 )
  {
    v7 = *((_QWORD *)P[0] + 4);
    if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v7 - 1) <= 1 && *(_WORD *)(v7 + 10) == 1 )
      v8 = ACPIInternalPciDeviceLabel(a1, v7);
    else
      v8 = -1073741823;
  }
  else
  {
    v8 = 0;
  }
  if ( v6 )
  {
    AMLIFreeDataBuffs((__int64)v6);
    ExFreePoolWithTag(v6, 0x52706341u);
  }
  return v8;
}
