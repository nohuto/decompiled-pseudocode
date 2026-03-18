/*
 * XREFs of RawDeleteVcb @ 0x140547910
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400FA43C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140250214 (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
