/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0095510
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C0095500 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C01A7B40 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_pp @ 0x1C00385F4 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 *ThreadProperty; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v18; // rax
  D3DKMT_HANDLE hSharedHandle; // r14d
  PERESOURCE *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  PERESOURCE *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  DXGGLOBAL *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r14d
  _DWORD *p_hSyncObject; // rdx
  unsigned __int64 v39; // rbx
  struct DXGSYNCOBJECT *v40; // r15
  DXGGLOBAL *Global; // rax
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  struct DXGADAPTERSYNCOBJECT *v50; // [rsp+38h] [rbp-40h] BYREF
  PERESOURCE *v51; // [rsp+40h] [rbp-38h] BYREF
  char v52; // [rsp+48h] [rbp-30h]
  unsigned int v53; // [rsp+90h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v54; // [rsp+98h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2050);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v12 = *ThreadProperty;
    }
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v18 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v18 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v18->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v54 = 0LL;
    v50 = 0LL;
    v53 = 0;
    v20 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v21 = WdLogNewEntry5_WdAssertion(0LL, v8, v10, v11);
      *(_QWORD *)(v21 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v21);
      v20 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    }
    v51 = v20;
    v52 = 0;
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdAssertion(0LL, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = 1823LL;
      WdLogEvent5_WdAssertion(v22);
      v20 = v51;
    }
    if ( ExIsResourceAcquiredSharedLite(v20[42]) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = 1828LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v52 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
      v28[3] = 275LL;
      v28[4] = 4LL;
      v28[5] = &v51;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    v29 = v51;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v29[42], 1u);
    v52 = 1;
    v33 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v34 = WdLogNewEntry5_WdAssertion(0LL, v30, v31, v32);
      *(_QWORD *)(v34 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v34);
      v33 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
    }
    v37 = DXGGLOBAL::OpenSyncObject(v33, hSharedHandle, &v54, &v53, &v50);
    if ( v52 )
    {
      v52 = 0;
      ExReleaseResourceLite(v51[42]);
      KeLeaveCriticalRegion();
    }
    if ( v37 < 0 )
    {
      v39 = v53;
    }
    else if ( a2 )
    {
      p_hSyncObject = &a1->hSyncObject;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      v39 = v53;
      *p_hSyncObject = v53;
    }
    else
    {
      v39 = v53;
      a1->hSyncObject = v53;
    }
    if ( v37 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v42 = v50 ? *((_QWORD *)v50 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pp(v35, &EventOpenSyncObject, v36, v42, (unsigned int)v39);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 168));
      v44 = ((unsigned int)v39 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 < *(_DWORD *)(v12 + 208) )
      {
        v45 = *(_QWORD *)(v12 + 192);
        v46 = *(unsigned int *)(v45 + 16 * v44 + 8);
        v47 = ((unsigned int)v39 >> 26) & 0x30;
        if ( (((unsigned int)v39 >> 26) & 0x30) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x30) && (v46 & 0xF) != 0 )
        {
          v48 = 2 * ((v39 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v45 + 8 * v48 + 8) & 0x1000) == 0 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v47, v46, v45, v43);
            *(_QWORD *)(v49 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v49);
          }
          *(_DWORD *)(*(_QWORD *)(v12 + 192) + 8 * v48 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(v12 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 168, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v40 = v54;
      if ( v54 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v40, v39);
      }
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v35, &EventProfilerExit, v36, 2050);
    return (unsigned int)v37;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2050);
    return 3221225485LL;
  }
}
