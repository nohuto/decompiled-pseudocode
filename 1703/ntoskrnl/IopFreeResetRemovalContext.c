/*
 * XREFs of IopFreeResetRemovalContext @ 0x140694BA8
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x140694A70 (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x140694C30 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall IopFreeResetRemovalContext(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 168), 0x4B706E50u);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v3 = *(void **)(a1 + 184);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x52706E50u);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 200));
  ExFreePoolWithTag((PVOID)a1, 0);
}
