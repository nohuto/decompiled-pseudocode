/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01A3484
 * Callers:
 *     DxgkSubmitCommandToHwQueue @ 0x1C01A5850 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C001B89C (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(DXGHWQUEUE *this, const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2)
{
  struct _SLIST_ENTRY *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _SLIST_ENTRY *v8; // rbx
  __int64 v9; // rax
  UINT PrivateDriverDataSize; // ecx
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  size_t v13; // r8
  char *pPrivateDriverData; // rdx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rax
  CRefCountedBuffer **v21; // rsi
  struct _SLIST_ENTRY *Next; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  CRefCountedBuffer *v26; // rcx
  __int64 i; // rsi
  CRefCountedBuffer *v28; // rcx
  struct _SLIST_ENTRY *v29[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v29[0] = 0LL;
  v29[1] = v4;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v29);
  v8 = v29[0];
  if ( !v29[0] )
  {
    v9 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v9 + 24) = 566LL;
    WdLogEvent5_WdLowResource(v9);
LABEL_3:
    CVidSchSubmitData::~CVidSchSubmitData(v29);
    return 3221225495LL;
  }
  v29[0]->Next = (struct _SLIST_ENTRY *)0x8000000;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize )
  {
    RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(PrivateDriverDataSize, v5, v7);
    if ( !RefCountedBuffer )
      goto LABEL_3;
    v8[1].Next = (struct _SLIST_ENTRY *)RefCountedBuffer;
    *(_DWORD *)RefCountedBuffer = a2->PrivateDriverDataSize;
    *((_DWORD *)RefCountedBuffer + 1) = 1;
    v13 = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v15 = &v8[1].Next->Next + 1;
    if ( &pPrivateDriverData[v13] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v13] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v15, pPrivateDriverData, v13);
  }
  *((_QWORD *)&v8[2].Next + 1) = a2->CommandBuffer;
  HIDWORD(v8[3].Next) = a2->CommandLength;
  LODWORD(v8[5].Next) = a2->PrivateDriverDataSize;
  *((_QWORD *)&v8[29].Next + 1) = a2->HwQueueProgressFenceId;
  LODWORD(v19) = _guard_dispatch_icall_fptr();
  if ( (int)v19 >= 0 )
  {
    v21 = (CRefCountedBuffer **)&v8[1];
    Next = v8[1].Next;
    if ( Next )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Next->Next + 1);
      v8 = v29[0];
    }
    v23 = _guard_dispatch_icall_fptr();
    v19 = v23;
    if ( v23 >= 0 )
      goto LABEL_23;
    v26 = *v21;
    if ( *v21 )
      CRefCountedBuffer::RefCountedBufferRelease(v26);
    for ( i = 0LL; (unsigned int)i < a2->NumPrimaries; i = (unsigned int)(i + 1) )
    {
      v25 = *((_QWORD *)&v8[12].Next + i + 1);
      if ( v25 )
        _guard_dispatch_icall_fptr();
    }
    v20 = WdLogNewEntry5_WdWarning(v26, v24, v25);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = v19;
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = 608LL;
  }
  WdLogEvent5_WdWarning(v20);
LABEL_23:
  v28 = (CRefCountedBuffer *)v8[1].Next;
  if ( v28 )
    CRefCountedBuffer::RefCountedBufferRelease(v28);
  CVidSchSubmitData::~CVidSchSubmitData(v29);
  return (unsigned int)v19;
}
