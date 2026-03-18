/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C019974C
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C019AB60 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax

  if ( a2 )
    v8 = *((_QWORD *)a2 + 1);
  else
    v8 = *((_QWORD *)a1 + 1);
  while ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 != 512
      || ((v10 = *(_DWORD *)(v8 + 120), v10 != 4) || a6 != 2)
      && (v10 != 8 || a6 != 3)
      && (v10 != 16 || a6 != 5)
      && *(_DWORD *)(v8 + 124) != 4 )
    {
      if ( !IsPointerInputMessageWithState(v9) )
        break;
      v11 = *(_QWORD *)(v8 + 40);
      if ( v11 == a5 )
        return 1LL;
      v12 = (gdwMitConfig & 4) != 0
          ? CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v11)
          : *(_DWORD *)(v11 + 28);
      if ( v12 != a4 && v12 != a3 )
        break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  return 0LL;
}
