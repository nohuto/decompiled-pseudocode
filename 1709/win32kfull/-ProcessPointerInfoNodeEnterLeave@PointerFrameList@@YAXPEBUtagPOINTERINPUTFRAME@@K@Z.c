/*
 * XREFs of ?ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A5740
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A58E8 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall PointerFrameList::ProcessPointerInfoNodeEnterLeave(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2)
{
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *v3; // rbx

  v2 = *(struct _LIST_ENTRY **)this;
  if ( *(struct _LIST_ENTRY **)this != &gFrameListHead )
  {
    do
    {
      v3 = v2;
      if ( v2[3].Blink == (struct _LIST_ENTRY *)*((_QWORD *)this + 7) )
        break;
      v2 = v2->Flink;
    }
    while ( v2 != &gFrameListHead );
    if ( v2 != &gFrameListHead && HIDWORD(v3[2].Blink) != LODWORD(v3[2].Blink) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v3[2].Flink + 1);
      ProcessWindowEnterLeave((const struct tagPOINTERINPUTFRAME *)v3, *((struct tagPOINTERINFONODE **)this + 11));
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v3);
    }
  }
}
