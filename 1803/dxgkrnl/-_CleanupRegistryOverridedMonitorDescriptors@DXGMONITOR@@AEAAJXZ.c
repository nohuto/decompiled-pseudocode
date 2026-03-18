/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02322F4
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02337FC (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rax
  void *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax

  v2 = -1073741275;
  if ( *((_DWORD *)this + 32) )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_DWORD **)(*((_QWORD *)this + 17) + 8 * v4);
      if ( v5 )
      {
        v6 = 0LL;
        do
        {
          if ( v5[2] == 3 )
          {
            v7 = *(_QWORD *)v5;
            v2 = 0;
            if ( v6 )
              *v6 = v7;
            else
              *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v4) = v7;
            v8 = v5;
            v5 = *(_DWORD **)v5;
            operator delete[](v8);
            --*((_DWORD *)this + 33);
          }
          else
          {
            v6 = v5;
            v5 = *(_DWORD **)v5;
          }
        }
        while ( v5 );
      }
      v9 = *((_DWORD *)this + 32);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v9 );
    v10 = 0LL;
    if ( !v9 )
      goto LABEL_21;
    while ( *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v10) )
    {
      v11 = *((_DWORD *)this + 32);
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v11 )
        goto LABEL_20;
    }
    *((_DWORD *)this + 32) = v10;
    v11 = v10;
LABEL_20:
    if ( !v11 )
    {
LABEL_21:
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  else if ( *((_QWORD *)this + 17) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  return v2;
}
