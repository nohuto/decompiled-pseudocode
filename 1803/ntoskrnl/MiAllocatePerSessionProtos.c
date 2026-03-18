/*
 * XREFs of MiAllocatePerSessionProtos @ 0x14075472C
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x140756740 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MmSizeOfMdl @ 0x1400B9140 (MmSizeOfMdl.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiMakeSubsectionPte @ 0x1401A666C (MiMakeSubsectionPte.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  __int64 v8; // r13
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rsi
  int v12; // edi
  __int64 *v13; // rax
  __int64 *v14; // rdi
  unsigned __int64 v15; // r11
  unsigned int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // r11
  BOOL v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rdi
  SIZE_T v27; // rdi
  SIZE_T v28; // rax
  struct _MDL *v29; // rax
  int v30; // edi
  __int64 v31; // r9
  int v32; // eax
  void *v33; // rcx
  unsigned int v34; // [rsp+50h] [rbp-98h]
  __int64 v35; // [rsp+58h] [rbp-90h]
  _QWORD *v36; // [rsp+60h] [rbp-88h]
  ULONG_PTR *ControlAreaPartition; // [rsp+68h] [rbp-80h]
  _QWORD v38[2]; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v39[10]; // [rsp+98h] [rbp-50h] BYREF

  *a5 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v36 = *(_QWORD **)a1;
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(*(_QWORD *)a1);
  if ( !(unsigned int)MiChargeCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x73536D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, 0x58uLL);
  v11[20] = 1;
  v13 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
  v14 = v13;
  if ( !v13 )
    goto LABEL_4;
  *((_QWORD *)v11 + 9) = v13;
  memset(v13, 0, 8LL * *(unsigned int *)(a1 + 44));
  MiMakeSubsectionPte(a1);
  v8 = (__int64)(v11 + 6);
  *((_QWORD *)v11 + 6) = *((_QWORD *)v11 + 6) & 0xFFFFFFFFFFFFFFF8uLL | 3;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = 0;
  v34 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_18;
  v17 = 0;
  while ( MI_READ_PTE_LOCK_FREE(v15) )
  {
    if ( !a2 )
    {
      v19 = MiPteInShadowRange((unsigned __int64)v14);
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v21, v20, v19, v21) )
      {
        *v14 = v24;
        if ( (_DWORD)v22 )
        {
          v25 = v24;
LABEL_15:
          MiWritePteShadow((__int64)v14, v25, v22);
        }
      }
      else
      {
        *v14 = v23;
        if ( (_DWORD)v22 )
        {
          v25 = v23;
          goto LABEL_15;
        }
      }
    }
    ++v14;
    v15 = v18 + 8;
    if ( ++v17 >= *(_DWORD *)(a1 + 44) )
      break;
  }
  v34 = v17;
  v7 = 0LL;
  v16 = v34;
LABEL_18:
  v26 = v16;
  *((_QWORD *)v11 + 7) = v16;
  MiUpdateSystemProtoPtesTree((__int64)(v11 + 6), 1);
  v35 = *((_QWORD *)v11 + 9);
  if ( !a2 )
  {
LABEL_27:
    *a5 = v11;
    v11 = 0LL;
    v12 = 0;
    goto LABEL_28;
  }
  v27 = v26 << 12;
  v28 = MmSizeOfMdl((PVOID)a2, v27);
  v29 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x206C644Du);
  v7 = v29;
  if ( !v29 )
    goto LABEL_4;
  v29->Next = 0LL;
  v29->Size = 8 * (((v27 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v29->MdlFlags = 0;
  v29->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v29->ByteOffset = a2 & 0xFFF;
  v29->ByteCount = v27;
  MmProbeAndLockPages(v29, 0, IoReadAccess);
  v30 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  if ( !(unsigned int)MiChargeResident(ControlAreaPartition, v34, 0LL, v31) )
  {
LABEL_4:
    v12 = -1073741670;
    goto LABEL_28;
  }
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v30 & 2) != 0 )
  {
    v39[1] = *(_QWORD *)(v36[12] + 48LL);
    v39[0] = (unsigned __int64)a3 << 12;
    v38[1] = 0LL;
    v38[0] = a4 + v39[0] + *(_QWORD *)(*v36 + 32LL);
    v32 = MiFillPerSessionProtos((_DWORD)v36, v35, (int)v7 + 48, v34, v30, a3, a4, (__int64)v39, (__int64)v38);
  }
  else
  {
    v32 = MiFillPerSessionProtos((_DWORD)v36, v35, (int)v7 + 48, v34, v30, a3, a4, 0LL, 0LL);
  }
  v12 = v32;
  if ( v32 >= 0 )
    goto LABEL_27;
LABEL_28:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v11 )
  {
    if ( v8 )
      MiUpdateSystemProtoPtesTree(v8, 0);
    v33 = (void *)*((_QWORD *)v11 + 9);
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v12 < 0 )
    MiReturnCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v12;
}
