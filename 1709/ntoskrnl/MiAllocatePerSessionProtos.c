/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406EAE50
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140115AC0 (MmSizeOfMdl.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  __int64 v8; // r9
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  int v12; // ebx
  __int64 v13; // r12
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 *v17; // r11
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r9
  __int64 PteShadow; // r8
  __int64 v21; // r8
  __int64 v22; // r10
  unsigned __int64 v23; // rbx
  SIZE_T v24; // rax
  struct _MDL *v25; // rax
  int v26; // ebx
  int v27; // eax
  void *v28; // rcx
  int v29; // [rsp+50h] [rbp-88h]
  ULONG_PTR *ControlAreaPartition; // [rsp+58h] [rbp-80h]
  __int64 v31; // [rsp+60h] [rbp-78h]
  _QWORD *v32; // [rsp+68h] [rbp-70h]
  _QWORD v33[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v34[9]; // [rsp+90h] [rbp-48h] BYREF

  *a5 = 0LL;
  v7 = 0LL;
  v32 = *(_QWORD **)a1;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(*(_QWORD *)a1);
  if ( !(unsigned int)MiChargeCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44), 0LL, v8) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73536D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  *((_DWORD *)PoolWithTag + 10) = 1;
  v14 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v15 = v14;
  v11[4] = v14;
  if ( !v14 )
    goto LABEL_4;
  memset(v14, 0, 8LL * *(unsigned int *)(a1 + 44));
  MiMakeSubsectionPte(a1);
  v17 = *(__int64 **)(a1 + 8);
  v18 = 0LL;
  v29 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_22;
  v19 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    PteShadow = *v17;
    if ( (unsigned __int64)v17 >= v19 && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    if ( !PteShadow )
      break;
    if ( !a2 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow, v16, PteShadow) )
      {
        *v15 = v22;
        if ( (unsigned __int64)v15 < v19 || (unsigned __int64)v15 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_20;
      }
      else
      {
        *v15 = v21;
        if ( (unsigned __int64)v15 < v19 || (unsigned __int64)v15 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_20;
      }
      MiWritePteShadow();
      v19 = 0xFFFFF6FB7DBED000uLL;
    }
LABEL_20:
    ++v15;
    ++v17;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < *(_DWORD *)(a1 + 44) );
  v29 = v18;
LABEL_22:
  v31 = v11[4];
  if ( !a2 )
  {
    v13 = (__int64)ControlAreaPartition;
LABEL_34:
    *a5 = v11;
    v11 = 0LL;
    v12 = 0;
    goto LABEL_35;
  }
  v23 = v18 << 12;
  v24 = MmSizeOfMdl((PVOID)a2, v18 << 12);
  v25 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x206C644Du);
  v7 = v25;
  if ( !v25 )
  {
LABEL_4:
    v12 = -1073741670;
    v13 = (__int64)ControlAreaPartition;
    goto LABEL_35;
  }
  v25->Next = 0LL;
  v25->Size = 8 * (((v23 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v25->MdlFlags = 0;
  v25->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v25->ByteOffset = a2 & 0xFFF;
  v25->ByteCount = v23;
  MmProbeAndLockPages(v25, 0, IoReadAccess);
  v26 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  v13 = (__int64)ControlAreaPartition;
  if ( !(unsigned int)MiChargeResident(ControlAreaPartition, v18) )
  {
    v12 = -1073741670;
    goto LABEL_35;
  }
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v26 & 2) != 0 )
  {
    v34[1] = *(_QWORD *)(v32[12] + 16LL);
    v34[0] = (unsigned __int64)a3 << 12;
    v33[1] = 0LL;
    v33[0] = a4 + v34[0] + *(_QWORD *)(*v32 + 32LL);
    v27 = MiFillPerSessionProtos((_DWORD)v32, v31, (int)v7 + 48, v29, v26, a3, a4, (__int64)v34, (__int64)v33);
  }
  else
  {
    v27 = MiFillPerSessionProtos((_DWORD)v32, v31, (int)v7 + 48, v29, v26, a3, a4, 0LL, 0LL);
  }
  v12 = v27;
  if ( v27 >= 0 )
    goto LABEL_34;
LABEL_35:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v11 )
  {
    v28 = (void *)v11[4];
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v12 < 0 )
    MiReturnCommit(v13, *(unsigned int *)(a1 + 44));
  return (unsigned int)v12;
}
