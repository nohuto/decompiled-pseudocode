/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C01D5864
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01D6A04 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002C6CC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     McTemplateK0pqddqqqqq @ 0x1C002C990 (McTemplateK0pqddqqqqq.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C01D56F8 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01D67D8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int bProducer; // ecx
  BOOL bGlobalMetaData; // eax
  struct AUTOEXPANDALLOCATION *v14; // rdx
  struct _KTHREAD **v15; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  char *v20; // rdi
  unsigned int v21; // r8d
  unsigned int v22; // edi
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v25; // rcx
  size_t Size; // [rsp+20h] [rbp-61h]
  size_t Sizea; // [rsp+20h] [rbp-61h]
  size_t Sizeb; // [rsp+20h] [rbp-61h]
  void *Src; // [rsp+28h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v30; // [rsp+30h] [rbp-51h]
  __int64 v31; // [rsp+38h] [rbp-49h]
  __int64 v32; // [rsp+60h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v33; // [rsp+68h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v34; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-9h] BYREF
  __int64 v36; // [rsp+80h] [rbp-1h]
  __int64 v37; // [rsp+88h] [rbp+7h]
  int v38; // [rsp+90h] [rbp+Fh]

  v7 = a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2107LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->pBuffer )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2112LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !(_DWORD)v7 || a2->bSetMetaData )
  {
    bProducer = a2->bProducer;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    bGlobalMetaData = a2->bGlobalMetaData;
    v35 = __PAIR64__(bGlobalMetaData, bProducer);
    if ( bGlobalMetaData )
    {
      v14 = (struct AUTOEXPANDALLOCATION *)(this + 8);
      v15 = this;
      if ( a2->bSetMetaData )
      {
        LODWORD(Size) = a2->BufferSize;
        LODWORD(v32) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v14,
                             (int *)&v32,
                             v7,
                             Size,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v35,
                             a5);
LABEL_19:
        v22 = MetaDataInternal;
        if ( a2->bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            return v22;
          v23 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !a2->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            return v22;
          v23 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v31) = v36;
        LODWORD(v30) = HIDWORD(v35);
        LODWORD(Src) = v35;
        LODWORD(Sizea) = MetaDataInternal;
        McTemplateK0pqddqqqqq(v17, v23, v18, this, Sizea, Src, v30, v31, HIDWORD(v36), v37, HIDWORD(v37), v38, v32);
        return v22;
      }
    }
    else
    {
      v19 = -bProducer;
      v20 = (char *)this + ((_DWORD)v19 != 0 ? 128LL : 80LL);
      v21 = *((_DWORD *)v20 + 10);
      if ( v21 == -1
        || (DXGSWAPCHAIN::GetClientSurfaceInfo(
              (DXGSWAPCHAIN *)this,
              (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + ((_DWORD)v19 != 0 ? 128LL : 80LL)),
              v21,
              &v33,
              &v34),
            *(_DWORD *)v33 != 1)
        || *((_DWORD *)v33 + 1) != *((_DWORD *)v20 + 7) )
      {
        v11 = WdLogNewEntry5_WdError(v19);
        v25 = *((_QWORD *)v20 + 2);
        *(_QWORD *)(v11 + 32) = this;
        *(_QWORD *)(v11 + 24) = v25;
        goto LABEL_28;
      }
      if ( a2->bSetMetaData )
      {
        LODWORD(Sizeb) = a2->BufferSize;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v33 + 1),
                             (int *)v33 + 4,
                             v7,
                             Sizeb,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v35,
                             a5);
        goto LABEL_19;
      }
      v14 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v33 + 1);
      v15 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v15,
                         v14,
                         a2->BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v35,
                         a5,
                         &a2->DataCopied);
    goto LABEL_19;
  }
  v11 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v11 + 24) = v7;
LABEL_28:
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
