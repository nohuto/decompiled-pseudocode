/*
 * XREFs of MiInitializeCfg @ 0x14089D624
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_1403CB4A0, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_1403CB4A8 = MiSectionControlArea(qword_1403CB4A0);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_1403CB4B0, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_1403CB4B8 = MiSectionControlArea(qword_1403CB4B0);
      return 0LL;
    }
  }
  return result;
}
