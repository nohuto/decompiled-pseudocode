/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007F8B4
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C00AC1A8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C00011F4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001224 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007E1B8 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C007F5EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C007F784 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C007F81C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00CF1AC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C016F9E4 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C016FA20 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0195038 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0197EB4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01CE26C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *Value,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  struct _D3DKMT_PRESENT *v5; // r14
  BLTQUEUE *v6; // rdi
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rcx
  struct _LIST_ENTRY **v9; // r13
  struct DXGADAPTER *Adapter; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 Current; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // r8
  _DWORD *v17; // rbx
  struct _DXGKARG_PRESENT *v18; // r9
  __int64 SubRectCnt; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGDEVICE *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _D3DKMT_PRESENT *v41; // rbx
  struct DXGCONTEXT *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  struct DXGPROCESS *v47; // rax
  struct DXGCONTEXT *v48; // rdx
  const struct _DXGKARG_PRESENT *v49; // r9
  struct _LIST_ENTRY *v50; // rcx
  struct COREDEVICEACCESS *AllocationType; // [rsp+20h] [rbp-F8h]
  struct tagRECT *Protect; // [rsp+28h] [rbp-F0h]
  struct tagRECT *p_SrcRect; // [rsp+30h] [rbp-E8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-D8h]
  size_t Size; // [rsp+48h] [rbp-D0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD *v57; // [rsp+68h] [rbp-B0h] BYREF
  int v58; // [rsp+70h] [rbp-A8h]
  ULONG_PTR RegionSize[2]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v60[2]; // [rsp+88h] [rbp-90h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v61; // [rsp+98h] [rbp-80h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-58h]
  _BYTE v63[80]; // [rsp+C8h] [rbp-50h] BYREF
  BLTQUEUE *v64; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v65; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v66; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v67; // [rsp+138h] [rbp+20h]

  v67 = a4;
  v66 = Value;
  v65 = a2;
  v64 = this;
  v5 = Value;
  v6 = this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)Value, 12000);
    a2 = v65;
  }
  if ( (*((_DWORD *)v6 + 212) & 1) == 0 )
    goto LABEL_33;
  Value = (struct _D3DKMT_PRESENT *)v5->Flags.Value;
  if ( ((unsigned __int8)Value & 7) != 0 )
  {
    this = (BLTQUEUE *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 300LL);
    if ( ((unsigned __int8)this & 0x10) == 0 && !*((_BYTE *)a2 + 401) )
    {
      v25 = WdLogNewEntry5_WdError(this);
      LODWORD(Current) = -1073741811;
      *(_QWORD *)(v25 + 24) = -1073741811LL;
      *(_QWORD *)(v25 + 32) = v6;
      WdLogEvent5_WdError(v25);
      v28 = (qword_1C005F010 & 2) == 0;
LABEL_44:
      if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, 12000);
      return (unsigned int)Current;
    }
    if ( *((int *)v6 + 213) < 0 )
      goto LABEL_33;
    if ( ((unsigned __int8)Value & 0x20) != 0 )
    {
      *((_BYTE *)v6 + 407) = 1;
      if ( (int)BLTQUEUE::IssueCommand(v6) < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v30 + 24) = -1073741130LL;
        *(_QWORD *)(v30 + 32) = v6;
        WdLogEvent5_WdError(v30);
LABEL_33:
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)this, &EventProfilerExit, (__int64)Value, 12000);
        return 3221226166LL;
      }
    }
    LODWORD(v57) = 0;
    v7 = (struct _LIST_ENTRY *)((char *)v6 + 80);
    do
    {
      v9 = BLTQUEUE::RemoveQueueHead(v6, v7);
      v60[0] = v9;
      if ( v9 )
        break;
      if ( (v5->Flags.Value & 0x10) != 0 )
      {
        v36 = WdLogNewEntry5_WdEvent();
        v32 = -1071775486;
        *(_QWORD *)(v36 + 24) = -1071775486LL;
        *(_QWORD *)(v36 + 32) = v6;
        WdLogEvent5_WdEvent(v36);
        v33 = qword_1C005F010;
        v35 = (qword_1C005F010 & 2) == 0;
LABEL_56:
        if ( !v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, 12000);
        return v32;
      }
      *((_BYTE *)v6 + 406) = 1;
      LODWORD(BaseAddress) = BLTQUEUE::IssueCommand(v6);
      if ( (int)BaseAddress < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v8);
        v32 = (unsigned int)BaseAddress;
        *(_QWORD *)(v31 + 24) = (int)BaseAddress;
        *(_QWORD *)(v31 + 32) = v6;
        WdLogEvent5_WdError(v31);
        v35 = (qword_1C005F010 & 2) == 0;
        goto LABEL_56;
      }
      LODWORD(v57) = (_DWORD)v57 + 1;
      v7 = (struct _LIST_ENTRY *)((char *)v6 + 80);
    }
    while ( (unsigned int)v57 < 3 );
    if ( !v9 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v24 + 24) = -1073741130LL;
      *(_QWORD *)(v24 + 32) = v6;
      WdLogEvent5_WdAssertion(v24);
      goto LABEL_33;
    }
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)v6);
    v11 = BLTENTRY::SetupPresentParameters(
            (struct DXGALLOCATION **)v9,
            v6,
            (struct DXGDEVICE **)v65,
            v5,
            v67,
            a5,
            BYTE1(*((_DWORD *)Adapter + 75)) & 1);
    Current = v11;
    if ( v11 < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v37 + 24) = Current;
      *(_QWORD *)(v37 + 32) = v6;
      WdLogEvent5_WdError(v37);
      goto LABEL_27;
    }
    if ( *((_BYTE *)v65 + 401) && (v66->Flags.Value & 4) != 0 )
    {
      v38 = (struct DXGDEVICE *)*((_QWORD *)v65 + 2);
      BaseAddress = *(PVOID *)(*((_QWORD *)v38 + 2) + 16LL);
      if ( (int)BLTQUEUE::PrepareStagingBuffer(v6, v38, v66->hSource, a5) < 0 )
      {
        v40 = WdLogNewEntry5_WdError(v39);
        *(_QWORD *)(v40 + 24) = 931LL;
        WdLogEvent5_WdError(v40);
      }
      Current = (__int64)DXGPROCESS::GetCurrent();
      RegionSize[0] = Current;
      v41 = v66;
      DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v57, v66->hSource);
      LODWORD(Size) = 0;
      Src = &v41->SrcRect;
      p_SrcRect = &v41->SrcRect;
      Protect = &v41->SrcRect;
      v42 = v65;
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 3888),
                           (struct DXGPROCESS *)Current,
                           v65,
                           v57[24],
                           *((_DWORD *)v6 + 659),
                           Protect,
                           p_SrcRect,
                           1u,
                           Src,
                           Size,
                           0LL);
      if ( (int)Current >= 0 )
      {
        ++*((_QWORD *)v6 + 335);
        LODWORD(v64) = *((_DWORD *)v42 + 6);
        if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 3888),
               (struct DXGPROCESS *)RegionSize[0],
               1u,
               (const unsigned int *)v6 + 666,
               0,
               1u,
               (const unsigned int *)&v64,
               (const unsigned __int64 *)v6 + 335,
               0LL,
               0LL,
               0) < 0 )
        {
          v46 = WdLogNewEntry5_WdError(v45);
          *(_QWORD *)(v46 + 24) = 968LL;
          WdLogEvent5_WdError(v46);
        }
        memset(&v61, 0, sizeof(v61));
        v61.FenceValueArray = (const UINT64 *)((char *)v6 + 2680);
        v61.hDevice = *(_DWORD *)(*((_QWORD *)v42 + 2) + 332LL);
        v61.ObjectCount = 1;
        v61.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)v6 + 2664);
        v58 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v61, 0, 0LL);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v60, (BLTQUEUE *)((char *)v6 + 632));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v60);
        v47 = DXGPROCESS::GetCurrent();
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v63, v47);
        if ( *(_DWORD *)(*(_QWORD *)v6 + 132LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          memset(v9 + 9, 0, 0x40uLL);
          *((_DWORD *)v9 + 22) = 4;
          *((_DWORD *)v9 + 18) = v66->VidPnSourceId;
          *((_DWORD *)v9 + 23) = *((_DWORD *)v6 + 661);
          *((_DWORD *)v9 + 28) = 1;
          v9[15] = (struct _LIST_ENTRY *)((char *)v6 + 2688);
          v9[10] = (struct _LIST_ENTRY *)*((_QWORD *)v6 + 332);
          LODWORD(Current) = v58;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v60);
      }
      else
      {
        v44 = WdLogNewEntry5_WdError(v43);
        *(_QWORD *)(v44 + 24) = 948LL;
        WdLogEvent5_WdError(v44);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57);
      goto LABEL_27;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)v6) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)v6 + 2568, Executive, 0, 0, 0LL);
      if ( (v66->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(v6, v48, v66, v49, AllocationType, (struct BLTENTRY *)v9);
      KeReleaseMutex((PRKMUTEX)((char *)v6 + 2568), 0);
      goto LABEL_27;
    }
    BaseAddress = 0LL;
    v57 = *(_DWORD **)(v14 + 56);
    v17 = v57 + 2;
    RegionSize[1] = (ULONG_PTR)(v57 + 2);
    if ( *v57 != -791674878 || (((v16[22] >> 2) & 1) == 0 ? (v15 = v16[6]) : (v15 = v16[5]), *v17 != (_DWORD)v15) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v20[3] = Current;
      v20[4] = v65;
      v20[5] = v6;
      WdLogEvent5_WdError(v20);
      LODWORD(Current) = -1073741811;
      v58 = -1073741811;
      goto LABEL_27;
    }
    if ( ((v16[22] >> 2) & 1) != 0 )
    {
      memset(v17, 0, 0x48uLL);
      v57[4] |= 4u;
    }
    else
    {
      v18 = v67;
      v57[4] = v67->Flags.0;
      v17[3] = v18->Color;
      *((_OWORD *)v17 + 2) = v18->DstRect;
      *((_OWORD *)v17 + 1) = v18->SrcRect;
      v62 = *(_QWORD *)(v14 + 48);
      SubRectCnt = v18->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v62 - 80) >> 4) )
      {
        RegionSize[0] = 16 * SubRectCnt;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
          goto LABEL_27;
        v18 = v67;
      }
      else
      {
        BaseAddress = v17 + 13;
      }
      memmove(BaseAddress, v18->pDstSubRects, 16LL * v18->SubRectCnt);
      v17[12] = v67->SubRectCnt;
      *(_QWORD *)v17 = BaseAddress;
    }
    *v57 = -791674877;
LABEL_27:
    if ( (int)Current >= 0 )
    {
      BLTQUEUE::InsertQueueTail(v6, (struct _LIST_ENTRY *)v6 + 4, (struct BLTENTRY *)v9);
      *((LARGE_INTEGER *)v6 + 93) = KeQueryPerformanceCounter(0LL);
      KeSetEvent((PRKEVENT)((char *)v6 + 352), 0, 0);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, 12000);
      return 0LL;
    }
    v50 = v9[5];
    if ( v50 )
    {
      ObfDereferenceObject(v50);
      v9[5] = 0LL;
    }
    if ( v9[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v9, 0);
    BLTQUEUE::InsertQueueHead(v6, (struct _LIST_ENTRY *)v6 + 5, (struct BLTENTRY *)v9);
    v28 = (qword_1C005F010 & 2) == 0;
    goto LABEL_44;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerExit, (__int64)Value, 12000);
  return -1073741811LL;
}
