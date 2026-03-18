/*
 * XREFs of VrpFreeCallbackContext @ 0x140679594
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeCallbackContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67655256u);
  v3 = (void *)a1[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
  ExFreePoolWithTag(a1, 0x67655256u);
}
