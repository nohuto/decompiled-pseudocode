/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1400B0010
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1400AFA40 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x1400AFFF0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x1400B04D0 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x1400B0560 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1400B0674 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r15d
  int v5; // r12d
  unsigned int v6; // ebp
  int v8; // ebx
  _DWORD *Mapping; // r14
  ULONG v10; // edi
  unsigned int v11; // r9d
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  __int64 v16; // rax
  ULONG PairCount; // r10d
  ULONG v18; // edi
  __int64 v19; // rdx
  _DWORD *v20; // r14
  __int64 v21; // rdi
  unsigned int v22; // r8d
  int v23; // r9d
  unsigned int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edx
  _DWORD *v28; // r8
  __int64 v29; // rcx
  int v30; // r9d
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // r8d
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // r8d
  int v42; // ecx
  int v43; // eax
  ULONG v44; // edx
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rdx
  unsigned int v48; // edx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // r8d
  __int64 v52; // rdx
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  ULONG v57; // [rsp+60h] [rbp+8h] BYREF
  ULONG v58; // [rsp+68h] [rbp+10h]
  unsigned int v59; // [rsp+70h] [rbp+18h]

  v4 = Lbn;
  v5 = SectorCount;
  v6 = Vbn;
  v8 = 0;
  if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, Vbn, &v57) )
  {
    Mapping = Mcb->Mapping;
    v10 = v57;
    v11 = v5 + v6 - 1;
    v12 = Mapping[2 * v57 + 1];
    if ( v12 == -1 )
    {
      if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v11, &v57) )
      {
        v16 = v57 - 1;
        if ( v10 == (_DWORD)v16 )
        {
          v55 = 0;
          if ( v57 )
            v55 = Mapping[2 * v16];
          if ( Mapping[2 * v57 + 1] != v4 + v55 - v6 )
            return -1073741823;
          if ( v57 )
            v56 = Mapping[2 * v16];
          else
            v56 = 0;
          v5 = v56 - v6;
        }
      }
    }
    else
    {
      if ( v57 )
        v13 = Mapping[2 * v57 - 2];
      else
        v13 = 0;
      if ( v4 != v6 + v12 - v13 )
        return -1073741823;
      v14 = Mapping[2 * v57];
      if ( v11 <= v14 - 1 )
        return 0;
      if ( v57 < Mcb->PairCount )
        v6 = v57 != -1 ? v14 : 0;
      else
        v6 = 0;
      if ( v57 )
        v54 = Mapping[2 * v57 - 2];
      else
        v54 = 0;
      v4 = v12 + v14 - v54;
      v5 = v11 - v6 + 1;
    }
  }
  PairCount = Mcb->PairCount;
  v18 = PairCount;
  v58 = PairCount;
  v57 = PairCount;
  if ( !PairCount || (v20 = Mcb->Mapping, v20[2 * PairCount - 2] <= v6) )
  {
LABEL_11:
    if ( v18 )
    {
      v28 = Mcb->Mapping;
      v29 = v18 - 1;
      v30 = v28[2 * v29];
      if ( v30 == v6 )
      {
        v31 = v28[2 * v29 + 1];
        if ( v31 == -1 )
        {
          v33 = 0;
        }
        else
        {
          v32 = v18 == 1 ? 0 : v28[2 * v18 - 4];
          v33 = v30 + v31 - v32;
        }
        if ( v33 == v4 )
        {
          v28[2 * PairCount - 2] += v5;
          return 0;
        }
      }
    }
    if ( !v6 || (!v18 ? (v34 = 0) : (v34 = *((_DWORD *)Mcb->Mapping + 2 * v18 - 2)), v34 == v6) )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v18, 1LL) )
        return -1073741670;
      v19 = v18;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v18, 2LL) )
        return -1073741670;
      v19 = v18 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v18 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v18) = v6;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = v4;
    *((_DWORD *)Mcb->Mapping + 2 * v19) = v5 + v6;
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v6, &v57) )
  {
    v18 = v57;
    PairCount = v58;
    goto LABEL_11;
  }
  v21 = v57;
  v59 = v5 + v6;
  v22 = v5 + v6 - 1;
  if ( v20[2 * v57 + 1] != -1 || v57 && v20[2 * v57 - 2] > v6 )
    return -1073741823;
  v23 = v20[2 * v57];
  v24 = v23 - 1;
  if ( v22 > v23 - 1 )
    return -1073741823;
  if ( v57 )
    v25 = v20[2 * v57 - 2];
  else
    v25 = 0;
  if ( v25 < v6 && v22 < v24 )
  {
    if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 2LL) )
    {
      v26 = (unsigned int)(v21 + 1);
      v27 = v59;
      *((_DWORD *)Mcb->Mapping + 2 * v21 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v21) = v6;
      *((_DWORD *)Mcb->Mapping + 2 * v26 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v26) = v27;
      return 0;
    }
    return -1073741670;
  }
  if ( v57 )
    v35 = v20[2 * v57 - 2];
  else
    v35 = 0;
  if ( v35 == v6 && v22 < v24 )
  {
    if ( !v57 || (v36 = v20[2 * v57 - 1], v36 == -1) )
    {
      v38 = 0;
    }
    else
    {
      if ( v57 == 1 )
        v37 = 0;
      else
        v37 = v20[2 * v57 - 4];
      v38 = v36 + v20[2 * v57 - 2] - v37;
    }
    if ( v38 == v4 )
    {
      if ( v57 )
      {
        v20[2 * v57 - 2] += v5;
        return 0;
      }
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
      {
        *((_DWORD *)Mcb->Mapping + 1) = v4;
        *(_DWORD *)Mcb->Mapping = v5;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
    {
      v48 = v59;
      *((_DWORD *)Mcb->Mapping + 2 * v21 + 1) = v4;
      *((_DWORD *)Mcb->Mapping + 2 * v21) = v48;
      return 0;
    }
    return -1073741670;
  }
  if ( v57 )
    v39 = v20[2 * v57 - 2];
  else
    v39 = 0;
  if ( v39 >= v6 || v22 != v24 )
  {
    if ( !v57 || (v41 = v20[2 * v57 - 1], v41 == -1) )
    {
      v43 = 0;
    }
    else
    {
      if ( v57 == 1 )
        v42 = 0;
      else
        v42 = v20[2 * v57 - 4];
      v43 = v41 + v20[2 * v57 - 2] - v42;
    }
    v44 = v58 - 1;
    if ( v43 == v4 && (v57 >= v44 ? (v45 = -1) : (v45 = v20[2 * v57 + 3]), v45 == v5 + v4) )
    {
      if ( !v57 )
      {
        v47 = 0LL;
        v20[3] = v4;
        v46 = 1LL;
        goto LABEL_77;
      }
      v46 = 2LL;
      v20[2 * v57 - 2] = v20[2 * v57 + 2];
    }
    else
    {
      if ( v57 >= v44 )
        v49 = -1;
      else
        v49 = v20[2 * v57 + 3];
      if ( v49 == v5 + v4 )
      {
        v20[2 * v57 + 3] = v4;
      }
      else
      {
        if ( !v57 )
          goto LABEL_91;
        v50 = v57 - 1;
        v51 = v20[2 * v50 + 1];
        v52 = v50;
        if ( v51 != -1 )
        {
          if ( (_DWORD)v50 )
            v53 = v20[2 * v57 - 4];
          else
            v53 = 0;
          v8 = v51 + v20[2 * v52] - v53;
        }
        if ( v8 != v4 )
        {
LABEL_91:
          v20[2 * v57 + 1] = v4;
          return 0;
        }
        v20[2 * v52] = v23;
      }
      v46 = 1LL;
    }
    v47 = (unsigned int)v21;
LABEL_77:
    FsRtlRemoveLargeEntry(Mcb, v47, v46);
    return 0;
  }
  if ( v57 >= v58 - 1 )
    v40 = -1;
  else
    v40 = v20[2 * v57 + 3];
  if ( v40 == v5 + v4 )
  {
    v20[2 * v57] = v6;
LABEL_64:
    *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v21 + 1) + 1) = v4;
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
  {
    *((_DWORD *)Mcb->Mapping + 2 * v21 + 1) = -1;
    *((_DWORD *)Mcb->Mapping + 2 * v21) = v6;
    goto LABEL_64;
  }
  return -1073741670;
}
