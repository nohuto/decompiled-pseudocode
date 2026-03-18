/*
 * XREFs of MiReclaimSystemVa @ 0x140128B70
 * Callers:
 *     MiObtainDynamicVa @ 0x140128308 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x14016522C (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_14036C2C8 <= 0x8000000 )
    return KeSetEvent(&stru_14036C5D8, 0, 0);
  return result;
}
