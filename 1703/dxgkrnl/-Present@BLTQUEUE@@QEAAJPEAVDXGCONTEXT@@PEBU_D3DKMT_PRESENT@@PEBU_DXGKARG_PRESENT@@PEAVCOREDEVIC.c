/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01724E0 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002744 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendBlt@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C002ECB0 (-VmBusSendBlt@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z.c)
 *     ?VmBusSendSignalSyncObject@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C00318AC (-VmBusSendSignalSyncObject@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00A05EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A065C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01B48F8 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01B49A8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01B4A54 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01B5DC0 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01B641C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  BLTQUEUE *v6; // rdi
  __int64 v7; // r8
  bool v8; // zf
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r9d
  __int64 v11; // rax
  __int64 Current; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _LIST_ENTRY **v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  struct DXGADAPTER *Adapter; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  struct DXGDEVICE *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _D3DKMT_PRESENT *v42; // rbx
  struct DXGCONTEXT *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  struct DXGPROCESS *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int *v59; // r8
  struct _EX_RUNDOWN_REF *v60; // rbx
  struct _DXGKARG_PRESENT *v61; // r9
  __int64 SubRectCnt; // rax
  _QWORD *v63; // rax
  struct DXGCONTEXT *v64; // rdx
  const struct _DXGKARG_PRESENT *v65; // r9
  struct _LIST_ENTRY *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  struct COREDEVICEACCESS *AllocationType; // [rsp+20h] [rbp-F8h]
  struct tagRECT *Protect; // [rsp+28h] [rbp-F0h]
  struct tagRECT *p_SrcRect; // [rsp+30h] [rbp-E8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-D8h]
  size_t Size; // [rsp+48h] [rbp-D0h]
  void *const *Sizea; // [rsp+48h] [rbp-D0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+68h] [rbp-B0h] BYREF
  int v77; // [rsp+70h] [rbp-A8h]
  ULONG_PTR RegionSize[2]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v79[2]; // [rsp+88h] [rbp-90h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v80; // [rsp+98h] [rbp-80h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-58h]
  _BYTE v82[80]; // [rsp+C8h] [rbp-50h] BYREF
  BLTQUEUE *v83; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v84; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v85; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v86; // [rsp+138h] [rbp+20h]

  v86 = a4;
  v85 = a3;
  v84 = a2;
  v83 = this;
  v6 = this;
  v7 = qword_1C006E790;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)this, &EventProfilerEnter, qword_1C006E790, 12000);
    v7 = qword_1C006E790;
    a2 = v84;
  }
  if ( (*((_DWORD *)v6 + 212) & 1) == 0 )
    goto LABEL_5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    if ( (v7 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)this, &EventProfilerExit, v7, 12000);
    return -1073741811LL;
  }
  this = (BLTQUEUE *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 300LL);
  if ( ((unsigned __int8)this & 0x10) == 0 && !*((_BYTE *)a2 + 369) )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    LODWORD(Current) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = v6;
    WdLogEvent5_WdError(v11);
    v15 = (qword_1C006E790 & 2) == 0;
LABEL_18:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 12000);
    return (unsigned int)Current;
  }
  if ( *((int *)v6 + 213) < 0 )
  {
LABEL_5:
    v8 = (v7 & 2) == 0;
LABEL_6:
    if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)this, &EventProfilerExit, v7, 12000);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)v6 + 407) = 1;
    if ( (int)BLTQUEUE::IssueCommand(v6) < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = -1073741130LL;
      *(_QWORD *)(v18 + 32) = v6;
      WdLogEvent5_WdError(v18);
LABEL_26:
      v8 = (qword_1C006E790 & 2) == 0;
      goto LABEL_6;
    }
  }
  LODWORD(v76) = 0;
  v19 = (struct _LIST_ENTRY *)((char *)v6 + 80);
  do
  {
    v24 = BLTQUEUE::RemoveQueueHead(v6, v19);
    v79[0] = v24;
    if ( v24 )
      break;
    v25 = a3->Flags.Value;
    if ( (v25 & 0x10) != 0 )
    {
      v31 = WdLogNewEntry5_WdEvent(v25);
      v27 = -1071775486;
      *(_QWORD *)(v31 + 24) = -1071775486LL;
      *(_QWORD *)(v31 + 32) = v6;
      WdLogEvent5_WdEvent(v31);
      v28 = qword_1C006E790;
      v30 = (qword_1C006E790 & 2) == 0;
LABEL_35:
      if ( !v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v28, &EventProfilerExit, v29, 12000);
      return v27;
    }
    *((_BYTE *)v6 + 406) = 1;
    LODWORD(BaseAddress) = BLTQUEUE::IssueCommand(v6);
    if ( (int)BaseAddress < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v21, v20);
      v27 = (unsigned int)BaseAddress;
      *(_QWORD *)(v26 + 24) = (int)BaseAddress;
      *(_QWORD *)(v26 + 32) = v6;
      WdLogEvent5_WdError(v26);
      v30 = (qword_1C006E790 & 2) == 0;
      goto LABEL_35;
    }
    LODWORD(v76) = (_DWORD)v76 + 1;
    v19 = (struct _LIST_ENTRY *)((char *)v6 + 80);
  }
  while ( (unsigned int)v76 < 3 );
  if ( !v24 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    *(_QWORD *)(v32 + 24) = -1073741130LL;
    *(_QWORD *)(v32 + 32) = v6;
    WdLogEvent5_WdAssertion(v32);
    goto LABEL_26;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)v6);
  v34 = BLTENTRY::SetupPresentParameters((BLTENTRY *)v24, v6, v84, a3, v86, a5, BYTE1(*((_DWORD *)Adapter + 75)) & 1);
  Current = v34;
  if ( v34 >= 0 )
  {
    if ( *((_BYTE *)v84 + 369) && (v85->Flags.Value & 4) != 0 )
    {
      v38 = (struct DXGDEVICE *)*((_QWORD *)v84 + 2);
      BaseAddress = *(PVOID *)(*((_QWORD *)v38 + 2) + 16LL);
      if ( (int)BLTQUEUE::PrepareStagingBuffer(v6, v38, v85->hSource, (PERESOURCE **)a5) < 0 )
      {
        v41 = WdLogNewEntry5_WdError(v40, v39);
        *(_QWORD *)(v41 + 24) = 932LL;
        WdLogEvent5_WdError(v41);
      }
      Current = (__int64)DXGPROCESS::GetCurrent(v40);
      RegionSize[0] = Current;
      v42 = v85;
      DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v76, v85->hSource);
      LODWORD(Size) = 0;
      Src = &v42->SrcRect;
      p_SrcRect = &v42->SrcRect;
      Protect = &v42->SrcRect;
      v43 = v84;
      LODWORD(Current) = DXGADAPTER::VmBusSendBlt(
                           (struct VMBCHANNEL__ **)BaseAddress,
                           (struct DXGPROCESS *)Current,
                           v84,
                           v76[12].Count,
                           *((_DWORD *)v6 + 659),
                           Protect,
                           p_SrcRect,
                           1,
                           Src,
                           Size,
                           0LL);
      if ( (int)Current >= 0 )
      {
        ++*((_QWORD *)v6 + 335);
        LODWORD(v83) = *((_DWORD *)v43 + 6);
        if ( (int)DXGADAPTER::VmBusSendSignalSyncObject(
                    (struct VMBCHANNEL__ **)BaseAddress,
                    (struct DXGPROCESS *)RegionSize[0],
                    1u,
                    (const unsigned int *)v6 + 666,
                    0,
                    1u,
                    (const unsigned int *)&v83,
                    (const unsigned __int64 *)v6 + 335,
                    0LL,
                    Sizea,
                    0) < 0 )
        {
          v52 = WdLogNewEntry5_WdError(v51, v50);
          *(_QWORD *)(v52 + 24) = 969LL;
          WdLogEvent5_WdError(v52);
        }
        memset(&v80, 0, sizeof(v80));
        v80.FenceValueArray = (const UINT64 *)((char *)v6 + 2680);
        v80.hDevice = *(_DWORD *)(*((_QWORD *)v43 + 2) + 332LL);
        v80.ObjectCount = 1;
        v80.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)v6 + 2664);
        v77 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v80, 0, 0LL);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v79, (BLTQUEUE *)((char *)v6 + 632), v53, v54);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
        v56 = DXGPROCESS::GetCurrent(v55);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v82, v56);
        if ( *(_DWORD *)(*(_QWORD *)v6 + 132LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          memset(v24 + 9, 0, 0x40uLL);
          *((_DWORD *)v24 + 22) = 4;
          *((_DWORD *)v24 + 18) = v85->VidPnSourceId;
          *((_DWORD *)v24 + 23) = *((_DWORD *)v6 + 661);
          *((_DWORD *)v24 + 28) = 1;
          v24[15] = (struct _LIST_ENTRY *)((char *)v6 + 2688);
          v24[10] = (struct _LIST_ENTRY *)*((_QWORD *)v6 + 332);
          LODWORD(Current) = v77;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      }
      else
      {
        v46 = WdLogNewEntry5_WdError(v45, v44);
        *(_QWORD *)(v46 + 24) = 949LL;
        WdLogEvent5_WdError(v46);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76, v47, v48, v49);
      goto LABEL_75;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)v6) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)v6 + 2568, Executive, 0, 0, 0LL);
      if ( (v85->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(v6, v64, v85, v65, AllocationType, (struct BLTENTRY *)v24);
      KeReleaseMutex((PRKMUTEX)((char *)v6 + 2568), 0);
      goto LABEL_75;
    }
    BaseAddress = 0LL;
    v76 = *(struct _EX_RUNDOWN_REF **)(v57 + 56);
    v60 = v76 + 1;
    RegionSize[1] = (ULONG_PTR)&v76[1];
    if ( LODWORD(v76->Count) != -791674878
      || ((v59[22] & 4) == 0 ? (v58 = v59[6]) : (v58 = v59[5]), LODWORD(v60->Count) != (_DWORD)v58) )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
      v63[3] = Current;
      v63[4] = v84;
      v63[5] = v6;
      WdLogEvent5_WdError(v63);
      LODWORD(Current) = -1073741811;
      v77 = -1073741811;
      goto LABEL_75;
    }
    if ( (v59[22] & 4) != 0 )
    {
      memset(v60, 0, 0x48uLL);
      LODWORD(v76[2].Count) |= 4u;
    }
    else
    {
      v61 = v86;
      LODWORD(v76[2].Count) = v86->Flags.0;
      HIDWORD(v60[1].Ptr) = v61->Color;
      *(RECT *)&v60[4].Count = v61->DstRect;
      *(RECT *)&v60[2].Count = v61->SrcRect;
      v81 = *(_QWORD *)(v57 + 48);
      SubRectCnt = v61->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v81 - 80) >> 4) )
      {
        RegionSize[0] = 16 * SubRectCnt;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
          goto LABEL_75;
        v61 = v86;
      }
      else
      {
        BaseAddress = (char *)&v60[6].Ptr + 4;
      }
      memmove(BaseAddress, v61->pDstSubRects, 16LL * v61->SubRectCnt);
      LODWORD(v60[6].Count) = v86->SubRectCnt;
      v60->Count = (ULONG_PTR)BaseAddress;
    }
    LODWORD(v76->Count) = -791674877;
    goto LABEL_75;
  }
  v37 = WdLogNewEntry5_WdError(v36, v35);
  *(_QWORD *)(v37 + 24) = Current;
  *(_QWORD *)(v37 + 32) = v6;
  WdLogEvent5_WdError(v37);
LABEL_75:
  if ( (int)Current < 0 )
  {
    v66 = v24[5];
    if ( v66 )
    {
      ObfDereferenceObject(v66);
      v24[5] = 0LL;
    }
    if ( v24[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v24, 0);
    BLTQUEUE::InsertQueueHead(v6, (struct _LIST_ENTRY *)v6 + 5, (struct BLTENTRY *)v24);
    v15 = (qword_1C006E790 & 2) == 0;
    goto LABEL_18;
  }
  BLTQUEUE::InsertQueueTail(v6, (struct _LIST_ENTRY *)v6 + 4, (struct BLTENTRY *)v24);
  *((LARGE_INTEGER *)v6 + 93) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)v6 + 352), 0, 0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v67, &EventProfilerExit, v68, 12000);
  return 0LL;
}
