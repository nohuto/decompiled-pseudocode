/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x140015C70
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x140015650 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x140015C50 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x140016110 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1400161A0 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1400162A8 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r15d
  LONGLONG v5; // r12
  unsigned int v6; // r14d
  int v8; // r13d
  int v9; // ebx
  _DWORD *Mapping; // rsi
  ULONG v11; // edi
  unsigned int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  __int64 v17; // r8
  ULONG PairCount; // r9d
  ULONG v19; // edi
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // edx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  unsigned int v29; // r8d
  __int64 v30; // r9
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  int v35; // eax
  int v36; // r8d
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // r8d
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // edx
  ULONG v55; // [rsp+70h] [rbp+8h] BYREF
  ULONG v56; // [rsp+78h] [rbp+10h]
  int v57; // [rsp+80h] [rbp+18h]
  LONGLONG v58; // [rsp+88h] [rbp+20h]

  v58 = SectorCount;
  v4 = Lbn;
  LODWORD(v5) = SectorCount;
  v6 = Vbn;
  v8 = -1;
  v9 = 0;
  if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, Vbn, &v55) )
  {
    Mapping = Mcb->Mapping;
    v11 = v55;
    v12 = v5 + v6 - 1;
    v13 = Mapping[2 * v55 + 1];
    if ( v13 != -1 )
    {
      if ( v55 )
        v14 = Mapping[2 * v55 - 2];
      else
        v14 = 0;
      if ( v4 != v6 + v13 - v14 )
        return -1073741823;
      v15 = Mapping[2 * v55];
      if ( v12 <= v15 - 1 )
        return 0;
      if ( v55 < Mcb->PairCount )
        v6 = v55 != -1 ? v15 : 0;
      else
        v6 = 0;
      if ( v55 )
        v51 = Mapping[2 * v55 - 2];
      else
        v51 = 0;
      v4 = v13 + v15 - v51;
      v5 = v12 - v6 + 1;
      goto LABEL_109;
    }
    if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v12, &v55) )
    {
      v17 = v55 - 1;
      if ( v11 == (_DWORD)v17 )
      {
        v52 = 0;
        if ( v55 )
          v52 = Mapping[2 * v17];
        if ( Mapping[2 * v55 + 1] != v4 + v52 - v6 )
          return -1073741823;
        v53 = 0;
        if ( v55 )
          v53 = Mapping[2 * v17];
        v5 = v53 - v6;
LABEL_109:
        v58 = v5;
      }
    }
  }
  PairCount = Mcb->PairCount;
  v19 = PairCount;
  v56 = PairCount;
  v55 = PairCount;
  if ( !PairCount )
    goto LABEL_19;
  v20 = Mcb->Mapping;
  if ( v20[2 * PairCount - 2] <= v6 )
  {
LABEL_12:
    if ( v19 )
    {
      v21 = v19 - 1;
      v22 = v20[2 * v21];
      if ( v22 == v6 )
      {
        v23 = v20[2 * v21 + 1];
        if ( v23 == -1 )
        {
          v25 = -1;
        }
        else
        {
          v24 = v19 == 1 ? 0 : v20[2 * v19 - 4];
          v25 = v23 - v24 + v22 - 1;
        }
        if ( v25 + 1 == v4 )
        {
          v20[2 * PairCount - 2] += v5;
          return 0;
        }
      }
    }
LABEL_19:
    if ( !v6 || (!v19 ? (v27 = 0) : (v27 = *((_DWORD *)Mcb->Mapping + 2 * v19 - 2)), v27 == v6) )
    {
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, v19, 1LL) )
      {
        v26 = v19;
LABEL_22:
        *((_DWORD *)Mcb->Mapping + 2 * v26 + 1) = v4;
        *((_DWORD *)Mcb->Mapping + 2 * v26) = v5 + v6;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v19, 2LL) )
    {
      v26 = v19 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v19) = v6;
      goto LABEL_22;
    }
    return -1073741670;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v6, &v55) )
  {
    v19 = v55;
    PairCount = v56;
    goto LABEL_12;
  }
  v28 = v55;
  v57 = v5 + v6;
  v29 = v5 + v6 - 1;
  if ( v20[2 * v55 + 1] != -1 || v55 && v20[2 * v55 - 2] > v6 )
    return -1073741823;
  v30 = (unsigned int)v20[2 * v55];
  v31 = v30 - 1;
  if ( v29 > (int)v30 - 1 )
    return -1073741823;
  if ( v55 )
    v32 = v20[2 * v55 - 2];
  else
    v32 = 0;
  if ( v32 < v6 && v29 < v31 )
  {
    if ( (unsigned __int8)FsRtlAddEntry(Mcb, v55, 2LL) )
    {
      v33 = (unsigned int)(v28 + 1);
      v34 = v57;
      *((_DWORD *)Mcb->Mapping + 2 * v28 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v28) = v6;
      *((_DWORD *)Mcb->Mapping + 2 * v33 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v33) = v34;
      return 0;
    }
    return -1073741670;
  }
  if ( v55 )
    v35 = v20[2 * v55 - 2];
  else
    v35 = 0;
  if ( v35 == v6 && v29 < v31 )
  {
    if ( v55 )
    {
      v36 = v20[2 * v55 - 1];
      if ( v36 != -1 )
      {
        if ( v55 == 1 )
          v37 = 0;
        else
          v37 = v20[2 * v55 - 4];
        v8 = v20[2 * v55 - 2] - v37 + v36 - 1;
      }
    }
    if ( v8 + 1 == v4 )
    {
      if ( v55 )
      {
        v20[2 * v55 - 2] += v58;
        return 0;
      }
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
      {
        v54 = v58;
        *((_DWORD *)Mcb->Mapping + 1) = v4;
        *(_DWORD *)Mcb->Mapping = v54;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v55, 1LL) )
    {
      v40 = v57;
      *((_DWORD *)Mcb->Mapping + 2 * v28 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v28) = v40;
      return 0;
    }
    return -1073741670;
  }
  if ( v55 )
    v38 = v20[2 * v55 - 2];
  else
    v38 = 0;
  if ( v38 >= v6 || v29 != v31 )
  {
    if ( !v55 || (v41 = v20[2 * v55 - 1], v41 == -1) )
    {
      v43 = -1;
    }
    else
    {
      if ( v55 == 1 )
        v42 = 0;
      else
        v42 = v20[2 * v55 - 4];
      v43 = v41 + v20[2 * v55 - 2] - v42 - 1;
    }
    if ( v43 + 1 == v4 )
    {
      if ( v55 >= v56 - 1 )
        v44 = -1;
      else
        v44 = v20[2 * v55 + 3];
      v45 = v58;
      if ( v44 == (_DWORD)v58 + v4 )
      {
        if ( !v55 )
        {
          v47 = 0LL;
          v20[3] = v4;
          v46 = 1LL;
          goto LABEL_80;
        }
        v46 = 2LL;
        v20[2 * v55 - 2] = v20[2 * v55 + 2];
LABEL_79:
        v47 = (unsigned int)v28;
LABEL_80:
        FsRtlRemoveLargeEntry(Mcb, v47, v46, v30);
        return 0;
      }
    }
    else
    {
      v45 = v58;
    }
    if ( v55 >= v56 - 1 )
      v48 = -1;
    else
      v48 = v20[2 * v55 + 3];
    if ( v48 == v45 + v4 )
    {
      v20[2 * v55 + 3] = v4;
    }
    else
    {
      if ( !v55 )
        goto LABEL_92;
      v49 = v55 - 1;
      v50 = v20[2 * v49 + 1];
      if ( v50 != -1 )
      {
        if ( (_DWORD)v49 )
          v9 = v20[2 * v55 - 4];
        v8 = v20[2 * v49] - v9 + v50 - 1;
      }
      if ( v8 + 1 != v4 )
      {
LABEL_92:
        v20[2 * v55 + 1] = v4;
        return 0;
      }
      v20[2 * v49] = v30;
    }
    v46 = 1LL;
    goto LABEL_79;
  }
  if ( v55 >= v56 - 1 )
    v39 = -1;
  else
    v39 = v20[2 * v55 + 3];
  if ( v39 == v4 + (_DWORD)v58 )
  {
    v20[2 * v55] = v6;
LABEL_64:
    *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v28 + 1) + 1) = v4;
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v55, 1LL) )
  {
    *((_DWORD *)Mcb->Mapping + 2 * v28 + 1) = -1;
    *((_DWORD *)Mcb->Mapping + 2 * v28) = v6;
    goto LABEL_64;
  }
  return -1073741670;
}
