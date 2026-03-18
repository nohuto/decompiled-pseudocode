/*
 * XREFs of MiInitializePartitionThreads @ 0x1406B6230
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 *v2; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+88h] [rbp+10h] BYREF
  int v9; // [rsp+8Ch] [rbp+14h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0;
  v7[0] = MiZeroPageThread;
  v1 = (unsigned int *)&v8;
  v9 = 1;
  v7[1] = MiPartitionWorkingSetManager;
  v2 = v7;
  v4 = 0;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx((__int64)&v10, 0x1FFFFF, 0LL, 0LL, 0LL, *v2, a1, 0LL, 0LL);
    if ( (int)result < 0 )
      break;
    v6 = *v1;
    ++v4;
    ++v2;
    ++v1;
    *(_QWORD *)(a1 + 8 * v6 + 160) = v10;
    if ( v4 >= 2 )
      return 0LL;
  }
  return result;
}
