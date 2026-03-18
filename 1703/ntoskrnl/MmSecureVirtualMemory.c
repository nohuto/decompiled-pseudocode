/*
 * XREFs of MmSecureVirtualMemory @ 0x14043F030
 * Callers:
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     WbAllocateMemoryBlock @ 0x14043EE04 (WbAllocateMemoryBlock.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     AslpFileLargeMapCreate @ 0x140732188 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiSecureVad @ 0x140511F10 (MiSecureVad.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  char *v3; // rsi
  int v5; // ebp
  int v6; // ebx
  unsigned int *v7; // rax
  char *v8; // rdi
  int v9; // r9d
  int v10; // ebx
  HANDLE result; // rax
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)Address + Size;
  v5 = Size;
  v6 = (int)Address;
  if ( (unsigned __int64)Address + Size > 0x7FFFFFFEFFFFLL )
    return 0LL;
  if ( v3 <= Address )
    return 0LL;
  v7 = MiObtainReferencedVad((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL, &v12);
  v8 = (char *)v7;
  if ( !v7 )
    return 0LL;
  if ( (((v7[12] & 7) - 3) & 0xFFFFFFFD) == 0
    || (unsigned __int64)(v3 - 1) >> 12 > (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((char *)v7);
    return 0LL;
  }
  v9 = 4;
  if ( ProbeMode == 2 )
    v9 = 2;
  v10 = MiSecureVad((_DWORD)v7, v6, v5, v9, (__int64)&v12);
  MiUnlockAndDereferenceVad(v8);
  result = v12;
  if ( v10 < 0 )
    return 0LL;
  return result;
}
