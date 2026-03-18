/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1C01BEEE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01BE294 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  PVOID v16; // rsi
  _DWORD *v17; // r8
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2121);
  v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)MmUserProbeAddress;
  Handle = *v4;
  v5 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v10 = v5;
  if ( v5 >= 0 )
  {
    LOBYTE(v9) = 1;
    v16 = Object;
    LODWORD(v10) = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0LL, v9);
    if ( (int)v10 >= 0 )
    {
      v17 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = Handle.DataCopied;
    }
    ObfDereferenceObject(v16);
    v14 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = Handle.hNtSwapChain;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
    v13 = qword_1C006E790;
    v14 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v12, 2121);
  return (unsigned int)v10;
}
