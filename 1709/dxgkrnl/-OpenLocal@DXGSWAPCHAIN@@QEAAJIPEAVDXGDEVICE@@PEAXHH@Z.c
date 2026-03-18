/*
 * XREFs of ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01D7080 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01D7820 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016F7BC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        void *a4,
        int a5,
        int a6)
{
  int v8; // r12d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char *v22; // r14
  __int64 v23; // rax
  struct _KEVENT *v24; // rcx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rcx
  unsigned int v32; // r12d
  __int64 v33; // rbx
  PERESOURCE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGPROCESS *Current; // r15
  struct DXGSYNCOBJECT *v38; // rbx
  int v39; // r13d
  unsigned int v40; // ecx
  __int64 v41; // r8
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct DXGSYNCOBJECT *v50; // [rsp+38h] [rbp-38h] BYREF
  __int64 v51; // [rsp+40h] [rbp-30h]
  _BYTE v52[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v53[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v53, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
  if ( !*((_DWORD *)this + 11) )
  {
    v22 = (char *)this + (a6 != 0 ? 128LL : 80LL);
    if ( *((_QWORD *)v22 + 2) )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v23 + 24) = this;
      *(_QWORD *)(v23 + 32) = a6;
      WdLogEvent5_WdWarning(v23);
      v10 = -1073740008;
      goto LABEL_31;
    }
    *((_QWORD *)v22 + 2) = PsGetCurrentProcess(v19, v18);
    *(_DWORD *)v22 = v8;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 268LL) != *((_QWORD *)this + 23) )
    {
      v48 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v48 + 24) = this;
      WdLogEvent5_WdError(v48);
      v10 = -1073741811;
      goto LABEL_31;
    }
    *((_DWORD *)v22 + 6) = a5;
    if ( a4 )
    {
      if ( a5 )
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = 1588LL;
        WdLogEvent5_WdError(v25);
        v10 = -1073741822;
        goto LABEL_29;
      }
      v26 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v24 = (struct _KEVENT *)Object;
      v10 = v26;
      *((_QWORD *)v22 + 4) = Object;
      if ( v26 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v27 + 24) = a4;
        *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v29, v28);
        WdLogEvent5_WdError(v27);
        goto LABEL_28;
      }
      if ( !a6 )
        KeSetEvent(v24, 2, 0);
    }
    Global = DXGGLOBAL::GetGlobal((__int64)v24);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v52, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v52);
    v32 = 0;
    if ( *((_DWORD *)this + 10) )
    {
      while ( 1 )
      {
        v33 = *((_QWORD *)this + 7);
        v51 = 56LL * v32;
        v34 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v31);
        v10 = DXGGLOBAL::OpenSyncObject(v34, *(_DWORD *)(56LL * v32 + v33 + 20), &v50, (unsigned int *)&Object, 0LL);
        if ( v10 < 0 )
          break;
        Current = DXGPROCESS::GetCurrent(v36, v35);
        v38 = (struct DXGPROCESS *)((char *)Current + 200);
        v50 = (struct DXGPROCESS *)((char *)Current + 200);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
        v39 = (int)Object;
        v40 = ((unsigned int)Object >> 6) & 0xFFFFFF;
        if ( v40 < *((_DWORD *)Current + 60) )
        {
          v41 = *((_QWORD *)Current + 28);
          if ( (((unsigned int)Object >> 25) & 0x60) == (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0x60)
            && (*(_DWORD *)(v41 + 16LL * v40 + 8) & 0x1F) != 0 )
          {
            v42 = 2 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v41 + 16 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v43 = WdLogNewEntry5_WdAssertion(((unsigned int)Object >> 25) & 0x60);
              *(_QWORD *)(v43 + 24) = 191LL;
              WdLogEvent5_WdAssertion(v43);
            }
            *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v42 + 8) &= ~0x2000u;
            v38 = v50;
          }
        }
        *((_QWORD *)v38 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v38, 0LL);
        KeLeaveCriticalRegion();
        ++v32;
        v31 = v51 + 16LL * *((int *)v22 + 7);
        *(_DWORD *)(v31 + *((_QWORD *)this + 7) + 28) = v39;
        if ( v32 >= *((_DWORD *)this + 10) )
          goto LABEL_26;
      }
      v44 = WdLogNewEntry5_WdError(v36);
      v45 = *((_QWORD *)this + 7);
      v46 = v44;
      v47 = *(unsigned int *)(56LL * v32 + v45 + 20);
      *(_QWORD *)(v44 + 24) = v47;
      *(_QWORD *)(v44 + 32) = PsGetCurrentProcess(v45, v47);
      WdLogEvent5_WdError(v46);
    }
LABEL_26:
    if ( v52[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
LABEL_28:
    if ( v10 >= 0 )
      goto LABEL_31;
LABEL_29:
    DXGSWAPCHAIN::DestroyLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v22);
    goto LABEL_31;
  }
  v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdWarning(v21);
  v10 = -1073741738;
LABEL_31:
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v53);
  return (unsigned int)v10;
}
