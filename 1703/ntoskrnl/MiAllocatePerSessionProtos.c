/*
 * XREFs of MiAllocatePerSessionProtos @ 0x1406BDAA4
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MmSizeOfMdl @ 0x1401228F0 (MmSizeOfMdl.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeSubsectionPte @ 0x14017CF90 (MiMakeSubsectionPte.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  struct _MDL *v7; // r14
  __int64 ControlAreaPartition; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  int v12; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r11
  unsigned int i; // r13d
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r10
  SIZE_T v21; // rbx
  SIZE_T v22; // rax
  struct _MDL *v23; // rax
  int v24; // ebx
  int v25; // eax
  void *v26; // rcx
  ULONG_PTR *v27; // [rsp+50h] [rbp-88h]
  __int64 v28; // [rsp+58h] [rbp-80h]
  _QWORD *v29; // [rsp+60h] [rbp-78h]
  _QWORD v30[2]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v31[10]; // [rsp+88h] [rbp-50h] BYREF

  *a5 = 0LL;
  v7 = 0LL;
  v29 = *(_QWORD **)a1;
  ControlAreaPartition = MiGetControlAreaPartition(*(_QWORD *)a1);
  v27 = (ULONG_PTR *)ControlAreaPartition;
  if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0LL) )
    return 3221225773LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73536D4Du);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 1;
    v13 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * *(unsigned int *)(a1 + 44), 0x74536D4Du);
    v14 = v13;
    v11[4] = v13;
    if ( v13 )
    {
      memset(v13, 0, 8LL * *(unsigned int *)(a1 + 44));
      MiMakeSubsectionPte(a1);
      v15 = *(_QWORD *)(a1 + 8);
      for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
      {
        v17 = MI_READ_PTE_LOCK_FREE(v15);
        if ( !v17 )
          break;
        if ( !a2 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v17) )
          {
            *v14 = v20;
            if ( MiPteInShadowRange((unsigned __int64)v14) )
              goto LABEL_13;
          }
          else
          {
            *v14 = v19;
            if ( MiPteInShadowRange((unsigned __int64)v14) )
LABEL_13:
              MiWritePteShadow();
          }
        }
        ++v14;
        v15 = v18 + 8;
      }
      v28 = v11[4];
      if ( a2 )
      {
        v21 = (unsigned __int64)i << 12;
        v22 = MmSizeOfMdl((PVOID)a2, v21);
        v23 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x206C644Du);
        v7 = v23;
        if ( !v23 )
          goto LABEL_17;
        v23->Next = 0LL;
        v23->Size = 8 * (((v21 + (a2 & 0xFFF) + 4095) >> 12) + 6);
        v23->MdlFlags = 0;
        v23->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
        v23->ByteOffset = a2 & 0xFFF;
        v23->ByteCount = v21;
        MmProbeAndLockPages(v23, 0, IoReadAccess);
        v24 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
        if ( !(unsigned int)MiChargeResident(v27, i, 0LL) )
        {
LABEL_17:
          v12 = -1073741670;
LABEL_26:
          ControlAreaPartition = (__int64)v27;
          goto LABEL_27;
        }
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && (v24 & 2) != 0 )
        {
          v31[1] = *(_QWORD *)(v29[12] + 16LL);
          v31[0] = (unsigned __int64)a3 << 12;
          v30[1] = 0LL;
          v30[0] = a4 + v31[0] + *(_QWORD *)(*v29 + 32LL);
          v25 = MiFillPerSessionProtos((_DWORD)v29, v28, (int)v7 + 48, i, v24, a3, a4, (__int64)v31, (__int64)v30);
        }
        else
        {
          v25 = MiFillPerSessionProtos((_DWORD)v29, v28, (int)v7 + 48, i, v24, a3, a4, 0LL, 0LL);
        }
        v12 = v25;
        if ( v25 < 0 )
          goto LABEL_26;
      }
      *a5 = v11;
      v11 = 0LL;
      v12 = 0;
      goto LABEL_26;
    }
  }
  v12 = -1073741670;
LABEL_27:
  if ( v7 )
  {
    MmUnlockPages(v7);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v11 )
  {
    v26 = (void *)v11[4];
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v12 < 0 )
    MiReturnCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44));
  return (unsigned int)v12;
}
