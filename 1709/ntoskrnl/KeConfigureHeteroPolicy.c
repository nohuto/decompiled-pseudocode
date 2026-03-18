/*
 * XREFs of KeConfigureHeteroPolicy @ 0x1405B6AF0
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1405B6708 (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

char __fastcall KeConfigureHeteroPolicy(_DWORD *a1)
{
  char v1; // r9
  __int64 v3; // r10
  int *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int *v7; // rcx
  signed __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax

  v1 = 0;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = 3LL;
  v4 = a1 + 1;
  v5 = 3LL;
  do
  {
    v6 = 2LL;
    do
    {
      if ( *v4 >= 5 )
        *v4 = 0;
      ++v4;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  if ( (a1[9] & 0xFFFFFFF0) != 0 )
    a1[9] = 0;
  if ( KiDesiredHeteroCpuPolicy != *a1
    || KiDynamicHeteroCpuPolicyImportantPriority != a1[7]
    || KiDynamicHeteroCpuPolicyMask != a1[9]
    || KiDynamicHeteroCpuPolicyExpectedRuntime != a1[8] )
  {
    KiDesiredHeteroCpuPolicy = *a1;
    v1 = 1;
    KiDynamicHeteroCpuPolicyImportantPriority = a1[7];
    KiDynamicHeteroCpuPolicyMask = a1[9];
    KiDynamicHeteroCpuPolicyExpectedRuntime = a1[8];
    KiDynamicHeteroCpuPolicyExpectedCycles = *(_DWORD *)(KiProcessorBlock[0] + 68)
                                           * KiDynamicHeteroCpuPolicyExpectedRuntime;
  }
  v7 = &KiDynamicHeteroCpuPolicy;
  v8 = (char *)a1 - (char *)&KiDynamicHeteroCpuPolicy;
  do
  {
    v9 = 2LL;
    do
    {
      v10 = *(int *)((char *)v7 + v8 + 4);
      if ( *v7 != v10 )
      {
        v1 = 1;
        *v7 = v10;
      }
      ++v7;
      --v9;
    }
    while ( v9 );
    --v3;
  }
  while ( v3 );
  return v1;
}
