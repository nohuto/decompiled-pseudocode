/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0196A80
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkLock2 @ 0x1C009E500 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  char *v5; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  ULONG *v22; // r14
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v24; // rcx
  __int64 v25; // rcx
  ULONG_PTR v26; // r15
  struct _MDL *Mdl; // rsi
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  struct _MDL *v35; // rax
  struct _MDL *v36; // rdx
  __int64 v37; // r8
  NTSTATUS v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _MDL *Protect; // [rsp+28h] [rbp-A9h]
  PVOID BaseAddress; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-99h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+40h] [rbp-91h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+48h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-81h] BYREF
  ULONG_PTR Count; // [rsp+58h] [rbp-79h]
  __int64 v49; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-69h]
  int v51; // [rsp+6Ch] [rbp-65h]
  int v52; // [rsp+70h] [rbp-61h]
  int v53; // [rsp+78h] [rbp-59h]
  int v54; // [rsp+7Ch] [rbp-55h]
  struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB Value; // [rsp+80h] [rbp-51h]
  char v56; // [rsp+90h] [rbp-41h]
  __int64 v57; // [rsp+94h] [rbp-3Dh]
  _BYTE v58[24]; // [rsp+A0h] [rbp-31h] BYREF
  int v59; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v60; // [rsp+C0h] [rbp-11h]

  v45 = 0LL;
  v5 = (char *)a2 + 200;
  hAllocation = a4->hAllocation;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 200));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)a2 + 60)
    && (v12 = *((_QWORD *)a2 + 28),
        v13 = *(_DWORD *)(v12 + 16 * v11 + 8),
        ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60))
    && (v13 & 0x2000) == 0
    && (v13 & 0x1F) != 0
    && (*(_BYTE *)(v12 + 16LL * (unsigned int)v11 + 8) & 0x1F) == 5 )
  {
    v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * (unsigned int)v11);
  }
  else
  {
    v14 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v14);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v45, (struct DXGALLOCATION **)&v46);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
  v18 = v45;
  LODWORD(v5) = -1073741811;
  if ( !v45 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = 4999LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_40;
  }
  v20 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL) != v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = a3;
    v21[4] = v18;
    v21[5] = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_40;
  }
  LODWORD(v5) = 0;
  if ( v45[13].Count )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&v45[12].Ptr + 1) == 1
      && !(BYTE4(v45[16].Ptr) & 1 | ((BYTE4(v45[16].Ptr) & 2) != 0)) )
    {
      _InterlockedIncrement(&g_VgpuNumAllocationsUnderCpuAccess);
    }
    a4->pData = v18[13].Ptr;
    goto LABEL_40;
  }
  v22 = (ULONG *)&v45[15];
  RegionSize = v45[15].Count;
  Count = v45[6].Count;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v49 = 0LL;
  v50 = HostProcess;
  v51 = 0;
  v52 = 23;
  v56 = 0;
  v57 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v58, a2);
  v54 = v18[12].Count;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
  v53 = *((_DWORD *)a3 + 84);
  Value = (struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB)a4->Flags.Value;
  if ( a5 )
  {
    v56 = 1;
    v57 = 0LL;
  }
  v24 = *this;
  v44 = 16;
  LODWORD(v5) = VmBusSendSyncMessage(v24, (struct DXGKVMB_COMMAND_BASE *)&v49, 0x40u, &v59, &v44, Protect);
  if ( v44 < 0x10 || v59 < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v40 + 24) = v59;
    WdLogEvent5_WdAssertion(v40);
    goto LABEL_40;
  }
  v26 = Count;
  BaseAddress = 0LL;
  Mdl = 0LL;
  v28 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          0x801000u,
          ~(unsigned __int16)(*(_DWORD *)(Count + 4) >> 9) & 0x400 | 4);
  v5 = (char *)v28;
  if ( v28 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v30 + 24) = this;
    *(_QWORD *)(v30 + 32) = v5;
LABEL_23:
    WdLogEvent5_WdError(v30);
    goto LABEL_32;
  }
  Mdl = IoAllocateMdl(0LL, *v22, 0, 0, 0LL);
  if ( !Mdl )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    LODWORD(v5) = -1073741801;
    v33[3] = this[2];
    v33[4] = -1073741801LL;
    v33[5] = 5078LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_33;
  }
  v34 = *(_QWORD *)v22 >> 12;
  v35 = (struct _MDL *)(v60 >> 12);
  if ( (_DWORD)v34 )
  {
    v36 = Mdl + 1;
    v37 = (unsigned int)v34;
    do
    {
      v36->Next = v35;
      v35 = (struct _MDL *)((char *)v35 + 1);
      v36 = (struct _MDL *)((char *)v36 + 8);
      --v37;
    }
    while ( v37 );
  }
  v38 = MmRotatePhysicalView(BaseAddress, &RegionSize, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v5 = (char *)v38;
  if ( v38 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v30 + 24) = v5;
    *(_QWORD *)(v30 + 32) = 5093LL;
    goto LABEL_23;
  }
  LODWORD(v18[9].Count) |= 0x80000u;
  v18[13].Count = (ULONG_PTR)BaseAddress;
  _InterlockedIncrement((volatile signed __int32 *)&v18[12].Ptr + 1);
  _InterlockedIncrement(&g_VgpuNumAllocationsUnderCpuAccess);
  _InterlockedIncrement(&g_VgpuNumAllocationsLocked);
  g_VgpuNumLockedBytes += *(_QWORD *)v22;
  a4->pData = BaseAddress;
LABEL_32:
  if ( (int)v5 < 0 )
  {
LABEL_33:
    v39 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v39 + 24) = (int)v5;
    WdLogEvent5_WdAssertion(v39);
    if ( BaseAddress )
    {
      if ( (*(_DWORD *)(v26 + 4) & 0x40000) != 0 )
        MmUnmapLockedPages(BaseAddress, Mdl);
      else
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v18[15].Count, 0x8000u);
    }
  }
  if ( Mdl )
    IoFreeMdl(Mdl);
LABEL_40:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
  return (unsigned int)v5;
}
