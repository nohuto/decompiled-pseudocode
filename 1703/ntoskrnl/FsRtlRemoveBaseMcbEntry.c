/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x140015800
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E30C0 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x140016110 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1400161A0 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1400162A8 (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rsi
  LONGLONG v4; // r14
  ULONG PairCount; // eax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *Mapping; // rdx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rax
  ULONG v14; // r8d
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // r10d
  __int64 v25; // rax
  _DWORD *v26; // r8
  __int64 v27; // rbp
  int v28; // edx
  unsigned int v29; // r15d
  ULONG v30; // eax
  int v31; // ecx
  _DWORD *v32; // rdx
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rdx
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  ULONG v44; // [rsp+50h] [rbp+8h] BYREF

  v3 = SectorCount;
  v4 = Vbn;
  if ( Vbn || (PairCount = Mcb->PairCount) == 0 || SectorCount < *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
  {
    if ( SectorCount <= 0 )
      return 1;
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v44) )
        return 1;
      v8 = v44;
      v9 = v44 ? *((unsigned int *)Mcb->Mapping + 2 * v44 - 2) : 0LL;
      if ( v9 == v4 )
      {
        Mapping = Mcb->Mapping;
        v11 = Mapping[2 * v44];
        if ( (unsigned int)(v11 - 1) < v4 + v3 )
          break;
      }
      if ( v44 )
        v25 = *((unsigned int *)Mcb->Mapping + 2 * v44 - 2);
      else
        v25 = 0LL;
      if ( v25 == v4 )
      {
        v32 = Mcb->Mapping;
        if ( v32[2 * v44 + 1] == -1 )
          return 1;
        if ( v44 )
        {
          v33 = v44 - 1;
          v34 = v32[2 * v33 + 1];
          if ( v34 == -1 || (!(_DWORD)v33 ? (v41 = 0) : (v41 = v32[2 * v44 - 4]), v34 + v32[2 * v33] - v41 - 1 == -1) )
          {
            v32[2 * v33] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v44, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v3 + v4;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v26 = Mcb->Mapping;
      v27 = v44;
      v28 = v26[2 * v44];
      if ( (unsigned int)(v28 - 1) >= v4 + v3 )
      {
        if ( v26[2 * v44 + 1] != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v44, 2LL) )
            return 0;
          v35 = (unsigned int)(v8 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v8) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v35 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v35) = v3 + v4;
          if ( (_DWORD)v8 )
            v36 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 - 1));
          else
            v36 = 0;
          if ( (_DWORD)v8 == -1 )
            v37 = 0;
          else
            v37 = *((_DWORD *)Mcb->Mapping + 2 * v8);
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v8 + 2) + 1) += *((_DWORD *)Mcb->Mapping
                                                                        + 2 * (unsigned int)(v8 + 1))
                                                                      + *((_DWORD *)Mcb->Mapping + 2 * v8)
                                                                      - v37
                                                                      - v36;
        }
        v4 += v3;
        v3 = 0LL;
      }
      else
      {
        v29 = v28 - v4;
        if ( v26[2 * v44 + 1] != -1 )
        {
          v30 = Mcb->PairCount - 1;
          if ( v44 == v30 )
          {
            v26[2 * v44] = v4;
          }
          else if ( v44 >= v30 || (v39 = v44 + 1, v40 = v39, v26[2 * v39 + 1] == -1) )
          {
            v26[2 * v44] = v4;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v39, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v40 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v40) = *((_DWORD *)Mcb->Mapping + 2 * v27);
            *((_DWORD *)Mcb->Mapping + 2 * v27) -= v29;
          }
        }
        v4 += v29;
        v3 -= v29;
      }
LABEL_27:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v44 )
      v12 = Mapping[2 * v44 - 2];
    else
      v12 = 0;
    v13 = (unsigned int)(v11 - v12);
    v4 += v13;
    v3 -= v13;
    if ( Mapping[2 * v44 + 1] == -1 )
      goto LABEL_27;
    v14 = Mcb->PairCount - 1;
    if ( v44 == v14 )
    {
      if ( v44 )
      {
        v7 = v44 - 1;
        v23 = Mapping[2 * v7 + 1];
        if ( v23 == -1 || (v44 == 1 ? (v38 = 0) : (v38 = Mapping[2 * v44 - 4]), v23 + Mapping[2 * v7] - v38 - 1 == -1) )
        {
          v22 = (unsigned int)v7;
LABEL_25:
          v21 = 2LL;
          goto LABEL_26;
        }
      }
    }
    else
    {
      if ( v44 )
      {
        v15 = v44 - 1;
        v16 = Mapping[2 * v15 + 1];
        v7 = v15;
        if ( v16 == -1 )
          goto LABEL_85;
        v31 = (_DWORD)v15 ? Mapping[2 * v44 - 4] : 0;
        if ( v16 + Mapping[2 * v15] - v31 - 1 == -1 )
          goto LABEL_85;
      }
      if ( v44 < v14 && Mapping[2 * v44 + 3] != -1 )
      {
        Mapping[2 * v44 + 1] = -1;
        goto LABEL_27;
      }
      if ( v44 )
      {
LABEL_85:
        v17 = v44 - 1;
        v18 = Mapping[2 * v17 + 1];
        v7 = v17;
        if ( v18 == -1
          || ((_DWORD)v17 ? (v42 = Mapping[2 * v44 - 4]) : (v42 = 0), v18 + Mapping[2 * v17] - v42 - 1 == -1) )
        {
LABEL_18:
          v19 = v44 - 1;
          v20 = Mapping[2 * v19 + 1];
          v7 = v19;
          if ( v20 != -1 )
          {
            v43 = (_DWORD)v19 ? Mapping[2 * v44 - 4] : 0;
            if ( v20 + Mapping[2 * v19] - v43 - 1 != -1 )
            {
LABEL_45:
              v22 = v44 - 1;
              goto LABEL_25;
            }
          }
LABEL_19:
          if ( v44 < v14 && Mapping[2 * v44 + 3] != -1 )
          {
            Mapping[2 * v44 + 1] = -1;
            v21 = 1LL;
            v22 = (unsigned int)(v8 - 1);
LABEL_26:
            FsRtlRemoveLargeEntry(Mcb, v22, v21, v7);
            goto LABEL_27;
          }
          goto LABEL_45;
        }
      }
      if ( v44 < v14 && Mapping[2 * v44 + 3] != -1 )
      {
        if ( !v44 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    v21 = 1LL;
    v22 = v44;
    goto LABEL_26;
  }
  Mcb->PairCount = 0;
  return 1;
}
