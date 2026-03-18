/*
 * XREFs of MiPrefetchControlArea @ 0x1404F605C
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiPfExecuteReadList @ 0x140492E94 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
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
  _DWORD *v8; // rbx
  int v9; // ebp
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2, a4, a3, a4, a6, (__int64 *)P);
  if ( List >= 0 && (v8 = P[0]) != 0LL )
  {
    ++BYTE6(CurrentThread[1].Queue);
    v8[18] = 0;
    v9 = MiPfPutPagesInTransition((__int64)v8, 0LL);
    if ( v9 >= 0 && *((_DWORD **)v8 + 11) != v8 + 22 )
    {
      MiPfExecuteReadList((__int64)v8, a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD **)v8 + 11, 0LL);
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
