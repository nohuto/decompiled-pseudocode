/*
 * XREFs of sub_180073184 @ 0x180073184
 * Callers:
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void __fastcall sub_180073184(__int64 a1, char *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _RTL_SRWLOCK *v5; // r15
  ULONG_PTR v7; // r14
  unsigned int v8; // ebx
  char *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  char v16; // cl
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
    if ( sub_180030138() )
    {
      v15 = sub_180001328(
              *(char **)(a1 + 48),
              (int)a2 - *(_DWORD *)(a1 + 48),
              8 * a4 - *(_DWORD *)(a1 + 48) + (_DWORD)a2 - 8);
      v16 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          720,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the D"
          "LL based at 0x%p.Status = 0x%x\n",
          *(const void **)(a1 + 48),
          v15);
        v16 = dword_180155A10;
      }
      if ( (v16 & 0x10) != 0 )
        __debugbreak();
    }
  }
  RtlReleaseSRWLockExclusive(v5);
}
