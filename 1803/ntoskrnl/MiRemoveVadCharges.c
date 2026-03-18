/*
 * XREFs of MiRemoveVadCharges @ 0x14059D690
 * Callers:
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x14000A248 (MiFillCommitReturnInfo.c)
 *     MiIsVadLarge @ 0x14000BFC0 (MiIsVadLarge.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MiFreePhysicalView @ 0x1400B7EB0 (MiFreePhysicalView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x140568E3C (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v4; // r14
  BOOL v5; // ebp
  ULONG_PTR *ProcessPartition; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 *v18; // rax
  __int64 *v19; // rdi
  int v20; // ecx
  __int64 *VadWakeList; // rax
  __int64 *v22; // rdi
  LONG *SharedVm; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]
  _QWORD v36[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v36, 0, 0x20uLL);
  v4 = 0LL;
  v5 = 0;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
  if ( (unsigned int)MiIsVadLarge(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 7) != 7;
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v8 < 0x7FFFFFFFDLL )
  {
    v36[1] = *(_QWORD *)(a1 + 8);
    v36[2] = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v8, (__int64)v36, &v34);
    if ( v34 )
      MiReturnFullProcessCharges((__int64)a2, v34);
    if ( v35 )
    {
      SharedVm = MiGetSharedVm((__int64)&a2[1].IdealNode[12]);
      v25 = *((_QWORD *)SharedVm + 1);
      if ( v25 )
      {
        if ( v24 <= v25 )
        {
          *((_QWORD *)SharedVm + 1) = v25 - v24;
          goto LABEL_7;
        }
        v24 -= v25;
        *((_QWORD *)SharedVm + 1) = 0LL;
        v35 = v24;
      }
      if ( v24 )
        MiReturnCommit((__int64)ProcessPartition, v24);
    }
  }
LABEL_7:
  v9 = (*(_DWORD *)(a1 + 48) >> 6) & 0x100 | 2u;
  if ( (*(_DWORD *)(a1 + 48) & 0x8000000) == 0 )
    v9 = (*(_DWORD *)(a1 + 48) >> 6) & 0x100;
  if ( v5 )
    v9 = (unsigned int)v9 | 0x10;
  if ( (_DWORD)v9 )
  {
    VadWakeList = MiGetVadWakeList(a1, v9);
    if ( VadWakeList )
    {
      do
      {
        v22 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v22;
      }
      while ( v22 );
    }
  }
  v10 = MiGetVadWakeList(a1, 8LL);
  v11 = v10;
  if ( v10 )
  {
    v29 = (void *)v10[1];
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    ExFreePoolWithTag(v11, 0);
    PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 512LL);
  }
  v12 = MiGetVadWakeList(a1, 4LL);
  v13 = v12;
  if ( v12 )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (((unsigned __int64)v12[1] >> 6) + ((v12[1] & 0x3F) != 0) + 9LL));
    ExFreePoolWithTag(v13, 0);
  }
  v14 = MiGetVadWakeList(a1, 64LL);
  v15 = v14;
  if ( v14 )
  {
    v27 = v14[1];
    v28 = 9LL;
    if ( (v27 & 0x3F) != 0 )
      v28 = 10LL;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v28 + (v27 >> 6)));
    ExFreePoolWithTag(v15, 0);
  }
  v16 = MiGetVadWakeList(a1, 128LL);
  v17 = v16;
  if ( v16 )
  {
    v30 = v16[1];
    LOBYTE(v4) = (v30 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * ((v30 >> 6) + v4 + 9));
    ExFreePoolWithTag(v17, 0);
  }
  v18 = MiGetVadWakeList(a1, 512LL);
  v19 = v18;
  if ( v18 )
  {
    v31 = v18[1];
    if ( v31 )
      ExFreePoolWithTag((PVOID)v18[1], 0);
    ExFreePoolWithTag(v19, 0);
    CurrentThread = KeGetCurrentThread();
    v33 = 136LL;
    if ( !v31 )
      v33 = 72LL;
    PsReturnProcessNonPagedPoolQuota(CurrentThread->ApcState.Process, v33);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v5 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&a2[2].Affinity.Bitmap[7],
      (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    - (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
    - 1);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 )
  {
    v20 = 74;
    if ( _bittest(&v20, *(_DWORD *)(a1 + 48) & 7) )
    {
      v26 = MiResidentPagesForSpan((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(v26);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v26);
    }
  }
}
