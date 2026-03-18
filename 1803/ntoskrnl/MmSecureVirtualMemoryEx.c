/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x140557158
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MmSecureVirtualMemory @ 0x140557130 (MmSecureVirtualMemory.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     VmSecureBackingMemory @ 0x1407A0C70 (VmSecureBackingMemory.c)
 *     AslpFileLargeMapCreate @ 0x1407DF060 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiSecureVad @ 0x14055728C (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  int v7; // r15d
  int v8; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdi
  unsigned int v14; // r9d
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1 + a2;
  v7 = a2;
  v8 = a1;
  if ( a1 + a2 > a1
    && v4 <= 0x7FFFFFFF0000LL
    && (a4 & 0xFFFFFFF0) == 0
    && ((unsigned int)(a3 - 1) <= 1 || a3 == 4 || a3 == -2147483647)
    && a3 >= 0 )
  {
    v9 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0, &v20);
    v13 = (void *)v9;
    if ( v9 )
    {
      if ( (((*(_DWORD *)(v9 + 48) & 7) - 3) & 0xFFFFFFFD) != 0
        && (v4 - 1) >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
      {
        v14 = a3 | 0x80000000;
        if ( (a4 & 2) == 0 )
          v14 = a3;
        v15 = MiSecureVad(v9, v8, v7, v14, a4, (__int64)&v21);
        MiUnlockAndDereferenceVad(v13, v16, v17, v18);
        if ( v15 >= 0 )
          return qword_1403CB688 ^ (__int64)KeGetCurrentThread()->ApcState.Process ^ v21;
      }
      else
      {
        MiUnlockAndDereferenceVad((PVOID)v9, v10, v11, v12);
      }
    }
  }
  return 0LL;
}
