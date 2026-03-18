/*
 * XREFs of MmMarkHiberPhase @ 0x14040D3A0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiGatherHiberRange @ 0x14040BFB0 (MiGatherHiberRange.c)
 *     MiMarkKernelPageTablePages @ 0x14040CF24 (MiMarkKernelPageTablePages.c)
 *     MiEnumerateKernelLeafPtes @ 0x14040DFCC (MiEnumerateKernelLeafPtes.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 v0; // rsi
  void *v1; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  void *v9; // r8
  _QWORD *v10; // rcx
  _QWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  MiMarkKernelPageTablePages();
  v12[1] = 0LL;
  v12[0] = MiGatherHiberRange;
  v0 = 2LL;
  MiGatherHiberRange((__int64)v12, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiEnumerateLeafPtes(
    0xFFFFFA8000000000uLL,
    (48 * BugCheckParameter3 - 0x57FFFFFFFD1LL) & 0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL,
    2);
  PoSetHiberRange(0LL, 0x14000u, qword_14036CF28, 1uLL, 0x61676D4Du);
  v1 = (void *)PsGetCurrentProcess()[2].Affinity.Bitmap[0];
  if ( v1 )
    PoSetHiberRange(0LL, 0x10000u, v1, 0x1000uLL, 0x62706D4Du);
  MiEnumerateLeafPtes(
    qword_14036C4C8,
    (qword_14036C4C8 + qword_14036C4D0 - 2) & 0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL,
    0);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)MmUnloadedDrivers + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = &qword_14036CE10;
  do
  {
    v6 = (_QWORD *)*v5;
    v7 = 0LL;
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      v8 = (_QWORD *)v7[1];
      v9 = v7;
      v10 = v7;
      if ( v8 )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v10 )
            break;
          v10 = v7;
        }
      }
      PoSetHiberRange(0LL, 0x10000u, v9, 0x440uLL, 0x6F496D4Du);
    }
    ++v5;
    --v0;
  }
  while ( v0 );
  return MiEnumerateKernelLeafPtes(MiMarkHiberNotCachedPages, 0LL);
}
