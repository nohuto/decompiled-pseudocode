/*
 * XREFs of ACPIAllocateBuffer @ 0x1C008D878
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00955FC (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ACPIAllocateBuffer(SIZE_T *a1, __int64 a2, SIZE_T a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // rax

  *a1 = a3;
  v3 = -1LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 560) + v5) );
    *a1 = a3 + 10 * v5;
  }
  if ( (v4 & 0x400000000000LL) != 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 568) + v6) );
    *a1 += 10 * v6;
  }
  if ( (*(_BYTE *)(a2 + 952) & 0x10) != 0 )
  {
    do
      ++v3;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 576) + v3) );
    *a1 += 10 * v3;
  }
  return ExAllocatePoolWithTag(PagedPool, *a1, 0x42706341u);
}
