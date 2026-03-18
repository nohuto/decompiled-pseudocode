/*
 * XREFs of MiViewMayContainPage @ 0x1400823C0
 * Callers:
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned __int64 v6; // r13
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  bool v18; // cf
  unsigned __int64 v19; // r14
  PVOID PoolWithTag; // rax
  void *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h]
  unsigned __int64 v28; // [rsp+68h] [rbp+10h]

  v27 = a1;
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
          v11 = *(_BYTE *)(a2 - 64);
          v10 = 0LL;
          LODWORD(v12) = *(_DWORD *)(a2 - 72);
          v13 = 0LL;
        }
        else
        {
          v10 = MiStartingOffset(*(_QWORD *)(a2 - 24), *(_QWORD *)(a2 - 16), 0xFFFFFFFFLL);
          v11 = *(_BYTE *)(a2 - 64);
          v12 = *(unsigned int *)(a2 - 72);
          a1 = v27;
          v13 = v10
              + (((*(unsigned int *)(a2 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 63) << 32))
                - (v12 | ((unsigned __int64)v11 << 32))
                + 1) << 12);
        }
        v4 = ((unsigned int)v12 | ((unsigned __int64)v11 << 32)) << 12;
        break;
      case 2uLL:
        v22 = *(_DWORD *)(a2 + 24);
        v4 &= ~2uLL;
        v23 = *(_QWORD *)(a2 - 40);
        if ( v22 != -1 )
          v5 = v22;
        v10 = v23 << 12;
        v13 = v10 + *(_QWORD *)(a2 - 32);
        break;
      case 3uLL:
        v4 &= 0xFFFFFFFFFFFFFFFCuLL;
        v5 = *(_DWORD *)(a2 + 32);
        v13 = *(_QWORD *)(a2 + 24) - v4 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v24 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v4) != 1 )
            v5 = -2;
          while ( v24 )
          {
            v28 = MiStartingOffset(v24, *(_QWORD *)(v24 + 8), v5);
            if ( a3 < MiEndingOffsetWithLock(v24) && a3 >= v28 )
            {
              v25 = *(_QWORD *)(v24 + 8);
              v26 = v25 + 8 * ((a3 - v28) >> 12);
              if ( v26 < v25 + 8 * (unsigned __int64)*(unsigned int *)(v24 + 44) )
              {
                a1 = v27;
                if ( (*(_BYTE *)(v24 + 34) & 2) == 0 || (*(_DWORD *)(v27 + 56) & 0x4000000) == 0 )
                {
                  v4 += (__int64)(v26 - *(_QWORD *)(v27 + 136)) >> 3 << 12;
                  goto LABEL_45;
                }
              }
              return 0LL;
            }
            v24 = *(_QWORD *)(v24 + 16);
          }
          return 0LL;
        }
LABEL_45:
        v10 = 0LL;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 32);
    v10 = *(_QWORD *)(a2 + 40) << 18;
    v16 = v15 & 0x3F;
    if ( v16 )
      v17 = (unsigned __int64)v16 << 12;
    else
      v17 = 0x40000LL;
    v13 = v17 + v10;
    if ( !v4 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    a3 = 0LL;
    v19 = v4 + 4096;
  }
  else
  {
    if ( a4 <= v10 || a3 >= v13 )
      return 0LL;
    v18 = a3 < v10;
    if ( a3 >= v10 )
    {
      v4 += a3 - v10;
      v18 = a3 < v10;
    }
    if ( v18 )
      a3 = v10;
    if ( a4 > v13 )
      a4 = v13;
    v19 = a4 - a3 + v4;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v21 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = v4;
    *((_QWORD *)PoolWithTag + 3) = v19;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *((_QWORD *)PoolWithTag + 4) = a3;
    *((_DWORD *)PoolWithTag + 10) = v5;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(a2 + 16) & 3;
    if ( v6 )
    {
      if ( !(unsigned __int8)ObReferenceObjectSafeWithTag(v6, 1953261124LL) )
      {
        ExFreePoolWithTag(v21, 0);
        return 0LL;
      }
    }
  }
  return v21;
}
