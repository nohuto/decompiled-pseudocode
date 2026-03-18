/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x1405DA144
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1405D9F4C (PopPreallocateHibernateMemory.c)
 * Callees:
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (dword_1403E3104 & 2) != 0
      || (unsigned int)MiChargeResident(&MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
