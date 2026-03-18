/*
 * XREFs of MiInitializeCfg @ 0x140857188
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14049B260 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_140388300, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140388308 = MiSectionControlArea(qword_140388300);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_140388310, 983071LL, 0, (int)&v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140388318 = MiSectionControlArea(qword_140388310);
      return 0LL;
    }
  }
  return result;
}
