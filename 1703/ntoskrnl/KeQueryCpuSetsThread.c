/*
 * XREFs of KeQueryCpuSetsThread @ 0x140202698
 * Callers:
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1401107DC (KiGetThreadCpuSetMaskPointer.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 ThreadCpuSetMaskPointer; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v5 = 20;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v12);
  if ( v12 <= 0x14 )
    v5 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v5 )
  {
    v8 = ThreadCpuSetMaskPointer - (_QWORD)a2;
    v9 = v5;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v8);
      ++a2;
      --v9;
    }
    while ( v9 );
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return v12;
}
