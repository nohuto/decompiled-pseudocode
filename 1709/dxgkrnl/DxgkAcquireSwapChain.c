/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C01D6E00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01D49E4 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01D4A4C (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01D4A80 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01D4DFC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
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
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  struct _KTHREAD ***v18; // rsi
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rdx
  _DWORD *v22; // rdx
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle[2]; // [rsp+30h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  struct DXGDEVICE *v25; // [rsp+F0h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2111);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&Handle[0].hNtSwapChain = *v4;
  *(_OWORD *)&Handle[0].ReleaseInfo.hNtSwapChain = v4[1];
  *(_OWORD *)&Handle[0].ReleaseInfo.pMetaData = v4[2];
  if ( !Handle[0].bReleaseBeforeAcquire || Handle[0].bProducer == Handle[0].ReleaseInfo.bProducer )
  {
    v9 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v13 = v9;
    if ( v9 >= 0 )
    {
      v18 = (struct _KTHREAD ***)Object;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList,
        *(struct DXGSWAPCHAIN **)Object,
        Handle[0].bProducer,
        1);
      LODWORD(v13) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList,
                       &v25,
                       1);
      if ( (int)v13 >= 0 )
      {
        v20 = DXGSWAPCHAIN::AcquireBuffer(*v18, Handle, v19);
        LODWORD(v13) = v20;
        if ( v20 >= 0 && v20 != 259 )
        {
          v21 = (_QWORD *)(a1 + 40);
          if ( a1 + 40 >= MmUserProbeAddress )
            v21 = (_QWORD *)MmUserProbeAddress;
          *v21 = *(_QWORD *)&Handle[0].ReleaseInfo.DeferredFreeListSize;
          v22 = (_DWORD *)(a1 + 44);
          if ( a1 + 44 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = *(&Handle[0].ReleaseInfo.DeferredFreeListSize + 1);
        }
      }
      ObfDereferenceObject(v18);
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)&Handle[0].ReleaseInfo.pDeferredFreeList);
      v17 = (qword_1C005F010 & 2) == 0;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = Handle[0].hNtSwapChain;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdWarning(v14);
      v16 = qword_1C005F010;
      v17 = (qword_1C005F010 & 2) == 0;
    }
    if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v15, 2111);
    return (unsigned int)v13;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 844LL;
    WdLogEvent5_WdError(v5);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, 2111);
    return 3221225485LL;
  }
}
