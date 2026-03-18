/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C01D7DD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01D6BB4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  PVOID pMetaData; // r8
  PVOID v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // r8
  struct _D3DKMT_RELEASESWAPCHAIN Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2112);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)&Handle.hNtSwapChain = *(_OWORD *)v3;
  Handle.pMetaData = *(PVOID *)(v3 + 16);
  v4 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v8 = v4;
  if ( v4 >= 0 )
  {
    pMetaData = Handle.pMetaData;
    Handle.pMetaData = 0LL;
    v13 = Object;
    v14 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, pMetaData, 1);
    ObfDereferenceObject(v13);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v15, 2112);
    return v14;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = Handle.hNtSwapChain;
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdWarning(v9);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v10, 2112);
    return (unsigned int)v8;
  }
}
