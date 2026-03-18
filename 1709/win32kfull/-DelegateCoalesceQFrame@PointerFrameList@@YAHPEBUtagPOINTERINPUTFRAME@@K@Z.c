/*
 * XREFs of ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4B5C
 * Callers:
 *     DelegateCoalescePointerMessage @ 0x1C01CDE1C (DelegateCoalescePointerMessage.c)
 * Callees:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall PointerFrameList::DelegateCoalesceQFrame(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2)
{
  __int64 v2; // r9
  int v3; // edx
  int v4; // eax
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rdi
  unsigned int v7; // ebx

  v2 = *((_QWORD *)this + 12) + 40LL * (unsigned int)a2;
  v3 = *(_DWORD *)(v2 + 20);
  if ( (v3 & 8) != 0 )
  {
    *(_DWORD *)(v2 + 28) = 9;
  }
  else if ( (v3 & 2) != 0 || *(_DWORD *)(v2 + 24) == 9 || (v4 = *(_DWORD *)(v2 + 28)) == 0 || v4 == 9 )
  {
    if ( (v3 & 1) != 0 )
    {
      v5 = *(struct _LIST_ENTRY **)this;
      if ( *(struct _LIST_ENTRY **)this != &gFrameListHead )
      {
        do
        {
          v6 = v5;
          if ( v5[3].Blink == (struct _LIST_ENTRY *)*((_QWORD *)this + 7) )
            break;
          v5 = v5->Flink;
        }
        while ( v5 != &gFrameListHead );
        if ( v5 != &gFrameListHead && HIDWORD(v6[2].Blink) != LODWORD(v6[2].Blink) )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v6[2].Flink + 1);
          v7 = (unsigned int)CoalesceQFrames(this, (struct tagPOINTERQFRAME *)v2, (struct tagPOINTERINPUTFRAME *)v6);
          UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v6);
          return v7;
        }
      }
      *(_DWORD *)(v2 + 28) = 10;
    }
    else
    {
      *(_DWORD *)(v2 + 28) = 13;
    }
  }
  return 0LL;
}
