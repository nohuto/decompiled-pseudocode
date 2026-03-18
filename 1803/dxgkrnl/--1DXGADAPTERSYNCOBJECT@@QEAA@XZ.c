/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00FA7D0
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0034974 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  DXGADAPTERSYNCOBJECT *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  DXGADAPTERSYNCOBJECT *v7; // rcx
  DXGADAPTERSYNCOBJECT **v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v1 = this;
  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2) + 152LL;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread() )
    {
      v11 = *(_DWORD *)(v2 + 24);
      if ( v11 <= 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v12 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v12);
        v11 = *(_DWORD *)(v2 + 24);
      }
      v6 = v11 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v13 = *(_DWORD *)(v2 + 28);
          if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v4, &EventBlockThread, v5, v13);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2);
        ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
      }
      if ( *(_QWORD *)(v2 + 8) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v14 + 24) = 430LL;
        WdLogEvent5_WdAssertion(v14);
      }
      if ( *(_DWORD *)(v2 + 24) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v15 + 24) = 431LL;
        WdLogEvent5_WdAssertion(v15);
      }
      *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
      v6 = 1;
    }
    *(_DWORD *)(v2 + 24) = v6;
    v7 = *(DXGADAPTERSYNCOBJECT **)v1;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)v1 + 8LL) != v1
      || (v8 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)v1 + 1), *v8 != v1) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    if ( *(struct _KTHREAD **)(v2 + 8) != KeGetCurrentThread() )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
      v16[3] = 275LL;
      v16[4] = 4LL;
      v16[5] = v2;
      v16[6] = 0LL;
      v16[7] = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    v9 = *(_DWORD *)(v2 + 24);
    if ( v9 <= 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v17 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v17);
      v9 = *(_DWORD *)(v2 + 24);
    }
    v10 = v9 - 1;
    *(_DWORD *)(v2 + 24) = v10;
    if ( !v10 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v2 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    this = *(DXGADAPTERSYNCOBJECT **)(*((_QWORD *)v1 + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  }
  if ( *((_QWORD *)v1 + 4) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 1475LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *((_QWORD *)v1 + 2) = 0LL;
}
