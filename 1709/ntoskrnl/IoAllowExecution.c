/*
 * XREFs of IoAllowExecution @ 0x14002462C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetDevicePDO @ 0x14002459C (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  int v2; // ebx

  DevicePDO = IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = DevicePDO[12];
  ObfDereferenceObject(DevicePDO);
  return (v2 & 0x800000) == 0;
}
