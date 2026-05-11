/*
 * XREFs of USBMidiInProcessPin @ 0x1C0006690
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInCopyEvent @ 0x1C00263EC (USBMidiInCopyEvent.c)
 */

__int64 __fastcall USBMidiInProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rbx
  unsigned int v2; // r12d
  __int64 v4; // rbp
  KSPIN_LOCK *v5; // r15
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rsi
  KIRQL v7; // bl
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // r8
  PUCHAR Data; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  ULONG Remaining; // [rsp+60h] [rbp+8h] BYREF

  Context = Pin->Context;
  v2 = 0;
  v4 = Context[19];
  v5 = Context + 14;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v8 = (_QWORD *)(v4 + 64);
  while ( 1 )
  {
    v15 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 || !LeadingEdgeStreamPointer )
      break;
    if ( (_QWORD *)v15[1] != v8 || (v9 = *v15, *(_QWORD **)(*v15 + 8LL) != v15) )
      __fastfail(3u);
    *v8 = v9;
    *(_QWORD *)(v9 + 8) = v8;
    KeReleaseSpinLock(v5, v7);
    if ( (*((_BYTE *)v15 + 25) & 0xF8) == 0xF8 )
    {
      v10 = *(_DWORD *)(v4 + 48);
      if ( v10 )
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v10 + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    if ( LeadingEdgeStreamPointer )
    {
      v11 = v15[2];
      v12 = *(_QWORD *)(v4 + 56);
      Data = LeadingEdgeStreamPointer->OffsetOut.Data;
      Remaining = LeadingEdgeStreamPointer->OffsetOut.Remaining;
      USBMidiInCopyEvent((_DWORD)Data, (_DWORD)v15 + 24, v12, v11, (__int64)&Remaining);
      if ( (v15[3] & 0xF) == 4 && Remaining + 3 <= LeadingEdgeStreamPointer->OffsetOut.Remaining )
      {
        *(_DWORD *)(v4 + 48) += Remaining;
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (Remaining + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(v5);
    v14 = *(_QWORD **)(v4 + 88);
    if ( *v14 != v4 + 80 )
      __fastfail(3u);
    *v15 = v4 + 80;
    v15[1] = v14;
    *v14 = v15;
    *(_QWORD *)(v4 + 88) = v15;
  }
  if ( v15 == v8 )
  {
    if ( LeadingEdgeStreamPointer )
      KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
    v2 = 259;
  }
  *(_BYTE *)(v4 + 33) = 0;
  KeReleaseSpinLock(v5, v7);
  return v2;
}
