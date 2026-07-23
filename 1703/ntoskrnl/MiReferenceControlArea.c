/*
 * XREFs of MiReferenceControlArea @ 0x1400949E0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiValidateControlAreaPartition @ 0x140096C54 (MiValidateControlAreaPartition.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _FILE_OBJECT *v4; // r13
  _QWORD *p_DataSectionObject; // rsi
  KIRQL v8; // al
  __int64 v9; // rbx
  KIRQL v10; // bp
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _KLOCK_ENTRY *v17; // r15
  _QWORD *v18; // rdi
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  __int16 v21; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+32h] [rbp-46h]
  int v23; // [rsp+34h] [rbp-44h]
  _QWORD v24[3]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  p_DataSectionObject = &v4->SectionObjectPointer->DataSectionObject;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    p_DataSectionObject += 2;
  while ( 1 )
  {
    v8 = ExAcquireSpinLockExclusive(&dword_14036BE00);
    v9 = *p_DataSectionObject;
    v10 = v8;
    if ( !*p_DataSectionObject )
    {
      *p_DataSectionObject = a2;
      v15 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      __writecr8(v10);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72)) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v10);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14036BE00, retaddr);
  else
    dword_14036BE00 = 0;
  if ( (int)MiValidateControlAreaPartition(a1, v9) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    __writecr8(v10);
    ++dword_14036C908;
LABEL_33:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = *(struct _LIST_ENTRY **)(a1 + 176);
      FsRtlReleaseFile(v4);
    }
    return 2LL;
  }
  if ( *(_BYTE *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0) )
  {
    v16 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
    v17 = (_KLOCK_ENTRY *)v16;
    if ( v16 )
      KeAbPreWait(v16);
    v21 = 263;
    v24[1] = v24;
    v22 = 6;
    v24[0] = v24;
    v23 = 0;
    v20 = 1;
    v19 = *(_QWORD *)(v9 + 80);
    *(_QWORD *)(v9 + 80) = &v19;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    __writecr8(v10);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = *(struct _LIST_ENTRY **)(a1 + 176);
      FsRtlReleaseFile(v4);
    }
    KeWaitForGate((__int64)&v21, 0x12u);
    if ( v17 )
    {
      KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, &v17->TreeNode);
      KeAbPostReleaseEx((ULONG_PTR)p_DataSectionObject, v17);
    }
    *a3 = 0LL;
    return 1LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 20);
      if ( (v11 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v9, ((v11 & 0x200000) == 0) | 2u) )
      {
LABEL_32:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
        __writecr8(v10);
        goto LABEL_33;
      }
    }
    else if ( (((unsigned __int8)(*(_DWORD *)a1 >> 21) ^ *(_BYTE *)(v9 + 62)) & 1) != 0 )
    {
      ++dword_14036C908;
      goto LABEL_32;
    }
    v12 = MiBuildWakeList(v9, 4LL);
    ++*(_QWORD *)(v9 + 24);
    v13 = (_QWORD *)v12;
    MiRemoveUnusedSegment(v9);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v9 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v9 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    __writecr8(v10);
    if ( v13 )
    {
      do
      {
        v18 = (_QWORD *)*v13;
        KeSignalGate((__int64)(v13 + 2), 1);
        v13 = v18;
      }
      while ( v18 );
    }
    *a3 = v9;
    return 0LL;
  }
}
