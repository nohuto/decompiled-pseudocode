/*
 * XREFs of CmDoVirtualTest @ 0x1400BCF08
 * Callers:
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !CmpVEEnabled )
    return 0;
  v3 = a1;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, v3, a2) == 0;
}
