/*
 * XREFs of ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1800FAAC4
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1800F9F54 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 */

void __fastcall ViewEventDispatcher::_RemovePendingActivationsForAppId(ViewEventDispatcher *this, HSTRING *a2)
{
  _QWORD *v4; // r14
  __int64 v5; // r13
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v8; // ebx
  const WCHAR *v9; // rax

  if ( this != (ViewEventDispatcher *)-488LL )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 61);
    while ( v4 )
    {
      v5 = (__int64)v4;
      v4 = (_QWORD *)*v4;
      StringLen = WindowsGetStringLen(*(HSTRING *)(v5 + 16));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 16), 0LL);
      v8 = WindowsGetStringLen(*a2);
      v9 = WindowsGetStringRawBuffer(*a2, 0LL);
      if ( CompareStringOrdinal(v9, v8, StringRawBuffer, StringLen, 1) == 2 )
        ViewEventDispatcher::_QueuePendingActivationNodeForDestruction((__int64)this, v5);
    }
  }
}
