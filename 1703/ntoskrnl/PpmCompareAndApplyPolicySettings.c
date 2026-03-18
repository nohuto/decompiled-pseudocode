/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x1406CEFD0
 * Callers:
 *     PpmApplyProfile @ 0x1406D59E4 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1406D5E40 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x14059B744 (PpmReapplyIdlePolicy.c)
 *     PpmGetPolicyAction @ 0x1405C0044 (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rsi
  unsigned int v14; // r15d
  SIZE_T v15; // rbp
  char *v16; // rdx
  unsigned int v17; // ebx
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v21 = a2;
  PpmPerfRecomputeBackgroundPolicy(0);
  v5 = *a1;
  v22 = 0LL;
  LOWORD(v20) = 0;
  v6 = 0LL;
  v7 = v5 & 0x7FFD8030FC0LL;
  if ( !v7 )
    goto LABEL_13;
  v8 = !_BitScanForward64((unsigned __int64 *)&v9, v7);
  if ( v8 )
    goto LABEL_13;
  do
  {
    v10 = 5 * v9;
    v19 = v7 & ~(1LL << v9);
    v11 = v21;
    v12 = 0;
    v13 = 1LL << *((_BYTE *)&PpmPolicyConfigTable + 40 * v9 + 36);
    v14 = ((*((_BYTE *)&PpmPolicyConfigTable + 40 * v9 + 37) & 4) != 0) + 1;
    do
    {
      v15 = LODWORD((&PpmPolicyConfigTable)[v10 + 4]);
      v16 = &(&PpmPolicyConfigTable)[v10 + 3][v12 * LODWORD((&PpmPolicyConfigTable)[v10 + 4])];
      if ( RtlCompareMemory(&v16[v11], &v16[a3], v15) != v15 )
        v6 |= v13;
      ++v12;
    }
    while ( v12 < v14 );
    v7 = v19;
    v8 = !_BitScanForward64((unsigned __int64 *)&v9, v19);
    v22 = v6;
  }
  while ( !v8 );
  if ( v6 )
  {
    PpmGetPolicyAction(&v22, &v20);
    v17 = v20;
    if ( (v20 & 1) != 0 )
    {
      PpmReapplyIdlePolicy();
      v20 = v17 & 0xFFFFFFFE;
    }
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    if ( (_WORD)v20 )
      return PpmReapplyPerfPolicy(&v20);
  }
  else
  {
LABEL_13:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  }
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
