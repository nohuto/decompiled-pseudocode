/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01F3BC0
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00497C0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDeferredDesktopRotation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(gptiCurrent + 432LL);
  v5 = v4[1];
  if ( v5 && (*(_DWORD *)(*(_QWORD *)v5 + 52LL) & 2) != 0 )
  {
    v6 = v4[33];
    v4[33] = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 52LL) &= ~2u;
    if ( v6 )
      PushW32ThreadLock(v6, v13, (__int64)Win32FreePool, a4);
    PushW32ThreadLock((__int64)v4, v12, UserDereferenceObject, a4);
    ObfReferenceObject(v4);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v4, v6, *(_WORD *)(gpsi + 9972LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v12, v7);
    if ( v6 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v13, v8, v9, v10);
  }
  return 0LL;
}
