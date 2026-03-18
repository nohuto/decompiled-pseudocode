/*
 * XREFs of MiRemoveVadCharges @ 0x140495BC0
 * Callers:
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFillCommitReturnInfo @ 0x140037A00 (MiFillCommitReturnInfo.c)
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x140038358 (MiFreePhysicalView.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiIsVadLarge @ 0x14003D7C0 (MiIsVadLarge.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x14059539C (MiResidentPagesForSpan.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v4; // r15
  BOOL v5; // r14d
  ULONG_PTR *ProcessPartition; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  LONG *SharedVm; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // edx
  __int64 *VadWakeList; // rax
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 *v18; // rax
  __int64 *v19; // rdi
  __int64 *v20; // rax
  __int64 *v21; // rdi
  int v22; // ecx
  __int64 *v23; // rdi
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
    goto LABEL_10;
  }
  v31[1] = *(_QWORD *)(a1 + 8);
  v31[2] = *(_QWORD *)a1;
  MiFillCommitReturnInfo(v8, (__int64)v31, &v29);
  if ( v29 )
    MiReturnFullProcessCharges((__int64)a2, v29);
  if ( v30 )
  {
    SharedVm = MiGetSharedVm((__int64)&a2[1].IdealNode[12]);
    v11 = *((_QWORD *)SharedVm + 1);
    if ( v11 )
    {
      if ( v10 <= v11 )
      {
        *((_QWORD *)SharedVm + 1) = v11 - v10;
        goto LABEL_10;
      }
      v10 -= v11;
      *((_QWORD *)SharedVm + 1) = 0LL;
      v30 = v10;
    }
    if ( v10 )
      MiReturnCommit((__int64)ProcessPartition, v10);
  }
LABEL_10:
  v12 = (*(_DWORD *)(a1 + 48) >> 7) & 0x100 | 2;
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 )
    v12 = (*(_DWORD *)(a1 + 48) >> 7) & 0x100;
  if ( v5 )
    v12 |= 0x10u;
  if ( v12 )
  {
    VadWakeList = MiGetVadWakeList(a1, v12);
    if ( VadWakeList )
    {
      do
      {
        v23 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v23;
      }
      while ( v23 );
    }
  }
  v14 = MiGetVadWakeList(a1, 8);
  v15 = v14;
  if ( v14 )
  {
    v27 = (void *)v14[1];
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    ExFreePoolWithTag(v15, 0);
  }
  v16 = MiGetVadWakeList(a1, 4);
  v17 = v16;
  if ( v16 )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (((unsigned __int64)v16[1] >> 6) + ((v16[1] & 0x3F) != 0) + 9LL));
    ExFreePoolWithTag(v17, 0);
  }
  v18 = MiGetVadWakeList(a1, 64);
  v19 = v18;
  if ( v18 )
  {
    v24 = v18[1];
    if ( (v24 & 0x3F) != 0 )
      v25 = 10LL;
    else
      v25 = 9LL;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v25 + (v24 >> 6)));
    ExFreePoolWithTag(v19, 0);
  }
  v20 = MiGetVadWakeList(a1, 128);
  v21 = v20;
  if ( v20 )
  {
    v28 = v20[1];
    LOBYTE(v4) = (v28 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * ((v28 >> 6) + v4 + 9));
    ExFreePoolWithTag(v21, 0);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v5 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[2].Affinity.Bitmap[7], -(__int64)v8);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 7 )
  {
    v22 = 74;
    if ( _bittest(&v22, *(_DWORD *)(a1 + 48) & 7) )
    {
      v26 = MiResidentPagesForSpan(
              (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
              ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(v26);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v26);
    }
  }
}
