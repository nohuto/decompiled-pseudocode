/*
 * XREFs of MiReferenceControlArea @ 0x1400662F8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiValidateControlAreaPartition @ 0x140067AE8 (MiValidateControlAreaPartition.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _FILE_OBJECT *v4; // r13
  _QWORD *p_DataSectionObject; // rsi
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // r15
  int v10; // r14d
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _RTL_BALANCED_NODE *v17; // r14
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+28h] [rbp-28h]
  __int16 v20; // [rsp+30h] [rbp-20h] BYREF
  char v21; // [rsp+32h] [rbp-1Eh]
  int v22; // [rsp+34h] [rbp-1Ch]
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF

  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  p_DataSectionObject = &v4->SectionObjectPointer->DataSectionObject;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
    p_DataSectionObject += 2;
  while ( 1 )
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140388100);
    v8 = *p_DataSectionObject;
    v9 = v7;
    if ( !*p_DataSectionObject )
    {
      *p_DataSectionObject = a2;
      v15 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      __writecr8(v9);
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  v10 = MiValidateControlAreaPartition(a1, v8);
  if ( v10 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    __writecr8(v9);
LABEL_27:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( !(*(_DWORD *)(v8 + 56) & 1 | ((*(_DWORD *)(v8 + 56) & 2) != 0)) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        v11 = *(_DWORD *)(a1 + 20);
        if ( (v11 & 0x100000) != 0 && !(unsigned int)MiControlAreaRequiresCharge(v8, ((v11 & 0x200000) == 0) | 2u) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
          __writecr8(v9);
          v10 = -1073740277;
          goto LABEL_27;
        }
      }
      v12 = MiBuildWakeList(v8, 4LL);
      ++*(_QWORD *)(v8 + 24);
      v13 = v12;
      MiRemoveUnusedSegment(v8);
      if ( (*(_DWORD *)a1 & 1) != 0 )
        *(_DWORD *)(v8 + 56) |= 0x8000u;
      else
        ++*(_QWORD *)(v8 + 48);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
      __writecr8(v9);
      MiReleaseControlAreaWaiters(v13);
      *a3 = v8;
      return 0LL;
    }
    v16 = KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, 0LL);
    v17 = (_RTL_BALANCED_NODE *)v16;
    if ( v16 )
      KeAbPreWait(v16);
    v22 = 0;
    v23[1] = v23;
    v20 = 263;
    v23[0] = v23;
    v21 = 6;
    v19 = 1;
    v18 = *(_QWORD *)(v8 + 80);
    *(_QWORD *)(v8 + 80) = &v18;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    __writecr8(v9);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    KeWaitForGate(&v20, 18LL);
    if ( v17 )
    {
      KeAbPreAcquire((ULONG_PTR)p_DataSectionObject, v17);
      KeAbPostReleaseEx((ULONG_PTR)p_DataSectionObject);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
}
