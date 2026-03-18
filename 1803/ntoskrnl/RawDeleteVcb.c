/*
 * XREFs of RawDeleteVcb @ 0x14053FEDC
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400066DC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x14014D70C (RawCheckForDeleteVolume.c)
 * Callees:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
