/*
 * XREFs of ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1801D0C38
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180031A34 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180092668 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

void __fastcall ViewEventDispatcher::_RemovePendingActivationsForAppId(ViewEventDispatcher *this, HSTRING *a2)
{
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v6; // ebx
  const WCHAR *v7; // rax
  __int64 v8; // rbp
  __int64 **v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = 0LL;
  v9 = (__int64 **)((char *)this + 560);
  CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v9);
  while ( 1 )
  {
    v8 = v10;
    if ( !v10 )
      break;
    CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v9);
    StringLen = WindowsGetStringLen(*(HSTRING *)(v8 + 16));
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 16), 0LL);
    v6 = WindowsGetStringLen(*a2);
    v7 = WindowsGetStringRawBuffer(*a2, 0LL);
    if ( CompareStringOrdinal(v7, v6, StringRawBuffer, StringLen, 1) == 2 )
      ViewEventDispatcher::_QueuePendingActivationNodeForDestruction((__int64)this, v8);
  }
}
