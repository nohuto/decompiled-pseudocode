/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x1401EEB70
 * Callers:
 *     HvlMarkHiberPhase @ 0x1401EE5BC (HvlMarkHiberPhase.c)
 * Callees:
 *     HvlpGetPageList @ 0x1401F10AC (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401F139C (HvlpStartPageListIteration.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
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
  qword_1403865A8 = 0LL;
  HvlpIteratorHibernate = 0;
}
