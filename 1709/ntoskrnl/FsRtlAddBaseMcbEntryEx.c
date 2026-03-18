/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x140111750
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x140111170 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x140111730 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140111C5C (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x140111D6C (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x140111DF8 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ULONG PairCount; // r15d
  int v5; // r13d
  int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // edi
  signed int v10; // r11d
  signed int v11; // r10d
  unsigned int v12; // eax
  __int64 v13; // rbx
  _DWORD *Mapping; // rax
  ULONG v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v19; // r8d
  unsigned int *v20; // rdx
  unsigned int v21; // r10d
  _DWORD *v22; // r14
  int v23; // ecx
  _DWORD *v24; // r14
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // ebx
  unsigned int v33; // r13d
  unsigned int v34; // r9d
  __int64 v35; // r12
  unsigned int *v36; // rdx
  unsigned int v37; // r8d
  int v38; // r11d
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // r15d
  int v42; // eax
  int v43; // r13d
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // r9d
  _DWORD *v47; // r8
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rcx
  int v53; // r9d
  unsigned int *v54; // r8
  int v55; // eax
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // eax
  int v59; // r15d
  int v60; // ecx
  int v61; // r15d
  int v62; // eax
  int v63; // r8d
  int v64; // eax
  unsigned int v65; // [rsp+60h] [rbp+8h] BYREF
  LONGLONG v66; // [rsp+70h] [rbp+18h]

  v66 = Lbn;
  PairCount = Mcb->PairCount;
  v5 = 0;
  v6 = SectorCount;
  v7 = Lbn;
  v8 = Vbn;
  v10 = 0;
  v11 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v12 = (v11 + v10) / 2;
    v13 = v12;
    if ( v12 && (unsigned int)Vbn < *((_DWORD *)Mcb->Mapping + 2 * (int)(v12 - 1)) )
    {
      v11 = v12 - 1;
      goto LABEL_6;
    }
    Mapping = Mcb->Mapping;
    if ( (unsigned int)Vbn <= Mapping[2 * (int)v13] - 1 )
      break;
    v10 = v13 + 1;
LABEL_6:
    if ( v10 > v11 )
      goto LABEL_7;
  }
  v19 = Mapping[2 * v13 + 1];
  v20 = &Mapping[2 * v13];
  v21 = v8 + SectorCount - 1;
  v22 = Mcb->Mapping;
  if ( v19 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v21, &v65) )
      goto LABEL_7;
    v31 = v65 - 1;
    if ( (_DWORD)v13 != (_DWORD)v31 )
      goto LABEL_7;
    v63 = 0;
    if ( v65 )
      v63 = v22[2 * v31];
    if ( v22[2 * v65 + 1] != v7 + v63 - v8 )
      return -1073741823;
    v64 = 0;
    if ( v65 )
      v64 = v22[2 * v31];
    v6 = v64 - v8;
LABEL_7:
    v15 = PairCount;
    v65 = PairCount;
    if ( PairCount )
    {
      v24 = Mcb->Mapping;
      if ( v24[2 * PairCount - 2] > v8 )
      {
        if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v8, &v65) )
        {
          v32 = v65;
          v33 = v8 + v6;
          v34 = v8 + v6 - 1;
          v35 = 8LL * v65;
          v36 = &v24[(unsigned __int64)v35 / 4];
          if ( v24[(unsigned __int64)v35 / 4 + 1] != -1 || v65 && v24[2 * v65 - 2] > v8 )
            return -1073741823;
          v37 = *v36 - 1;
          if ( v34 > v37 )
            return -1073741823;
          v38 = 0;
          if ( v65 )
            v39 = v24[2 * v65 - 2];
          else
            v39 = 0;
          if ( v39 >= v8 || v34 >= v37 )
          {
            if ( v65 )
              v42 = v24[2 * v65 - 2];
            else
              v42 = 0;
            if ( v34 < v37 && v42 == v8 )
            {
              if ( v65 )
              {
                v56 = v65 - 1;
                v57 = v24[2 * v56 + 1];
                if ( v57 != -1 )
                {
                  if ( v65 == 1 )
                    v58 = 0;
                  else
                    v58 = v24[2 * v65 - 4];
                  v38 = v57 + v24[2 * v56] - v58;
                }
              }
              v59 = v66;
              if ( v38 == (_DWORD)v66 )
              {
                if ( v65 )
                {
                  v24[2 * v65 - 2] += v6;
                  return 0;
                }
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                {
                  *((_DWORD *)Mcb->Mapping + 1) = v59;
                  *(_DWORD *)Mcb->Mapping = v6;
                  return 0;
                }
              }
              else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v65, 1LL) )
              {
                *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = v59;
                *(_DWORD *)((char *)Mcb->Mapping + v35) = v33;
                return 0;
              }
            }
            else
            {
              v43 = 0;
              if ( v65 )
                v44 = v24[2 * v65 - 2];
              else
                v44 = 0;
              if ( v44 >= v8 || v34 != v37 )
              {
                if ( v65 )
                {
                  v45 = v65 - 1;
                  v46 = v24[2 * v45 + 1];
                  v47 = &v24[2 * v45];
                  if ( v46 == -1 )
                  {
                    v49 = 0;
                  }
                  else
                  {
                    if ( v65 == 1 )
                      v48 = 0;
                    else
                      v48 = v24[2 * v65 - 4];
                    v49 = v46 + *v47 - v48;
                  }
                }
                else
                {
                  v49 = 0;
                }
                if ( v49 != (_DWORD)v66
                  || (v65 >= PairCount - 1 ? (v50 = -1) : (v50 = v24[2 * v65 + 3]), v50 != (_DWORD)v66 + v6) )
                {
                  if ( v65 >= PairCount - 1 )
                    v51 = -1;
                  else
                    v51 = v24[2 * v65 + 3];
                  if ( v51 == (_DWORD)v66 + v6 )
                  {
                    v24[2 * v65 + 3] = v66;
                  }
                  else
                  {
                    if ( !v65 )
                      goto LABEL_98;
                    v52 = v65 - 1;
                    v53 = v24[2 * v52 + 1];
                    v54 = &v24[2 * v52];
                    if ( v53 != -1 )
                    {
                      if ( v65 == 1 )
                        v55 = 0;
                      else
                        v55 = v24[2 * v65 - 4];
                      v43 = v53 + *v54 - v55;
                    }
                    if ( v43 != (_DWORD)v66 )
                    {
LABEL_98:
                      v36[1] = v66;
                      return 0;
                    }
                    *v54 = *v36;
                  }
                  FsRtlRemoveLargeEntry(Mcb, v32, 1LL);
                  return 0;
                }
                if ( v65 )
                {
                  v24[2 * v65 - 2] = v24[2 * v65 + 2];
                  FsRtlRemoveLargeEntry(Mcb, v32, 2LL);
                }
                else
                {
                  v24[3] = v66;
                  FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
                }
                return 0;
              }
              if ( v65 >= PairCount - 1 )
                v60 = -1;
              else
                v60 = v24[2 * v65 + 3];
              v61 = v66;
              if ( v60 == (_DWORD)v66 + v6 )
              {
                *v36 = v8;
                *((_DWORD *)Mcb->Mapping + 2 * v32 + 3) = v61;
                return 0;
              }
              if ( (unsigned __int8)FsRtlAddEntry(Mcb, v65, 1LL) )
              {
                *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = -1;
                *(_DWORD *)((char *)Mcb->Mapping + v35) = v8;
                *((_DWORD *)Mcb->Mapping + 2 * v32 + 3) = v61;
                return 0;
              }
            }
          }
          else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v65, 2LL) )
          {
            v40 = v32 + 1;
            v41 = v66;
            *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = -1;
            *(_DWORD *)((char *)Mcb->Mapping + v35) = v8;
            *((_DWORD *)Mcb->Mapping + 2 * v40 + 1) = v41;
            *((_DWORD *)Mcb->Mapping + 2 * v40) = v33;
            return 0;
          }
          return -1073741670;
        }
        v15 = v65;
      }
      if ( v15 )
      {
        v25 = v15 - 1;
        v26 = v24[2 * v25];
        if ( v26 == v8 )
        {
          v27 = v24[2 * v25 + 1];
          if ( v27 == -1 )
          {
            v29 = 0;
          }
          else
          {
            v28 = v15 == 1 ? 0 : v24[2 * v15 - 4];
            v29 = v26 + v27 - v28;
          }
          if ( v29 == v7 )
          {
            v24[2 * PairCount - 2] += v6;
            return 0;
          }
        }
      }
    }
    if ( !v8 )
      goto LABEL_132;
    if ( v15 )
      v5 = *((_DWORD *)Mcb->Mapping + 2 * v15 - 2);
    if ( v5 == v8 )
    {
LABEL_132:
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, v15, 1LL) )
      {
        v16 = v15;
LABEL_11:
        v17 = 8 * v16;
        *(_DWORD *)((char *)Mcb->Mapping + v17 + 4) = v7;
        *(_DWORD *)((char *)Mcb->Mapping + v17) = v8 + v6;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v15, 2LL) )
    {
      v30 = 8LL * v15;
      *(_DWORD *)((char *)Mcb->Mapping + v30 + 4) = -1;
      *(_DWORD *)((char *)Mcb->Mapping + v30) = v8;
      v16 = v15 + 1;
      goto LABEL_11;
    }
    return -1073741670;
  }
  if ( (_DWORD)v13 )
    v23 = v22[2 * (unsigned int)(v13 - 1)];
  else
    v23 = 0;
  if ( v7 == v8 + v19 - v23 )
  {
    if ( v21 > *v20 - 1 )
    {
      if ( (unsigned int)v13 < PairCount )
      {
        v8 = *v20;
        if ( (_DWORD)v13 == -1 )
          v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      if ( (_DWORD)v13 )
        v62 = v22[2 * (unsigned int)(v13 - 1)];
      else
        v62 = 0;
      v7 = v19 + *v20 - v62;
      v66 = v7;
      v6 = v21 - v8 + 1;
      goto LABEL_7;
    }
    return 0;
  }
  return -1073741823;
}
