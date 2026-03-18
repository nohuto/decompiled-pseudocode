/*
 * XREFs of MiPrefetchControlArea @ 0x140423A90
 * Callers:
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MiPrefetchControlArea(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int List; // esi
  _DWORD *v8; // rbx
  int v9; // ebp
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0, a1, a2, a4, a3, a4, a6, (__int64)P);
  if ( List >= 0 && (v8 = P[0]) != 0LL )
  {
    ++BYTE6(CurrentThread[1].Queue);
    v8[18] = 0;
    v9 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v9 >= 0 && *((_DWORD **)v8 + 11) != v8 + 22 )
    {
      MiPfExecuteReadList(v8, a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD *)v8 + 11, 0LL);
    }
    MiReleaseReadListResources(v8);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return (unsigned int)List;
  }
}
