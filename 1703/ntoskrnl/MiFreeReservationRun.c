/*
 * XREFs of MiFreeReservationRun @ 0x1404CA0C8
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1404CA018 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404CA080 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiFreeReservationRun(struct _KEVENT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 PteTimeStamp; // rdi
  __int64 updated; // rax
  bool v8; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)a2, a2, a3, a4);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PteTimeStamp);
      v8 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v8 );
  }
}
