/*
 * XREFs of VmColdPagesHint @ 0x1402AB370
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ZwUnlockVirtualMemory @ 0x1401AAD20 (ZwUnlockVirtualMemory.c)
 *     VmpProcessContextLockShared @ 0x1402AC860 (VmpProcessContextLockShared.c)
 *     VmpProcessMemoryRangeCompareGpn @ 0x1402AC888 (VmpProcessMemoryRangeCompareGpn.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // r13
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  PVOID BaseAddress; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-10h]
  unsigned __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v3 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16];
  if ( !v3 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v3 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v21 = a1 >> 12;
  v4 = (unsigned __int64 *)(v3 + 8);
  v5 = (a1 >> 12) + a2 - 1;
  v19 = 0LL;
  do
  {
    v6 = VmpProcessContextLockShared(v3);
    v7 = *v4;
    v8 = v6;
    v9 = *(_QWORD *)(v3 + 16);
    if ( (v9 & 1) != 0 )
    {
      if ( v7 )
        v7 ^= (unsigned __int64)v4;
      else
        v7 = 0LL;
    }
    v10 = v9 & 1;
    if ( !v7 )
      goto LABEL_26;
    do
    {
      v11 = VmpProcessMemoryRangeCompareGpn(&v21, v7);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v7;
      }
      if ( v10 && v12 )
        v7 ^= v12;
      else
        v7 = v12;
    }
    while ( v7 );
    if ( !v7 || (v13 = (_QWORD *)(v7 - 24)) == 0LL )
LABEL_26:
      NT_ASSERT("MemoryRange != ((void *)0)");
    BaseAddress = (PVOID)v13[8];
    BaseAddress = (char *)BaseAddress + v21 - v13[6];
    v14 = v13[7];
    if ( v14 >= v5 )
      v14 = v5;
    NumberOfBytesToUnlock = v14 - v21 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v3);
    __writecr8(v8);
    v21 += NumberOfBytesToUnlock;
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    v19 += NumberOfBytesToUnlock;
    v15 = v19;
    NumberOfBytesToUnlock <<= 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
  }
  while ( v15 < a2 );
  return 0LL;
}
