/*
 * XREFs of ExQueryPoolUsage @ 0x1400804D0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExQueryPoolUsage(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        __int64 *a8)
{
  _DWORD *v9; // r12
  __int64 v10; // r15
  unsigned int v11; // r10d
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r13d
  int v15; // r14d
  int v16; // ecx
  __int64 *result; // rax
  int v18; // ecx
  int v19; // r12d
  __int64 v20; // rbp
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // r11
  int v25; // edi
  int v26; // esi

  v9 = a2;
  if ( ExpHeapFrontendPool )
  {
    *a1 = *(_QWORD *)(qword_1403EFA60 + 32);
    *a1 += *(_QWORD *)(qword_1403EFA68 + 32);
    *a2 = *(_QWORD *)(qword_1403EFA50 + 32);
    *a2 += *(_QWORD *)(qword_1403EFA58 + 32);
    *a3 = 0;
    *a4 = 0;
    *a5 = 0;
    *a6 = 0;
    *a7 = 0;
    result = a8;
    *(_DWORD *)a8 = 0;
  }
  else
  {
    v10 = 0LL;
    *a1 = 0;
    *a3 = 0;
    v11 = 0;
    *a4 = 0;
    if ( ExpNumberOfPagedPools != -1 )
    {
      do
      {
        v12 = v11++;
        v13 = ExpPagedPoolDescriptor[v12];
        *a1 += *(_QWORD *)(v13 + 80) + *(_QWORD *)(v13 + 72) - *(_QWORD *)(v13 + 136) - *(_QWORD *)(v13 + 144);
        *a3 += *(_DWORD *)(v13 + 64);
        *a4 += *(_DWORD *)(v13 + 128);
      }
      while ( v11 < ExpNumberOfPagedPools + 1 );
    }
    v14 = dword_1403E28C0 + dword_1403E3A00;
    v15 = qword_1403E28D0
        + qword_1403E28C8
        + qword_1403E3A10
        + qword_1403E3A08
        - qword_1403E3A48
        - qword_1403E3A50
        - qword_1403E2908
        - qword_1403E2910;
    v16 = dword_1403E2900 + dword_1403E3A40;
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v19 = dword_1403E2900 + dword_1403E3A40;
      do
      {
        v20 = ExpNonPagedPoolDescriptor[v10];
        v10 = (unsigned int)(v10 + 1);
        v21 = *(_QWORD *)(v20 + 136);
        v22 = *(_QWORD *)(v20 + 72);
        v23 = *(_QWORD *)(v20 + 144);
        v24 = *(_QWORD *)(v20 + 80);
        v25 = *(_DWORD *)(v20 + 64);
        v26 = *(_DWORD *)(v20 + 128);
        v20 += 4416LL;
        v14 += v25 + *(_DWORD *)(v20 + 64);
        v15 += v24
             + v22
             + *(_QWORD *)(v20 + 80)
             + *(_QWORD *)(v20 + 72)
             - *(_QWORD *)(v20 + 136)
             - *(_QWORD *)(v20 + 144)
             - v21
             - v23;
        v19 += v26 + *(_DWORD *)(v20 + 128);
      }
      while ( (unsigned int)v10 < ExpNumberOfNonPagedPools );
      v16 = v19;
      v9 = a2;
    }
    *v9 = v15;
    *a6 = v14;
    *a7 = v16;
    *a5 = 0;
    *(_DWORD *)a8 = 0;
    for ( result = (__int64 *)ExPoolLookasideListHead; result != &ExPoolLookasideListHead; result = (__int64 *)*result )
    {
      v18 = *((_DWORD *)result - 10);
      if ( *((_DWORD *)result - 7) )
        *a5 += v18;
      else
        *(_DWORD *)a8 += v18;
    }
  }
  return result;
}
