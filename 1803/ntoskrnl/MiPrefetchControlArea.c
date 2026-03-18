/*
 * XREFs of MiPrefetchControlArea @ 0x14053E190
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int List; // esi
  char *v8; // rbx
  int v9; // ebp
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, a4, a3, a4, a6, P);
  if ( List >= 0 && (v8 = (char *)P[0]) != 0LL )
  {
    ++BYTE6(CurrentThread[1].Queue);
    *((_DWORD *)v8 + 18) = 0;
    v9 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v9 >= 0 && *((char **)v8 + 11) != v8 + 88 )
    {
      MiPfExecuteReadList((__int64)v8, a5, a6, 0LL);
      MiPfCompletePrefetchIos((ULONG_PTR *)v8 + 11, 0LL, 0LL);
    }
    MiReleaseReadListResources((__int64)v8);
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
