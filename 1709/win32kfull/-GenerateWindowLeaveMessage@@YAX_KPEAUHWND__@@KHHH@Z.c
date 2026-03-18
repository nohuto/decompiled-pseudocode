/*
 * XREFs of ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01CB378
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01CBF18 (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 */

void __fastcall GenerateWindowLeaveMessage(
        __int64 a1,
        HWND a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  struct _LIST_ENTRY *FrameById; // rax
  int v7; // r9d
  __int64 v8; // r10
  unsigned int v9; // r11d
  struct tagPOINTERINPUTFRAME *v10; // rbx

  if ( a1 )
  {
    FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
    v10 = (struct tagPOINTERINPUTFRAME *)FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
      if ( !v7 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)((char *)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32)),
          v8,
          586LL,
          v9,
          a5,
          a6,
          0LL);
      UnreferenceFrameInt(v10);
    }
  }
}
