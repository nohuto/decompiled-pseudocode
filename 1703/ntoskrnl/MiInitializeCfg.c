/*
 * XREFs of MiInitializeCfg @ 0x140804A04
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x140436B00 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_14036BFE0, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_14036BFE8 = MiSectionControlArea(qword_14036BFE0);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_14036BFF0, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_14036BFF8 = MiSectionControlArea(qword_14036BFF0);
      return 0LL;
    }
  }
  return result;
}
