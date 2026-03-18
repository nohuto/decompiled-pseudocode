/*
 * XREFs of ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01C5760
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01E9780 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 */

void __fastcall GenerateCaptureLostMessage(__int64 a1, HWND a2, __int64 a3, __int64 a4, int a5)
{
  struct _LIST_ENTRY *FrameById; // rax
  int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  struct tagPOINTERINPUTFRAME *v9; // rbx
  __int64 v10; // rdi
  HWND v11; // r8

  if ( a1 )
  {
    FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
    v9 = (struct tagPOINTERINPUTFRAME *)FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
      v10 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v7 + 32);
      if ( GeneratePointerMessage((const struct tagPOINTERINFONODE *)v10, v7, 0x252u, v8, v6, a5, 0LL) )
        PointerList::AddLostCaptureTarget((PointerList *)*(unsigned __int16 *)(v10 + 60), *(_QWORD *)(v10 + 80), v11);
      UnreferenceFrameInt(v9);
    }
  }
}
