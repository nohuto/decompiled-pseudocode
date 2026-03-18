/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000E090 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00FEA04 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C002B000 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00FF4D8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  DXGDEVICESYNCOBJECT *v7; // rcx
  DXGDEVICESYNCOBJECT **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *v27; // rcx
  __int64 v28; // rax
  __int64 *ThreadProperty; // rax
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax

  if ( (*((_BYTE *)this + 84) & 2) != 0 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( !*(_DWORD *)(v5 + 72)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 104))
      && !*(_BYTE *)(v5 + 1857) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
      *(_QWORD *)(v28 + 24) = 7330LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v7 = *(DXGDEVICESYNCOBJECT **)this;
    v8 = (DXGDEVICESYNCOBJECT **)*((_QWORD *)this + 1);
    if ( *(DXGDEVICESYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v8 != this )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
  }
  DXGDEVICESYNCOBJECT::DestroyCoreState(this, a2, a3, a4);
  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v14);
    v20 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        if ( ThreadProperty )
          v20 = *ThreadProperty;
      }
    }
    if ( v20 != -168 && *(struct _KTHREAD **)(v20 + 176) == KeGetCurrentThread() )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v30 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *(_DWORD *)(v20 + 184);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v21, &EventBlockThread, v22, v31);
      }
      ExAcquirePushLockExclusiveEx(v20 + 168, 0LL);
    }
    *(_QWORD *)(v20 + 176) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v20 + 192), *((unsigned int *)this + 10), v22, v23);
    *((_DWORD *)this + 10) = 0;
    *(_QWORD *)(v20 + 176) = 0LL;
    ExReleasePushLockExclusiveEx(v20 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_QWORD *)this + 7) )
  {
    v24 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v24 + 225) )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      if ( (unsigned int)(*(_DWORD *)(v24 + 144) - 5) > 1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v32 + 24) = 266LL;
        WdLogEvent5_WdAssertion(v32);
      }
      v25 = *((_QWORD *)this + 2);
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 64LL);
      if ( v26 )
        v26 = *(_QWORD *)(v26 + 8);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 432LL) + 8LL) + 944LL))(
        v26,
        v24 + 96);
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    v27 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v33 = WdLogNewEntry5_WdAssertion(0LL, v9, v11, v12);
      *(_QWORD *)(v33 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v33);
      v27 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v27, *((struct DXGSYNCOBJECT **)this + 4), 0LL, v12);
  }
  *((_QWORD *)this + 2) = 0LL;
}
