/*
 * XREFs of MiFreeReservationRun @ 0x1404448E0
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x140444830 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140444898 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiFreeReservationRun(struct _KEVENT *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 PteTimeStamp; // rdi
  __int64 updated; // rax
  bool v7; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)a2, a2, a3);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PteTimeStamp);
      v7 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v7 );
  }
}
