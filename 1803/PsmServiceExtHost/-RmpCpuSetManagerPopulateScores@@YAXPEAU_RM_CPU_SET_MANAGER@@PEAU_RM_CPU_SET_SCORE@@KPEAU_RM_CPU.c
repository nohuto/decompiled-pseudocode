/*
 * XREFs of ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180055F1C
 * Callers:
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x180056310 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x180055714 (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 *     ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180056074 (-RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SE.c)
 */

void __fastcall RmpCpuSetManagerPopulateScores(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        unsigned int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _KAFFINITY_EX *a5,
        struct _SYSTEM_CPU_SET_INFORMATION *a6,
        unsigned int a7)
{
  __int64 v9; // r15
  unsigned __int64 *v12; // r11
  unsigned int v13; // r14d
  char v14; // r10
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // r9d
  __int64 v18; // r11
  unsigned int v19; // ecx
  __int64 v20; // rax
  struct _KAFFINITY_EX *v21; // r10
  _QWORD *v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  memset_0(a2, 0, 16LL * a3);
  if ( a6 )
  {
    RmpCpuSetManagerPopulateScoresFromCpuSetInformation(a1, a2, a3, a4, a6, a7);
  }
  else
  {
    v12 = (unsigned __int64 *)((char *)a1 + 248);
    v13 = 0;
    v14 = (*((_DWORD *)a4 + 43) & 2) != 0;
    do
    {
      v15 = *v12;
      while ( RmpCpuSetManagerGetNextCandidateIndex(&v27, v15, v14) )
      {
        v19 = v27;
        v15 = v16 & ~(1LL << v27);
        v20 = 2LL * v13++;
        *((_DWORD *)a2 + 2 * v20) = v17;
        *((_DWORD *)a2 + 2 * v20 + 1) = v19;
      }
      v12 = (unsigned __int64 *)(v18 + 8);
    }
    while ( (unsigned int)(v17 + 1) < 0x14 );
  }
  if ( a3 )
  {
    v21 = a5;
    v22 = (_QWORD *)((char *)a2 + 8);
    do
    {
      v23 = *((_DWORD *)a4 + 42);
      if ( v23 )
      {
        if ( (v23 & 1) == 0
          || (v24 = *((_QWORD *)a4 + *((unsigned int *)v22 - 2) + 1), _bittest64(&v24, *((unsigned int *)v22 - 1))) )
        {
          *v22 |= 0x80000000uLL;
        }
      }
      v25 = *v22 | 1LL;
      *v22 = v25;
      if ( (*((_BYTE *)a4 + 172) & 1) != 0
        && *(_WORD *)v21
        && *((_DWORD *)v22 - 2) < (unsigned int)*(unsigned __int16 *)v21 )
      {
        v26 = *((_QWORD *)v21 + *((unsigned int *)v22 - 2) + 1);
        if ( _bittest64(&v26, *((unsigned int *)v22 - 1)) )
          *v22 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v22 += 2;
      --v9;
    }
    while ( v9 );
  }
}
