/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0200364
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0201600 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  _QWORD *v11; // rdx

  v2 = -1073741275;
  if ( *((_DWORD *)this + 60) )
  {
    v3 = (_QWORD *)((char *)this + 248);
    if ( (_QWORD *)*v3 == v3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v4);
    }
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      v6 = v5 - 6;
      if ( !v5 )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          v7 = v6 + 6;
          v8 = (_QWORD *)v6[6];
          if ( v8 == v3 )
          {
            v9 = 0LL;
          }
          else
          {
            v9 = v8 - 6;
            if ( !v8 )
              v9 = 0LL;
          }
          if ( *(_DWORD *)v6 == 4 )
          {
            v10 = v6[6];
            if ( (_QWORD *)v8[1] != v7 || (v11 = (_QWORD *)v6[7], (_QWORD *)*v11 != v7) )
              __fastfail(3u);
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
            ExFreePoolWithTag(v6, 0);
            --*((_DWORD *)this + 60);
            v2 = 0;
            --*((_DWORD *)this + 29);
          }
          v6 = v9;
        }
        while ( v9 );
      }
    }
  }
  return v2;
}
