/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01BC434
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01BE430 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C01BE670 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C003C1DC (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C01BDCC0 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v19; // rsi
  char *v20; // r15
  int v21; // ebp
  __int64 v22; // r9
  __int64 v23; // r8
  signed __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rbx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KEVENT *v35; // rsi
  unsigned __int8 v36; // si
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  _BYTE v46[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+38h] [rbp-40h]
  __int64 v48; // [rsp+40h] [rbp-38h]
  char v49; // [rsp+48h] [rbp-30h]

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v10 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v10 + 44) )
  {
    v11 = WdLogNewEntry5_WdWarning(v10, v7, v8, v9);
    *(_QWORD *)(v11 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v11);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v13 = *(_QWORD *)(v10 + (*((_BYTE *)this + 16) != 0 ? 0x38 : 0) + 88);
    if ( PsGetCurrentProcess(v10) != v13 )
    {
      v17 = WdLogNewEntry5_WdWarning(v10, v14, v15, v16);
      *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v17 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v17);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v10);
  v19 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v20 = (char *)Current + 168;
    v21 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
    v23 = *((_QWORD *)this + 1);
    LOBYTE(v24) = -*((_BYTE *)this + 16);
    v25 = *(unsigned int *)(v23 + (*((_BYTE *)this + 16) != 0 ? 0x38 : 0) + 72);
    v26 = (*(_DWORD *)(v23 + (*((_BYTE *)this + 16) != 0 ? 0x38 : 0) + 72) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)v19 + 52)
      && (v22 = *((_QWORD *)v19 + 24),
          v24 = ((unsigned int)v25 >> 26) & 0x30,
          v23 = *(unsigned int *)(v22 + 16LL * (unsigned int)v26 + 8),
          (((unsigned int)v25 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * (unsigned int)v26 + 8) & 0x30))
      && (v23 & 0x1000) == 0
      && (v23 & 0xF) != 0
      && (*(_BYTE *)(v22 + 16LL * (unsigned int)v26 + 8) & 0xF) == 3 )
    {
      v27 = *(_QWORD *)(v22 + 16LL * (unsigned int)v26);
      if ( v27 )
      {
        _m_prefetchw((const void *)(v27 + 64));
        v28 = *(_QWORD *)(v27 + 64);
        while ( v28 )
        {
          v24 = v28 + 1;
          v29 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 64), v28 + 1, v28);
          if ( v29 == v28 )
            goto LABEL_17;
        }
        v27 = 0LL;
LABEL_17:
        if ( v27 )
        {
          *((_BYTE *)this + 42) = 1;
          *((_QWORD *)this + 6) = v27;
LABEL_21:
          ExReleasePushLockSharedEx(v20, 0LL);
          KeLeaveCriticalRegion();
          if ( v27 && a3 )
          {
            DXGAUTOMUTEX::Release(v3, v31, v33, v34);
            v35 = (struct _KEVENT *)(*(_QWORD *)(v27 + 16) + 72LL);
            if ( !KeReadStateEvent(v35) )
              KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v27 + 104), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
              v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v27 + 104), 1u);
              if ( v36 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v38 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
            v48 = v38;
            v49 = 0;
            if ( v38 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24));
              v47 = -1LL;
            }
            COREACCESS::operator=((__int64)this + 56, (__int64)v46);
            COREACCESS::~COREACCESS((COREACCESS *)v46);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
            if ( *(_DWORD *)(v27 + 408) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v21 = -1073741130;
              v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
              *(_QWORD *)(v43 + 24) = v27;
              *(_QWORD *)(v43 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v43);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v21 >= 0 )
          {
            v44 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v44 + 44) )
            {
              *(_QWORD *)(v44 + (*((_BYTE *)this + 16) != 0 ? 0x38 : 0) + 80) = v27;
              *a2 = (struct DXGDEVICE *)v27;
              return (unsigned int)v21;
            }
            v45 = WdLogNewEntry5_WdWarning(v32, v44, v33, v34);
            *(_QWORD *)(v45 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v45);
            v21 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v21;
        }
      }
    }
    else
    {
      v27 = 0LL;
    }
    v30 = WdLogNewEntry5_WdWarning(v24, v26, v23, v22);
    *(_QWORD *)(v30 + 24) = v25;
    *(_QWORD *)(v30 + 32) = v19;
    WdLogEvent5_WdWarning(v30);
    v21 = -1073741811;
    goto LABEL_21;
  }
  return 0LL;
}
