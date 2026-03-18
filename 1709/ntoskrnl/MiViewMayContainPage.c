/*
 * XREFs of MiViewMayContainPage @ 0x1400F25DC
 * Callers:
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  PVOID PoolWithTag; // rax
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+60h] [rbp+8h]
  unsigned __int64 v22; // [rsp+68h] [rbp+10h]

  v21 = a1;
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
          v12 = 0LL;
        }
        else
        {
          v10 = MiStartingOffset(*(__int64 **)(a2 - 24), *(_QWORD *)(a2 - 16), 0xFFFFFFFF);
          a1 = v21;
          v12 = v10
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
        v12 = v10 + *(_QWORD *)(a2 - 32);
        break;
      case 3uLL:
        v4 &= 0xFFFFFFFFFFFFFFFCuLL;
        v5 = *(_DWORD *)(a2 + 32);
        v12 = *(_QWORD *)(a2 + 24) - v4 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v18 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v4) != 1 )
            v5 = -2;
          while ( v18 )
          {
            v22 = MiStartingOffset((__int64 *)v18, *(_QWORD *)(v18 + 8), v5);
            if ( a3 < MiEndingOffsetWithLock((_QWORD *)v18) && a3 >= v22 )
            {
              v19 = *(_QWORD *)(v18 + 8);
              v20 = v19 + 8 * ((a3 - v22) >> 12);
              if ( v20 < v19 + 8 * (unsigned __int64)*(unsigned int *)(v18 + 44) )
              {
                a1 = v21;
                if ( (*(_BYTE *)(v18 + 34) & 2) == 0 || (*(_DWORD *)(v21 + 56) & 0x4000000) == 0 )
                {
                  v4 += (__int64)(v20 - *(_QWORD *)(v21 + 136)) >> 3 << 12;
                  goto LABEL_42;
                }
              }
              return 0LL;
            }
            v18 = *(_QWORD *)(v18 + 16);
          }
          return 0LL;
        }
LABEL_42:
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
      v11 = (unsigned __int64)(*(_DWORD *)(a2 + 32) & 0x3F) << 12;
    else
      v11 = 0x40000LL;
    v12 = v11 + v10;
    if ( !v4 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v14 = 0LL;
    v15 = v4 + 4096;
  }
  else
  {
    if ( a3 >= v12 || a4 <= v10 )
      return 0LL;
    v14 = v10;
    if ( a3 >= v10 )
    {
      v14 = a3;
      v4 += a3 - v10;
    }
    if ( a4 > v12 )
      a4 = v12;
    v15 = v4 + a4 - v14;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = v4;
    *((_QWORD *)PoolWithTag + 3) = v15;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *((_QWORD *)PoolWithTag + 4) = v14;
    *((_DWORD *)PoolWithTag + 10) = v5;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(a2 + 16) & 3;
    if ( v6 )
    {
      if ( !ObReferenceObjectSafeWithTag(v6) )
      {
        ExFreePoolWithTag(v17, 0);
        return 0LL;
      }
    }
  }
  return v17;
}
