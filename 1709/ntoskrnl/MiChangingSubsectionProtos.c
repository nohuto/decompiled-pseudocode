/*
 * XREFs of MiChangingSubsectionProtos @ 0x1402224DC
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140223E58 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // r15d
  char v6; // si
  unsigned int v8; // ebx
  volatile LONG *v9; // rax
  bool v10; // zf
  int v11; // r12d
  __int64 **v12; // rsi
  _RTL_BALANCED_NODE *v13; // rbp
  PRTL_BALANCED_NODE v14; // rax
  PRTL_BALANCED_NODE v15; // rax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-48h]
  KIRQL v18; // [rsp+70h] [rbp+8h]
  int v20; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v6 = a2;
  v20 = v4;
  v8 = 0;
  v9 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  SpinLock = v9;
  while ( 1 )
  {
    v18 = ExAcquireSpinLockExclusive(v9);
    if ( v4 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v10 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v10 )
      {
        v8 = -1073740748;
        goto LABEL_34;
      }
    }
    v11 = v6 & 8;
    if ( (v6 & 8) != 0 )
      *(_DWORD *)(a3 + 8) = 64;
    else
      *(_DWORD *)(a3 + 8) = 0;
    if ( (v6 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x100u;
    if ( v4 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (v6 & 1) != 0 )
    {
      v8 = -1073741302;
      goto LABEL_34;
    }
    v12 = 0LL;
    v13 = 0LL;
    if ( !v11 )
    {
      v12 = (*(_DWORD *)(v3 + 56) & 0x20) != 0 ? *(__int64 ***)(v3 + 80) : (__int64 **)BugCheckParameter2[3];
      if ( v12 )
      {
        do
        {
          if ( ((_DWORD)v12[1] & 0x40) == 0 )
            break;
          v12 = (__int64 **)*v12;
        }
        while ( v12 );
        if ( v12 )
        {
          v14 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
          v13 = v14;
          if ( v14 )
            KeAbPreWait((__int64)v14);
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
    if ( v11 )
      goto LABEL_34;
    if ( !v12 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v18);
    KeWaitForGate(a3 + 16, 0x12u);
    v6 = a2;
    v9 = (volatile LONG *)(v3 + 72);
    v4 = v20;
    if ( v13 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, v13, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (unsigned __int64)v13);
      v9 = (volatile LONG *)(v3 + 72);
    }
  }
  v15 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  if ( v15 )
    BYTE2(v15[1].Left) |= 1u;
LABEL_34:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v18);
  return v8;
}
