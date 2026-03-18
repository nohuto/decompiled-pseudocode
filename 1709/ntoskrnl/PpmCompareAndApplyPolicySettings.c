/*
 * XREFs of PpmCompareAndApplyPolicySettings @ 0x14070664C
 * Callers:
 *     PpmApplyProfile @ 0x14070B748 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14070BBB4 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x1405E1004 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x1406F68F8 (PpmReapplyIdlePolicy.c)
 */

LONG __fastcall PpmCompareAndApplyPolicySettings(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // r15
  char *v16; // r8
  unsigned __int64 v18; // [rsp+20h] [rbp-18h]
  unsigned int v19; // [rsp+80h] [rbp+48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+50h]
  __int64 v21; // [rsp+90h] [rbp+58h]
  __int64 v22; // [rsp+98h] [rbp+60h] BYREF

  v21 = a3;
  v20 = a2;
  v3 = a2;
  LOWORD(v19) = 0;
  if ( PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v4 = v19 | 0x2002;
    v19 |= 0x2002u;
  }
  else
  {
    v4 = v19;
  }
  v5 = *a1;
  v22 = 0LL;
  v6 = 0LL;
  v7 = v5 & 0x1FFFD8030FC0LL;
  if ( v7 )
  {
    v8 = !_BitScanForward64((unsigned __int64 *)&v9, v7);
    if ( !v8 )
    {
      do
      {
        v10 = 5 * v9;
        v18 = v7 & ~(1LL << v9);
        v11 = v21;
        v12 = 0;
        v13 = 1LL << *((_BYTE *)&PpmPolicyConfigTable + 40 * v9 + 36);
        v14 = ((*((_BYTE *)&PpmPolicyConfigTable + 40 * v9 + 37) & 4) != 0) + 1;
        do
        {
          v15 = LODWORD((&PpmPolicyConfigTable)[v10 + 4]);
          v16 = &(&PpmPolicyConfigTable)[v10 + 3][v12 * LODWORD((&PpmPolicyConfigTable)[v10 + 4])];
          if ( RtlCompareMemory(&v16[v3], &v16[v11], (unsigned int)v15) != v15 )
            v6 |= v13;
          v3 = v20;
          ++v12;
        }
        while ( v12 < v14 );
        v7 = v18;
        v8 = !_BitScanForward64((unsigned __int64 *)&v9, v18);
        v22 = v6;
      }
      while ( !v8 );
      v4 = v19;
      if ( v6 )
      {
        PpmGetPolicyAction(&v22, &v19);
        v4 = v19;
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    PpmReapplyIdlePolicy();
    v19 = v4 & 0xFFFFFFFE;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  if ( (_WORD)v19 )
    return PpmReapplyPerfPolicy((LONG *)&v19);
  else
    return PpmReleaseLock(&PpmPerfPolicyLock);
}
