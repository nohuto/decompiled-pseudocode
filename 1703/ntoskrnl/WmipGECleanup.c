/*
 * XREFs of WmipGECleanup @ 0x14059B7C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 */

void __fastcall WmipGECleanup(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    EtwUnregister(v2);
  ExFreePoolWithTag(*(PVOID *)(a1 + 96), 0x70696D57u);
}
