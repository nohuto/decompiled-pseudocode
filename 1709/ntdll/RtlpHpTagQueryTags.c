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

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  __int16 v10; // ax
  char *v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r9
  _QWORD *i; // r8
  _QWORD *v16; // rax
  _QWORD *j; // rdx
  __int64 v18; // rdx
  unsigned __int8 *v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  char *v22; // rdx
  __int64 Mapping; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v6 = *((unsigned __int16 *)a1 + 1);
  if ( (v6 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v7 = 2LL;
    if ( (v6 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    if ( (RtlpHpHeapFeatures & 2) != 0 )
    {
      v8 = 0;
      v10 = v6 | 1;
      a1[2] = 0LL;
      *((_WORD *)a1 + 1) = v10;
      if ( (v10 & 2) != 0 )
      {
        v19 = (unsigned __int8 *)(a1 + 3);
        v20 = 314159LL;
        do
        {
          v21 = *v19;
          v19 += 8;
          v22 = (char *)(*(v19 - 3)
                       + 37
                       * (*(v19 - 4) + 37 * (*(v19 - 5) + 37 * (*(v19 - 6) + 37 * (*(v19 - 7) + 37 * (v21 + 37 * v20))))));
          v20 = *(v19 - 1) + 37 * (*(v19 - 2) + 37LL * (_QWORD)v22);
          --v7;
        }
        while ( v7 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext, v22, 0LL, (__int64)v19);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)(a1 + 3), v20);
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
        v11 = (char *)(a1 + 3);
        v12 = (a2 - 24) / 0x18;
        v13 = (unsigned __int64)&a1[3 * v12 + 3];
        RtlAcquireSRWLockShared(
          &RtlpHpTagContext,
          (char *)(((a2 - 24) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64),
          2LL,
          a4);
        if ( (unsigned int)dword_18015D908 > v12 )
        {
          v8 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_18015D908 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v14 = qword_18015D910;
          for ( i = (_QWORD *)qword_18015D910; (unsigned __int64)v11 < v13; v11 += 24 )
          {
            if ( i && (v16 = (_QWORD *)*i, (*i & 1) == 0) )
            {
              i = (_QWORD *)*i;
            }
            else
            {
              for ( j = (_QWORD *)(v14 + 8);
                    (unsigned __int64)j < qword_18015D910 + 8 * ((unsigned __int64)(unsigned int)dword_18015D90C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = (_QWORD *)*j;
                  v14 = (__int64)j;
                  v16 = (_QWORD *)*j;
                  goto LABEL_19;
                }
              }
              v16 = 0LL;
            }
LABEL_19:
            if ( !v16 )
              break;
            *(_OWORD *)v11 = *((_OWORD *)v16 + 1);
            *((_QWORD *)v11 + 2) = v16[4];
          }
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v18 = (v11 - (char *)a1 - 24) / 24;
          a1[2] = v18;
          *a3 = 24 * (v18 + 1);
        }
      }
    }
    else
    {
      v8 = 0;
      *((_WORD *)a1 + 1) = v6 & 0xFFFE;
      a1[2] = 0LL;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1);
  }
  return v8;
}
