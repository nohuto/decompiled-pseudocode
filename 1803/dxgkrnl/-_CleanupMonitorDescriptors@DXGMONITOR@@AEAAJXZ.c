/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0238FA8
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00480F0 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(DXGMONITOR *this)
{
  _QWORD **v1; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  int v6; // eax
  void *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  void *v12; // rcx
  void *v13; // rcx

  v1 = (_QWORD **)((char *)this + 192);
  if ( *v1 != v1 )
  {
    v3 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v3 + 24) = this;
    WdLogEvent5_WdError(v3);
    while ( 1 )
    {
      v4 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v4[1] != v1 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
        __fastfail(3u);
      *v1 = v5;
      v5[1] = v1;
      operator delete(v4 - 4);
    }
  }
  v6 = *((_DWORD *)this + 32);
  if ( v6 )
  {
    v7 = (void *)*((_QWORD *)this + 17);
    v8 = v7;
    if ( !v7 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v9);
      v7 = (void *)*((_QWORD *)this + 17);
      v6 = *((_DWORD *)this + 32);
      v8 = v7;
    }
    v10 = 0LL;
    if ( v6 )
    {
      do
      {
        v11 = (_QWORD *)*((_QWORD *)v7 + v10);
        v8 = v7;
        if ( v11 )
        {
          do
          {
            v12 = v11;
            v11 = (_QWORD *)*v11;
            operator delete[](v12);
          }
          while ( v11 );
          v7 = (void *)*((_QWORD *)this + 17);
          v8 = v7;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *((_DWORD *)this + 32) );
    }
    operator delete[](v8);
    *((_QWORD *)this + 17) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 18) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 20);
  if ( v13 )
  {
    operator delete[](v13);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 38) = 0;
    DisplayID_Initialize((DXGMONITOR *)((char *)this + 168), 0LL, 0);
  }
  return 0LL;
}
