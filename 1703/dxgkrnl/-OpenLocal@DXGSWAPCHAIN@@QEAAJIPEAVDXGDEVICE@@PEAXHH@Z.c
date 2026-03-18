/*
 * XREFs of ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01BD8EC
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01BF0A0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01BCB60 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenLocal(DXGSWAPCHAIN *this, int a2, struct DXGDEVICE *a3, void *a4, int a5, int a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  char *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int v45; // r15d
  __int64 v46; // rbx
  PERESOURCE *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGSYNCOBJECT *v51; // rbx
  int v52; // r12d
  unsigned int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct DXGSYNCOBJECT *v62; // [rsp+38h] [rbp-38h] BYREF
  __int64 v63; // [rsp+40h] [rbp-30h]
  _BYTE v64[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v65[24]; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = PsGetCurrentProcess(v16);
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v65, this, v13, v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
  if ( !*((_DWORD *)this + 11) )
  {
    v26 = a6 != 0 ? 0x38 : 0;
    v27 = (char *)this + v26 + 72;
    if ( *((_QWORD *)v27 + 2) )
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v18, v20, v21);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = a6;
      WdLogEvent5_WdWarning(v28);
      v10 = -1073740008;
      goto LABEL_36;
    }
    *((_QWORD *)v27 + 2) = PsGetCurrentProcess(v26);
    *(_DWORD *)v27 = a2;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 268LL) != *((_QWORD *)this + 24) )
    {
      v60 = WdLogNewEntry5_WdError(v30, v29);
      *(_QWORD *)(v60 + 24) = this;
      WdLogEvent5_WdError(v60);
      v10 = -1073741811;
      goto LABEL_36;
    }
    *((_DWORD *)v27 + 6) = a5;
    v31 = operator new(8uLL, 0x4B677844u, PagedPool);
    if ( v31 )
    {
      v33 = (unsigned int)(*((_DWORD *)this + 10) - 1);
      *v31 = 0;
      v31[1] = v33;
    }
    else
    {
      v31 = 0LL;
    }
    *((_QWORD *)v27 + 4) = v31;
    if ( !v31 )
    {
      v36 = WdLogNewEntry5_WdLowResource(v33);
      *(_QWORD *)(v36 + 24) = 1510LL;
      WdLogEvent5_WdLowResource(v36);
      v10 = -1073741801;
      goto LABEL_36;
    }
    if ( a4 )
    {
      if ( *((_DWORD *)v27 + 6) )
      {
        v37 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v37 + 24) = 1519LL;
        WdLogEvent5_WdError(v37);
        v10 = -1073741822;
        goto LABEL_34;
      }
      v38 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v33 = (__int64)Object;
      v10 = v38;
      *((_QWORD *)v27 + 6) = Object;
      if ( v38 < 0 )
      {
        v39 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v39 + 24) = a4;
        *(_QWORD *)(v39 + 32) = PsGetCurrentProcess(v40);
        WdLogEvent5_WdError(v39);
        goto LABEL_33;
      }
      if ( !a6 )
        KeSetEvent((PRKEVENT)v33, 2, 0);
    }
    Global = DXGGLOBAL::GetGlobal(v33, v32, v34, v35);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, Global, v42, v43);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
    v45 = 0;
    if ( *((_DWORD *)this + 10) )
    {
      while ( 1 )
      {
        v46 = *((_QWORD *)this + 6);
        v63 = 56LL * v45;
        v47 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v44, v23, v24, v25);
        v10 = DXGGLOBAL::OpenSyncObject(
                v47,
                *(unsigned int *)(56LL * v45 + v46 + 20),
                &v62,
                (unsigned int *)&Object,
                0LL);
        if ( v10 < 0 )
          break;
        Current = DXGPROCESS::GetCurrent(v49);
        v51 = (struct DXGPROCESS *)((char *)Current + 168);
        v62 = (struct DXGPROCESS *)((char *)Current + 168);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
        v52 = (int)Object;
        v53 = ((unsigned int)Object >> 6) & 0xFFFFFF;
        if ( v53 < *((_DWORD *)Current + 52) )
        {
          v54 = *((_QWORD *)Current + 24);
          v55 = *(unsigned int *)(v54 + 16LL * v53 + 8);
          if ( (((unsigned int)Object >> 26) & 0x30) == (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0x30) && (v55 & 0xF) != 0 )
          {
            v56 = 2 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v54 + 16 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
            {
              v57 = WdLogNewEntry5_WdAssertion(((unsigned int)Object >> 26) & 0x30, v55, v54, 0xFFFFFFLL);
              *(_QWORD *)(v57 + 24) = 190LL;
              WdLogEvent5_WdAssertion(v57);
            }
            *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v56 + 8) &= ~0x1000u;
            v51 = v62;
          }
        }
        *((_QWORD *)v51 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v51, 0LL);
        KeLeaveCriticalRegion();
        ++v45;
        v44 = v63 + 16LL * *((int *)v27 + 10);
        *(_DWORD *)(v44 + *((_QWORD *)this + 6) + 28) = v52;
        if ( v45 >= *((_DWORD *)this + 10) )
          goto LABEL_31;
      }
      v58 = WdLogNewEntry5_WdError(v49, v48);
      v59 = *((_QWORD *)this + 6);
      *(_QWORD *)(v58 + 24) = *(unsigned int *)(56LL * v45 + v59 + 20);
      *(_QWORD *)(v58 + 32) = PsGetCurrentProcess(v59);
      WdLogEvent5_WdError(v58);
    }
LABEL_31:
    if ( v64[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64);
LABEL_33:
    if ( v10 >= 0 )
      goto LABEL_36;
LABEL_34:
    DXGSWAPCHAIN::DestroyLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v27);
    goto LABEL_36;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v22 + 24) = this;
  WdLogEvent5_WdWarning(v22);
  v10 = -1073741738;
LABEL_36:
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v65, v23, v24, v25);
  return (unsigned int)v10;
}
