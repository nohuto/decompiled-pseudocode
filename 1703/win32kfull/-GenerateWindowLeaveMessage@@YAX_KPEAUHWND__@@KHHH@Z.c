/*
 * XREFs of ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01C5C3C
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
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
  int v9; // r11d
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
          0x24Au,
          v9,
          a5,
          a6,
          0LL);
      UnreferenceFrameInt(v10);
    }
  }
}
