/*
 * XREFs of MiObtainMdlCharges @ 0x14007B0D0
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiObtainMdlCharges(
        ULONG_PTR *a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  char v7; // di
  __int64 v9; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  SIZE_T v15; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rsi
  unsigned __int64 v18; // rbp
  _DWORD *result; // rax
  __int64 v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+90h] [rbp+38h]

  v7 = a7;
  v9 = 1024LL;
  if ( (a7 & 0x400) != 0 && ((a7 & 0x362) != 0 || (a7 & 0x10001) == 0 || ((a6 - 1) & 0xFFFFFFFD) != 0) )
    return 0LL;
  v11 = a5;
  if ( a5 > 0xFFFFF000 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    if ( (a7 & 0x20) != 0 && a4 )
      v11 = (unsigned int)(-4096 * a4);
    else
      v11 = 4294963200LL;
  }
  v12 = (v11 + 4095) >> 12;
  if ( (a7 & 0x40) != 0
    && ((a7 & 0x20) == 0
     || a2 > 0x200
     || a3 < BugCheckParameter3
     || a6 != 1
     || a4 != 512 && a4 != 0x40000
     || ((a4 - 1) & v12) != 0) )
  {
    return 0LL;
  }
  if ( a1 != &MiSystemPartition )
    v9 = 0LL;
  v13 = a1[728] - v9;
  v20 = v9;
  if ( v13 <= 0 )
    return 0LL;
  if ( v12 > v13 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v12 = a1[728] - v9;
    if ( (a7 & 0x20) != 0 && a4 )
      v12 = v13 & ~(a4 - 1);
  }
  if ( !v12 )
    return 0LL;
  v14 = v12 >> 4;
  v21 = a7 & 0x20;
  if ( (v7 & 0x20) != 0 && a4 )
    v14 = a4;
  v15 = 8 * v12 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x69646D4Du);
    v17 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (v7 & 4) == 0 )
    {
      if ( v14 )
      {
        if ( v12 >= v14 )
        {
          v15 -= 8 * v14;
          v12 -= v14;
          if ( v12 )
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
  PoolWithTag[10] = (_DWORD)v12 << 12;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * ((((v12 << 12) + 4095) >> 12) + 6);
  if ( !(unsigned int)MiChargeCommit(a1, v12, 1LL) )
  {
    ExFreePoolWithTag(v17, 0);
    return 0LL;
  }
  v18 = v12;
  while ( !(unsigned int)MiChargeResident(a1, v12, v20) )
  {
    if ( (v7 & 4) == 0 )
    {
      if ( (__int64)(a1[728] - v20) > 0 )
      {
        if ( v12 > a1[728] - v20 )
          v12 = a1[728] - v20;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v21 && a4 )
        v12 &= ~(a4 - 1);
      if ( v12 )
        continue;
    }
    ExFreePoolWithTag(v17, 0);
    MiReturnCommit(a1, v18);
    return 0LL;
  }
  if ( v12 != v18 )
    MiReturnCommit(a1, v18 - v12);
  if ( a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14036D120, v12);
  result = v17;
  v17[10] = (_DWORD)v12 << 12;
  return result;
}
