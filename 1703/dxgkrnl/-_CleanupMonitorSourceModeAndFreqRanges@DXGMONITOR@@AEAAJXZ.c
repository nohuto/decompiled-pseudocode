/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0106D24
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01E7A18 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 **v4; // rdi
  DXGMONITOR *v5; // rbx
  __int64 **v6; // rdi
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rsi
  __int64 v26; // r8
  _QWORD *v27; // rdx

  v4 = (__int64 **)((char *)this + 184);
  v5 = this;
  if ( *v4 != (__int64 *)v4 )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v5;
    WdLogEvent5_WdWarning(v8);
    while ( *v4 != (__int64 *)v4 )
    {
      v9 = *v4;
      v10 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *v4 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v4;
      this = (DXGMONITOR *)(v9 - 12);
      if ( v9 != (__int64 *)96 )
        ExFreePoolWithTag(this, 0);
    }
  }
  v6 = (__int64 **)((char *)v5 + 224);
  if ( *v6 != (__int64 *)v6 )
  {
    v11 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = v5;
    WdLogEvent5_WdWarning(v11);
    while ( *v6 != (__int64 *)v6 )
    {
      v12 = *v6;
      v13 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v13 + 8) != v12 )
        __fastfail(3u);
      *v6 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v6;
      this = (DXGMONITOR *)(v12 - 6);
      if ( v12 != (__int64 *)48 )
        ExFreePoolWithTag(this, 0);
    }
  }
  if ( *((_DWORD *)v5 + 38) )
  {
    v14 = (__int64 **)((char *)v5 + 160);
    if ( *v14 != (__int64 *)v14 )
      goto LABEL_26;
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
    while ( *v14 != (__int64 *)v14 )
    {
LABEL_26:
      v16 = *v14;
      if ( *v14 != (__int64 *)v14 )
      {
        v17 = *v16;
        if ( (__int64 **)v16[1] != v14 || *(__int64 **)(v17 + 8) != v16 )
          __fastfail(3u);
        *v14 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v14;
        this = (DXGMONITOR *)(v16 - 12);
        if ( v16 != (__int64 *)96 )
          ExFreePoolWithTag(this, 0);
      }
    }
    *((_QWORD *)v5 + 22) = 0LL;
    *((_DWORD *)v5 + 38) = 0;
    *((_DWORD *)v5 + 39) = 1024;
  }
  if ( *((DXGMONITOR **)v5 + 20) != (DXGMONITOR *)((char *)v5 + 160) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *((_DWORD *)v5 + 50) )
  {
    v19 = (_QWORD *)((char *)v5 + 208);
    if ( (_QWORD *)*v19 == v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = (_QWORD *)*v19;
    if ( (_QWORD *)*v19 != v19 )
    {
      v22 = v21 - 6;
      if ( !v21 )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          v23 = v22 + 6;
          v24 = (_QWORD *)v22[6];
          if ( v24 == v19 )
          {
            v25 = 0LL;
          }
          else
          {
            v25 = v24 - 6;
            if ( !v24 )
              v25 = 0LL;
          }
          if ( *(_DWORD *)v22 != 4 )
          {
            v26 = v22[6];
            v27 = (_QWORD *)v22[7];
            if ( *(_QWORD **)(v26 + 8) != v23 || (_QWORD *)*v27 != v23 )
              __fastfail(3u);
            *v27 = v26;
            *(_QWORD *)(v26 + 8) = v27;
            ExFreePoolWithTag(v22, 0);
            --*((_DWORD *)v5 + 50);
          }
          v22 = v25;
        }
        while ( v25 );
      }
    }
  }
  return 0LL;
}
