/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180022944
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180001314 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(__int64 a1, char *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _RTL_SRWLOCK *v5; // r15
  ULONG_PTR v7; // r14
  unsigned int v8; // ebx
  char *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  char v19; // cl
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v5 = (_RTL_SRWLOCK *)(a1 + 144);
  v7 = 8LL * a4;
  RegionSize = v7;
  v8 = a4;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v12 = &a2[v7];
      v13 = a3 - (_QWORD)a2;
      do
      {
        v12 -= 8;
        --v8;
        v14 = *(_QWORD *)&v12[v13];
        if ( v14 )
          *(_QWORD *)v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v16, v15, v17) )
    {
      v18 = LdrpUnsuppressAddressTakenIat(
              *(char **)(a1 + 48),
              (int)a2 - *(_DWORD *)(a1 + 48),
              8 * a4 - *(_DWORD *)(a1 + 48) + (_DWORD)a2 - 8);
      v19 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          720,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          *(const void **)(a1 + 48),
          v18);
        v19 = LdrpDebugFlags;
      }
      if ( (v19 & 0x10) != 0 )
        __debugbreak();
    }
  }
  RtlReleaseSRWLockExclusive(v5);
}
