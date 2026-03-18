/*
 * XREFs of ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C5CB0
 * Callers:
 *     GetPointerInfoInternal @ 0x1C01BB1AC (GetPointerInfoInternal.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall GetPointerData(__int64 a1, int a2, __int64 a3, struct tagPOINTER_INFO *a4)
{
  struct _LIST_ENTRY *FrameById; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rdx

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v10 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32);
  return PointerInfoCopyOutHelperInternal((int)v10 + 48, *(_QWORD *)(v10 + 36), FrameById[6].Blink, a2, v9, v7);
}
