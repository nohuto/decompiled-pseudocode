/*
 * XREFs of MiUnlinkSubsectionWaitBlock @ 0x14025EB58
 * Callers:
 *     MiChangingSubsectionProtos @ 0x14025D140 (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUnlinkSubsectionWaitBlock(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // di
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // rcx

  v3 = *a1;
  if ( a3 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v7 = 0LL;
    if ( ((*(_DWORD *)(v3 + 56) >> 5) & 1) != 0 )
      v8 = *(_QWORD **)(v3 + 80);
    else
      v8 = (_QWORD *)a1[3];
    if ( !v8 )
      goto LABEL_15;
    do
    {
      v9 = v8;
      v10 = v7;
      v11 = v8;
      if ( v8 == (_QWORD *)a2 )
        break;
      v7 = v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    if ( v11 == (_QWORD *)a2 )
      v9 = v10;
    if ( v9 )
    {
      *v9 = *v8;
    }
    else
    {
LABEL_15:
      v12 = *v8;
      if ( ((*(_DWORD *)(v3 + 56) >> 5) & 1) != 0 )
        *(_QWORD *)(v3 + 80) = v12;
      else
        a1[3] = v12;
    }
  }
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v6);
  }
}
