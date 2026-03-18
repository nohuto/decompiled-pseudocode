/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1406E3434
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1406FBE3C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (dword_140400104 & 2) != 0
      || (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12) != 0;
}
