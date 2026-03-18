/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401E9A90
 * Callers:
 *     HvlMarkHiberPhase @ 0x14013E08C (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x1401EC2A8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401EC59C (HvlpStartPageListIteration.c)
 */

void HvlpMarkHypervisorPagesForHibernation()
{
  int PageList; // ebx
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  HvlpStartPageListIteration(0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  qword_14036A608 = 0LL;
  HvlpIteratorHibernate = 0;
}
