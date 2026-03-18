/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01E7BD0
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F1870 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  _QWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 408LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(*(_QWORD *)v1 + 52LL) & 2) != 0 )
  {
    v2 = v0[33];
    v0[33] = 0LL;
    *(_DWORD *)(*(_QWORD *)v1 + 52LL) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v5, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, v4, UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 8676LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v4);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v5);
  }
  return 0LL;
}
