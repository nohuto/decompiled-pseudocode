/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00FF054
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        __int64 a4)
{
  int v6; // r15d
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 *ThreadProperty; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  int v53; // r8d
  DXGFASTMUTEX *v54; // [rsp+40h] [rbp-30h] BYREF
  char v55; // [rsp+48h] [rbp-28h]
  char v56[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v57; // [rsp+58h] [rbp-18h]
  int v58; // [rsp+60h] [rbp-10h]

  v6 = a4;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v9 = *(_QWORD *)(v8 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v9 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v9 + 144)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, a2, v8, a4);
    *(_QWORD *)(v10 + 24) = 158LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 84) |= 1u;
  if ( !*((_BYTE *)a2 + 225) )
  {
    v11 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v11 + 144) - 5) > 1 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, a2, v8, a4);
      *(_QWORD *)(v12 + 24) = 266LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 432LL)
                                                                         + 8LL)
                                                             + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
            v11 + 96,
            (char *)this + 56);
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v17 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v17 + 144) - 5) > 1 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v9, v13, v15, v16);
        *(_QWORD *)(v18 + 24) = 266LL;
        WdLogEvent5_WdAssertion(v18);
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL)
                                                                                                + 8LL)
                                                                                    + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 592LL),
              v17 + 96,
              *((_QWORD *)this + 7),
              (char *)this + 48,
              v6);
      if ( v14 < 0 )
        return (unsigned int)v14;
    }
    if ( (*((_DWORD *)this + 16) & 0x50) == 0 )
    {
      v19 = *((_QWORD *)this + 4);
      v55 = 0;
      v54 = (DXGFASTMUTEX *)(v19 + 32);
      if ( v19 == -32 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v9, v13, v15, v16);
        *(_QWORD *)(v20 + 24) = 453LL;
        WdLogEvent5_WdAssertion(v20);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v54 + 1) == CurrentThread )
      {
        v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v13, v15, v16);
        *(_QWORD *)(v22 + 24) = 460LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( v55 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v13, v15);
        v23[5] = &v54;
        v23[3] = 275LL;
        v23[4] = 4LL;
        v23[6] = 0LL;
        v23[7] = 0LL;
        WdLogEvent5_WdCriticalError(v23);
      }
      DXGFASTMUTEX::Acquire(v54);
      v27 = *((_QWORD *)this + 4);
      v55 = 1;
      v28 = (*(_DWORD *)(v27 + 148) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v27,
                          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
            + 4)
          : *(_QWORD *)(v27 + 264);
      if ( !v28 )
        goto LABEL_27;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      *((_QWORD *)this + 3) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741801;
        if ( v55 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v54, v30, v31, v32);
        return (unsigned int)v14;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = v28;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                         + 8LL)
                                             + 576LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
        *((_QWORD *)this + 3));
      if ( v55 )
      {
LABEL_27:
        v55 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v54, v24, v25, v26);
      }
    }
  }
  if ( (*((_BYTE *)this + 84) & 4) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v34);
    v40 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        if ( ThreadProperty )
          v40 = *ThreadProperty;
      }
    }
    v57 = v40 + 168;
    if ( v40 != -168 && *(struct _KTHREAD **)(v40 + 176) == KeGetCurrentThread() )
    {
      v42 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
      *(_QWORD *)(v42 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v42);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v40 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v40 + 184);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v43, &EventBlockThread, v44, v45);
      }
      ExAcquirePushLockExclusiveEx(v40 + 168, 0LL);
    }
    *(_QWORD *)(v40 + 176) = KeGetCurrentThread();
    v58 = 2;
    v46 = HMGRTABLE::AllocHandle((unsigned int *)(v40 + 192), (__int64)this, 11LL, 0LL, 0);
    *((_DWORD *)this + 10) = v46;
    v48 = v46;
    if ( !v46 )
    {
      v49 = WdLogNewEntry5_WdLowResource(v47);
      v14 = -1073741801;
      *(_QWORD *)(v49 + 24) = this;
      *(_QWORD *)(v49 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v49);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v56);
      return (unsigned int)v14;
    }
    v51 = (v46 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v51 < *(_DWORD *)(v40 + 208) )
    {
      v52 = *(_QWORD *)(v40 + 192);
      v53 = *(_DWORD *)(v52 + 16 * v51 + 8);
      if ( ((v48 >> 26) & 0x30) == (*(_BYTE *)(v52 + 16 * v51 + 8) & 0x30) && (v53 & 0x1000) == 0 && (v53 & 0xF) != 0 )
        *(_DWORD *)(v52 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    *(_QWORD *)(v40 + 176) = 0LL;
    ExReleasePushLockExclusiveEx(v40 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
