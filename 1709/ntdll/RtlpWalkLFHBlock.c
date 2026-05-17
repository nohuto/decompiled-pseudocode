/*
 * XREFs of RtlpWalkLFHBlock @ 0x1801067C8
 * Callers:
 *     RtlpWalkHeap @ 0x1800F111C (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010627C (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x180106430 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r8
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  int v24; // eax
  bool v25; // zf
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int16 v32; // ax
  unsigned __int64 *v33; // rax
  __int64 v34; // r13
  char v35; // al
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  unsigned __int8 v40; // r11
  char v41; // al
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  char v44; // cl
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int16 v47; // ax
  int v48; // eax
  char v49; // cl
  unsigned __int64 v50; // rcx
  unsigned __int16 v51; // ax
  int v52; // eax
  char v53; // al
  __int64 v54; // rax
  unsigned __int8 v55; // r8
  char v56; // dl
  __int64 v57; // rcx
  int v58; // eax
  unsigned __int16 v59; // ax
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]
  int v64; // [rsp+28h] [rbp-20h]
  int v65; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v7 = *(_QWORD *)(a1 + 376);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0;
  v9 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v9 -= 16LL;
    _m_prefetchw((const void *)v9);
    if ( *(_BYTE *)(v9 + 15) != 5 )
      goto LABEL_11;
    v10 = 16LL * *(unsigned __int8 *)(v9 + 14);
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 16);
  }
  v9 -= v10;
LABEL_11:
  if ( *(char *)(v9 + 15) >= 0 )
  {
    v30 = *(_QWORD *)(v7 + 24);
    if ( ((*(_BYTE *)(v9 + 10) ^ (unsigned __int8)(*(_BYTE *)(v30 + 138) & (*(_DWORD *)(v30 + 124) >> 20))) & 1) == 0 )
      goto LABEL_122;
    if ( *(_DWORD *)(v30 + 124) )
    {
      v31 = *(_DWORD *)(v9 + 8);
      LOWORD(v62) = v31;
      if ( (v31 & *(_DWORD *)(v30 + 124)) != 0 )
        v62 = *(_DWORD *)(v30 + 136) ^ v31;
      v32 = v62;
    }
    else
    {
      v32 = *(_WORD *)(v9 + 8);
    }
    if ( v32 <= 4u )
      goto LABEL_122;
    v33 = *(unsigned __int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
      goto LABEL_122;
    v34 = *v33;
    if ( !RtlpIsLFHZoneAllocation(v7, *v33, a3, a4) )
      goto LABEL_122;
    v35 = *(_BYTE *)(v9 + 15);
    if ( (v35 & 0x40) != 0 )
    {
      v36 = v35 & 0x3F;
    }
    else
    {
      if ( v35 != 4 )
      {
        v37 = v9;
LABEL_76:
        v38 = *(_QWORD *)(v34 + 8);
        if ( v38 == v37 + 16 )
        {
          FirstBlockAddress = RtlpGetFirstBlockAddress(v34, v38);
          v41 = *(_BYTE *)(FirstBlockAddress + 15);
          if ( (v41 & 0x40) != 0 )
          {
            v42 = (unsigned __int8)(v40 & v41);
          }
          else
          {
            if ( v41 != 4 )
            {
              v43 = FirstBlockAddress;
              goto LABEL_83;
            }
            v42 = *(unsigned __int8 *)(FirstBlockAddress + 14);
          }
          v43 = FirstBlockAddress + 16 * v42;
LABEL_83:
          *(_QWORD *)a2 = v43 + 16;
          if ( (v40 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
          {
            *(_WORD *)(a2 + 18) = 1;
            v44 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v44 == 5 )
            {
              v45 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v44 & 0x40) != 0 )
            {
              v45 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v40 & v44) + FirstBlockAddress + 12);
            }
            else if ( (v40 & (unsigned __int8)v44) == v40 )
            {
              if ( v44 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v48 = *(_DWORD *)(FirstBlockAddress + 8);
                  LOWORD(v63) = v48;
                  if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
                    v63 = *(_DWORD *)(a1 + 136) ^ v48;
                  v47 = v63;
                }
                else
                {
                  v47 = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4)) )
                  v46 = 0LL;
                else
                  v46 = *(_QWORD *)(FirstBlockAddress
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                v47 = *(_WORD *)(v46 + 36);
              }
              v45 = *(_QWORD *)(16LL * v47 + FirstBlockAddress);
            }
            else
            {
              v45 = (unsigned __int8)(v40 & v44);
            }
            v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
            *(_BYTE *)(a2 + 16) = v45;
            if ( v25 )
              *(_QWORD *)(a2 + 36) = v45;
            v49 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v49 == 5 )
            {
              v50 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v49 & 0x40) != 0 )
            {
              v50 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (unsigned __int8)(v40 & v49) + 12);
            }
            else if ( (v40 & (unsigned __int8)v49) == v40 )
            {
              if ( v49 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v52 = *(_DWORD *)(FirstBlockAddress + 8);
                  LOWORD(v64) = v52;
                  if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
                    v64 = *(_DWORD *)(a1 + 136) ^ v52;
                  v51 = v64;
                }
                else
                {
                  v51 = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4))) )
                  v4 = *(_QWORD *)(FirstBlockAddress
                                 - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                v51 = *(_WORD *)(v4 + 36);
              }
              v50 = *(_QWORD *)(FirstBlockAddress + 16LL * v51);
            }
            else
            {
              v50 = (unsigned __int8)(v40 & v49);
            }
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v34 + 36) - v50;
          }
          else
          {
            *(_WORD *)(a2 + 18) = 0;
            *(_BYTE *)(a2 + 16) = 16;
            *(_QWORD *)(a2 + 36) = 16LL;
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v34 + 36) - 16;
          }
          v53 = *(_BYTE *)(FirstBlockAddress + 14);
          *(_WORD *)(a2 + 18) |= 0x8000u;
LABEL_132:
          *(_BYTE *)(a2 + 17) = v53;
          return 1;
        }
LABEL_122:
        if ( !RtlpIsLFHZoneAllocation(v7, v9, a3, a4) && v7 != *(_QWORD *)a2 )
        {
          v54 = *(_QWORD *)(v7 + 24);
          v55 = *(_BYTE *)(v9 + 10);
          v56 = *(_BYTE *)(v54 + 138);
          if ( ((v55 ^ (unsigned __int8)(v56 & (*(_DWORD *)(v54 + 124) >> 20))) & 1) == 0
            || ((v55 ^ (unsigned __int8)(v56 & (*(_DWORD *)(v54 + 124) >> 17))) & 8) == 0 )
          {
            return 0;
          }
        }
        *(_BYTE *)(a2 + 16) = 16;
        *(_WORD *)(a2 + 18) = 8193;
        *(_QWORD *)(a2 + 36) = 16LL;
        v57 = *(_QWORD *)(v7 + 24);
        if ( *(_DWORD *)(v57 + 124) )
        {
          v58 = *(_DWORD *)(v9 + 8);
          LOWORD(v65) = v58;
          if ( (v58 & *(_DWORD *)(v57 + 124)) != 0 )
            v65 = *(_DWORD *)(v57 + 136) ^ v58;
          v59 = v65;
        }
        else
        {
          v59 = *(_WORD *)(v9 + 8);
        }
        *(_QWORD *)(a2 + 8) = 16LL * v59 - 16;
        v53 = *(_BYTE *)(v9 + 14);
        goto LABEL_132;
      }
      v36 = *(unsigned __int8 *)(v9 + 14);
    }
    v37 = v9 + 16 * v36;
    goto LABEL_76;
  }
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v9 + 8) ^ (v9 >> 4)) )
    return 0;
  v11 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v9 + 8) ^ (unsigned int)(v9 >> 4)) >> 12;
  v12 = *(_QWORD *)(v9 - v11);
  if ( !v12 )
    return 0;
  RtlpGetReservedBlockSize(*(_QWORD *)(v9 - v11));
  RtlpGetFirstBlockAddress(v13, *(_QWORD *)(v12 + 8));
  ReservedBlockSize = RtlpGetReservedBlockSize(v12);
  if ( (v16 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v12 + 40) )
  {
    *(_QWORD *)a2 = *(_QWORD *)(v12 + 8);
    *(_WORD *)(a2 + 18) = 8193;
    return 0;
  }
  v17 = *(_BYTE *)(v15 + 15);
  if ( (v17 & 0x3F) != 0 )
  {
    if ( (v17 & 0x40) != 0 )
    {
      v18 = v17 & 0x3F;
    }
    else
    {
      if ( v17 != 4 )
      {
        v19 = v15;
        goto LABEL_23;
      }
      v18 = *(unsigned __int8 *)(v15 + 14);
    }
    v19 = v15 + 16 * v18;
LABEL_23:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v19 + 16;
    v20 = *(_BYTE *)(v15 + 15);
    if ( v20 == 5 )
    {
      v21 = *(unsigned __int16 *)(v15 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v20 & 0x40) != 0 )
    {
      v21 = *(unsigned __int16 *)(16LL * (v20 & 0x3F) + v15 + 12);
    }
    else if ( (v20 & 0x3F) == 0x3F )
    {
      if ( v20 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v15 + 8);
          LOWORD(v60) = v24;
          if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
            v60 = *(_DWORD *)(a1 + 136) ^ v24;
          v23 = v60;
        }
        else
        {
          v23 = *(_WORD *)(v15 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4)) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(v15
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12));
        v23 = *(_WORD *)(v22 + 36);
      }
      v21 = *(_QWORD *)(16LL * v23 + v15);
    }
    else
    {
      v21 = v20 & 0x3F;
    }
    v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v21;
    if ( v25 )
      *(_QWORD *)(a2 + 36) = v21;
    v26 = *(_BYTE *)(v15 + 15);
    if ( v26 == 5 )
    {
      v27 = *(unsigned __int16 *)(v15 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v26 & 0x40) != 0 )
    {
      v27 = *(unsigned __int16 *)(v15 + 16LL * (v26 & 0x3F) + 12);
    }
    else if ( (v26 & 0x3F) == 0x3F )
    {
      if ( v26 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 = *(_DWORD *)(v15 + 8);
          LOWORD(v61) = v29;
          if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
            v61 = *(_DWORD *)(a1 + 136) ^ v29;
          v28 = v61;
        }
        else
        {
          v28 = *(_WORD *)(v15 + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4))) )
          v4 = *(_QWORD *)(v15
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12));
        v28 = *(_WORD *)(v4 + 36);
      }
      v27 = *(_QWORD *)(v15 + 16LL * v28);
    }
    else
    {
      v27 = v26 & 0x3F;
    }
    *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v12 + 36) - v27;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(v15 + 14);
    goto LABEL_60;
  }
  *(_WORD *)(a2 + 18) = 0;
  *(_QWORD *)a2 = v15 + 16;
  *(_BYTE *)(a2 + 16) = 16;
  *(_QWORD *)(a2 + 36) = 16LL;
  *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v12 + 36) - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v15 + 14);
LABEL_60:
  *(_WORD *)(a2 + 18) |= 0x8000u;
  return 1;
}
