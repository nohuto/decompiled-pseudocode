/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C01BD1B8
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01BE294 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C003C268 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     Template_pqddqqqqq @ 0x1C003C4F0 (Template_pqddqqqqq.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C01BD04C (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01BE068 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        __int64 a3,
        void *a4,
        char a5)
{
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  BOOL bProducer; // ecx
  BOOL bGlobalMetaData; // eax
  struct AUTOEXPANDALLOCATION *v14; // rdx
  struct _KTHREAD **v15; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // esi
  const EVENT_DESCRIPTOR *v22; // rdx
  size_t Size; // [rsp+20h] [rbp-61h]
  size_t Sizea; // [rsp+20h] [rbp-61h]
  size_t Sizeb; // [rsp+20h] [rbp-61h]
  void *Src; // [rsp+28h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v28; // [rsp+30h] [rbp-51h]
  __int64 v29; // [rsp+38h] [rbp-49h]
  __int64 v30; // [rsp+60h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v31; // [rsp+68h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v32; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-9h] BYREF
  __int64 v34; // [rsp+80h] [rbp-1h]
  __int64 v35; // [rsp+88h] [rbp+7h]
  int v36; // [rsp+90h] [rbp+Fh]

  v7 = (unsigned int)a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1989LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->pBuffer )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 1994LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !(_DWORD)v7 || a2->bSetMetaData )
  {
    bProducer = a2->bProducer;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0;
    bGlobalMetaData = a2->bGlobalMetaData;
    v33 = __PAIR64__(bGlobalMetaData, bProducer);
    if ( bGlobalMetaData )
    {
      v14 = (struct AUTOEXPANDALLOCATION *)(this + 7);
      v15 = this;
      if ( a2->bSetMetaData )
      {
        LODWORD(Size) = a2->BufferSize;
        LODWORD(v30) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v14,
                             (int *)&v30,
                             v7,
                             Size,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                             a5);
LABEL_18:
        v21 = MetaDataInternal;
        if ( a2->bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
            return v21;
          v22 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !a2->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
            return v21;
          v22 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v29) = v34;
        LODWORD(v28) = HIDWORD(v33);
        LODWORD(Src) = v33;
        LODWORD(Sizea) = MetaDataInternal;
        Template_pqddqqqqq(v17, v22, v18, this, Sizea, Src, v28, v29, HIDWORD(v34), v35, HIDWORD(v35), v36, v30);
        return v21;
      }
    }
    else
    {
      v19 = (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (bProducer ? 0x38 : 0) + 72);
      DXGSWAPCHAIN::GetClientSurfaceInfo((DXGSWAPCHAIN *)this, v19, **((unsigned int **)v19 + 4), &v31, &v32);
      if ( *(_DWORD *)v31 != 1 || *((_DWORD *)v31 + 1) != *((_DWORD *)v19 + 10) )
      {
        v11 = WdLogNewEntry5_WdError(v20, v31);
        *(_QWORD *)(v11 + 24) = *((_QWORD *)v19 + 2);
        *(_QWORD *)(v11 + 32) = this;
        goto LABEL_27;
      }
      if ( a2->bSetMetaData )
      {
        LODWORD(Sizeb) = a2->BufferSize;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v31 + 1),
                             (int *)v31 + 4,
                             v7,
                             Sizeb,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                             a5);
        goto LABEL_18;
      }
      v14 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v31 + 1);
      v15 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v15,
                         v14,
                         a2->BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                         a5,
                         &a2->DataCopied);
    goto LABEL_18;
  }
  v11 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v11 + 24) = v7;
LABEL_27:
  WdLogEvent5_WdError(v11);
  return 3221225485LL;
}
