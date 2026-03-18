/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C75B0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01CCCCC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C0093178 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C5A48 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C783C (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  bool v33; // zf
  _BYTE v34[8]; // [rsp+60h] [rbp-18h] BYREF
  char v35; // [rsp+68h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = *((_QWORD *)this + 1);
    WdLogEvent5_WdError(v6);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v9 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v9 < 0
    || (v9 = DXGDEVICE::ConfigureSharedResourceHelper(
               (PERESOURCE *)a2,
               0LL,
               (void *)0xFFFFFFFFFFFFFFFFLL,
               *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
               1u,
               0),
        v9 < 0)
    || (v9 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v9 < 0) )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
LABEL_12:
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess(v23, v22);
    WdLogEvent5_WdError(v21);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v24);
    return (unsigned int)v9;
  }
  Global = DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v34, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v34);
  v9 = DXGSYNCOBJECT::Open(
         *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
         0LL,
         0LL,
         0LL,
         (unsigned int *)this + 24,
         0LL,
         0LL,
         0,
         0LL,
         0,
         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( v9 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v18 = *(_QWORD *)this;
    v19 = v17;
    v20 = *(_QWORD *)(*(_QWORD *)this + 32LL);
    v17[3] = v20;
    v17[4] = a2;
    v17[5] = PsGetCurrentProcess(v18, v20);
    WdLogEvent5_WdError(v19);
    if ( v35 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v34);
    goto LABEL_12;
  }
  v25 = *((unsigned int *)this + 24);
  Current = DXGPROCESS::GetCurrent(v16, v15);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
  v27 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
  if ( v27 < *((_DWORD *)Current + 60) )
  {
    v28 = *((_QWORD *)Current + 28);
    v29 = v27;
    v30 = ((unsigned int)v25 >> 25) & 0x60;
    if ( (((unsigned int)v25 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v29 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16 * v29 + 8) & 0x1F) != 0 )
    {
      v31 = 2 * ((v25 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v28 + 8 * v31 + 8) & 0x2000) == 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v32 + 24) = 191LL;
        WdLogEvent5_WdAssertion(v32);
      }
      *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v31 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 26) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  v33 = v35 == 0;
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( !v33 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v34);
  return 0LL;
}
