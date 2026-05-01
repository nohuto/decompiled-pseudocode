/*
 * XREFs of ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x180125E6C
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180125C94 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 */

void __fastcall ViewEventDispatcher::_RemovePendingActivationsForAppId(struct IUnknownVtbl *this, HSTRING *a2)
{
  ULONG (__stdcall *AddRef)(IUnknown *); // r14
  __int64 v5; // r13
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v8; // ebx
  const WCHAR *v9; // rax

  if ( this != (struct IUnknownVtbl *)-560LL )
  {
    AddRef = this[23].AddRef;
    while ( AddRef )
    {
      v5 = (__int64)AddRef;
      AddRef = *(ULONG (__stdcall **)(IUnknown *))AddRef;
      StringLen = WindowsGetStringLen(*(HSTRING *)(v5 + 16));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 16), 0LL);
      v8 = WindowsGetStringLen(*a2);
      v9 = WindowsGetStringRawBuffer(*a2, 0LL);
      if ( CompareStringOrdinal(v9, v8, StringRawBuffer, StringLen, 1) == 2 )
        ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(this, v5);
    }
  }
}
