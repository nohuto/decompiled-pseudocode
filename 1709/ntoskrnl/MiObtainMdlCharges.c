/*
 * XREFs of MiObtainMdlCharges @ 0x1400CBE04
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiObtainMdlCharges(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  char v7; // di
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  SIZE_T v15; // r13
  _DWORD *PoolWithTag; // rax
  __int64 v17; // r9
  _DWORD *v18; // rsi
  unsigned __int64 v19; // r14
  _DWORD *result; // rax
  int v21; // [rsp+80h] [rbp+38h]

  v7 = a7;
  if ( (a7 & 0x400) != 0 && ((a7 & 0x362) != 0 || (a7 & 0x10001) == 0 || ((a6 - 1) & 0xFFFFFFFD) != 0) )
    return 0LL;
  v10 = a5;
  if ( a5 > 0xFFFFF000 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    if ( (a7 & 0x20) != 0 && a4 )
      v10 = (unsigned int)(-4096 * a4);
    else
      v10 = 4294963200LL;
  }
  v11 = (v10 + 4095) >> 12;
  if ( (a7 & 0x40) != 0
    && ((a7 & 0x20) == 0
     || a2 > 0x200
     || a3 < BugCheckParameter3
     || a6 != 1
     || a4 != 512 && a4 != 0x40000
     || ((a4 - 1) & v11) != 0) )
  {
    return 0LL;
  }
  v12 = (unsigned __int64)(~(unsigned __int8)*(_DWORD *)(a1 + 4) & 8) << 7;
  v13 = *(_QWORD *)(a1 + 6016) - v12;
  if ( v13 <= 0 )
    return 0LL;
  if ( v11 > v13 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v11 = *(_QWORD *)(a1 + 6016) - v12;
    if ( (a7 & 0x20) != 0 && a4 )
      v11 = v13 & ~(a4 - 1);
  }
  if ( !v11 )
    return 0LL;
  v14 = v11 >> 4;
  v21 = a7 & 0x20;
  if ( (v7 & 0x20) != 0 && a4 )
    v14 = a4;
  v15 = 8 * v11 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x69646D4Du);
    v18 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (v7 & 4) == 0 )
    {
      if ( v14 )
      {
        if ( v11 >= v14 )
        {
          v15 -= 8 * v14;
          v11 -= v14;
          if ( v11 )
            continue;
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  PoolWithTag[11] = 0;
  PoolWithTag[10] = (_DWORD)v11 << 12;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * ((((v11 << 12) + 4095) >> 12) + 6);
  if ( !(unsigned int)MiChargeCommit(a1, v11, 1LL, v17) )
  {
    ExFreePoolWithTag(v18, 0);
    return 0LL;
  }
  v19 = v11;
  while ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, v11) )
  {
    if ( (v7 & 4) == 0 )
    {
      if ( (__int64)(*(_QWORD *)(a1 + 6016) - v12) > 0 )
      {
        if ( v11 > *(_QWORD *)(a1 + 6016) - v12 )
          v11 = *(_QWORD *)(a1 + 6016) - v12;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v21 && a4 )
        v11 &= ~(a4 - 1);
      if ( v11 )
        continue;
    }
    ExFreePoolWithTag(v18, 0);
    MiReturnCommit(a1, v19);
    return 0LL;
  }
  if ( v11 != v19 )
    MiReturnCommit(a1, v19 - v11);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403893E0, v11);
  result = v18;
  v18[10] = (_DWORD)v11 << 12;
  return result;
}
