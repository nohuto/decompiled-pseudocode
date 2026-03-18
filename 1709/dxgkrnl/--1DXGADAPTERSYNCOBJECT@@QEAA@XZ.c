/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C008C460
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0029888 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  DXGADAPTERSYNCOBJECT *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  DXGADAPTERSYNCOBJECT *v7; // rax
  DXGADAPTERSYNCOBJECT **v8; // rcx
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v1 = this;
  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2) + 152LL;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v2 + 24) <= 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v10 + 24) = 362LL;
        WdLogEvent5_WdAssertion(v10);
      }
      ++*(_DWORD *)(v2 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v11 = *(_DWORD *)(v2 + 28);
          if ( v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v6, &EventBlockThread, v5, v11);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2);
        ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
      }
      if ( *(_QWORD *)(v2 + 8) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v12 + 24) = 386LL;
        WdLogEvent5_WdAssertion(v12);
      }
      if ( *(_DWORD *)(v2 + 24) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v13 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v13);
      }
      *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 24) = 1;
    }
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
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v3, v5);
      v14[3] = 275LL;
      v14[4] = 4LL;
      v14[5] = v2;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    if ( *(int *)(v2 + 24) <= 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v15 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( (*(_DWORD *)(v2 + 24))-- == 1 )
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
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1349LL;
    WdLogEvent5_WdAssertion(v16);
  }
  *((_QWORD *)v1 + 2) = 0LL;
}
