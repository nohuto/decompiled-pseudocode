/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00EDA00
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00ED9E0 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C01C18A0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C00287B0 (McTemplateK0ppp.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016F7BC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r12d
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  ULONG64 v8; // rcx
  __int64 v9; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v16; // rax
  D3DKMT_HANDLE hSharedHandle; // r14d
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  PERESOURCE *v26; // rbx
  __int64 v27; // rcx
  DXGGLOBAL *v28; // rax
  ULONG64 v29; // rcx
  __int64 v30; // r8
  int v31; // r14d
  _DWORD *p_hSyncObject; // rdx
  unsigned __int64 v33; // rbx
  struct DXGSYNCOBJECT *v34; // r15
  PERESOURCE *v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  struct DXGADAPTERSYNCOBJECT *v42; // [rsp+38h] [rbp-40h] BYREF
  PERESOURCE *v43; // [rsp+40h] [rbp-38h] BYREF
  char v44; // [rsp+48h] [rbp-30h]
  unsigned int v45; // [rsp+90h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v46; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2050);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  if ( v9 )
  {
    if ( v3 )
    {
      v8 = MmUserProbeAddress;
      v16 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v16 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v16->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v46 = 0LL;
    v42 = 0LL;
    v45 = 0;
    Global = DXGGLOBAL::GetGlobal(v8);
    v43 = (PERESOURCE *)Global;
    v44 = 0;
    if ( !Global )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v20 + 24) = 1946LL;
      WdLogEvent5_WdAssertion(v20);
      Global = (struct DXGGLOBAL *)v43;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = 1951LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v44 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
      v25[3] = 275LL;
      v25[4] = 4LL;
      v25[5] = &v43;
      v25[6] = 0LL;
      v25[7] = 0LL;
      WdLogEvent5_WdCriticalError(v25);
    }
    v26 = v43;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v26[42], 1u);
    v44 = 1;
    v28 = DXGGLOBAL::GetGlobal(v27);
    v31 = DXGGLOBAL::OpenSyncObject(v28, hSharedHandle, &v46, &v45, &v42);
    if ( v44 )
    {
      v44 = 0;
      ExReleaseResourceLite(v43[42]);
      KeLeaveCriticalRegion();
    }
    if ( v31 < 0 )
    {
      v33 = v45;
    }
    else if ( v3 )
    {
      p_hSyncObject = &a1->hSyncObject;
      v29 = MmUserProbeAddress;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      v33 = v45;
      *p_hSyncObject = v45;
    }
    else
    {
      v33 = v45;
      a1->hSyncObject = v45;
    }
    if ( v31 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v36 = v42 ? *((_QWORD *)v42 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp(v29, &EventOpenSyncObject, v30, v36, (unsigned int)v33, 0LL, v9);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 200));
      v37 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v37 < *(_DWORD *)(v9 + 240) )
      {
        v38 = *(_QWORD *)(v9 + 224);
        v39 = ((unsigned int)v33 >> 25) & 0x60;
        if ( (((unsigned int)v33 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
          && (*(_DWORD *)(v38 + 16 * v37 + 8) & 0x1F) != 0 )
        {
          v40 = 2 * ((v33 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v38 + 8 * v40 + 8) & 0x2000) == 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v39);
            *(_QWORD *)(v41 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v41);
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 224) + 8 * v40 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v9 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v34 = v46;
      if ( v46 )
      {
        v35 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v29);
        DXGGLOBAL::DestroySyncObject(v35, v34, v33);
      }
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, 2050);
    return (unsigned int)v31;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, 2050);
    return 3221225485LL;
  }
}
