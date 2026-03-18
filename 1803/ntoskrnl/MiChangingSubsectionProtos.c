/*
 * XREFs of MiChangingSubsectionProtos @ 0x14025D140
 * Callers:
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14025EB58 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // r12d
  int v5; // edi
  char v7; // bp
  volatile LONG *v8; // rax
  unsigned int v10; // ebx
  bool v11; // zf
  int v12; // ecx
  __int64 **v13; // rdi
  _KLOCK_ENTRY *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-48h]
  KIRQL v19; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 8;
  v5 = a2 & 0x10;
  v7 = a2;
  v21 = v5;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  SpinLock = v8;
  v10 = 0;
  while ( 1 )
  {
    v19 = ExAcquireSpinLockExclusive(v8);
    if ( v5 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v11 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v11 )
      {
        v10 = -1073740748;
        goto LABEL_32;
      }
    }
    v12 = v4 != 0 ? 0x40 : 0;
    *(_DWORD *)(a3 + 8) = v12;
    if ( (v7 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) = v12 | 0x100;
    if ( v5 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (v7 & 1) != 0 )
    {
      v10 = -1073741302;
      goto LABEL_32;
    }
    v13 = 0LL;
    v14 = 0LL;
    if ( !v4 )
    {
      v13 = (*(_DWORD *)(v3 + 56) & 0x20) != 0 ? *(__int64 ***)(v3 + 80) : (__int64 **)BugCheckParameter2[3];
      if ( v13 )
      {
        do
        {
          if ( ((_DWORD)v13[1] & 0x40) == 0 )
            break;
          v13 = (__int64 **)*v13;
        }
        while ( v13 );
        if ( v13 )
        {
          v15 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
          v14 = (_KLOCK_ENTRY *)v15;
          if ( v15 )
            KeAbPreWait(v15);
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v3 + 80);
      *(_QWORD *)(v3 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( v4 )
      goto LABEL_32;
    if ( !v13 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v19);
    KeWaitForGate(a3 + 16, 0x12u);
    v5 = v21;
    v8 = (volatile LONG *)(v3 + 72);
    if ( v14 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, (__int64)v14, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v14);
      v8 = (volatile LONG *)(v3 + 72);
    }
    v7 = a2;
  }
  v16 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
LABEL_32:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v19);
  return v10;
}
