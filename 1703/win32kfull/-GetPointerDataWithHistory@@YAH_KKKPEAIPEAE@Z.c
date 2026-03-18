/*
 * XREFs of ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01C5EFC
 * Callers:
 *     GetPointerInfoHistoryInternal @ 0x1C01BB0EC (GetPointerInfoHistoryInternal.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall GetPointerDataWithHistory(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // rbp
  unsigned int v8; // ebx
  unsigned int v10; // r9d
  __int64 v11; // r11
  struct _LIST_ENTRY *FrameById; // r14
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // esi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // r15
  __int64 v19; // rsi

  v5 = a5;
  switch ( a2 )
  {
    case 1:
      v8 = 96;
      goto LABEL_9;
    case 2:
      goto LABEL_7;
    case 3:
      v8 = 120;
      goto LABEL_9;
    case 5:
LABEL_7:
      v8 = 144;
      goto LABEL_9;
  }
  v8 = 0;
LABEL_9:
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v13 = v10;
  v14 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v11 + 32);
  if ( a3 >= v8
    && (unsigned int)PointerInfoCopyOutHelperInternal(
                       (int)v14 + 48,
                       *(_QWORD *)(v14 + 36),
                       FrameById[6].Blink,
                       a2,
                       v8,
                       (__int64)a5) )
  {
    v5 = &a5[v8];
    a3 -= v8;
  }
  v15 = *(_DWORD *)(v14 + 208);
  PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&FrameById->Flink);
  if ( v16 )
  {
    do
    {
      if ( !PreviousFrameByDeviceInt || v17 <= 1 )
        break;
      ++v13;
      v19 = (__int64)PreviousFrameByDeviceInt[5].Blink + 216 * v15;
      if ( a3 >= v8
        && (unsigned int)PointerInfoCopyOutHelperInternal(
                           (int)v19 + 48,
                           *(_QWORD *)(v19 + 36),
                           FrameById[6].Blink,
                           a2,
                           v8,
                           (__int64)v5) )
      {
        v5 += v8;
        a3 -= v8;
      }
      v15 = *(_DWORD *)(v19 + 208);
      PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&PreviousFrameByDeviceInt->Flink);
    }
    while ( v16 );
    if ( v16 )
      *a4 = v13;
  }
  return v16;
}
