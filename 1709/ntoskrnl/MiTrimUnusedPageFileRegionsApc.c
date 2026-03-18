/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x140226D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
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
  int PteTimeStamp; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(_QWORD *)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 5792);
  PageFilePte = MiMakePageFilePte(LODWORD(Event[1].Header.WaitListHead.Blink));
  Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
  v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v1, &v13, Flink_high, 0xABu);
  if ( FreePageFileSpace >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
  {
    PteTimeStamp = MiGetPteTimeStamp(v13, v6, v8);
    LODWORD(Event[1].Header.WaitListHead.Blink) = PteTimeStamp;
    v10 = MiMakePageFilePte(PteTimeStamp + FreePageFileSpace);
    v11 = *(_QWORD *)v3;
    v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v10 & 0xFFFFFFFFFFFF0FFFuLL;
    HIDWORD(Event[1].Header.WaitListHead.Blink) = FreePageFileSpace + MiFindFreePageFileSpace(v1, &v13, v11, 0x6Bu);
  }
  return KeSetEvent(Event, 0, 0);
}
