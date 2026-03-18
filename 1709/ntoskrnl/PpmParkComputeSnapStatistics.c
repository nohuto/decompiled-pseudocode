/*
 * XREFs of PpmParkComputeSnapStatistics @ 0x140092E60
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140093020 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmParkComputeSnapStatistics(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rdi
  int i; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int j; // edx
  int k; // ecx
  int v15; // r8d
  unsigned __int64 v16; // rdx

  v7 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  if ( a1 )
    v7 /= (unsigned int)(a1 + 1);
  if ( !v7 )
    return 0;
  v9 = 0LL;
  for ( i = 0;
        i < *(_DWORD *)(a4 + 40);
        *(_QWORD *)(8 * v11 + *(_QWORD *)(a4 + 16)) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v11)
                                                    - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v11) )
  {
    v11 = i++;
  }
  v12 = 0LL;
  for ( j = *(_DWORD *)(a4 + 40) - 1; j >= 0; --j )
  {
    v12 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * j);
    if ( v12 >= v7 - v7 * a3 / 0x64 )
      break;
  }
  *a7 = j;
  if ( __PAIR128__((unsigned __int64)a6, (unsigned __int64)a5) != 0 )
  {
    for ( k = *(_DWORD *)(a4 + 40) - 1; k >= 0; --k )
    {
      v9 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
      if ( v9 >= v7 - v7 * a2 / 0x64 )
        break;
    }
    if ( a5 )
      *a5 = k;
    if ( a6 )
    {
      if ( k <= 0 )
        *a6 = 0;
      else
        *a6 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v7;
    }
  }
  *(_QWORD *)(a4 + 32) += v7;
  v15 = *(_DWORD *)(a4 + 40) - 1;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * v15);
      if ( v16 > v7 )
        break;
      v7 -= v16;
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * v15--) += v16;
      if ( v15 < 0 )
        return 1;
    }
    *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * v15) += v7;
  }
  return 1;
}
