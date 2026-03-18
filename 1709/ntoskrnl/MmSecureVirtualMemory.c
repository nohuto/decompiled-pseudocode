/*
 * XREFs of MmSecureVirtualMemory @ 0x1405795A0
 * Callers:
 *     RtlFileMapMapView @ 0x14028CE60 (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     AslpFileLargeMapCreate @ 0x1407762FC (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiSecureVad @ 0x1404D52C0 (MiSecureVad.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  char *v3; // rsi
  ULONG_PTR v7; // rax
  char *v8; // rdi
  int v9; // r9d
  int v10; // ebx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = (char *)Address + Size;
  if ( (unsigned __int64)Address + Size <= 0x7FFFFFFEFFFFLL && v3 > Address )
  {
    v7 = MiObtainReferencedVad((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL, &v12);
    v8 = (char *)v7;
    if ( v7 )
    {
      if ( (((*(_DWORD *)(v7 + 48) & 7) - 3) & 0xFFFFFFFD) != 0
        && (unsigned __int64)(v3 - 1) >> 12 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
      {
        v9 = 4;
        if ( ProbeMode == 2 )
          v9 = 2;
        v10 = MiSecureVad(v7, (__int64)Address, Size, v9, &v13);
        MiUnlockAndDereferenceVad(v8);
        if ( v10 >= 0 )
          return (HANDLE)(qword_1403884F0 ^ (__int64)KeGetCurrentThread()->ApcState.Process ^ v13);
      }
      else
      {
        MiUnlockAndDereferenceVad((char *)v7);
      }
    }
  }
  return 0LL;
}
