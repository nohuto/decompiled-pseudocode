/*
 * XREFs of IoAllowExecution @ 0x14006510C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetDevicePDO @ 0x140065174 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  int v2; // ebx

  DevicePDO = (_DWORD *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = DevicePDO[12];
  ObfDereferenceObject(DevicePDO);
  return (v2 & 0x800000) == 0;
}
