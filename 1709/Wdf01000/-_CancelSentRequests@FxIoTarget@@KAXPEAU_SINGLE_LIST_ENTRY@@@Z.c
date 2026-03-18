/*
 * XREFs of ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0012B10
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0013B2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C0087F70 (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0088570 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Remove@FxIoTarget@@UEAAXXZ @ 0x1C0088660 (-Remove@FxIoTarget@@UEAAXXZ.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C00887A0 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0091CD0 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0092940 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0092AB0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0037960 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxIoTarget::_CancelSentRequests(_SINGLE_LIST_ENTRY *RequestListHead)
{
  _SINGLE_LIST_ENTRY *Next; // rbx

  while ( RequestListHead->Next )
  {
    Next = RequestListHead->Next;
    if ( RequestListHead->Next )
      RequestListHead->Next = Next->Next;
    Next->Next = 0LL;
    FxRequestBase::Cancel((FxRequestBase *)&Next[-18]);
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))Next[-18].Next[2].Next)(
      &Next[-18],
      1818455619LL,
      548LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
}
