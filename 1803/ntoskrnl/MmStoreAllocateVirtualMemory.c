/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1405749A8
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140096ABC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1400C6E3C (MiMakeSecureExclusive.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // r14
  _KPROCESS *Process; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  ULONG_PTR PteAddress; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  _QWORD v19[14]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v20[8]; // [rsp+B0h] [rbp+17h] BYREF
  char v21; // [rsp+100h] [rbp+67h] BYREF
  int v22; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int64 v23; // [rsp+110h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+118h] [rbp+7Fh] BYREF

  memset(v20, 0, 0x20uLL);
  v2 = 0LL;
  memset(v19, 0, 0x68uLL);
  v19[2] = 0x10000LL;
  v19[3] = a1;
  v19[5] = 0x200003000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v19[1] = 0x7FFFFFFEFFFFLL;
  v19[11] = Process;
  v19[10] = Process;
  v19[9] = &SecureHandle;
  HIDWORD(v19[6]) = 1;
  HIDWORD(v19[8]) = -2147483647;
  LOBYTE(v19[12]) = 0;
  v22 = MiAllocateVirtualMemory(v19, 0LL, &v23);
  if ( v22 < 0 )
    return v2;
  v4 = v19[11];
  v5 = MiObtainReferencedSecureVad(v19[11] ^ (unsigned __int64)SecureHandle ^ qword_1403CB688, &v22);
  v6 = v5;
  if ( !v5 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v5) )
  {
    v10 = ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v10);
    MiDecommitPages(v23, PteAddress, v4, v6, 1, v20);
    if ( (int)MiLockPageTableRange(v23, v10) >= 0 )
    {
      MiUnlockAndDereferenceVad((PVOID)v6, v12, v13, v14);
      v2 = v23;
      v6 = 0LL;
    }
    if ( v6 )
    {
      v16 = *(unsigned __int8 *)(v6 + 33);
      v17 = *(unsigned int *)(v6 + 28);
      v18 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
      v21 = 0;
      MiFreeVadRange(v6, (int)&v21, v18, v17 | (v16 << 32), v4, 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((PVOID)v6, v7, v8, v9);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
