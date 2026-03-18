/*
 * XREFs of ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01C5D10
 * Callers:
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01BAF48 (GetPointerFrameArrivalTimesInternal.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 */

__int64 __fastcall GetPointerDataArrivalTimes(__int64 a1, unsigned int a2, struct _LIST_ENTRY **a3)
{
  struct _LIST_ENTRY *FrameById; // r9
  __int64 v7; // r10
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  struct _LIST_ENTRY *i; // rax
  unsigned int v11; // r11d

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById || a2 > *((_DWORD *)&FrameById[5].Blink[7].Blink + 54 * *(unsigned int *)(v7 + 32) + 1) )
    return 0LL;
  v8 = 1;
  *a3 = FrameById[4].Flink;
  v9 = 1;
  if ( a2 > 1 )
  {
    for ( i = GetPreviousFrameByDeviceInt(&FrameById->Flink);
          v9 < a2 && i && v11 > v8;
          i = GetPreviousFrameByDeviceInt(&i->Flink) )
    {
      a3[v9] = i[4].Flink;
      v9 += v8;
    }
  }
  return v8;
}
