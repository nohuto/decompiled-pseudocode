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

__int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r15
  __int64 v7; // r14
  unsigned int v8; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // eax
  char v20; // cl
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  char v23; // [rsp+98h] [rbp+20h] BYREF

  v5 = a1 + 144;
  v7 = 8LL * a4;
  v21 = v7;
  v8 = a4;
  v22 = a2;
  RtlAcquireSRWLockExclusive(a1 + 144);
  if ( *(_QWORD *)(a2 + 8LL * a5) != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v22, &v21, 4LL, &v23) >= 0 )
  {
    if ( v8 )
    {
      v12 = (_QWORD *)(v7 + a2);
      v13 = a3 - a2;
      do
      {
        --v12;
        --v8;
        v14 = *(_QWORD *)((char *)v12 + v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v22, &v21, 2LL, &v23);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v16, v15, v17) )
    {
      v19 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (int)a2 - *(_DWORD *)(a1 + 48),
              8 * a4 - *(_DWORD *)(a1 + 48) + a2 - 8);
      v20 = LdrpDebugFlags;
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
          v19);
        v20 = LdrpDebugFlags;
      }
      if ( (v20 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return RtlReleaseSRWLockExclusive(v5);
}
