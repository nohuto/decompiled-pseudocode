/*
 * XREFs of RtlpHpTagQueryTags @ 0x180084D80
 * Callers:
 *     RtlQueryHeapInformation @ 0x1800137A0 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F02A0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x18006F01C (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180102AEC (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  __int16 v9; // ax
  char *v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r9
  _QWORD *i; // r8
  _QWORD *v15; // rax
  _QWORD *j; // rdx
  __int64 v17; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 Mapping; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    if ( (RtlpHpHeapFeatures & 2) != 0 )
    {
      v7 = 0;
      v9 = v5 | 1;
      a1[2] = 0LL;
      *((_WORD *)a1 + 1) = v9;
      if ( (v9 & 2) != 0 )
      {
        v18 = (unsigned __int8 *)(a1 + 3);
        v19 = 314159LL;
        do
        {
          v20 = *v18;
          v18 += 8;
          v19 = *(v18 - 1)
              + 37
              * (*(v18 - 2)
               + 37
               * (*(v18 - 3)
                + 37 * (*(v18 - 4) + 37 * (*(v18 - 5) + 37 * (*(v18 - 6) + 37 * (*(v18 - 7) + 37 * (v20 + 37 * v19)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)(a1 + 3), v19);
        a1[2] = 1LL;
        if ( Mapping )
          a1[5] = *(_QWORD *)(Mapping + 32);
        else
          a1[5] = 0LL;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v10 = (char *)(a1 + 3);
        v11 = (a2 - 24) / 0x18;
        v12 = (unsigned __int64)&a1[3 * v11 + 3];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_18015D908 > v11 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_18015D908 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v13 = qword_18015D910;
          for ( i = (_QWORD *)qword_18015D910; (unsigned __int64)v10 < v12; v10 += 24 )
          {
            if ( i && (v15 = (_QWORD *)*i, (*i & 1) == 0) )
            {
              i = (_QWORD *)*i;
            }
            else
            {
              for ( j = (_QWORD *)(v13 + 8);
                    (unsigned __int64)j < qword_18015D910 + 8 * ((unsigned __int64)(unsigned int)dword_18015D90C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = (_QWORD *)*j;
                  v13 = (__int64)j;
                  v15 = (_QWORD *)*j;
                  goto LABEL_19;
                }
              }
              v15 = 0LL;
            }
LABEL_19:
            if ( !v15 )
              break;
            *(_OWORD *)v10 = *((_OWORD *)v15 + 1);
            *((_QWORD *)v10 + 2) = v15[4];
          }
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v17 = (v10 - (char *)a1 - 24) / 24;
          a1[2] = v17;
          *a3 = 24 * (v17 + 1);
        }
      }
    }
    else
    {
      v7 = 0;
      *((_WORD *)a1 + 1) = v5 & 0xFFFE;
      a1[2] = 0LL;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  }
  return v7;
}
