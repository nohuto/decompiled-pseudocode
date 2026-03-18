/*
 * XREFs of MiViewMayContainPage @ 0x140014728
 * Callers:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 * Callees:
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  int SystemRegionType; // eax
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+70h] [rbp+8h]
  unsigned __int64 v25; // [rsp+78h] [rbp+10h]

  v24 = a1;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = -1;
  v6 = 0LL;
  if ( (v4 & 3) != 0 )
  {
    switch ( v4 & 3 )
    {
      case 1uLL:
        v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v10 = 0LL;
          v11 = 0LL;
        }
        else
        {
          v10 = MiStartingOffset(*(_QWORD *)(a2 - 24), *(_QWORD *)(a2 - 16), 0xFFFFFFFFLL);
          a1 = v24;
          v11 = v10
              + (((*(unsigned int *)(a2 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 63) << 32))
                - (*(unsigned int *)(a2 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 64) << 32))
                + 1) << 12);
        }
        v4 = (*(unsigned int *)(a2 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 64) << 32)) << 12;
        break;
      case 2uLL:
        v4 &= ~2uLL;
        if ( *(_DWORD *)(a2 + 24) != -1 )
          v5 = *(_DWORD *)(a2 + 24);
        v10 = *(_QWORD *)(a2 - 40) << 12;
        v11 = v10 + *(_QWORD *)(a2 - 32);
        break;
      case 3uLL:
        v4 &= 0xFFFFFFFFFFFFFFFCuLL;
        v5 = *(_DWORD *)(a2 + 32);
        v11 = *(_QWORD *)(a2 + 24) - v4 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v23 = a1 + 128;
          v18 = a1 + 128;
          SystemRegionType = MiGetSystemRegionType(v4);
          if ( SystemRegionType != v20 )
            v5 = -2;
          while ( v18 )
          {
            v25 = MiStartingOffset(v18, *(_QWORD *)(v18 + 8), v5);
            if ( a3 < MiEndingOffsetWithLock(v18) && a3 >= v25 )
            {
              v21 = *(_QWORD *)(v18 + 8);
              v22 = v21 + 8 * ((a3 - v25) >> 12);
              if ( v22 < v21 + 8 * (unsigned __int64)*(unsigned int *)(v18 + 44)
                && ((*(_WORD *)(v18 + 34) & 2) == 0 || (*(_DWORD *)(v24 + 56) & 0x4000000) == 0) )
              {
                a1 = v24;
                v4 += (__int64)(v22 - *(_QWORD *)(v23 + 8)) >> 3 << 12;
                goto LABEL_43;
              }
              return 0LL;
            }
            v18 = *(_QWORD *)(v18 + 16);
          }
          return 0LL;
        }
LABEL_43:
        v10 = 0LL;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 40) << 18;
    if ( (*(_DWORD *)(a2 + 32) & 0x3F) != 0 )
      v17 = (unsigned __int64)(*(_DWORD *)(a2 + 32) & 0x3F) << 12;
    else
      v17 = 0x40000LL;
    v11 = v17 + v10;
    if ( !v4 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
  {
    if ( a4 > v10 && a3 < v11 )
    {
      v12 = v10;
      if ( a3 >= v10 )
      {
        v12 = a3;
        v4 += a3 - v10;
      }
      if ( a4 > v11 )
        a4 = v11;
      v13 = v4 + a4 - v12;
      goto LABEL_14;
    }
    return 0LL;
  }
  v12 = 0LL;
  v13 = v4 + 4096;
LABEL_14:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = v4;
    *((_QWORD *)PoolWithTag + 3) = v13;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *((_QWORD *)PoolWithTag + 4) = v12;
    *((_DWORD *)PoolWithTag + 10) = v5;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(a2 + 16) & 3;
    if ( v6 )
    {
      if ( !(unsigned __int8)ObReferenceObjectSafeWithTag(v6, 1953261124LL) )
      {
        ExFreePoolWithTag(v15, 0);
        return 0LL;
      }
    }
  }
  return v15;
}
