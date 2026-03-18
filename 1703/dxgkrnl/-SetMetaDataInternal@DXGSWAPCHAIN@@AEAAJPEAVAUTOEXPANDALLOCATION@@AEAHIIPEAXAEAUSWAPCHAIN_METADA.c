/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01BE068
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C01BD1B8 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01BDD94 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BD850 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        __int64 a4,
        size_t Size,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v16; // edi
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  char *Buffer; // rax
  __int64 v24; // rcx
  char *v25; // rbx
  __int64 v26; // rax
  char *v27; // rbx
  size_t v28; // rdi

  v8 = (unsigned int)a4;
  if ( this[1] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2182LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)Size )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v16 = *((_DWORD *)a2 + 2);
  if ( (int)v8 + (int)Size > v16 )
    v16 = v8 + Size;
  if ( v16 > 0x2000 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v17[3] = PsGetCurrentProcess(v18);
    v17[4] = v16;
    v17[5] = 0x2000LL;
    WdLogEvent5_WdError(v17);
    v22 = -1073741811;
LABEL_11:
    DXGSWAPCHAIN::MarkAbandoned(this, v19, v20, v21);
    return v22;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer((PVOID *)a2, v16, *a3);
  v25 = Buffer;
  if ( !Buffer )
  {
    v26 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdLowResource(v26);
    v22 = -1073741801;
    goto LABEL_11;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v16);
  v27 = &v25[v8];
  if ( a8 == 1 )
  {
    v28 = (unsigned int)Size;
    if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, Src, (unsigned int)Size);
  }
  else
  {
    v28 = (unsigned int)Size;
    memmove(v27, Src, (unsigned int)Size);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = Size;
  if ( (unsigned int)Size > 0x10 )
    v28 = 16LL;
  memmove((char *)a7 + 12, v27, v28);
  return 0LL;
}
