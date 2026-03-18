/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x14022C410
 * Callers:
 *     HvlMarkHiberPhase @ 0x14022BE58 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x14022EC2C (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14022EF18 (HvlpStartPageListIteration.c)
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
  qword_1403C9AC8 = 0LL;
  HvlpIteratorHibernate = 0;
}
