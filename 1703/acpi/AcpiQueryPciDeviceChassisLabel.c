/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C0091E50
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C008E3E0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0002104 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C009F914 (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  _BYTE *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  PVOID v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-48h] BYREF

  v2 = (_BYTE *)(a1 + 952);
  if ( (*v2 & 1) != 0 )
    return 0LL;
  ACPIInternalSetFlags(v2, 1uLL);
  P[0] = 0LL;
  memset(v11, 0, sizeof(v11));
  v3 = *(_QWORD *)(a1 + 712);
  v10 = PCI_ROOT_BUS_DSM_UUID;
  v4 = ACPIAmliEvaluateDsm(v3, (unsigned int)&v10, 2, 7, (__int64)v11, (__int64)P);
  v5 = P[0];
  if ( v4 >= 0 && *((_WORD *)P[0] + 1) == 4 )
  {
    v8 = *((_QWORD *)P[0] + 4);
    if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v8 - 1) <= 1 && *(_WORD *)(v8 + 10) == 1 )
      v6 = ACPIInternalPciDeviceLabel(a1);
    else
      v6 = -1073741823;
  }
  else
  {
    v6 = 0;
  }
  if ( v5 )
  {
    AMLIFreeDataBuffs((__int64)v5);
    ExFreePoolWithTag(v5, 0x52706341u);
  }
  return v6;
}
