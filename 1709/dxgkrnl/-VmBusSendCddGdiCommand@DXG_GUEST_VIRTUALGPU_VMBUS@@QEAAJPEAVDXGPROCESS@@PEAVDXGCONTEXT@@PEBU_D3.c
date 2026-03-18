/*
 * XREFs of ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0195244
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  UINT CommandLength; // r9d
  __int64 v8; // rax
  UINT AllocationCount; // eax
  size_t v11; // rbx
  unsigned int v12; // r14d
  char *v13; // rax
  struct DXGKVMB_COMMAND_BASE *v14; // rdi
  struct _MDL *v15; // r9
  __int64 i; // r15
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  struct _EX_RUNDOWN_REF *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v27; // [rsp+78h] [rbp+20h] BYREF

  CommandLength = a4->CommandLength;
  if ( CommandLength > 0x20000 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 5286LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount > 0x4000 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 5291LL;
    goto LABEL_3;
  }
  v11 = 8 * AllocationCount;
  v12 = v11 + CommandLength + 56;
  v13 = (char *)operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
  v14 = (struct DXGKVMB_COMMAND_BASE *)v13;
  if ( !v13 )
    return 3221225495LL;
  *((_DWORD *)v13 + 2) = 0;
  *(_QWORD *)v13 = 0LL;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 40;
  *((_DWORD *)v13 + 2) = *((_DWORD *)a2 + 106);
  *((_DWORD *)v13 + 8) = a4->AllocationCount;
  *((_DWORD *)v13 + 7) = a4->CommandLength;
  *((_QWORD *)v13 + 5) = a4->pNewCommandBuffer;
  *((_DWORD *)v13 + 12) = a4->Flags;
  *((_DWORD *)v13 + 6) = *((_DWORD *)a3 + 7);
  memmove(v13 + 56, a4->pNewAllocationList, v11);
  memmove((char *)v14 + v11 + 56, a4->pNewCommandBuffer, a4->CommandLength);
  for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
  {
    hAllocation = a4->pNewAllocationList[i].hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 200));
    v18 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)a2 + 60)
      && (v19 = *((_QWORD *)a2 + 28),
          v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
          ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) != 0
      && (*(_BYTE *)(v19 + 16LL * (unsigned int)v18 + 8) & 0x1F) == 5 )
    {
      v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * (unsigned int)v18);
    }
    else
    {
      v21 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v21);
    ExReleasePushLockSharedEx((char *)a2 + 200, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)v14 + 2 * i + 14) = v27[12].Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
  }
  v22 = VmBusSendSyncMessageStatusReturn(*this, v14, v12, v15);
  v24 = v22;
  if ( v22 < 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdAssertion(v25);
  }
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v24;
}
