/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1C01D7660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01D6A04 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  PVOID v15; // rsi
  _DWORD *v16; // r8
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2121);
  v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)MmUserProbeAddress;
  Handle = *v4;
  v5 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v15 = Object;
    LODWORD(v9) = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
    if ( (int)v9 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = Handle.DataCopied;
    }
    ObfDereferenceObject(v15);
    v13 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = Handle.hNtSwapChain;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
    v12 = qword_1C005F010;
    v13 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v11, 2121);
  return (unsigned int)v9;
}
