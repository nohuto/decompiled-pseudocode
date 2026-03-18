/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01B2F14 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0187198 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABFE8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ADD08 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADE74 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  void *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  PERESOURCE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v41; // ecx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rax
  _BYTE v48[8]; // [rsp+30h] [rbp-18h] BYREF
  char v49; // [rsp+38h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 401LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this + 2) )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v9);
    return 3221227288LL;
  }
  *((_QWORD *)this + 2) = a2;
  v13 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v13 < 0
    || (v13 = DXGDEVICE::ConfigureSharedResourceWithSharedHandle(
                (PERESOURCE *)a2,
                v11,
                v14,
                *((unsigned int *)this + 1)),
        v13 < 0)
    || (v13 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v13 < 0) )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = PsGetCurrentProcess(v16);
    WdLogEvent5_WdError(v15);
LABEL_12:
    v34 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v34 + 24) = a2;
    *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35);
    WdLogEvent5_WdError(v34);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v36, v37, v38);
    return (unsigned int)v13;
  }
  Global = DXGGLOBAL::GetGlobal(v12, v11, v19, v20);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global, v22, v23);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
  v28 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25, v24, v26, v27);
  v13 = DXGGLOBAL::OpenSyncObject(
          v28,
          *((unsigned int *)this + 2),
          (struct DXGSYNCOBJECT **)this + 14,
          (unsigned int *)this + 26,
          0LL);
  if ( v13 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v32 = *((unsigned int *)this + 2);
    v33 = v31;
    v31[3] = v32;
    v31[4] = a2;
    v31[5] = PsGetCurrentProcess(v32);
    WdLogEvent5_WdError(v33);
    if ( v49 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
    goto LABEL_12;
  }
  v39 = *((unsigned int *)this + 26);
  Current = DXGPROCESS::GetCurrent(v30);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
  v41 = ((unsigned int)v39 >> 6) & 0xFFFFFF;
  if ( v41 < *((_DWORD *)Current + 52) )
  {
    v42 = *((_QWORD *)Current + 24);
    v43 = v41;
    v44 = ((unsigned int)v39 >> 26) & 0x30;
    v45 = *(unsigned int *)(v42 + 16 * v43 + 8);
    if ( (((unsigned int)v39 >> 26) & 0x30) == (*(_BYTE *)(v42 + 16 * v43 + 8) & 0x30) && (v45 & 0xF) != 0 )
    {
      v46 = 2 * ((v39 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v42 + 8 * v46 + 8) & 0x1000) == 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v44, v45, v42, 0xFFFFFFLL);
        *(_QWORD *)(v47 + 24) = 190LL;
        WdLogEvent5_WdAssertion(v47);
      }
      *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v46 + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)Current + 22) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v49 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
  return 0LL;
}
