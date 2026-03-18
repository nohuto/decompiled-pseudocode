/*
 * XREFs of ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A6614
 * Callers:
 *     ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01A4FB4 (-AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01A5A94 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A65A0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C00394C0 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C0039500 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandonedInternal(DXGKEYEDMUTEX *this, int a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r14
  _QWORD **v11; // rdi
  _QWORD *v12; // rbx
  struct _KEVENT *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGKEYEDMUTEX *)((char *)this + 96), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v10 = 0;
  if ( v6
    || DXGKEYEDMUTEX::IsOwner(this, a2)
    || *((_DWORD *)this + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(a2, *((struct DXGPROCESS ***)this + 9)) )
  {
    *((_DWORD *)this + 9) = 3;
    v10 = 1;
  }
  v11 = (_QWORD **)((char *)this + 80);
  v12 = *v11;
  while ( v12 != v11 )
  {
    v13 = (struct _KEVENT *)(v12 - 8);
    if ( v10 || DXGKEYEDMUTEX::IsSameWaiter(a2, (struct DXGPROCESS **)v12 - 8) )
    {
      v14 = v12;
      v12 = (_QWORD *)*v12;
      v13[2].Header.LockNV = 128;
      v15 = *v14;
      v16 = (_QWORD *)v14[1];
      if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v14[1] = v14;
      *v14 = v14;
      KeSetEvent(v13 + 1, 0, 0);
    }
    else
    {
      v12 = (_QWORD *)*v12;
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v7, v8, v9);
}
