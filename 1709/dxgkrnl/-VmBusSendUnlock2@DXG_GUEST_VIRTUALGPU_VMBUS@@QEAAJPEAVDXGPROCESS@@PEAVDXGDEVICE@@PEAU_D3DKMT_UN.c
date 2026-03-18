/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0198C20
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkLock2 @ 0x1C009E500 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C00A1620 (DxgkUnlock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01837B8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        char a5)
{
  D3DKMT_HANDLE hAllocation; // edi
  char *v6; // rsi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rcx
  struct DXGALLOCATION *v17; // rdi
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rcx
  struct VMBCHANNEL__ *v23; // rcx
  struct _MDL *v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  int v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+2Ch] [rbp-24h]
  int v33; // [rsp+30h] [rbp-20h]
  int v34; // [rsp+38h] [rbp-18h]
  int v35; // [rsp+3Ch] [rbp-14h]
  char v36; // [rsp+40h] [rbp-10h]
  struct DXGALLOCATION *v37; // [rsp+A8h] [rbp+58h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 200;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 200));
  v11 = 0;
  v12 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)a2 + 60)
    && (v13 = *((_QWORD *)a2 + 28),
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
        ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) != 0
    && (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) == 5 )
  {
    v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
  }
  else
  {
    v15 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v15);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v17 = v37;
  v18 = -1073741811;
  if ( !v37 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v19 + 24) = a4->hAllocation;
    WdLogEvent5_WdAssertion(v19);
LABEL_19:
    v11 = v18;
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 1) + 16LL) + 16LL) != v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = a3;
    v21[4] = v37;
    v21[5] = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_19;
  }
  if ( !*((_DWORD *)v37 + 25)
    || _InterlockedExchangeAdd((volatile signed __int32 *)v37 + 25, 0xFFFFFFFF) != 1
    || (*((_BYTE *)v17 + 132) & 3) != 0 )
  {
    v18 = 0;
    goto LABEL_19;
  }
  _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
  v22 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)v17 + 14);
  *((_QWORD *)v17 + 14) = MEMORY[0xFFFFF78000000014];
  if ( v22 < 0x1E8480 )
  {
LABEL_20:
    LODWORD(v27) = v11;
    goto LABEL_21;
  }
  UnlockParavirtualizedAllocationOnGuest(v37, 1);
  v23 = *this;
  v31 = *((_DWORD *)a2 + 106);
  v36 = a5;
  v30 = 0LL;
  v32 = 0;
  v33 = 24;
  v35 = *((_DWORD *)v17 + 24);
  v34 = *((_DWORD *)a3 + 84);
  v25 = VmBusSendSyncMessageStatusReturn(v23, (struct DXGKVMB_COMMAND_BASE *)&v30, 40LL, v24);
  v27 = v25;
  if ( v25 < 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdAssertion(v28);
  }
LABEL_21:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
  return (unsigned int)v27;
}
