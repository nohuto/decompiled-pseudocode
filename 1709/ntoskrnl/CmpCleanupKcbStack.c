/*
 * XREFs of CmpCleanupKcbStack @ 0x1404834BC
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    MiDeleteSubsection(v1);
}
