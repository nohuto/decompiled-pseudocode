/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01DF630
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C01DDA50 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01DFEC4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C01DFFC4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C003780C (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0037948 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00379C8 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C0037B1C (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     McTemplateK0pqddqqqqq @ 0x1C0037C14 (McTemplateK0pqddqqqqq.c)
 *     McTemplateK0pqdqp @ 0x1C0037D00 (McTemplateK0pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01A8AC0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C01DDF64 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01DE9B8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01DFADC (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  _BOOL8 bProducer; // rcx
  char *v11; // rdi
  __int64 v12; // rax
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int inserted; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v22; // r12
  UINT MetaDataSize; // ecx
  struct AUTOEXPANDALLOCATION *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int *v27; // r8
  int v28; // ecx
  __int64 v29; // rax
  size_t Size; // [rsp+20h] [rbp-69h]
  void *Src; // [rsp+28h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v32; // [rsp+30h] [rbp-59h]
  char v33[8]; // [rsp+38h] [rbp-51h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v34; // [rsp+60h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v35; // [rsp+68h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v36; // [rsp+70h] [rbp-19h] BYREF
  void *v37; // [rsp+78h] [rbp-11h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v38; // [rsp+80h] [rbp-9h] BYREF
  __int64 v39; // [rsp+88h] [rbp-1h] BYREF
  __int64 v40; // [rsp+90h] [rbp+7h]
  __int64 v41; // [rsp+98h] [rbp+Fh]
  int v42; // [rsp+A0h] [rbp+17h]

  v37 = a3;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 2759LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  if ( a2->pMetaData )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2766LL;
    WdLogEvent5_WdAssertion(v9);
  }
  bProducer = a2->bProducer;
  v11 = (char *)this + (a2->bProducer ? 136LL : 88LL);
  if ( *((_DWORD *)this + 58) && !bProducer && a2->MetaDataSize )
  {
    v12 = WdLogNewEntry5_WdError(bProducer);
    *(_QWORD *)(v12 + 24) = 2774LL;
    WdLogEvent5_WdError(v12);
    return 3221225659LL;
  }
  v14 = *((_DWORD *)v11 + 10);
  if ( v14 == -1
    || (DXGSWAPCHAIN::GetClientSurfaceInfo(
          this,
          (DXGSWAPCHAIN *)((char *)this + (a2->bProducer ? 136LL : 88LL)),
          v14,
          &v34,
          &v38),
        *(_DWORD *)v34 != 1)
    || *((_DWORD *)v34 + 1) != *((_DWORD *)v11 + 7) )
  {
    v29 = WdLogNewEntry5_WdError(bProducer);
    *(_QWORD *)(v29 + 24) = *((_QWORD *)v11 + 2);
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdError(v29);
    inserted = -1073741811;
    goto LABEL_35;
  }
  inserted = DXGSWAPCHAIN::InsertGPUSignal(
               this,
               (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
               v34,
               *((_DWORD *)this + 46));
  if ( inserted < 0 )
    goto LABEL_13;
  DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
    this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v11,
    *((_DWORD *)v11 + 10),
    &v36,
    &v35);
  v21 = *((unsigned int *)this + 46);
  v22 = v36;
  *((_DWORD *)v35 + 1) = v21;
  ++*((_DWORD *)this + 46);
  *(_DWORD *)v22 = 2;
  *((_DWORD *)v22 + 1) = DXGSWAPCHAIN::SwitchClient(v21, *((_DWORD *)v11 + 7));
  MetaDataSize = a2->MetaDataSize;
  if ( MetaDataSize )
  {
    v24 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v22 + 2);
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0;
    LODWORD(v39) = a2->bProducer;
    LODWORD(Size) = MetaDataSize;
    inserted = DXGSWAPCHAIN::SetMetaDataInternal(
                 this,
                 v24,
                 (int *)v22 + 6,
                 0,
                 Size,
                 v37,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v39,
                 a4);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      *(_DWORD *)v33 = v40;
      LODWORD(v32) = HIDWORD(v39);
      LODWORD(Src) = v39;
      LODWORD(Size) = inserted;
      McTemplateK0pqddqqqqq(
        v25,
        &EventIndirectSwapChainSetMetaData,
        v19,
        this,
        Size,
        Src,
        v32,
        *(_QWORD *)v33,
        HIDWORD(v40),
        v41,
        HIDWORD(v41),
        v42);
    }
    if ( inserted < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v17 + 24) = *((_QWORD *)v11 + 2);
      *(_QWORD *)(v17 + 32) = this;
      goto LABEL_14;
    }
  }
  if ( !*((_DWORD *)v22 + 6) )
    AUTOEXPANDALLOCATION::GetBuffer(*((const void ***)v22 + 2), 0, 0);
  v26 = *((_DWORD *)this + 58);
  if ( *((_DWORD *)v11 + 7) )
  {
    if ( v26 )
    {
      inserted = DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree((unsigned __int64)this, a2);
      if ( inserted < 0 )
        goto LABEL_15;
    }
LABEL_32:
    *((_DWORD *)v11 + 10) = -1;
    v20 = -(__int64)a2->bProducer & 0xFFFFFFFFFFFFFFD0uLL;
    v8 = *(_QWORD *)((char *)this + v20 + 168);
    if ( v8 )
      KeSetEvent(*(PRKEVENT *)((char *)this + v20 + 168), 2, 0);
    goto LABEL_35;
  }
  if ( !v26 )
  {
    v27 = (int *)*((_QWORD *)this + 28);
    v28 = *v27 + 1;
    if ( *v27 == v27[1] )
      v28 = 0;
    *v27 = v28;
  }
  inserted = DXGFIXEDQUEUE::Add(*((DXGFIXEDQUEUE **)this + 27), *((_DWORD *)v11 + 10));
  if ( inserted >= 0 )
    goto LABEL_32;
LABEL_13:
  v17 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v17 + 24) = this;
LABEL_14:
  WdLogEvent5_WdError(v17);
LABEL_15:
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v18, v19);
LABEL_35:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v32) = a2->MetaDataSize;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Size) = inserted;
    McTemplateK0pqdqp(v20, v18, v19, this, Size, Src, v32, v8);
  }
  return (unsigned int)inserted;
}
