/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01E5DAC
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01E7A18 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v5 = -1073741275;
  if ( *((_DWORD *)this + 50) )
  {
    v6 = (_QWORD *)((char *)this + 208);
    if ( (_QWORD *)*v6 == v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      v9 = v8 - 6;
      if ( !v8 )
        v9 = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = v9 + 6;
          v11 = (_QWORD *)v9[6];
          if ( v11 == v6 )
          {
            v12 = 0LL;
          }
          else
          {
            v12 = v11 - 6;
            if ( !v11 )
              v12 = 0LL;
          }
          if ( *(_DWORD *)v9 == 4 )
          {
            v13 = v9[6];
            v14 = (_QWORD *)v9[7];
            if ( *(_QWORD **)(v13 + 8) != v10 || (_QWORD *)*v14 != v10 )
              __fastfail(3u);
            *v14 = v13;
            *(_QWORD *)(v13 + 8) = v14;
            ExFreePoolWithTag(v9, 0);
            --*((_DWORD *)this + 50);
            v5 = 0;
            --*((_DWORD *)this + 29);
          }
          v9 = v12;
        }
        while ( v12 );
      }
    }
  }
  return v5;
}
