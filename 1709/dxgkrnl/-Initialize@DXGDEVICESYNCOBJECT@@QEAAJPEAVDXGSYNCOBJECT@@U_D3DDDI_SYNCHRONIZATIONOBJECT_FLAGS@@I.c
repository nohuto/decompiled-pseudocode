/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00AFDC0
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v40; // rax
  __int64 v41; // r9
  int v42; // r8d
  DXGFASTMUTEX *v43; // [rsp+40h] [rbp-30h] BYREF
  char v44; // [rsp+48h] [rbp-28h]
  char v45[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v46; // [rsp+58h] [rbp-18h]
  int v47; // [rsp+60h] [rbp-10h]

  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 84) |= 1u;
  if ( !*((_BYTE *)a2 + 241) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v10 + 160) - 5) > 1 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v11 + 24) = 329LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 528LL)
                                                                         + 8LL)
                                                             + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
            v10 + 112,
            (char *)this + 56);
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v14 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v14 + 160) - 5) > 1 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v15 + 24) = 329LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL)
                                                                                                + 8LL)
                                                                                    + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 536LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 592LL),
              v14 + 112,
              *((_QWORD *)this + 7),
              (char *)this + 48,
              a4);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    if ( (*((_DWORD *)this + 16) & 0x50) == 0 )
    {
      v16 = *((_QWORD *)this + 4);
      v44 = 0;
      v43 = (DXGFASTMUTEX *)(v16 + 32);
      if ( v16 == -32 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v17 + 24) = 464LL;
        WdLogEvent5_WdAssertion(v17);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v43 + 1) == CurrentThread )
      {
        v19 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v19 + 24) = 471LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( v44 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, v13);
        v20[5] = &v43;
        v20[3] = 275LL;
        v20[4] = 4LL;
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
      }
      DXGFASTMUTEX::Acquire(v43);
      v21 = *((_QWORD *)this + 4);
      v44 = 1;
      v22 = (*(_DWORD *)(v21 + 164) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v21,
                          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
            + 4)
          : *(_QWORD *)(v21 + 280);
      if ( !v22 )
        goto LABEL_27;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      *((_QWORD *)this + 3) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
        if ( v44 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v43);
        return (unsigned int)v12;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = v22;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL)
                                                         + 8LL)
                                             + 576LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
        *((_QWORD *)this + 3));
      if ( v44 )
LABEL_27:
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v43);
    }
  }
  if ( (*((_BYTE *)this + 84) & 4) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v8, a2);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v25);
    v28 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v30 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v28 = *v30;
        }
      }
    }
    v46 = v28 + 200;
    if ( v28 != -200 && *(struct _KTHREAD **)(v28 + 208) == KeGetCurrentThread() )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v31 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v31);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *(_DWORD *)(v28 + 216);
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v32, &EventBlockThread, v33, v34);
      }
      ExAcquirePushLockExclusiveEx(v28 + 200, 0LL);
    }
    *(_QWORD *)(v28 + 208) = KeGetCurrentThread();
    v47 = 2;
    v35 = HMGRTABLE::AllocHandle((unsigned int *)(v28 + 224), (__int64)this, 11, 0, 0);
    *((_DWORD *)this + 10) = v35;
    v37 = v35;
    if ( !v35 )
    {
      v38 = WdLogNewEntry5_WdLowResource(v36);
      v12 = -1073741801;
      *(_QWORD *)(v38 + 24) = this;
      *(_QWORD *)(v38 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v38);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
      return (unsigned int)v12;
    }
    v40 = (v35 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v40 < *(_DWORD *)(v28 + 240) )
    {
      v41 = *(_QWORD *)(v28 + 224);
      v42 = *(_DWORD *)(v41 + 16 * v40 + 8);
      if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
        *(_DWORD *)(v41 + 16 * (((unsigned __int64)v37 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    *(_QWORD *)(v28 + 208) = 0LL;
    ExReleasePushLockExclusiveEx(v28 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
