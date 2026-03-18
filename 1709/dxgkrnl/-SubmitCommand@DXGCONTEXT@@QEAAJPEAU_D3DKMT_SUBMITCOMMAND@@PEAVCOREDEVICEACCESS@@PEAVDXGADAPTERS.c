/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00C30B0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000283C (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C00204D4 (McTemplateK0p.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0029160 (McTemplateK0ppxppttqddddddddq.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016F668 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        struct _SLIST_ENTRY *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rcx
  int v11; // esi
  signed int BroadcastContextCount; // r12d
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  PSLIST_ENTRY v19; // rdi
  struct _SLIST_ENTRY *v20; // rcx
  int v21; // eax
  int v22; // r8d
  char v23; // al
  unsigned int v24; // eax
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  char v28; // al
  int v29; // r9d
  int v30; // eax
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rdx
  struct _SLIST_ENTRY *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  SIZE_T v37; // rdx
  struct _SLIST_ENTRY *PoolWithTag; // rax
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  void *v41; // rcx
  __int64 v42; // rdx
  CRefCountedBuffer *v43; // rcx
  __int64 v44; // r8
  UINT v45; // eax
  __int64 v46; // r12
  __int64 v47; // rax
  struct _SLIST_ENTRY *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rbx
  struct _SLIST_ENTRY *v60; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v62; // rax
  struct DXGCONTEXT *v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rbx
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  __int64 v68; // rbx
  struct VIDMM_ALLOC *v69; // r9
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rax
  volatile signed __int32 *v74; // rcx
  struct _SLIST_ENTRY *Next; // [rsp+A0h] [rbp-4F8h]
  int v76; // [rsp+B0h] [rbp-4E8h]
  struct _SLIST_ENTRY *v77; // [rsp+C0h] [rbp-4D8h]
  struct _SLIST_ENTRY *v78[4]; // [rsp+C8h] [rbp-4D0h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v79; // [rsp+E8h] [rbp-4B0h]
  struct COREDEVICEACCESS *v80; // [rsp+F0h] [rbp-4A8h]
  __int64 v81; // [rsp+F8h] [rbp-4A0h]
  __int64 v82; // [rsp+100h] [rbp-498h]
  __int64 v83; // [rsp+108h] [rbp-490h]
  __int64 v84; // [rsp+110h] [rbp-488h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v85; // [rsp+120h] [rbp-478h] BYREF

  v79 = a4;
  v80 = a3;
  v78[2] = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  LODWORD(v77) = v11;
  BroadcastContextCount = a2->BroadcastContextCount;
  v76 = BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)&this[12].Next + 2) )
  {
    v13 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
    *(_QWORD *)(v13 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)&this[12].Next + 2);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v77) = v11;
    v15 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1u, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdEvent(v17);
      return (unsigned int)v16;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v83 = 0LL;
      v84 = 0LL;
      v81 = 0LL;
      v82 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p(&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  Next = this[1].Next[1].Next;
  v78[3] = Next;
  v78[1] = Next;
  ++HIDWORD(Next[70].Next);
  v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[69]);
  if ( !v19 )
  {
    ++*((_DWORD *)&Next[70].Next + 2);
    v19 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))Next[72].Next)(
                          HIDWORD(Next[71].Next),
                          *((unsigned int *)&Next[71].Next + 3),
                          *((unsigned int *)&Next[71].Next + 2),
                          &Next[69]);
  }
  v78[0] = v19;
  if ( !v19 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v31 + 24) = 1808LL;
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_34;
  }
  v20 = Next[1].Next;
  v21 = (int)v20[123].Next;
  if ( v21 < 0x2000 )
    v22 = 1;
  else
    v22 = *((_DWORD *)&v20[15].Next + 2);
  if ( v21 >= 0x2000 || (v23 = *((_BYTE *)&v20[140].Next + 12)) != 0 )
    v23 = 1;
  if ( v23 )
    v24 = LODWORD(v20[136].Next) * (48 * v22 + ((8 * v22 + 175) & 0xFFFFFFF8)) + 8 * v22 + 456;
  else
    v24 = 1152;
  memset(v19, 0, v24);
  v25 = Next[1].Next;
  v26 = (int)v25[123].Next;
  if ( v26 < 0x2000 )
    v27 = 1LL;
  else
    v27 = *((unsigned int *)&v25[15].Next + 2);
  if ( v26 >= 0x2000 || (v28 = *((_BYTE *)&v25[140].Next + 12)) != 0 )
    v28 = 1;
  v29 = (int)v25[136].Next;
  *((_BYTE *)&v19[21].Next + 12) = v28;
  if ( v28 )
  {
    *((_DWORD *)&v19[27].Next + 3) = v29;
    LODWORD(v19[28].Next) = v27;
    HIDWORD(v19[28].Next) = v29 * (48 * v27 + ((8 * v27 + 175) & 0xFFFFFFF8)) + 16;
    v30 = v29 * (48 * v27 + ((8 * v27 + 175) & 0xFFFFFFF8)) + 456;
    *((_DWORD *)&v19[26].Next + 2) = v30;
    *((_DWORD *)&v19[26].Next + 3) = 8 * v27 + v30;
  }
  v19->Next = v77;
  if ( (v11 & 0x20) != 0 )
  {
    v32 = 2048;
    if ( BroadcastContextCount > 1 )
      v32 = 3072;
    LODWORD(v19->Next) = (__int64)v19->Next & 0xFFFFFBFF | v32;
    if ( (struct _SLIST_ENTRY *)*((_QWORD *)&this[1].Next[104].Next + 1) != this[1].Next[1].Next[1].Next )
      HIDWORD(v19[7].Next) = 0;
  }
  v33 = *((unsigned int *)&this[12].Next + 2);
  if ( (_DWORD)v33 )
  {
    v34 = this[1].Next[1].Next[1].Next;
    if ( !a2->PrivateDriverDataSize
      && *((_DWORD *)&v34[95].Next + 2) < 0x8000u
      && (HIDWORD(v34[17].Next) == 4318 || DXGADAPTER::IsWarpAdapter((DXGADAPTER *)v34)) )
    {
      v35 = WdLogNewEntry5_WdWarning(v34, v33, v27);
      *(_QWORD *)(v35 + 24) = 1842LL;
      WdLogEvent5_WdWarning(v35);
      CVidSchSubmitData::~CVidSchSubmitData(v78);
      return 3221225485LL;
    }
    v36 = v33 + 8;
    v37 = (unsigned int)(v33 + 8);
    if ( v36 )
    {
      if ( v36 > 0x7FFFFFFFuLL )
        goto LABEL_34;
    }
    else
    {
      v37 = 1LL;
    }
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x4B677844u);
    if ( PoolWithTag )
    {
      v19[1].Next = PoolWithTag;
      LODWORD(PoolWithTag->Next) = *((_DWORD *)&this[12].Next + 2);
      HIDWORD(PoolWithTag->Next) = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v41 = &v19[1].Next->Next + 1;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v41, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove(&v19[1].Next->Next + 1, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_56;
    }
LABEL_34:
    CVidSchSubmitData::~CVidSchSubmitData(v78);
    return 3221225495LL;
  }
LABEL_56:
  *((_QWORD *)&v19[2].Next + 1) = a2->Commands;
  HIDWORD(v19[3].Next) = a2->CommandLength;
  *((_DWORD *)&v19[4].Next + 3) = *((_DWORD *)&this[12].Next + 2);
  LODWORD(v19[5].Next) = a2->PrivateDriverDataSize;
  if ( DXGADAPTER::IsWarpAdapter((DXGADAPTER *)this[1].Next[1].Next[1].Next) )
  {
    v45 = a2->PrivateDriverDataSize;
    if ( v45 != 304 && v45 != 280 )
    {
      v46 = -1073741578LL;
LABEL_60:
      v47 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v47 + 24) = this;
      *(_QWORD *)(v47 + 32) = v46;
      WdLogEvent5_WdWarning(v47);
      goto LABEL_93;
    }
    v48 = v19[1].Next;
    if ( RtlCompareMemoryUlong(&v48->Next + 1, 0x100uLL, 0) != 256 )
    {
      v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      *(_QWORD *)(v52 + 24) = this;
      *(_QWORD *)(v52 + 32) = -1073741580LL;
      WdLogEvent5_WdWarning(v52);
      memset(&v48->Next + 1, 0, 0x100uLL);
    }
  }
  LODWORD(v46) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, D3DKMT_HANDLE *, signed int, PSLIST_ENTRY))(*((_QWORD *)&this[1].Next[1].Next[33].Next->Next + 1) + 856LL))(
                   *((_QWORD *)&this[1].Next[1].Next[33].Next + 1),
                   this[1].Next,
                   a2->NumPrimaries,
                   a2->WrittenPrimaries,
                   BroadcastContextCount,
                   v19 + 12);
  if ( (int)v46 >= 0 )
  {
    v19[21].Next = (struct _SLIST_ENTRY *)a6;
    *((_DWORD *)&v19[21].Next + 2) = a7;
    LODWORD(v57) = 0;
    v58 = v76;
    v59 = 0LL;
    if ( v76 <= 0 )
    {
LABEL_89:
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v85.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v85.Token.Flip.FenceValue = a2->PresentHistoryToken;
        v70 = SubmitPresentHistoryToken(
                &v85,
                v80,
                v79,
                0LL,
                0,
                0LL,
                0LL,
                0LL,
                (struct DXGCONTEXT *)this,
                (struct DXGADAPTER *)this[1].Next[1].Next[1].Next,
                0);
        v46 = v70;
        if ( (int)(v70 + 0x80000000) >= 0 && v70 != -1073741130 )
        {
          v73 = WdLogNewEntry5_WdWarning(0x80000000LL, v71, v72);
          *(_QWORD *)(v73 + 24) = this;
          *(_QWORD *)(v73 + 32) = v46;
          WdLogEvent5_WdWarning(v73);
          LODWORD(v46) = 0;
        }
      }
      goto LABEL_93;
    }
    while ( 1 )
    {
      v60 = v19[1].Next;
      if ( v60 )
        _InterlockedIncrement((volatile signed __int32 *)&v60->Next + 1);
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)a5[v59] + 52) != CurrentThread )
      {
        v62 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v62 + 24) = 1936LL;
        WdLogEvent5_WdAssertion(v62);
      }
      v63 = a5[v59];
      v64 = (*((_DWORD *)v63 + 91) & 0x10) != 0 ? *((_QWORD *)v63 + 33) : *((_QWORD *)v63 + 29);
      v65 = (*(__int64 (__fastcall **)(__int64, PSLIST_ENTRY))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[31].Next + 1)
                                                                         + 8LL)
                                                             + 344LL))(
              v64,
              v19);
      v46 = v65;
      if ( v65 < 0 )
        break;
      LODWORD(v19->Next) &= ~0x800u;
      LODWORD(v57) = v57 + 1;
      if ( ++v59 >= v76 )
        goto LABEL_89;
    }
    v43 = (CRefCountedBuffer *)v19[1].Next;
    if ( v43 )
      CRefCountedBuffer::RefCountedBufferRelease(v43);
    v57 = (int)v57;
    v66 = v57;
    if ( (int)v57 >= 0LL )
    {
      do
      {
        RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(a5[v66]);
        (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[31].Next
                                                                               + 1)
                                                                             + 8LL)
                                                                 + 352LL))(
          RenderHwQueue,
          0LL);
        --v66;
      }
      while ( v66 >= 0 );
      v58 = v76;
    }
    if ( (int)v57 < v58 )
    {
      do
      {
        v68 = 0LL;
        if ( a2->NumPrimaries )
        {
          do
          {
            v69 = (struct VIDMM_ALLOC *)*((_QWORD *)&v19[12].Next + v68 + 1);
            if ( v69 )
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                (VIDMM_EXPORT *)this[1].Next[1].Next[33].Next,
                *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)a5[v57] + 2) + 16LL) + 536LL),
                0,
                v69);
            v68 = (unsigned int)(v68 + 1);
          }
          while ( (unsigned int)v68 < a2->NumPrimaries );
          v58 = v76;
        }
        ++v57;
      }
      while ( v57 < v58 );
    }
    goto LABEL_60;
  }
  v56 = WdLogNewEntry5_WdWarning(v54, v53, v55);
  *(_QWORD *)(v56 + 24) = 1912LL;
  WdLogEvent5_WdWarning(v56);
LABEL_93:
  v74 = (volatile signed __int32 *)v19[1].Next;
  if ( v74 && _InterlockedExchangeAdd(v74 + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v74, 0);
  ++*((_DWORD *)&Next[70].Next + 3);
  if ( ExQueryDepthSList((PSLIST_HEADER)&Next[69]) < LOWORD(Next[70].Next) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[69], v19);
  }
  else
  {
    ++LODWORD(Next[71].Next);
    (*((void (__fastcall **)(PSLIST_ENTRY, struct _SLIST_ENTRY *))&Next[72].Next + 1))(v19, Next + 69);
  }
  return (unsigned int)v46;
}
