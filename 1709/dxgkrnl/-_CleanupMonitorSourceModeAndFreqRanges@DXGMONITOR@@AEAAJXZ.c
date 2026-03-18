/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01092D0
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0201600 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  DXGMONITOR *v4; // rbx
  char *v5; // rdi
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // r8
  _QWORD *v26; // rdx

  v3 = (char *)this + 224;
  v4 = this;
  if ( *(char **)v3 != v3 )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v7 + 24) = v4;
    WdLogEvent5_WdWarning(v7);
    while ( *(char **)v3 != v3 )
    {
      v8 = *(__int64 **)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8) )
        __fastfail(3u);
      *(_QWORD *)v3 = v9;
      *(_QWORD *)(v9 + 8) = v3;
      this = (DXGMONITOR *)(v8 - 12);
      if ( v8 != (__int64 *)96 )
        ExFreePoolWithTag(this, 0);
    }
  }
  v5 = (char *)v4 + 264;
  if ( *(char **)v5 != v5 )
  {
    v13 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v13 + 24) = v4;
    WdLogEvent5_WdWarning(v13);
    while ( *(char **)v5 != v5 )
    {
      v14 = *(__int64 **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14) )
        __fastfail(3u);
      *(_QWORD *)v5 = v15;
      *(_QWORD *)(v15 + 8) = v5;
      this = (DXGMONITOR *)(v14 - 6);
      if ( v14 != (__int64 *)48 )
        ExFreePoolWithTag(this, 0);
    }
  }
  if ( *((_DWORD *)v4 + 48) )
  {
    v10 = (char *)v4 + 200;
    if ( *(char **)v10 == v10 )
    {
      v16 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v16);
      goto LABEL_16;
    }
    do
    {
      v11 = *(__int64 **)v10;
      if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v12 = *v11, *(__int64 **)(*v11 + 8) != v11) )
        __fastfail(3u);
      *(_QWORD *)v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      this = (DXGMONITOR *)(v11 - 12);
      if ( v11 != (__int64 *)96 )
        ExFreePoolWithTag(this, 0);
LABEL_16:
      ;
    }
    while ( *(char **)v10 != v10 );
    *((_QWORD *)v4 + 27) = 0LL;
    *((_DWORD *)v4 + 48) = 0;
    *((_DWORD *)v4 + 49) = 1024;
  }
  if ( *((DXGMONITOR **)v4 + 25) != (DXGMONITOR *)((char *)v4 + 200) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)v4 + 60) )
  {
    v18 = (_QWORD *)((char *)v4 + 248);
    if ( (_QWORD *)*v18 == v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 != v18 )
    {
      v21 = v20 - 6;
      if ( !v20 )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          v22 = v21 + 6;
          v23 = (_QWORD *)v21[6];
          if ( v23 == v18 )
          {
            v24 = 0LL;
          }
          else
          {
            v24 = v23 - 6;
            if ( !v23 )
              v24 = 0LL;
          }
          if ( *(_DWORD *)v21 != 4 )
          {
            v25 = v21[6];
            if ( (_QWORD *)v23[1] != v22 || (v26 = (_QWORD *)v21[7], (_QWORD *)*v26 != v22) )
              __fastfail(3u);
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
            ExFreePoolWithTag(v21, 0);
            --*((_DWORD *)v4 + 60);
          }
          v21 = v24;
        }
        while ( v24 );
      }
    }
  }
  return 0LL;
}
