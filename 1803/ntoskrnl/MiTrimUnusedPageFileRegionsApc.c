/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x14025FE80
 * Callers:
 *     <none>
 * Callees:
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(PRKEVENT Event)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 PageFilePte; // rax
  unsigned __int64 Flink_high; // r8
  __int64 v6; // rdx
  unsigned int FreePageFileSpace; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  int PteTimeStamp; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(_QWORD *)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 6880);
  PageFilePte = MiMakePageFilePte(LODWORD(Event[1].Header.WaitListHead.Blink));
  Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
  v14 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v1, &v14, Flink_high, 0xABu);
  if ( FreePageFileSpace >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
  {
    PteTimeStamp = MiGetPteTimeStamp(v14, v6, v8, v9);
    LODWORD(Event[1].Header.WaitListHead.Blink) = PteTimeStamp;
    v11 = MiMakePageFilePte(PteTimeStamp + FreePageFileSpace);
    v12 = *(_QWORD *)v3;
    v14 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v11 & 0xFFFFFFFFFFFF0FFFuLL;
    HIDWORD(Event[1].Header.WaitListHead.Blink) = FreePageFileSpace + MiFindFreePageFileSpace(v1, &v14, v12, 0x6Bu);
  }
  return KeSetEvent(Event, 0, 0);
}
