/*
 * XREFs of PfpRpControlRequestUpdate @ 0x1405620C0
 * Callers:
 *     PfpRpControlRequestPerform @ 0x140561BC0 (PfpRpControlRequestPerform.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     PfpRpCHashDeleteEntries @ 0x140562254 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x140563AC0 (PfpRpCHashAddEntries.c)
 */

__int64 __fastcall PfpRpControlRequestUpdate(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r12
  __int64 v3; // rbp
  unsigned int v4; // esi
  _QWORD *v7; // r13
  unsigned int *v8; // r14
  unsigned __int64 v9; // r15
  void *v10; // rcx
  __int64 v11; // r15
  __int64 result; // rax
  PEPROCESS v13; // rcx
  PEPROCESS Process; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+10h]

  v2 = a2 + 6;
  v3 = (unsigned int)(a2[2] + a2[1]);
  v4 = 0;
  v7 = a2 + 6;
  v8 = a2 + 6;
  v9 = ((unsigned __int64)&a2[2 * v3 + 7] + 3) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = v9;
  if ( (_DWORD)v3 )
  {
    do
    {
      v10 = (void *)v8[1];
      v11 = *v8;
      *v7++ = v11;
      if ( (_DWORD)v10 && PsLookupProcessByProcessId(v10, &Process) >= 0 )
      {
        v13 = Process;
        if ( Process[1].ThreadSeed[1] == (_DWORD)v11 )
        {
          if ( v4 < a2[1] )
            _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x4000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFFBFFF);
          v13 = Process;
        }
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      }
      ++v4;
      v8 += 2;
    }
    while ( v4 < (unsigned int)v3 );
    v9 = v15;
  }
  result = PfpRpCHashAddEntries(a1, a1 + 96, a1 + 120, v2, a2[1]);
  if ( (int)result >= 0 )
  {
    if ( !a2[2] || !*(_DWORD *)(a1 + 112) || (result = PfpRpCHashDeleteEntries(a1, a1 + 96, a1 + 120), (int)result >= 0) )
    {
      PfpRpCHashAddEntries(a1, a1 + 56, a1 + 88, v9 + 8LL * (unsigned int)a2[3], a2[4]);
      if ( a2[3] && *(_DWORD *)(a1 + 72) )
      {
        result = PfpRpCHashDeleteEntries(a1, a1 + 56, a1 + 88);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
