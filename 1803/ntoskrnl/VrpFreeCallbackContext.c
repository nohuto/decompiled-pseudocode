/*
 * XREFs of VrpFreeCallbackContext @ 0x1407081F8
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeCallbackContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67655256u);
  v3 = (void *)P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
