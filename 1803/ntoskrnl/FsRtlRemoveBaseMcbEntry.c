/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x1400AFBF0
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x140224910 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x1400B04D0 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1400B0560 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1400B0674 (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rbp
  LONGLONG v4; // r14
  ULONG PairCount; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *Mapping; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rax
  ULONG v14; // r9d
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // r9
  int v28; // r15d
  LONGLONG v29; // r13
  int v30; // r8d
  __int64 v31; // rsi
  unsigned int v32; // r15d
  ULONG v33; // eax
  __int64 v34; // r9
  int v35; // r8d
  __int64 v36; // r10
  _DWORD *v37; // rdx
  int v38; // r8d
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  ULONG v43; // [rsp+50h] [rbp+8h] BYREF

  v3 = SectorCount;
  v4 = Vbn;
  if ( Vbn || (PairCount = Mcb->PairCount) == 0 || SectorCount < *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
  {
    if ( SectorCount <= 0 )
      return 1;
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v43) )
        return 1;
      v8 = v43;
      v9 = v43 ? *((unsigned int *)Mcb->Mapping + 2 * v43 - 2) : 0LL;
      if ( v9 == v4 )
      {
        Mapping = Mcb->Mapping;
        v11 = Mapping[2 * v43];
        if ( (unsigned int)(v11 - 1) < v4 + v3 )
          break;
      }
      if ( v43 )
        v23 = *((unsigned int *)Mcb->Mapping + 2 * v43 - 2);
      else
        v23 = 0LL;
      v24 = Mcb->Mapping;
      if ( v23 == v4 )
      {
        if ( v24[2 * v43 + 1] == -1 )
          return 1;
        if ( v43 )
        {
          v25 = v43 - 1;
          v26 = v24[2 * v25 + 1];
          v27 = v25;
          if ( v26 == -1 )
            goto LABEL_33;
          if ( (_DWORD)v25 )
            LODWORD(v25) = v24[2 * v43 - 4];
          if ( !(v24[2 * v27] + v26 - (_DWORD)v25) )
          {
LABEL_33:
            v24[2 * v27] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v43, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v4 + v3;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v28 = v24[2 * v43];
      v29 = v4 + v3;
      v30 = v24[2 * v43 + 1];
      v31 = v43;
      if ( (unsigned int)(v28 - 1) >= v4 + v3 )
      {
        if ( v30 != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v43, 2LL) )
            return 0;
          v36 = (unsigned int)(v8 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v36 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v36) = v4 + v3;
          v37 = Mcb->Mapping;
          if ( (_DWORD)v8 )
            v38 = v37[2 * (unsigned int)(v8 - 1)];
          else
            v38 = 0;
          if ( (_DWORD)v8 == -1 )
            v39 = 0;
          else
            v39 = v37[2 * v8];
          v37[2 * (unsigned int)(v8 + 2) + 1] += v37[2 * v8] + v37[2 * v36] - v39 - v38;
        }
        v3 = 0LL;
        v4 = v29;
      }
      else
      {
        v32 = v28 - v4;
        if ( v30 != -1 )
        {
          v33 = Mcb->PairCount - 1;
          if ( v43 == v33 )
          {
            v24[2 * v43] -= v32;
          }
          else if ( v43 >= v33 || (v41 = v43 + 1, v42 = v41, v24[2 * v41 + 1] == -1) )
          {
            v24[2 * v43] -= v32;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v41, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v42 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v42) = *((_DWORD *)Mcb->Mapping + 2 * v31);
            *((_DWORD *)Mcb->Mapping + 2 * v31) -= v32;
          }
        }
        v4 += v32;
        v3 -= v32;
      }
LABEL_25:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v43 )
      v12 = Mapping[2 * v43 - 2];
    else
      v12 = 0;
    v13 = (unsigned int)(v11 - v12);
    v4 += v13;
    v3 -= v13;
    if ( Mapping[2 * v43 + 1] == -1 )
      goto LABEL_25;
    v14 = Mcb->PairCount - 1;
    if ( v43 == v14 )
    {
      if ( v43 )
      {
        v34 = v43 - 1;
        v35 = Mapping[2 * v34 + 1];
        if ( v35 == -1 || (v43 == 1 ? (v40 = 0) : (v40 = Mapping[2 * v43 - 4]), !(Mapping[2 * v34] + v35 - v40)) )
        {
          v21 = (unsigned int)v34;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( v43 )
      {
        v15 = v43 - 1;
        v16 = Mapping[2 * v15 + 1];
        if ( v16 == -1 )
          goto LABEL_95;
        if ( v43 != 1 )
          LODWORD(v15) = Mapping[2 * v43 - 4];
        if ( !(Mapping[2 * v43 - 2] + v16 - (_DWORD)v15) )
          goto LABEL_95;
      }
      if ( v43 < v14 && Mapping[2 * v43 + 3] != -1 )
      {
        Mapping[2 * v43 + 1] = -1;
        goto LABEL_25;
      }
      if ( v43 )
      {
LABEL_95:
        v17 = v43 - 1;
        v18 = Mapping[2 * v17 + 1];
        if ( v18 == -1 )
          goto LABEL_19;
        if ( v43 != 1 )
          LODWORD(v17) = Mapping[2 * v43 - 4];
        if ( !(Mapping[2 * v43 - 2] + v18 - (_DWORD)v17) )
        {
LABEL_19:
          v19 = v43 - 1;
          v20 = Mapping[2 * v19 + 1];
          if ( v20 != -1 )
          {
            if ( v43 != 1 )
              LODWORD(v19) = Mapping[2 * v43 - 4];
            if ( Mapping[2 * v43 - 2] + v20 - (_DWORD)v19 )
            {
LABEL_22:
              v21 = v43 - 1;
LABEL_23:
              v22 = 2LL;
LABEL_24:
              FsRtlRemoveLargeEntry(Mcb, v21, v22);
              goto LABEL_25;
            }
          }
LABEL_20:
          if ( v43 < v14 && Mapping[2 * v43 + 3] != -1 )
          {
            Mapping[2 * v43 + 1] = -1;
            v22 = 1LL;
            v21 = (unsigned int)(v8 - 1);
            goto LABEL_24;
          }
          goto LABEL_22;
        }
      }
      if ( v43 < v14 && Mapping[2 * v43 + 3] != -1 )
      {
        if ( !v43 )
          goto LABEL_20;
        goto LABEL_19;
      }
    }
    v22 = 1LL;
    v21 = v43;
    goto LABEL_24;
  }
  Mcb->PairCount = 0;
  return 1;
}
