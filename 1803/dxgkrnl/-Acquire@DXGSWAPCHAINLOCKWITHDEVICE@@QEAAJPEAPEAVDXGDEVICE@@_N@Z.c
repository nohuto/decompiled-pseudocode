/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01DD6D8
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01DFEC4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C01E02F0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C01E0790 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C01E1E70 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C01E20F0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0037774 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C01DF55C (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v17; // rbp
  char *v18; // r15
  int v19; // esi
  __int64 v20; // r8
  signed __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // rbp
  unsigned __int8 v32; // bp
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v42; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+40h] [rbp-38h]
  char v44; // [rsp+48h] [rbp-30h]

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v9 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v9 + 40) )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v12 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v13 = *(_QWORD *)(v12 + v9 + 104);
    if ( PsGetCurrentProcess(v12, v6) != v13 )
    {
      v15 = WdLogNewEntry5_WdWarning(v7, v6, v14);
      *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v15 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v15);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v17 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v18 = (char *)Current + 208;
    v19 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    LOBYTE(v21) = -*((_BYTE *)this + 16);
    v22 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v23 = *(unsigned int *)(v22 + *((_QWORD *)this + 1) + 88);
    v24 = (*(_DWORD *)(v22 + *((_QWORD *)this + 1) + 88) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)v17 + 62)
      && (v20 = *((_QWORD *)v17 + 29),
          v21 = ((unsigned int)v23 >> 25) & 0x60,
          v22 = *(unsigned int *)(v20 + 16 * v24 + 8),
          (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v24 + 8) & 0x60))
      && (v22 & 0x2000) == 0
      && (v22 & 0x1F) != 0
      && (v22 &= 0x1Fu, (_BYTE)v22 == 3) )
    {
      v25 = *(_QWORD *)(v20 + 16LL * (unsigned int)v24);
      if ( v25 )
      {
        _m_prefetchw((const void *)(v25 + 64));
        v26 = *(_QWORD *)(v25 + 64);
        while ( v26 )
        {
          v21 = v26 + 1;
          v27 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 64), v26 + 1, v26);
          if ( v27 == v26 )
            goto LABEL_17;
        }
        v25 = 0LL;
LABEL_17:
        if ( v25 )
        {
          *((_BYTE *)this + 42) = 1;
          *((_QWORD *)this + 6) = v25;
LABEL_21:
          ExReleasePushLockSharedEx(v18, 0LL);
          KeLeaveCriticalRegion();
          if ( v25 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v31 = (struct _KEVENT *)(*(_QWORD *)(v25 + 16) + 72LL);
            if ( !KeReadStateEvent(v31) )
              KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v25 + 104), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 96LL));
              v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v33, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v25 + 104), 1u);
              if ( v32 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v34 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
            v43 = v34;
            v44 = 0;
            if ( v34 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v34 + 24));
              v42 = -1LL;
            }
            COREACCESS::operator=((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), (__int64)v41);
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            COREACCESS::AcquireShared((DXGADAPTER **)this + 7);
            if ( *(_DWORD *)(v25 + 424) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((struct _KTHREAD ***)this + 7);
              v19 = -1073741130;
              v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
              *(_QWORD *)(v38 + 24) = v25;
              *(_QWORD *)(v38 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v38);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v19 >= 0 )
          {
            v39 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v39 + 40) )
            {
              *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v39 + 96) = v25;
              *a2 = (struct DXGDEVICE *)v25;
              return (unsigned int)v19;
            }
            v40 = WdLogNewEntry5_WdWarning(v29, v39, v30);
            *(_QWORD *)(v40 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v40);
            v19 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v19;
        }
      }
    }
    else
    {
      v25 = 0LL;
    }
    v28 = WdLogNewEntry5_WdWarning(v21, v22, v20);
    *(_QWORD *)(v28 + 24) = v23;
    *(_QWORD *)(v28 + 32) = v17;
    WdLogEvent5_WdWarning(v28);
    v19 = -1073741811;
    goto LABEL_21;
  }
  return 0LL;
}
