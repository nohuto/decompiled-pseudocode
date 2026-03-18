/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00D8560
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0039440 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(
        DXGADAPTERSYNCOBJECT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DXGADAPTERSYNCOBJECT *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  DXGADAPTERSYNCOBJECT *v11; // rcx
  DXGADAPTERSYNCOBJECT **v12; // rax
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v4 = this;
  if ( *((_BYTE *)this + 24) )
  {
    v5 = *((_QWORD *)this + 2) + 152LL;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v5 + 24) <= 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v14 + 24) = 351LL;
        WdLogEvent5_WdAssertion(v14);
      }
      ++*(_DWORD *)(v5 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v15 = *(_DWORD *)(v5 + 28);
          if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v10, &EventBlockThread, v8, v15);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5);
        ExAcquirePushLockExclusiveEx(v5 + 16, 0LL);
      }
      if ( *(_QWORD *)(v5 + 8) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v10, v6, v8, v9);
        *(_QWORD *)(v16 + 24) = 375LL;
        WdLogEvent5_WdAssertion(v16);
      }
      if ( *(_DWORD *)(v5 + 24) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v10, v6, v8, v9);
        *(_QWORD *)(v17 + 24) = 376LL;
        WdLogEvent5_WdAssertion(v17);
      }
      *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 24) = 1;
    }
    v11 = *(DXGADAPTERSYNCOBJECT **)v4;
    v12 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)v4 + 1);
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)v4 + 8LL) != v4 || *v12 != v4 )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    if ( *(struct _KTHREAD **)(v5 + 8) != KeGetCurrentThread() )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v6, v8);
      v18[3] = 275LL;
      v18[4] = 4LL;
      v18[5] = v5;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    if ( *(int *)(v5 + 24) <= 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11, v6, v8, v9);
      *(_QWORD *)(v19 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (*(_DWORD *)(v5 + 24))-- == 1 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    this = *(DXGADAPTERSYNCOBJECT **)(*((_QWORD *)v4 + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  }
  if ( *((_QWORD *)v4 + 4) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 1326LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *((_QWORD *)v4 + 2) = 0LL;
}
