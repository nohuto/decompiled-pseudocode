/*
 * XREFs of IopFreeResetRemovalContext @ 0x1406C0978
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1406C0670 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x1406C0840 (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406C0A00 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall IopFreeResetRemovalContext(char *P)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *((_QWORD *)P + 21);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_QWORD *)P + 21) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 23);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x52706E50u);
    *((_QWORD *)P + 23) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 200));
  ExFreePoolWithTag(P, 0);
}
