/*
 * XREFs of KeConfigureHeteroPolicy @ 0x140640094
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x14063FC4C (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

char __fastcall KeConfigureHeteroPolicy(_DWORD *a1)
{
  char v1; // r9
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx
  int *v7; // rcx
  __int64 v8; // r10
  signed __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax

  v1 = 0;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = a1 + 1;
  v4 = 4LL;
  do
  {
    v5 = 2LL;
    do
    {
      if ( *v3 >= 5 )
        *v3 = 0;
      ++v3;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  v6 = a1[11];
  if ( (v6 & 0xFFFFFFF0) != 0 )
  {
    a1[11] = 0;
    v6 = 0;
  }
  if ( KiDesiredHeteroCpuPolicy != *a1
    || KiDynamicHeteroCpuPolicyMask != v6
    || KiDynamicHeteroCpuPolicyImportantPriority != a1[9]
    || KiDynamicHeteroCpuPolicyExpectedRuntime != a1[10] )
  {
    KiDesiredHeteroCpuPolicy = *a1;
    v1 = 1;
    KiDynamicHeteroCpuPolicyImportantPriority = a1[9];
    KiDynamicHeteroCpuPolicyMask = a1[11];
    KiDynamicHeteroCpuPolicyExpectedRuntime = a1[10];
    KiDynamicHeteroCpuPolicyExpectedCycles = *(_DWORD *)(KiProcessorBlock[0] + 68)
                                           * KiDynamicHeteroCpuPolicyExpectedRuntime;
  }
  v7 = &KiDynamicHeteroCpuPolicy;
  v8 = 4LL;
  v9 = (char *)a1 - (char *)&KiDynamicHeteroCpuPolicy;
  do
  {
    v10 = 2LL;
    do
    {
      v11 = *(int *)((char *)v7 + v9 + 4);
      if ( *v7 != v11 )
      {
        v1 = 1;
        *v7 = v11;
      }
      ++v7;
      --v10;
    }
    while ( v10 );
    --v8;
  }
  while ( v8 );
  return v1;
}
