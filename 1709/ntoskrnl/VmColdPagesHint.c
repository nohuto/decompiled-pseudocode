/*
 * XREFs of VmColdPagesHint @ 0x140278440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ZwUnlockVirtualMemory @ 0x1401810E0 (ZwUnlockVirtualMemory.c)
 *     VmpProcessContextLockShared @ 0x140279674 (VmpProcessContextLockShared.c)
 *     VmpProcessMemoryRangeCompareGpn @ 0x14027969C (VmpProcessMemoryRangeCompareGpn.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rdi
  int v8; // r14d
  int v9; // eax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+20h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-10h]
  unsigned __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v4 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16];
  if ( !v4 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v4 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v18 = a1 >> 12;
  v5 = (a1 >> 12) + a2 - 1;
  v17 = 0LL;
  do
  {
    v6 = VmpProcessContextLockShared(v4);
    v7 = *(_QWORD *)(v4 + 8);
    v8 = *(_BYTE *)(v4 + 16) & 1;
    if ( !v7 )
      goto LABEL_22;
    do
    {
      v9 = VmpProcessMemoryRangeCompareGpn(&v18, v7);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v7;
      }
      if ( v8 && v10 )
        v7 ^= v10;
      else
        v7 = v10;
    }
    while ( v7 );
    if ( !v7 || (v11 = (_QWORD *)(v7 - 24)) == 0LL )
LABEL_22:
      NT_ASSERT("MemoryRange != ((void *)0)");
    BaseAddress = (PVOID)v11[8];
    BaseAddress = (char *)BaseAddress + v18 - v11[6];
    v12 = v11[7];
    if ( v12 >= v5 )
      v12 = v5;
    NumberOfBytesToUnlock = v12 - v18 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
    __writecr8(v6);
    v18 += NumberOfBytesToUnlock;
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    v17 += NumberOfBytesToUnlock;
    v13 = v17;
    NumberOfBytesToUnlock <<= 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
  }
  while ( v13 < a2 );
  return 0LL;
}
