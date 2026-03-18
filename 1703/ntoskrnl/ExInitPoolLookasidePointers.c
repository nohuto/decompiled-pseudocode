/*
 * XREFs of ExInitPoolLookasidePointers @ 0x14040F760
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x14040F89C (ExInitializeSystemLookasideList.c)
 */

__int64 ExInitPoolLookasidePointers()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v1; // edi
  int v2; // ebx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    qword_140342FC8 = (__int64)&ExPoolLookasideListHead;
    qword_140343018 = (__int64)&ExSystemLookasideListHead;
    ExSystemLookasideListHead = (__int64)&ExSystemLookasideListHead;
    ExPoolLookasideListHead = (__int64)&ExPoolLookasideListHead;
    ExInitializeSystemLookasideList(
      (unsigned int)&ExpScratchBufferLookasideList,
      512,
      1264,
      1717723987,
      32,
      (__int64)&ExSystemLookasideListHead);
  }
  CurrentPrcb->PPLookasideList[8].L = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  CurrentPrcb->PPLookasideList[8].P = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  v1 = 16;
  v2 = (_DWORD)CurrentPrcb + 2304;
  do
  {
    ExInitializeSystemLookasideList(v2 + 3072, 0, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    ExInitializeSystemLookasideList(v2, 512, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    result = ExInitializeSystemLookasideList(v2 + 6144, 1, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    v2 += 96;
    v1 += 16;
  }
  while ( v1 < 0x210 );
  return result;
}
