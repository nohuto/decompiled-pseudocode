/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406EA930
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14027384C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiObtainReferencedSecureVad @ 0x1400E9550 (MiObtainReferencedSecureVad.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiMakeSecureExclusive @ 0x14021CA30 (MiMakeSecureExclusive.c)
 *     MiLockPageTableRange @ 0x140229E4C (MiLockPageTableRange.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 */

ULONG_PTR __fastcall MmStoreAllocateVirtualMemory(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v2; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 PteAddress; // rax
  __int64 Process; // r8
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _KPROCESS *v12; // [rsp+20h] [rbp-60h]
  ULONG_PTR v13; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+B0h] [rbp+30h] BYREF
  char v16; // [rsp+B8h] [rbp+38h] BYREF
  int v17; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE SecureHandle; // [rsp+C8h] [rbp+48h] BYREF

  v15 = a1;
  memset(v14, 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v13 = 0LL;
  v17 = MiAllocateVirtualMemory(-1LL, &v13, 0LL, &v15, 12288, 2u, 0, 1u, -2147483647, (unsigned __int64 *)&SecureHandle);
  if ( v17 >= 0 )
  {
    v3 = MiObtainReferencedSecureVad(
           (unsigned __int64)SecureHandle ^ qword_1403884F0 ^ (__int64)KeGetCurrentThread()->ApcState.Process,
           &v17);
    v4 = v3;
    if ( v3 )
    {
      if ( !(unsigned int)MiMakeSecureExclusive(v3) )
      {
        MiUnlockAndDereferenceVad((char *)v4);
        MmUnsecureVirtualMemory(SecureHandle);
        return 0LL;
      }
      v6 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
      PteAddress = MiGetPteAddress(v6);
      Process = (__int64)CurrentThread->ApcState.Process;
      v9 = v13;
      MiDecommitPages(v13, PteAddress, Process, v4, 1, v14);
      if ( (int)MiLockPageTableRange(v9, v6) >= 0 )
      {
        MiUnlockAndDereferenceVad((char *)v4);
        v4 = 0LL;
        v2 = v9;
      }
      if ( v4 )
      {
        v10 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
        v11 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
        v12 = KeGetCurrentThread()->ApcState.Process;
        v16 = 0;
        MiFreeVadRange(v4, (int)&v16, v10, v11, (__int64)v12);
      }
    }
  }
  return v2;
}
