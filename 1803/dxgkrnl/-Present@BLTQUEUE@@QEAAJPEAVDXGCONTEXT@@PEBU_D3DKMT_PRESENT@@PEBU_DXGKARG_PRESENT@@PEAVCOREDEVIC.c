/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0156324 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000254C (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0036A1C (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00D0CAC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D95C0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00D9630 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0181650 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0184B20 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01D4E28 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01D4ED8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01D4F84 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01D6378 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01D69C0 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 Current; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _LIST_ENTRY **v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGADAPTER *Adapter; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGDEVICE *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  struct DXGCONTEXT *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct DXGPROCESS *v47; // rax
  __int64 v48; // rdx
  __int64 hDestination; // rcx
  struct _EX_RUNDOWN_REF *v50; // rbx
  struct _DXGKARG_PRESENT *v51; // r9
  __int64 SubRectCnt; // rax
  _QWORD *v53; // rax
  struct DXGCONTEXT *v54; // rdx
  const struct _DXGKARG_PRESENT *v55; // r9
  struct _LIST_ENTRY *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  struct COREDEVICEACCESS *AllocationType; // [rsp+20h] [rbp-118h]
  struct tagRECT *Protect; // [rsp+28h] [rbp-110h]
  RECT *p_SrcRect; // [rsp+30h] [rbp-108h]
  struct tagRECT *Src; // [rsp+40h] [rbp-F8h]
  size_t Size; // [rsp+48h] [rbp-F0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-D8h] BYREF
  int v65; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+70h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+78h] [rbp-C0h] BYREF
  int v68; // [rsp+80h] [rbp-B8h]
  ULONG_PTR RegionSize[2]; // [rsp+88h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v70; // [rsp+98h] [rbp-A0h]
  _QWORD v71[2]; // [rsp+A0h] [rbp-98h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v72; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-60h]
  _BYTE v74[88]; // [rsp+E0h] [rbp-58h] BYREF
  BLTQUEUE *v75; // [rsp+140h] [rbp+8h] BYREF
  struct DXGCONTEXT *v76; // [rsp+148h] [rbp+10h]
  struct _D3DKMT_PRESENT *v77; // [rsp+150h] [rbp+18h]
  struct _DXGKARG_PRESENT *v78; // [rsp+158h] [rbp+20h]

  v78 = a4;
  v77 = a3;
  v76 = a2;
  v75 = this;
  v66 = 0LL;
  v65 = 12000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 12000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 12000);
  if ( (*((_DWORD *)this + 212) & 1) == 0 )
    goto LABEL_5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v65);
    return -1073741811LL;
  }
  v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 300LL);
  if ( (v14 & 0x10) == 0 && !*((_BYTE *)a2 + 401) )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    LODWORD(Current) = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v65);
    return (unsigned int)Current;
  }
  if ( *((int *)this + 213) < 0 )
  {
LABEL_5:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v65);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 407) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = -1073741130LL;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
      goto LABEL_5;
    }
  }
  LODWORD(v67) = 0;
  v21 = (struct _LIST_ENTRY *)((char *)this + 80);
  v70 = (struct _LIST_ENTRY *)((char *)this + 80);
  do
  {
    v24 = BLTQUEUE::RemoveQueueHead(this, v21);
    v71[0] = v24;
    if ( v24 )
      break;
    v25 = a3->Flags.Value;
    if ( (v25 & 0x10) != 0 )
    {
      v29 = WdLogNewEntry5_WdEvent(v25, v22);
      v28 = -1071775486;
      *(_QWORD *)(v29 + 24) = -1071775486LL;
      *(_QWORD *)(v29 + 32) = this;
      WdLogEvent5_WdEvent(v29);
LABEL_34:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, v65);
      return v28;
    }
    *((_BYTE *)this + 406) = 1;
    LODWORD(BaseAddress) = BLTQUEUE::IssueCommand(this);
    if ( (int)BaseAddress < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v23);
      v28 = (unsigned int)BaseAddress;
      *(_QWORD *)(v27 + 24) = (int)BaseAddress;
      *(_QWORD *)(v27 + 32) = this;
      WdLogEvent5_WdError(v27);
      goto LABEL_34;
    }
    LODWORD(v67) = (_DWORD)v67 + 1;
    v21 = v70;
  }
  while ( (unsigned int)v67 < 3 );
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v26 + 24) = -1073741130LL;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdAssertion(v26);
    goto LABEL_5;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v33 = BLTENTRY::SetupPresentParameters((BLTENTRY *)v24, this, a2, a3, v78, a5, BYTE1(*((_DWORD *)Adapter + 75)) & 1);
  Current = v33;
  if ( v33 >= 0 )
  {
    if ( *((_BYTE *)v76 + 401) && (a3->Flags.Value & 4) != 0 )
    {
      v36 = (struct DXGDEVICE *)*((_QWORD *)v76 + 2);
      BaseAddress = *(PVOID *)(*((_QWORD *)v36 + 2) + 16LL);
      if ( (int)BLTQUEUE::PrepareStagingBuffer(this, v36, a3->hSource, (PERESOURCE **)a5) < 0 )
      {
        v39 = WdLogNewEntry5_WdError(v38);
        *(_QWORD *)(v39 + 24) = 933LL;
        WdLogEvent5_WdError(v39);
      }
      Current = (__int64)DXGPROCESS::GetCurrent(v38, v37);
      RegionSize[0] = Current;
      DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v67, a3->hSource);
      LODWORD(Size) = 0;
      Src = &a3->SrcRect;
      p_SrcRect = &a3->SrcRect;
      Protect = &a3->SrcRect;
      v40 = v76;
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (struct VMBCHANNEL__ **)BaseAddress + 510,
                           (struct DXGPROCESS *)Current,
                           v76,
                           v67[12].Count,
                           *((_DWORD *)this + 659),
                           Protect,
                           p_SrcRect,
                           1u,
                           Src,
                           Size,
                           0LL);
      if ( (int)Current >= 0 )
      {
        ++*((_QWORD *)this + 335);
        LODWORD(v75) = *((_DWORD *)v40 + 6);
        if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                    (struct VMBCHANNEL__ **)BaseAddress + 510,
                    (struct DXGPROCESS *)RegionSize[0],
                    1u,
                    (const unsigned int *)this + 666,
                    0,
                    1u,
                    (const unsigned int *)&v75,
                    (const unsigned __int64 *)this + 335,
                    0LL,
                    0LL,
                    0) < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v44 + 24) = 970LL;
          WdLogEvent5_WdError(v44);
        }
        memset(&v72, 0, sizeof(v72));
        v72.FenceValueArray = (const UINT64 *)((char *)this + 2680);
        v72.hDevice = *(_DWORD *)(*((_QWORD *)v40 + 2) + 332LL);
        v72.ObjectCount = 1;
        v72.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)this + 2664);
        v68 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v72, 0, 0LL);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v71, (BLTQUEUE *)((char *)this + 632), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
        v47 = DXGPROCESS::GetCurrent(v46, v45);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v74, v47);
        if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          memset(v24 + 9, 0, 0x40uLL);
          *((_DWORD *)v24 + 22) = 4;
          *((_DWORD *)v24 + 18) = v77->VidPnSourceId;
          *((_DWORD *)v24 + 23) = *((_DWORD *)this + 661);
          *((_DWORD *)v24 + 28) = 1;
          v24[15] = (struct _LIST_ENTRY *)((char *)this + 2688);
          v24[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 332);
          LODWORD(Current) = v68;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v71);
      }
      else
      {
        v42 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v42 + 24) = 950LL;
        WdLogEvent5_WdError(v42);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v67);
      goto LABEL_72;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
      if ( (v77->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, v54, v77, v55, AllocationType, (struct BLTENTRY *)v24);
      KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
      goto LABEL_72;
    }
    BaseAddress = 0LL;
    v67 = *(struct _EX_RUNDOWN_REF **)(v48 + 56);
    v50 = v67 + 1;
    RegionSize[1] = (ULONG_PTR)&v67[1];
    if ( LODWORD(v67->Count) != -791674878
      || (((v77->Flags.Value >> 2) & 1) == 0 ? (hDestination = v77->hDestination) : (hDestination = v77->hSource),
          LODWORD(v50->Count) != (_DWORD)hDestination) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(hDestination);
      v53[3] = Current;
      v53[4] = v76;
      v53[5] = this;
      WdLogEvent5_WdError(v53);
      LODWORD(Current) = -1073741811;
      v68 = -1073741811;
      goto LABEL_72;
    }
    if ( ((v77->Flags.Value >> 2) & 1) != 0 )
    {
      memset(v50, 0, 0x48uLL);
      LODWORD(v50[1].Count) |= 4u;
    }
    else
    {
      v51 = v78;
      LODWORD(v67[2].Count) = v78->Flags.0;
      HIDWORD(v50[1].Ptr) = v51->Color;
      *(RECT *)&v50[4].Count = v51->DstRect;
      *(RECT *)&v50[2].Count = v51->SrcRect;
      v73 = *(_QWORD *)(v48 + 48);
      SubRectCnt = v51->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v73 - 80) >> 4) )
      {
        RegionSize[0] = 16 * SubRectCnt;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
          goto LABEL_72;
        v51 = v78;
      }
      else
      {
        BaseAddress = (char *)&v50[6].Ptr + 4;
      }
      memmove(BaseAddress, v51->pDstSubRects, 16LL * v51->SubRectCnt);
      LODWORD(v50[6].Count) = v78->SubRectCnt;
      v50->Count = (ULONG_PTR)BaseAddress;
    }
    LODWORD(v67->Count) = -791674877;
    goto LABEL_72;
  }
  v35 = WdLogNewEntry5_WdError(v34);
  *(_QWORD *)(v35 + 24) = Current;
  *(_QWORD *)(v35 + 32) = this;
  WdLogEvent5_WdError(v35);
LABEL_72:
  if ( (int)Current < 0 )
  {
    v56 = v24[5];
    if ( v56 )
    {
      ObfDereferenceObject(v56);
      v24[5] = 0LL;
    }
    if ( v24[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v24, 0);
    BLTQUEUE::InsertQueueHead(this, v70, (struct BLTENTRY *)v24);
    goto LABEL_17;
  }
  BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 4, (struct BLTENTRY *)v24);
  *((LARGE_INTEGER *)this + 93) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v65);
  return 0LL;
}
