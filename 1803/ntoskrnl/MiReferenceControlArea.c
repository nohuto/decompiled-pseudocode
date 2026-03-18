/*
 * XREFs of MiReferenceControlArea @ 0x1401253B0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MiValidateControlAreaPartition @ 0x14005A5A0 (MiValidateControlAreaPartition.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILE_OBJECT *v3; // rax
  __int64 *p_ImageSectionObject; // r14
  KIRQL v7; // al
  __int64 v8; // rdi
  KIRQL v9; // r15
  int v10; // ebx
  int v11; // ebx
  int v12; // edx
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _KLOCK_ENTRY *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  int v23; // [rsp+34h] [rbp-1Ch]
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  struct _FILE_OBJECT *FileObject; // [rsp+90h] [rbp+40h]

  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  FileObject = v3;
  p_ImageSectionObject = (__int64 *)&v3->SectionObjectPointer->ImageSectionObject;
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) == 0 )
    p_ImageSectionObject = (__int64 *)v3->SectionObjectPointer;
  while ( 1 )
  {
    v7 = ExAcquireSpinLockExclusive(&dword_1403CB280);
    v8 = *p_ImageSectionObject;
    v9 = v7;
    if ( !*p_ImageSectionObject )
    {
      *p_ImageSectionObject = a2;
      v16 = KeAbPreAcquire((ULONG_PTR)p_ImageSectionObject, 0LL, 0);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      __writecr8(v9);
      *a3 = a2;
      return 0LL;
    }
    v10 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v10 )
      break;
    __writecr8(v9);
  }
  v11 = MiValidateControlAreaPartition(a1, v8);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( *(_DWORD *)(v8 + 56) & 1 | ((*(_DWORD *)(v8 + 56) & 2) != 0) )
  {
    v17 = KeAbPreAcquire((ULONG_PTR)p_ImageSectionObject, 0LL, 0);
    v18 = (_KLOCK_ENTRY *)v17;
    if ( v17 )
      KeAbPreWait(v17);
    v23 = 0;
    v24[1] = v24;
    v21 = 263;
    v24[0] = v24;
    v22 = 6;
    v20 = 1;
    v19 = *(_QWORD *)(v8 + 80);
    *(_QWORD *)(v8 + 80) = &v19;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    __writecr8(v9);
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(FileObject);
    }
    KeWaitForGate((__int64)&v21, 0x12u);
    if ( v18 )
    {
      KeAbPreAcquire((ULONG_PTR)p_ImageSectionObject, (__int64)v18, 0);
      KeAbPostReleaseEx((ULONG_PTR)p_ImageSectionObject, v18);
    }
    *a3 = 0LL;
    return 3221226029LL;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) == 0
    || (v12 = *(_DWORD *)(a1 + 20), (v12 & 0x100000) == 0)
    || (unsigned int)MiControlAreaRequiresCharge(v8, ((v12 & 0x200000) == 0) | 2u) )
  {
    v13 = MiBuildWakeList(v8, 4);
    ++*(_QWORD *)(v8 + 24);
    v14 = v13;
    MiRemoveUnusedSegment(v8);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v8 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v8 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    __writecr8(v9);
    MiReleaseControlAreaWaiters(v14);
    *a3 = v8;
    return 0LL;
  }
  v11 = -1073740277;
LABEL_26:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
  __writecr8(v9);
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
    FsRtlReleaseFile(FileObject);
  }
  return (unsigned int)v11;
}
