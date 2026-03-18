/*
 * XREFs of KeMarkHiberPhase @ 0x14040D8D8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 */

void __fastcall KeMarkHiberPhase(_QWORD *Address)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  _QWORD **v3; // r14
  __int64 v4; // rbp
  _QWORD *i; // rdi
  unsigned int v6; // ecx
  void *v7; // r8
  _QWORD *v8; // r8
  void *v9; // rdi
  ULONG_PTR v10; // rbx
  PVOID *j; // rbx

  v1 = Address[4];
  v2 = Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      Address,
      ((((((_DWORD)KeNumberProcessors_0 << 6) + 32831) & 0xFFFFFFC0) + 41024) & 0xFFFFF000) + 28672,
      0x6370654Bu);
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0x8040uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0x7EC0uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v2, 0x68uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, &KiBootProcessorIdtSize, 0LL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(*(_QWORD *)(v2 + 36) - 0x2000LL), 0x6000uLL, 0x6370654Bu);
  }
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 11856) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  v3 = (_QWORD **)(v1 + 11776);
  v4 = 2LL;
  do
  {
    for ( i = *v3; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v3 += 5;
    --v4;
  }
  while ( v4 );
  v6 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v6 = KeXStateLength + 807;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 25600), v6, 0x7873654Bu);
  v7 = *(void **)(v1 + 23936);
  if ( v7 )
    PoSetHiberRange(0LL, 0x10000u, v7, 0x428uLL, 0x7349654Bu);
  if ( qword_14034FFB8 )
    PoSetHiberRange(0LL, 0x10000u, qword_14034FFB8, 16 * (unsigned int)(unsigned __int8)qword_14034FFA8, 0x7272744Du);
  if ( qword_14034FFC0 )
    PoSetHiberRange(0LL, 0x10000u, qword_14034FFC0, 0x58uLL, 0x7272744Du);
  v8 = *(_QWORD **)(v1 + 8);
  v9 = (void *)((v8[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v10 = v8[7] - (_QWORD)v9;
  PoSetHiberRange(0LL, 0x10000u, v8, 0x810uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v9, v10, 0x7473654Bu);
  for ( j = (PVOID *)KeBugCheckReasonCallbackListHead; j != &KeBugCheckReasonCallbackListHead; j = (PVOID *)*j )
    PoSetHiberRange(0LL, 0x10000u, j, 0x30uLL, 0x7473654Bu);
}
