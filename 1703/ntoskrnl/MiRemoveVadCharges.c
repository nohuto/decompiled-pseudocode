/*
 * XREFs of MiRemoveVadCharges @ 0x14051D900
 * Callers:
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x1400CE2E8 (MiFillCommitReturnInfo.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiIsVadLarge @ 0x1400D2CF0 (MiIsVadLarge.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x1400DB160 (MiFreePhysicalView.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x14045696C (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v4; // r15
  BOOL v5; // r14d
  ULONG_PTR *ProcessPartition; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  int v9; // edx
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rdi
  int v18; // ecx
  __int64 *VadWakeList; // rax
  __int64 *v20; // rdi
  LONG *SharedVm; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  void *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]
  _QWORD v31[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v31, 0, sizeof(v31));
  v4 = 0LL;
  v5 = 0;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
  if ( (unsigned int)MiIsVadLarge(a1) )
    v5 = (*(_BYTE *)(a1 + 48) & 7) != 7;
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v8 >= 0x7FFFFFFFELL )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  v31[1] = *(_QWORD *)(a1 + 8);
  v31[2] = *(_QWORD *)a1;
  MiFillCommitReturnInfo(v8, (__int64)v31, &v29);
  if ( v29 )
    MiReturnFullProcessCharges((__int64)a2, v29);
  if ( v30 )
  {
    SharedVm = MiGetSharedVm((__int64)&a2[1].IdealNode[12]);
    v23 = *((_QWORD *)SharedVm + 1);
    if ( v23 )
    {
      if ( v22 <= v23 )
      {
        *((_QWORD *)SharedVm + 1) = v23 - v22;
        goto LABEL_7;
      }
      v22 -= v23;
      *((_QWORD *)SharedVm + 1) = 0LL;
      v30 = v22;
    }
    if ( v22 )
      MiReturnCommit((__int64)ProcessPartition, v22);
  }
LABEL_7:
  v9 = (*(_DWORD *)(a1 + 48) >> 7) & 0x100 | 2;
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 )
    v9 = (*(_DWORD *)(a1 + 48) >> 7) & 0x100;
  if ( v5 )
    v9 |= 0x10u;
  if ( v9 )
  {
    VadWakeList = MiGetVadWakeList(a1, v9);
    if ( VadWakeList )
    {
      do
      {
        v20 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v20;
      }
      while ( v20 );
    }
  }
  v10 = MiGetVadWakeList(a1, 8);
  v11 = v10;
  if ( v10 )
  {
    v27 = (void *)v10[1];
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    ExFreePoolWithTag(v11, 0);
  }
  v12 = MiGetVadWakeList(a1, 4);
  v13 = v12;
  if ( v12 )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (((unsigned __int64)v12[1] >> 6) + ((v12[1] & 0x3F) != 0) + 9LL));
    ExFreePoolWithTag(v13, 0);
  }
  v14 = MiGetVadWakeList(a1, 64);
  v15 = v14;
  if ( v14 )
  {
    v24 = v14[1];
    if ( (v24 & 0x3F) != 0 )
      v25 = 10LL;
    else
      v25 = 9LL;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v25 + (v24 >> 6)));
    ExFreePoolWithTag(v15, 0);
  }
  v16 = MiGetVadWakeList(a1, 128);
  v17 = v16;
  if ( v16 )
  {
    v28 = v16[1];
    LOBYTE(v4) = (v28 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * ((v28 >> 6) + v4 + 9));
    ExFreePoolWithTag(v17, 0);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v5 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[2].Affinity.Bitmap[7], -(__int64)v8);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 )
  {
    v18 = 74;
    if ( _bittest(&v18, *(_DWORD *)(a1 + 48) & 7) )
    {
      v26 = MiResidentPagesForSpan((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(v26);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v26);
    }
  }
}
