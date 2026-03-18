/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C013A844
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B6194 (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rsi
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  v4 = 0;
  while ( v2 && v4 >= 0 )
  {
    v5 = *a2;
    v6 = 0LL;
    while ( v5 != a2 )
    {
      if ( (_QWORD *)v5[5] == v2 )
      {
        v6 = (__int64)v5;
        break;
      }
      v5 = (_QWORD *)*v5;
    }
    if ( v6 )
    {
      v8 = (_QWORD *)*v5;
      v9 = (_QWORD *)v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v9 != v5 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      PushW32ThreadLock(v6, v11, (__int64)DeleteMonitorsAndWindowsSnapShot);
      PushW32ThreadLock((__int64)v2, v10, UserDereferenceObject);
      ObfReferenceObject(v2);
      v4 = xxxRestoreMonitorsAndWindowsRects(v6, v2);
      PopAndFreeW32ThreadLock((__int64)v10);
      PopAndFreeAlwaysW32ThreadLock((__int64)v11);
    }
    v2 = (_QWORD *)v2[4];
  }
  return (unsigned int)v4;
}
