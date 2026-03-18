/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01D67D8
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C01D5864 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01D64C0 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01D5FC4 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // edi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // ebx
  char *Buffer; // rax
  __int64 v25; // rcx
  char *v26; // rbx
  __int64 v27; // rax
  char *v28; // rbx
  size_t v29; // rdi

  v8 = a4;
  if ( this[1] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 2307LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)Size )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v17 = *((_DWORD *)a2 + 2);
  if ( (int)v8 + (int)Size > v17 )
    v17 = v8 + Size;
  if ( v17 > 0x2000 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v18[3] = PsGetCurrentProcess(v20, v19);
    v18[4] = v17;
    v18[5] = 0x2000LL;
    WdLogEvent5_WdError(v18);
    v23 = -1073741811;
LABEL_11:
    DXGSWAPCHAIN::MarkAbandoned(this, v21, v22);
    return v23;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer((PVOID *)a2, v17, *a3);
  v26 = Buffer;
  if ( !Buffer )
  {
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = v17;
    WdLogEvent5_WdLowResource(v27);
    v23 = -1073741801;
    goto LABEL_11;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v17);
  v28 = &v26[v8];
  if ( a8 == 1 )
  {
    v29 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v28, Src, (unsigned int)Size);
  }
  else
  {
    v29 = (unsigned int)Size;
    memmove(v28, Src, (unsigned int)Size);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = Size;
  if ( (unsigned int)Size > 0x10 )
    v29 = 16LL;
  memmove((char *)a7 + 12, v28, v29);
  return 0LL;
}
