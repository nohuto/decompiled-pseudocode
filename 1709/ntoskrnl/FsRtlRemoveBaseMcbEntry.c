/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x140111310
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E72A0 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140111C5C (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x140111D6C (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x140111DF8 (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rbp
  LONGLONG v4; // rsi
  ULONG PairCount; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *Mapping; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rax
  ULONG v14; // r9d
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int v21; // r13d
  LONGLONG v22; // r12
  __int64 v23; // r14
  unsigned int v24; // r13d
  ULONG v25; // eax
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // r8d
  int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  ULONG v41; // [rsp+50h] [rbp+8h] BYREF

  v3 = SectorCount;
  v4 = Vbn;
  if ( Vbn || (PairCount = Mcb->PairCount) == 0 || SectorCount < *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
  {
    if ( SectorCount <= 0 )
      return 1;
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v41) )
        return 1;
      v8 = v41;
      v9 = v41 ? *((unsigned int *)Mcb->Mapping + 2 * v41 - 2) : 0LL;
      if ( v9 == v4 )
      {
        Mapping = Mcb->Mapping;
        v11 = Mapping[2 * v41];
        if ( (unsigned int)(v11 - 1) < v4 + v3 )
          break;
      }
      if ( v41 )
        v19 = *((unsigned int *)Mcb->Mapping + 2 * v41 - 2);
      else
        v19 = 0LL;
      v20 = Mcb->Mapping;
      if ( v19 == v4 )
      {
        if ( v20[2 * v41 + 1] == -1 )
          return 1;
        if ( v41 )
        {
          v32 = v41 - 1;
          v33 = v20[2 * v32 + 1];
          v34 = v32;
          if ( v33 == -1 )
            goto LABEL_64;
          if ( (_DWORD)v32 )
            LODWORD(v32) = v20[2 * v41 - 4];
          if ( !(v20[2 * v34] + v33 - (_DWORD)v32) )
          {
LABEL_64:
            v20[2 * v34] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v41, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v4 + v3;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v21 = v20[2 * v41];
      v22 = v4 + v3;
      v23 = v41;
      if ( (unsigned int)(v21 - 1) >= v4 + v3 )
      {
        if ( v20[2 * v41 + 1] != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v41, 2LL) )
            return 0;
          v35 = (unsigned int)(v8 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v35 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v35) = v4 + v3;
          if ( (_DWORD)v8 )
            v36 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 - 1));
          else
            v36 = 0;
          if ( (_DWORD)v8 == -1 )
            v37 = 0;
          else
            v37 = *((_DWORD *)Mcb->Mapping + 2 * v8);
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 2) + 1) += *((_DWORD *)Mcb->Mapping + 2 * v8)
                                                                      + *((_DWORD *)Mcb->Mapping
                                                                        + 2 * (unsigned int)(v8 + 1))
                                                                      - v37
                                                                      - v36;
        }
        v3 = 0LL;
        v4 = v22;
      }
      else
      {
        v24 = v21 - v4;
        if ( v20[2 * v41 + 1] != -1 )
        {
          v25 = Mcb->PairCount - 1;
          if ( v41 == v25 )
          {
            v20[2 * v41] = v4;
          }
          else if ( v41 >= v25 || (v39 = v41 + 1, v40 = v39, v20[2 * v39 + 1] == -1) )
          {
            v20[2 * v41] = v4;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v39, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v40 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v40) = *((_DWORD *)Mcb->Mapping + 2 * v23);
            *((_DWORD *)Mcb->Mapping + 2 * v23) -= v24;
          }
        }
        v4 += v24;
        v3 -= v24;
      }
LABEL_21:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v41 )
      v12 = Mapping[2 * v41 - 2];
    else
      v12 = 0;
    v13 = (unsigned int)(v11 - v12);
    v4 += v13;
    v3 -= v13;
    if ( Mapping[2 * v41 + 1] == -1 )
      goto LABEL_21;
    v14 = Mcb->PairCount - 1;
    if ( v41 == v14 )
    {
      if ( !v41 )
        goto LABEL_68;
      v15 = v41 - 1;
      v16 = Mapping[2 * v15 + 1];
      if ( v16 != -1 )
      {
        v38 = v41 == 1 ? 0 : Mapping[2 * v41 - 4];
        if ( Mapping[2 * v15] + v16 - v38 )
          goto LABEL_68;
      }
      v17 = (unsigned int)v15;
    }
    else
    {
      if ( !v41 )
        goto LABEL_69;
      v26 = v41 - 1;
      v27 = Mapping[2 * v26 + 1];
      if ( v27 != -1 )
      {
        if ( v41 != 1 )
          LODWORD(v26) = Mapping[2 * v41 - 4];
        if ( Mapping[2 * v41 - 2] + v27 - (_DWORD)v26 )
        {
LABEL_69:
          if ( v41 < v14 && Mapping[2 * v41 + 3] != -1 )
          {
            Mapping[2 * v41 + 1] = -1;
            goto LABEL_21;
          }
          if ( !v41 )
            goto LABEL_85;
        }
      }
      v28 = v41 - 1;
      v29 = Mapping[2 * v28 + 1];
      if ( v29 != -1 )
      {
        if ( v41 != 1 )
          LODWORD(v28) = Mapping[2 * v41 - 4];
        if ( Mapping[2 * v41 - 2] + v29 - (_DWORD)v28 )
        {
LABEL_85:
          if ( v41 >= v14 || Mapping[2 * v41 + 3] == -1 )
          {
LABEL_68:
            v18 = 1LL;
            v17 = v41;
            goto LABEL_20;
          }
          if ( !v41 )
            goto LABEL_36;
        }
      }
      v30 = v41 - 1;
      v31 = Mapping[2 * v30 + 1];
      if ( v31 == -1 )
        goto LABEL_36;
      if ( v41 != 1 )
        LODWORD(v30) = Mapping[2 * v41 - 4];
      if ( !(Mapping[2 * v41 - 2] + v31 - (_DWORD)v30) )
      {
LABEL_36:
        if ( v41 < v14 && Mapping[2 * v41 + 3] != -1 )
        {
          Mapping[2 * v41 + 1] = -1;
          v18 = 1LL;
          v17 = (unsigned int)(v8 - 1);
          goto LABEL_20;
        }
      }
      v17 = v41 - 1;
    }
    v18 = 2LL;
LABEL_20:
    FsRtlRemoveLargeEntry(Mcb, v17, v18);
    goto LABEL_21;
  }
  Mcb->PairCount = 0;
  return 1;
}
