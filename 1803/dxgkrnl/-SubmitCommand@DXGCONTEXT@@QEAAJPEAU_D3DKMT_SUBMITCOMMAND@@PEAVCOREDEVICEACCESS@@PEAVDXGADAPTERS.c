/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00FFEA0
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001618C (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C0027764 (McTemplateK0p.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0033F48 (McTemplateK0ppxppttqddddddddq.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0145EA4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
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
  unsigned int v11; // esi
  __int64 BroadcastContextCount; // r13
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rcx
  PSLIST_ENTRY v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r8d
  char v26; // al
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  char v31; // al
  int v32; // r9d
  int v33; // eax
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rdx
  DXGADAPTER *v37; // rcx
  __int64 v38; // rax
  struct _SLIST_ENTRY *v39; // rax
  size_t PrivateDriverDataSize; // r9
  char *pPrivateDriverData; // rdx
  void *v42; // rcx
  __int64 v43; // rdx
  CRefCountedBuffer *v44; // rcx
  __int64 v45; // r8
  UINT v46; // eax
  __int64 v47; // r12
  __int64 v48; // rax
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rsi
  struct _SLIST_ENTRY *v60; // rax
  struct DXGCONTEXT *v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  volatile signed __int32 *v68; // rcx
  __int64 i; // rbx
  __int64 v70; // rbx
  __int64 v71; // [rsp+A0h] [rbp-4F8h]
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp-4F0h]
  struct _SLIST_ENTRY *v73; // [rsp+B0h] [rbp-4E8h]
  struct _SLIST_ENTRY *v74[2]; // [rsp+C0h] [rbp-4D8h] BYREF
  int v75; // [rsp+D0h] [rbp-4C8h]
  DXGCONTEXT *v76; // [rsp+D8h] [rbp-4C0h]
  __int64 v77; // [rsp+E0h] [rbp-4B8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v78; // [rsp+E8h] [rbp-4B0h]
  struct COREDEVICEACCESS *v79; // [rsp+F0h] [rbp-4A8h]
  __int64 v80; // [rsp+F8h] [rbp-4A0h]
  __int64 v81; // [rsp+100h] [rbp-498h]
  __int64 v82; // [rsp+108h] [rbp-490h]
  __int64 v83; // [rsp+110h] [rbp-488h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v84; // [rsp+120h] [rbp-478h] BYREF

  v78 = a4;
  v79 = a3;
  v76 = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  v73 = (struct _SLIST_ENTRY *)v11;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > *((_DWORD *)this + 50) )
  {
    v13 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
    *(_QWORD *)(v13 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 50);
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v73) = v11;
    v15 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v18 = v15;
    if ( v15 < 0 )
    {
      v19 = WdLogNewEntry5_WdEvent(v17, v16);
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = v18;
      WdLogEvent5_WdEvent(v19);
      return (unsigned int)v18;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v75 = 0;
      v82 = 0LL;
      v83 = 0LL;
      v80 = 0LL;
      v81 = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq(0LL, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p(&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v71 = v20;
  v77 = v20;
  v74[1] = (struct _SLIST_ENTRY *)v20;
  ++*(_DWORD *)(v20 + 1140);
  v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v20 + 1120));
  if ( !v22 )
  {
    ++*(_DWORD *)(v20 + 1144);
    v22 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v20 + 1168))(
                          *(unsigned int *)(v20 + 1156),
                          *(unsigned int *)(v20 + 1164),
                          *(unsigned int *)(v20 + 1160),
                          v20 + 1120);
  }
  v74[0] = v22;
  if ( !v22 )
  {
    v34 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v34 + 24) = 1854LL;
    WdLogEvent5_WdLowResource(v34);
    goto LABEL_34;
  }
  v23 = *(_QWORD *)(v20 + 16);
  v24 = *(_DWORD *)(v23 + 2104);
  if ( v24 < 0x2000 )
    v25 = 1;
  else
    v25 = *(_DWORD *)(v23 + 248);
  if ( v24 >= 0x2000 || (v26 = *(_BYTE *)(v23 + 2396)) != 0 )
    v26 = 1;
  if ( v26 )
    v27 = *(_DWORD *)(v23 + 2312) * (48 * v25 + ((8 * v25 + 175) & 0xFFFFFFF8)) + 8 * v25 + 512;
  else
    v27 = 1280;
  memset(v22, 0, v27);
  v28 = *(_QWORD *)(v20 + 16);
  v29 = *(_DWORD *)(v28 + 2104);
  if ( v29 < 0x2000 )
    v30 = 1LL;
  else
    v30 = *(unsigned int *)(v28 + 248);
  if ( v29 >= 0x2000 || (v31 = *(_BYTE *)(v28 + 2396)) != 0 )
    v31 = 1;
  v32 = *(_DWORD *)(v28 + 2312);
  *((_BYTE *)&v22[21].Next + 12) = v31;
  if ( v31 )
  {
    HIDWORD(v22[31].Next) = v32;
    *((_DWORD *)&v22[31].Next + 2) = v30;
    *((_DWORD *)&v22[31].Next + 3) = v32 * (48 * v30 + ((8 * v30 + 175) & 0xFFFFFFF8)) + 16;
    v33 = v32 * (48 * v30 + ((8 * v30 + 175) & 0xFFFFFFF8)) + 512;
    LODWORD(v22[30].Next) = v33;
    HIDWORD(v22[30].Next) = 8 * v30 + v33;
  }
  v22->Next = v73;
  if ( (v11 & 0x20) != 0 )
  {
    v35 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v35 = 3072;
    LODWORD(v22->Next) = (__int64)v22->Next & 0xFFFFFBFF | v35;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      HIDWORD(v22[7].Next) = 0;
  }
  v36 = *((unsigned int *)this + 50);
  if ( (_DWORD)v36 )
  {
    v37 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( !a2->PrivateDriverDataSize
      && *((_DWORD *)v37 + 416) < 0x8000u
      && (*((_DWORD *)v37 + 69) == 4318 || DXGADAPTER::IsWarpAdapter(v37)) )
    {
      v38 = WdLogNewEntry5_WdWarning(v37, v36, v30);
      *(_QWORD *)(v38 + 24) = 1888LL;
      WdLogEvent5_WdWarning(v38);
      CVidSchSubmitData::~CVidSchSubmitData(v74);
      return 3221225485LL;
    }
    v39 = (struct _SLIST_ENTRY *)operator new[]((unsigned int)(v36 + 8), 0x4B677844u, (POOL_TYPE)512);
    if ( v39 )
    {
      v22[1].Next = v39;
      LODWORD(v39->Next) = *((_DWORD *)this + 50);
      HIDWORD(v39->Next) = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v42 = &v22[1].Next->Next + 1;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v42, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove(&v22[1].Next->Next + 1, a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_53;
    }
LABEL_34:
    CVidSchSubmitData::~CVidSchSubmitData(v74);
    return 3221225495LL;
  }
LABEL_53:
  *((_QWORD *)&v22[2].Next + 1) = a2->Commands;
  HIDWORD(v22[3].Next) = a2->CommandLength;
  *((_DWORD *)&v22[4].Next + 3) = *((_DWORD *)this + 50);
  LODWORD(v22[5].Next) = a2->PrivateDriverDataSize;
  if ( DXGADAPTER::IsWarpAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v46 = a2->PrivateDriverDataSize;
    if ( v46 != 304 && v46 != 280 )
    {
      v47 = -1073741578LL;
LABEL_57:
      v48 = WdLogNewEntry5_WdWarning(v44, v43, v45);
      *(_QWORD *)(v48 + 24) = this;
      *(_QWORD *)(v48 + 32) = v47;
      WdLogEvent5_WdWarning(v48);
      goto LABEL_73;
    }
    Next = v22[1].Next;
    if ( RtlCompareMemoryUlong(&Next->Next + 1, 0x100uLL, 0) != 256 )
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = this;
      *(_QWORD *)(v53 + 32) = -1073741580LL;
      WdLogEvent5_WdWarning(v53);
      memset(&Next->Next + 1, 0, 0x100uLL);
    }
  }
  LODWORD(v47) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMT_HANDLE *, _DWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 856LL))(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                   *((_QWORD *)this + 2),
                   a2->NumPrimaries,
                   a2->WrittenPrimaries,
                   BroadcastContextCount,
                   v22 + 12);
  if ( (int)v47 >= 0 )
  {
    v22[21].Next = (struct _SLIST_ENTRY *)a6;
    *((_DWORD *)&v22[21].Next + 2) = a7;
    v58 = 0LL;
    LODWORD(v59) = 0;
    ListEntry = (PSLIST_ENTRY)BroadcastContextCount;
    if ( BroadcastContextCount <= 0 )
    {
LABEL_69:
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v84.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v84.Token.Flip.FenceValue = a2->PresentHistoryToken;
        v64 = SubmitPresentHistoryToken(&v84, v79, v78, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL);
        v47 = v64;
        if ( (int)(v64 + 0x80000000) >= 0 && v64 != -1073741130 )
        {
          v67 = WdLogNewEntry5_WdWarning(0x80000000LL, v65, v66);
          *(_QWORD *)(v67 + 24) = this;
          *(_QWORD *)(v67 + 32) = v47;
          WdLogEvent5_WdWarning(v67);
          LODWORD(v47) = 0;
        }
      }
      goto LABEL_73;
    }
    while ( 1 )
    {
      v60 = v22[1].Next;
      if ( v60 )
        _InterlockedIncrement((volatile signed __int32 *)&v60->Next + 1);
      v61 = a5[v58];
      if ( *((struct _KTHREAD **)v61 + 52) != KeGetCurrentThread() )
      {
        v62 = WdLogNewEntry5_WdAssertion(v61);
        *(_QWORD *)(v62 + 24) = 1982LL;
        WdLogEvent5_WdAssertion(v62);
        v61 = a5[v58];
      }
      v63 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 520LL)
                                                                        + 8LL)
                                                            + 432LL))(
              *((_QWORD *)v61 + 29),
              v22);
      v47 = v63;
      if ( v63 < 0 )
        break;
      LODWORD(v22->Next) &= ~0x800u;
      LODWORD(v59) = v59 + 1;
      if ( ++v58 >= BroadcastContextCount )
        goto LABEL_69;
    }
    v44 = (CRefCountedBuffer *)v22[1].Next;
    if ( v44 )
      CRefCountedBuffer::RefCountedBufferRelease(v44);
    v59 = (int)v59;
    for ( i = v59;
          i >= 0;
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 520LL)
                                                             + 8LL)
                                                 + 448LL))(
            *((_QWORD *)a5[i--] + 29),
            0LL) )
    {
      ;
    }
    if ( (int)v59 < BroadcastContextCount )
    {
      do
      {
        v70 = 0LL;
        if ( a2->NumPrimaries )
        {
          do
          {
            v45 = *((_QWORD *)&v22[12].Next + v70 + 1);
            if ( v45 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 424LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v59] + 2) + 16LL) + 552LL),
                0LL,
                v45,
                0LL);
            v70 = (unsigned int)(v70 + 1);
          }
          while ( (unsigned int)v70 < a2->NumPrimaries );
          BroadcastContextCount = (__int64)ListEntry;
        }
        ++v59;
      }
      while ( v59 < BroadcastContextCount );
    }
    goto LABEL_57;
  }
  v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
  *(_QWORD *)(v57 + 24) = 1958LL;
  WdLogEvent5_WdWarning(v57);
LABEL_73:
  v68 = (volatile signed __int32 *)v22[1].Next;
  if ( v68 && _InterlockedExchangeAdd(v68 + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v68, 0);
  ++*(_DWORD *)(v71 + 1148);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v71 + 1120)) < *(_WORD *)(v71 + 1136) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v71 + 1120), v22);
  }
  else
  {
    ++*(_DWORD *)(v71 + 1152);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v71 + 1176))(v22, v71 + 1120);
  }
  return (unsigned int)v47;
}
