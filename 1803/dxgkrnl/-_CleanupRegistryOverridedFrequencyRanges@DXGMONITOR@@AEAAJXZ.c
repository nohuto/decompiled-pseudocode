/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0232210
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  DXGMONITOR **v3; // rbx
  DXGMONITOR *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r8

  v2 = -1073741275;
  if ( *((_DWORD *)this + 64) )
  {
    v3 = (DXGMONITOR **)((char *)this + 264);
    v4 = (DXGMONITOR *)*((_QWORD *)this + 33);
    if ( v4 != (DXGMONITOR *)((char *)this + 264)
      || (v5 = WdLogNewEntry5_WdAssertion(this), WdLogEvent5_WdAssertion(v5), v4 = *v3, *v3 != (DXGMONITOR *)v3) )
    {
      v6 = (_QWORD *)((char *)v4 - 48);
      if ( !v4 )
        v6 = 0LL;
      if ( v6 )
      {
        do
        {
          v7 = v6 + 6;
          v8 = v6[6];
          if ( (DXGMONITOR **)v8 == v3 )
          {
            v9 = 0LL;
          }
          else
          {
            v9 = (_QWORD *)(v8 - 48);
            if ( !v8 )
              v9 = 0LL;
          }
          if ( *(_DWORD *)v6 == 4 )
          {
            if ( *(_QWORD **)(v8 + 8) != v7 || (v10 = (_QWORD *)v6[7], (_QWORD *)*v10 != v7) )
              __fastfail(3u);
            *v10 = v8;
            *(_QWORD *)(v8 + 8) = v10;
            operator delete(v6);
            --*((_DWORD *)this + 64);
            v2 = 0;
            --*((_DWORD *)this + 33);
          }
          v6 = v9;
        }
        while ( v9 );
      }
    }
  }
  return v2;
}
