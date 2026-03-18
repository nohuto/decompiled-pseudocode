/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01414F0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B9428 (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int v6; // esi
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v6 = 0;
  while ( v4 && v6 >= 0 )
  {
    v7 = *a2;
    v8 = 0LL;
    while ( v7 != a2 )
    {
      if ( (_QWORD *)v7[5] == v4 )
      {
        v8 = (__int64)v7;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
    if ( v8 )
    {
      v10 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      PushW32ThreadLock(v8, v18, (__int64)DeleteMonitorsAndWindowsSnapShot, a4);
      PushW32ThreadLock((__int64)v4, v17, UserDereferenceObject, v12);
      ObfReferenceObject(v4);
      v6 = xxxRestoreMonitorsAndWindowsRects(v8, v4);
      PopAndFreeW32ThreadLock((__int64)v17, v13);
      PopAndFreeAlwaysW32ThreadLock((__int64)v18, v14, v15, v16);
    }
    v4 = (_QWORD *)v4[4];
  }
  return (unsigned int)v6;
}
