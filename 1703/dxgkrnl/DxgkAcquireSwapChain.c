/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C01BE670
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01BC398 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01BC400 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01BC434 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01BC7B8 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // zf
  struct _KTHREAD ***v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _QWORD *v23; // rdx
  _DWORD *v24; // rdx
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle[2]; // [rsp+30h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v27; // [rsp+F0h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2111);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&Handle[0].hNtSwapChain = *v4;
  *(_OWORD *)&Handle[0].ReleaseInfo.hNtSwapChain = v4[1];
  *(_OWORD *)&Handle[0].ReleaseInfo.pMetaData = v4[2];
  if ( !Handle[0].bReleaseBeforeAcquire || Handle[0].bProducer == Handle[0].ReleaseInfo.bProducer )
  {
    v9 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v14 = v9;
    if ( v9 >= 0 )
    {
      v19 = (struct _KTHREAD ***)Object;
      LOBYTE(v12) = Handle[0].bProducer;
      LOBYTE(v13) = 1;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList,
        *(struct DXGSWAPCHAIN **)Object,
        v12,
        v13);
      LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList,
                       &v27,
                       1);
      if ( (int)v14 >= 0 )
      {
        v22 = DXGSWAPCHAIN::AcquireBuffer(*v19, Handle, v20, v21);
        LODWORD(v14) = v22;
        if ( v22 >= 0 && v22 != 259 )
        {
          v23 = (_QWORD *)(a1 + 40);
          if ( a1 + 40 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = *(_QWORD *)&Handle[0].ReleaseInfo.DeferredFreeListSize;
          v24 = (_DWORD *)(a1 + 44);
          if ( a1 + 44 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = *(&Handle[0].ReleaseInfo.DeferredFreeListSize + 1);
        }
      }
      ObfDereferenceObject(v19);
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList);
      v18 = (qword_1C006E790 & 2) == 0;
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = Handle[0].hNtSwapChain;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      v17 = qword_1C006E790;
      v18 = (qword_1C006E790 & 2) == 0;
    }
    if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v17, &EventProfilerExit, v16, 2111);
    return (unsigned int)v14;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress, a2);
    *(_QWORD *)(v5 + 24) = 800LL;
    WdLogEvent5_WdError(v5);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v6, &EventProfilerExit, v7, 2111);
    return 3221225485LL;
  }
}
