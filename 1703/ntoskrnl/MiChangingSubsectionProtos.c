/*
 * XREFs of MiChangingSubsectionProtos @ 0x140218224
 * Callers:
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402194EC (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, int a2, __int64 a3)
{
  int v3; // edi
  volatile LONG *v4; // rax
  unsigned int v5; // ebx
  bool v9; // zf
  __int64 **v10; // rdi
  _KLOCK_ENTRY *v11; // rbp
  PRTL_BALANCED_NODE v12; // rax
  __int64 v13; // rdx
  PRTL_BALANCED_NODE v14; // rax
  int v16; // [rsp+60h] [rbp+8h]
  KIRQL v17; // [rsp+68h] [rbp+10h]
  volatile LONG *SpinLock; // [rsp+78h] [rbp+20h]

  v3 = a2 & 0x10;
  v4 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v16 = v3;
  v5 = 0;
  SpinLock = v4;
  while ( 1 )
  {
    v17 = ExAcquireSpinLockExclusive(v4);
    if ( v3 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v9 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v9 )
      {
        v5 = -1073740748;
        goto LABEL_21;
      }
    }
    *(_DWORD *)(a3 + 8) = a2;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      v5 = -1073741302;
      goto LABEL_21;
    }
    v10 = 0LL;
    v11 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      v10 = (__int64 **)BugCheckParameter2[3];
      if ( v10 )
      {
        do
        {
          if ( ((_DWORD)v10[1] & 8) == 0 )
            break;
          v10 = (__int64 **)*v10;
        }
        while ( v10 );
        if ( v10 )
        {
          v12 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
          v11 = (_KLOCK_ENTRY *)v12;
          if ( v12 )
            KeAbPreWait((__int64)v12, v13);
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_QWORD *)a3 = BugCheckParameter2[3];
    BugCheckParameter2[3] = a3;
    if ( (a2 & 8) != 0 )
      goto LABEL_21;
    if ( !v10 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v17);
    KeWaitForGate(a3 + 16, 0x12u);
    v4 = SpinLock;
    v3 = v16;
    if ( v11 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, &v11->TreeNode, 0);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v11);
      v4 = SpinLock;
    }
  }
  v14 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  if ( v14 )
    BYTE2(v14[1].Left) |= 1u;
LABEL_21:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v17);
  return v5;
}
