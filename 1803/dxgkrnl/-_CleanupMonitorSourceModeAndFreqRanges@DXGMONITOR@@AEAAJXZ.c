/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02390E4
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  DXGMONITOR **v3; // rdi
  DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  DXGMONITOR *v6; // rax
  DXGMONITOR **v7; // rdi
  __int64 v8; // rax
  DXGMONITOR *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  DXGMONITOR **v14; // rdi
  DXGMONITOR *v15; // rax
  __int64 v16; // rax
  DXGMONITOR **v17; // rcx
  DXGMONITOR *v18; // rdx
  DXGMONITOR **v19; // rax
  DXGMONITOR **v20; // rsi
  DXGMONITOR *v21; // r8

  v3 = (DXGMONITOR **)((char *)this + 240);
  v4 = this;
  if ( *v3 != (DXGMONITOR *)v3 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdWarning(v5);
    while ( 1 )
    {
      this = *v3;
      if ( *v3 == (DXGMONITOR *)v3 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v3
        || (v6 = *(DXGMONITOR **)this, *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this) )
      {
        __fastfail(3u);
      }
      *v3 = v6;
      *((_QWORD *)v6 + 1) = v3;
      operator delete((char *)this - 96);
    }
  }
  v7 = (DXGMONITOR **)((char *)v4 + 280);
  if ( *v7 != (DXGMONITOR *)v7 )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdWarning(v8);
    while ( 1 )
    {
      this = *v7;
      if ( *v7 == (DXGMONITOR *)v7 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v7
        || (v9 = *(DXGMONITOR **)this, *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this) )
      {
        __fastfail(3u);
      }
      *v7 = v9;
      *((_QWORD *)v9 + 1) = v7;
      operator delete((char *)this - 48);
    }
  }
  if ( *((_DWORD *)v4 + 52) )
  {
    v10 = (_QWORD *)((char *)v4 + 216);
    if ( (_QWORD *)*v10 == v10 )
    {
      v11 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v11);
    }
    while ( 1 )
    {
      this = (DXGMONITOR *)*v10;
      if ( (_QWORD *)*v10 == v10 )
        break;
      if ( *((_QWORD **)this + 1) != v10 || (v12 = *(_QWORD *)this, *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this) )
        __fastfail(3u);
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      operator delete((char *)this - 96);
    }
    *((_QWORD *)v4 + 29) = 0LL;
    *((_DWORD *)v4 + 52) = 0;
    *((_DWORD *)v4 + 53) = 1024;
  }
  if ( *((DXGMONITOR **)v4 + 27) != (DXGMONITOR *)((char *)v4 + 216) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)v4 + 64) )
  {
    v14 = (DXGMONITOR **)((char *)v4 + 264);
    v15 = (DXGMONITOR *)*((_QWORD *)v4 + 33);
    if ( v15 != (DXGMONITOR *)((char *)v4 + 264)
      || (v16 = WdLogNewEntry5_WdAssertion(this), WdLogEvent5_WdAssertion(v16), v15 = *v14, *v14 != (DXGMONITOR *)v14) )
    {
      v17 = (DXGMONITOR **)((char *)v15 - 48);
      if ( !v15 )
        v17 = 0LL;
      if ( v17 )
      {
        do
        {
          v18 = (DXGMONITOR *)(v17 + 6);
          v19 = (DXGMONITOR **)v17[6];
          if ( v19 == v14 )
          {
            v20 = 0LL;
          }
          else
          {
            v20 = v19 - 6;
            if ( !v19 )
              v20 = 0LL;
          }
          if ( *(_DWORD *)v17 != 4 )
          {
            if ( v19[1] != v18 || (v21 = v17[7], *(DXGMONITOR **)v21 != v18) )
              __fastfail(3u);
            *(_QWORD *)v21 = v19;
            v19[1] = v21;
            operator delete(v17);
            --*((_DWORD *)v4 + 64);
          }
          v17 = v20;
        }
        while ( v20 );
      }
    }
  }
  return 0LL;
}
