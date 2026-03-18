/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00B1B40
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062DC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0038EF8 (Template_ppxppttqddddddddq.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016B93C (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rcx
  int v11; // r12d
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  PSLIST_ENTRY v21; // rdi
  __int64 v22; // rcx
  int v23; // r8d
  char v24; // al
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r8d
  char v29; // al
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  SIZE_T v39; // rdx
  struct _SLIST_ENTRY *PoolWithTag; // rax
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  void *v43; // rcx
  __int64 v44; // rdx
  CRefCountedBuffer *v45; // rcx
  __int64 v46; // r8
  struct VIDMM_ALLOC *v47; // r9
  UINT v48; // eax
  __int64 v49; // r12
  __int64 v50; // rax
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rbx
  struct _SLIST_ENTRY *v60; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v62; // rax
  int v63; // eax
  __int64 i; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  volatile signed __int32 *v72; // rcx
  signed int BroadcastContextCount; // [rsp+A0h] [rbp-4E8h]
  struct _SLIST_ENTRY *v74; // [rsp+A8h] [rbp-4E0h]
  struct _SLIST_ENTRY *v75[2]; // [rsp+B8h] [rbp-4D0h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-4C0h]
  DXGCONTEXT *v77; // [rsp+D0h] [rbp-4B8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v78; // [rsp+D8h] [rbp-4B0h]
  struct COREDEVICEACCESS *v79; // [rsp+E0h] [rbp-4A8h]
  __int64 v80; // [rsp+E8h] [rbp-4A0h]
  __int64 v81; // [rsp+F0h] [rbp-498h]
  __int64 v82; // [rsp+F8h] [rbp-490h]
  __int64 v83; // [rsp+100h] [rbp-488h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v84; // [rsp+110h] [rbp-478h] BYREF

  v78 = a4;
  v79 = a3;
  v77 = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  LODWORD(v74) = v11;
  BroadcastContextCount = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)this + 50) )
  {
    v12 = WdLogNewEntry5_WdWarning(Flags, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 50);
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v74) = v11;
    v14 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = WdLogNewEntry5_WdEvent(Flags);
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdEvent(v16);
      return (unsigned int)v15;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v82 = 0LL;
      v83 = 0LL;
      v80 = 0LL;
      v81 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        LODWORD(v17) = 0;
        Template_ppxppttqddddddddq(0LL, 0LL, (__int64)a3, 0LL, 0LL);
        goto LABEL_13;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_p(Flags, &EventRender, (__int64)a3, 0LL);
    }
  }
  LODWORD(v17) = 0;
LABEL_13:
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v76 = v18;
  v75[1] = (struct _SLIST_ENTRY *)v18;
  v19 = v18 + 1008;
  ++*(_DWORD *)(v18 + 1028);
  v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v18 + 1008));
  if ( !v21 )
  {
    ++*(_DWORD *)(v19 + 24);
    v21 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v19 + 48))(
                          *(unsigned int *)(v19 + 36),
                          *(unsigned int *)(v19 + 44),
                          *(unsigned int *)(v19 + 40),
                          v19);
  }
  v75[0] = v21;
  if ( !v21 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v32 + 24) = 1767LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_35;
  }
  v22 = *(_QWORD *)(v76 + 16);
  if ( *(int *)(v22 + 1944) < 0x2000 )
    v23 = 1;
  else
    v23 = *(_DWORD *)(v22 + 248);
  if ( *(int *)(v22 + 1944) >= 0x2000 || (v24 = *(_BYTE *)(v22 + 2228)) != 0 )
    v24 = 1;
  if ( v24 )
    v25 = *(_DWORD *)(v22 + 2152) * (48 * v23 + ((8 * v23 + 167) & 0xFFFFFFF8)) + 8 * v23 + 448;
  else
    v25 = 936;
  memset(v21, 0, v25);
  v26 = *(_QWORD *)(v76 + 16);
  v27 = *(_DWORD *)(v26 + 1944);
  if ( v27 < 0x2000 )
    v28 = 1;
  else
    v28 = *(_DWORD *)(v26 + 248);
  if ( v27 >= 0x2000 || (v29 = *(_BYTE *)(v26 + 2228)) != 0 )
    v29 = 1;
  v30 = *(unsigned int *)(v26 + 2152);
  *((_BYTE *)&v21[21].Next + 12) = v29;
  if ( v29 )
  {
    HIDWORD(v21[27].Next) = v30;
    *((_DWORD *)&v21[27].Next + 2) = v28;
    *((_DWORD *)&v21[27].Next + 3) = v30 * (48 * v28 + ((8 * v28 + 167) & 0xFFFFFFF8)) + 16;
    v31 = v30 * (48 * v28 + ((8 * v28 + 167) & 0xFFFFFFF8)) + 448;
    LODWORD(v21[26].Next) = v31;
    HIDWORD(v21[26].Next) = 8 * v28 + v31;
  }
  v21->Next = v74;
  if ( (v11 & 0x20) != 0 )
  {
    v33 = 0;
    if ( BroadcastContextCount > 1 )
      v33 = 1024;
    LODWORD(v21->Next) = (__int64)v21->Next & 0xFFFFFBFF | v33 | 0x800;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      HIDWORD(v21[7].Next) = 0;
  }
  v34 = *((unsigned int *)this + 50);
  if ( (_DWORD)v34 )
  {
    v35 = *((_QWORD *)this + 2);
    if ( !a2->PrivateDriverDataSize && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 1504LL) < 0x8000u )
    {
      v36 = *(_QWORD *)(v35 + 16);
      v37 = *(_QWORD *)(v36 + 16);
      if ( *(_DWORD *)(v37 + 276) == 4318 || DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(v36 + 16)) )
      {
        v38 = WdLogNewEntry5_WdWarning(v37, v35, v34, v30);
        *(_QWORD *)(v38 + 24) = 1801LL;
        WdLogEvent5_WdWarning(v38);
        CVidSchSubmitData::~CVidSchSubmitData(v75);
        return 3221225485LL;
      }
    }
    v39 = (unsigned int)(v34 + 8);
    if ( (_DWORD)v34 == -8 )
    {
      v39 = 1LL;
    }
    else if ( (unsigned int)(v34 + 8) > 0x7FFFFFFFuLL )
    {
      goto LABEL_35;
    }
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, v39, 0x4B677844u);
    if ( PoolWithTag )
    {
      v21[1].Next = PoolWithTag;
      LODWORD(PoolWithTag->Next) = *((_DWORD *)this + 50);
      HIDWORD(PoolWithTag->Next) = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v43 = &v21[1].Next->Next + 1;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v43, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove(&v21[1].Next->Next + 1, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_57;
    }
LABEL_35:
    CVidSchSubmitData::~CVidSchSubmitData(v75);
    return 3221225495LL;
  }
LABEL_57:
  *((_QWORD *)&v21[2].Next + 1) = a2->Commands;
  HIDWORD(v21[3].Next) = a2->CommandLength;
  *((_DWORD *)&v21[4].Next + 3) = *((_DWORD *)this + 50);
  LODWORD(v21[5].Next) = a2->PrivateDriverDataSize;
  if ( DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v48 = a2->PrivateDriverDataSize;
    if ( v48 != 304 && v48 != 280 )
    {
      v49 = -1073741578LL;
      goto LABEL_61;
    }
    Next = v21[1].Next;
    if ( RtlCompareMemoryUlong(&Next->Next + 1, 0x100uLL, 0) != 256 )
    {
      v56 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
      *(_QWORD *)(v56 + 24) = this;
      *(_QWORD *)(v56 + 32) = -1073741580LL;
      WdLogEvent5_WdWarning(v56);
      memset(&Next->Next + 1, 0, 0x100uLL);
    }
  }
  LODWORD(v49) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMT_HANDLE *, signed int, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL) + 8LL) + 856LL))(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                   *((_QWORD *)this + 2),
                   a2->NumPrimaries,
                   a2->WrittenPrimaries,
                   BroadcastContextCount,
                   v21 + 12);
  if ( (int)v49 < 0 )
  {
    v58 = WdLogNewEntry5_WdWarning(v57, v44, v46, v47);
    *(_QWORD *)(v58 + 24) = 1871LL;
    WdLogEvent5_WdWarning(v58);
    goto LABEL_90;
  }
  v21[21].Next = (struct _SLIST_ENTRY *)a6;
  *((_DWORD *)&v21[21].Next + 2) = a7;
  v59 = 0LL;
  if ( BroadcastContextCount <= 0LL )
  {
LABEL_86:
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v84.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
      v84.Token.Flip.FenceValue = a2->PresentHistoryToken;
      v67 = DXGCONTEXT::SubmitPresentHistoryToken(this, &v84, v79, v78, 0LL, 0, 0LL, 0LL, 0LL);
      v49 = v67;
      if ( (int)(v67 + 0x80000000) >= 0 && v67 != -1073741130 )
      {
        v71 = WdLogNewEntry5_WdWarning(0x80000000LL, v68, v69, v70);
        *(_QWORD *)(v71 + 24) = this;
        *(_QWORD *)(v71 + 32) = v49;
        WdLogEvent5_WdWarning(v71);
        LODWORD(v49) = 0;
      }
    }
    goto LABEL_90;
  }
  while ( 1 )
  {
    v60 = v21[1].Next;
    if ( v60 )
      _InterlockedIncrement((volatile signed __int32 *)&v60->Next + 1);
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)a5[v59] + 48) != CurrentThread )
    {
      v62 = WdLogNewEntry5_WdAssertion(CurrentThread, v44, v46, v47);
      *(_QWORD *)(v62 + 24) = 1895LL;
      WdLogEvent5_WdAssertion(v62);
    }
    v63 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 408LL)
                                                                      + 8LL)
                                                          + 344LL))(
            *((_QWORD *)a5[v59] + 29),
            v21);
    v49 = v63;
    if ( v63 < 0 )
      break;
    LODWORD(v21->Next) &= ~0x800u;
    LODWORD(v17) = v17 + 1;
    if ( ++v59 >= BroadcastContextCount )
      goto LABEL_86;
  }
  v45 = (CRefCountedBuffer *)v21[1].Next;
  if ( v45 )
    CRefCountedBuffer::RefCountedBufferRelease(v45);
  v17 = (int)v17;
  for ( i = v17;
        i >= 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 408LL)
                                                           + 8LL)
                                               + 352LL))(
          *((_QWORD *)a5[i--] + 29),
          0LL) )
  {
    ;
  }
  v65 = BroadcastContextCount;
  if ( (int)v17 < (__int64)BroadcastContextCount )
  {
    do
    {
      v66 = 0LL;
      if ( a2->NumPrimaries )
      {
        do
        {
          v47 = (struct VIDMM_ALLOC *)*((_QWORD *)&v21[12].Next + v66 + 1);
          if ( v47 )
            VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)a5[v17] + 2) + 592LL),
              0,
              v47);
          v66 = (unsigned int)(v66 + 1);
        }
        while ( (unsigned int)v66 < a2->NumPrimaries );
        v65 = BroadcastContextCount;
      }
      ++v17;
    }
    while ( v17 < v65 );
  }
LABEL_61:
  v50 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
  *(_QWORD *)(v50 + 24) = this;
  *(_QWORD *)(v50 + 32) = v49;
  WdLogEvent5_WdWarning(v50);
LABEL_90:
  v72 = (volatile signed __int32 *)v21[1].Next;
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd(v72 + 1, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v72, 0);
  }
  CVidSchSubmitData::~CVidSchSubmitData(v75);
  return (unsigned int)v49;
}
