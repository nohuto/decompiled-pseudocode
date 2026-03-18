/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C01DEDF4
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0pqp @ 0x1C0037F34 (McTemplateK0pqp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0145FF8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  PVOID v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  PERESOURCE *Global; // rax
  __int64 v27; // rcx
  PERESOURCE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  struct DXGPROCESS *Current; // rsi
  unsigned int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // rdx
  int v40; // r8d
  __int64 v41; // rax
  bool v42; // zf
  PVOID *Object; // [rsp+20h] [rbp-40h]
  char v44; // [rsp+38h] [rbp-28h]
  __int64 v45; // [rsp+40h] [rbp-20h] BYREF
  struct DXGSYNCOBJECT *v46; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v47[8]; // [rsp+50h] [rbp-10h] BYREF
  char v48; // [rsp+58h] [rbp-8h]
  unsigned int v49; // [rsp+90h] [rbp+30h] BYREF
  PVOID v50; // [rsp+98h] [rbp+38h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2039LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  v9 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v50, 0LL);
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_4;
  v14 = v50;
  if ( v50 )
  {
    v15 = *((_QWORD *)v50 + 2);
    if ( v15 )
    {
      v16 = (__int64 *)(v15 + 128);
      v17 = 0LL;
      v18 = *v16;
      if ( (__int64 *)*v16 != v16 )
        v17 = *(_QWORD *)(v18 - 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      {
        LODWORD(Object) = (a2 - this[7]) / 96;
        McTemplateK0pqp(v18, (a2 - this[7]) / 96, v17, this, Object, v17);
      }
    }
  }
  ObfDereferenceObject(v14);
  CurrentProcess = PsGetCurrentProcess(v20, v19);
  v24 = PsGetCurrentProcess(v23, v22);
  v44 = 1;
  v25 = ObDuplicateObject(v24, a4, CurrentProcess, &v45, 0, 0, 6, v44);
  v11 = v25;
  if ( v25 < 0 )
  {
LABEL_4:
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = a4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  else
  {
    *((_QWORD *)a3 + 3) = v45;
    *((_QWORD *)a3 + 2) = a4;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
    v28 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v27);
    v31 = DXGGLOBAL::OpenSyncObject(v28, *((_DWORD *)a2 + 7), &v46, &v49, 0LL);
    if ( v31 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v30, v29);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v37 = v49;
      v38 = (v49 >> 6) & 0xFFFFFF;
      if ( v38 < *((_DWORD *)Current + 62) )
      {
        v39 = *((_QWORD *)Current + 29);
        v40 = *(_DWORD *)(v39 + 16LL * v38 + 8);
        if ( ((v49 >> 25) & 0x60) == (v40 & 0x60) && (v40 & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v39 + 16 * (((unsigned __int64)v49 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion((v49 >> 25) & 0x60);
            *(_QWORD *)(v41 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v41);
            v39 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v39 + 16 * (((unsigned __int64)v37 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v42 = v48 == 0;
      *((_DWORD *)a3 + 2) = v37;
      if ( !v42 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
      *(_BYTE *)a3 = 1;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v30);
      v33 = *((unsigned int *)a2 + 7);
      v34 = v32;
      *(_QWORD *)(v32 + 24) = v33;
      *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v33, v35);
      WdLogEvent5_WdError(v34);
      if ( v48 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    }
    return (unsigned int)v31;
  }
}
