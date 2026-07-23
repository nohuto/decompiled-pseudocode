/*
 * XREFs of RtlpWalkLFHBlock @ 0x1801067C8
 * Callers:
 *     RtlpWalkHeap @ 0x1800F111C (RtlpWalkHeap.c)
 * Callees:
 *     RtlpGetFirstBlockAddress @ 0x18010627C (RtlpGetFirstBlockAddress.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 *     RtlpIsLFHZoneAllocation @ 0x180106430 (RtlpIsLFHZoneAllocation.c)
 */

char __fastcall RtlpWalkLFHBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  int v22; // eax
  bool v23; // zf
  char v24; // cl
  unsigned __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // eax
  unsigned __int64 Value; // rcx
  int v29; // eax
  unsigned __int16 v30; // ax
  unsigned __int64 *v31; // rax
  __int64 v32; // r13
  char v33; // al
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 FirstBlockAddress; // rdx
  unsigned __int8 v38; // r11
  char v39; // al
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  char v42; // cl
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int16 v45; // ax
  int v46; // eax
  char v47; // cl
  unsigned __int64 v48; // rcx
  unsigned __int16 v49; // ax
  int v50; // eax
  char v51; // al
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // r8
  char v54; // dl
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int16 v57; // ax
  int v58; // [rsp+28h] [rbp-20h]
  int v59; // [rsp+28h] [rbp-20h]
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]
  int v63; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 376);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v7 -= 16LL;
    _m_prefetchw((const void *)v7);
    if ( *(_BYTE *)(v7 + 15) != 5 )
      goto LABEL_11;
    v8 = 16LL * *(unsigned __int8 *)(v7 + 14);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a2 + 16);
  }
  v7 -= v8;
LABEL_11:
  if ( *(char *)(v7 + 15) >= 0 )
  {
    Value = v5[3].Value;
    if ( ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(Value + 138) & (*(_DWORD *)(Value + 124) >> 20))) & 1) == 0 )
      goto LABEL_122;
    if ( *(_DWORD *)(Value + 124) )
    {
      v29 = *(_DWORD *)(v7 + 8);
      LOWORD(v60) = v29;
      if ( (v29 & *(_DWORD *)(Value + 124)) != 0 )
        v60 = *(_DWORD *)(Value + 136) ^ v29;
      v30 = v60;
    }
    else
    {
      v30 = *(_WORD *)(v7 + 8);
    }
    if ( v30 <= 4u )
      goto LABEL_122;
    v31 = *(unsigned __int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
      goto LABEL_122;
    v32 = *v31;
    if ( !RtlpIsLFHZoneAllocation(v5, *v31) )
      goto LABEL_122;
    v33 = *(_BYTE *)(v7 + 15);
    if ( (v33 & 0x40) != 0 )
    {
      v34 = v33 & 0x3F;
    }
    else
    {
      if ( v33 != 4 )
      {
        v35 = v7;
LABEL_76:
        v36 = *(_QWORD *)(v32 + 8);
        if ( v36 == v35 + 16 )
        {
          FirstBlockAddress = RtlpGetFirstBlockAddress(v32, v36);
          v39 = *(_BYTE *)(FirstBlockAddress + 15);
          if ( (v39 & 0x40) != 0 )
          {
            v40 = (unsigned __int8)(v38 & v39);
          }
          else
          {
            if ( v39 != 4 )
            {
              v41 = FirstBlockAddress;
              goto LABEL_83;
            }
            v40 = *(unsigned __int8 *)(FirstBlockAddress + 14);
          }
          v41 = FirstBlockAddress + 16 * v40;
LABEL_83:
          *(_QWORD *)a2 = v41 + 16;
          if ( (v38 & *(_BYTE *)(FirstBlockAddress + 15)) != 0 )
          {
            *(_WORD *)(a2 + 18) = 1;
            v42 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v42 == 5 )
            {
              v43 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v42 & 0x40) != 0 )
            {
              v43 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v38 & v42) + FirstBlockAddress + 12);
            }
            else if ( (v38 & (unsigned __int8)v42) == v38 )
            {
              if ( v42 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v46 = *(_DWORD *)(FirstBlockAddress + 8);
                  LOWORD(v61) = v46;
                  if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
                    v61 = *(_DWORD *)(a1 + 136) ^ v46;
                  v45 = v61;
                }
                else
                {
                  v45 = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4)) )
                  v44 = 0LL;
                else
                  v44 = *(_QWORD *)(FirstBlockAddress
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                v45 = *(_WORD *)(v44 + 36);
              }
              v43 = *(_QWORD *)(16LL * v45 + FirstBlockAddress);
            }
            else
            {
              v43 = (unsigned __int8)(v38 & v42);
            }
            v23 = (*(_BYTE *)(a2 + 18) & 2) == 0;
            *(_BYTE *)(a2 + 16) = v43;
            if ( v23 )
              *(_QWORD *)(a2 + 36) = v43;
            v47 = *(_BYTE *)(FirstBlockAddress + 15);
            if ( v47 == 5 )
            {
              v48 = *(unsigned __int16 *)(FirstBlockAddress + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v47 & 0x40) != 0 )
            {
              v48 = *(unsigned __int16 *)(FirstBlockAddress + 16LL * (unsigned __int8)(v38 & v47) + 12);
            }
            else if ( (v38 & (unsigned __int8)v47) == v38 )
            {
              if ( v47 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v50 = *(_DWORD *)(FirstBlockAddress + 8);
                  LOWORD(v62) = v50;
                  if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
                    v62 = *(_DWORD *)(a1 + 136) ^ v50;
                  v49 = v62;
                }
                else
                {
                  v49 = *(_WORD *)(FirstBlockAddress + 8);
                }
              }
              else
              {
                if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(FirstBlockAddress + 8) ^ (FirstBlockAddress >> 4))) )
                  v2 = *(_QWORD *)(FirstBlockAddress
                                 - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(FirstBlockAddress + 8) ^ (unsigned int)(FirstBlockAddress >> 4)) >> 12));
                v49 = *(_WORD *)(v2 + 36);
              }
              v48 = *(_QWORD *)(FirstBlockAddress + 16LL * v49);
            }
            else
            {
              v48 = (unsigned __int8)(v38 & v47);
            }
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v32 + 36) - v48;
          }
          else
          {
            *(_WORD *)(a2 + 18) = 0;
            *(_BYTE *)(a2 + 16) = 16;
            *(_QWORD *)(a2 + 36) = 16LL;
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v32 + 36) - 16;
          }
          v51 = *(_BYTE *)(FirstBlockAddress + 14);
          *(_WORD *)(a2 + 18) |= 0x8000u;
LABEL_132:
          *(_BYTE *)(a2 + 17) = v51;
          return 1;
        }
LABEL_122:
        if ( !RtlpIsLFHZoneAllocation(v5, v7) && v5 != *(_RTL_SRWLOCK **)a2 )
        {
          v52 = v5[3].Value;
          v53 = *(_BYTE *)(v7 + 10);
          v54 = *(_BYTE *)(v52 + 138);
          if ( ((v53 ^ (unsigned __int8)(v54 & (*(_DWORD *)(v52 + 124) >> 20))) & 1) == 0
            || ((v53 ^ (unsigned __int8)(v54 & (*(_DWORD *)(v52 + 124) >> 17))) & 8) == 0 )
          {
            return 0;
          }
        }
        *(_BYTE *)(a2 + 16) = 16;
        *(_WORD *)(a2 + 18) = 8193;
        *(_QWORD *)(a2 + 36) = 16LL;
        v55 = v5[3].Value;
        if ( *(_DWORD *)(v55 + 124) )
        {
          v56 = *(_DWORD *)(v7 + 8);
          LOWORD(v63) = v56;
          if ( (v56 & *(_DWORD *)(v55 + 124)) != 0 )
            v63 = *(_DWORD *)(v55 + 136) ^ v56;
          v57 = v63;
        }
        else
        {
          v57 = *(_WORD *)(v7 + 8);
        }
        *(_QWORD *)(a2 + 8) = 16LL * v57 - 16;
        v51 = *(_BYTE *)(v7 + 14);
        goto LABEL_132;
      }
      v34 = *(unsigned __int8 *)(v7 + 14);
    }
    v35 = v7 + 16 * v34;
    goto LABEL_76;
  }
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
    return 0;
  v9 = (unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12;
  v10 = *(_QWORD *)(v7 - v9);
  if ( !v10 )
    return 0;
  RtlpGetReservedBlockSize(*(_QWORD *)(v7 - v9));
  RtlpGetFirstBlockAddress(v11, *(_QWORD *)(v10 + 8));
  ReservedBlockSize = RtlpGetReservedBlockSize(v10);
  if ( (v14 >> 4) / ReservedBlockSize >= *(unsigned __int16 *)(v10 + 40) )
  {
    *(_QWORD *)a2 = *(_QWORD *)(v10 + 8);
    *(_WORD *)(a2 + 18) = 8193;
    return 0;
  }
  v15 = *(_BYTE *)(v13 + 15);
  if ( (v15 & 0x3F) != 0 )
  {
    if ( (v15 & 0x40) != 0 )
    {
      v16 = v15 & 0x3F;
    }
    else
    {
      if ( v15 != 4 )
      {
        v17 = v13;
        goto LABEL_23;
      }
      v16 = *(unsigned __int8 *)(v13 + 14);
    }
    v17 = v13 + 16 * v16;
LABEL_23:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v17 + 16;
    v18 = *(_BYTE *)(v13 + 15);
    if ( v18 == 5 )
    {
      v19 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v18 & 0x40) != 0 )
    {
      v19 = *(unsigned __int16 *)(16LL * (v18 & 0x3F) + v13 + 12);
    }
    else if ( (v18 & 0x3F) == 0x3F )
    {
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v13 + 8);
          LOWORD(v58) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v58 = *(_DWORD *)(a1 + 136) ^ v22;
          v21 = v58;
        }
        else
        {
          v21 = *(_WORD *)(v13 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4)) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)(v13
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
        v21 = *(_WORD *)(v20 + 36);
      }
      v19 = *(_QWORD *)(16LL * v21 + v13);
    }
    else
    {
      v19 = v18 & 0x3F;
    }
    v23 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v19;
    if ( v23 )
      *(_QWORD *)(a2 + 36) = v19;
    v24 = *(_BYTE *)(v13 + 15);
    if ( v24 == 5 )
    {
      v25 = *(unsigned __int16 *)(v13 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v24 & 0x40) != 0 )
    {
      v25 = *(unsigned __int16 *)(v13 + 16LL * (v24 & 0x3F) + 12);
    }
    else if ( (v24 & 0x3F) == 0x3F )
    {
      if ( v24 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v27 = *(_DWORD *)(v13 + 8);
          LOWORD(v59) = v27;
          if ( (v27 & *(_DWORD *)(a1 + 124)) != 0 )
            v59 = *(_DWORD *)(a1 + 136) ^ v27;
          v26 = v59;
        }
        else
        {
          v26 = *(_WORD *)(v13 + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4))) )
          v2 = *(_QWORD *)(v13
                         - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12));
        v26 = *(_WORD *)(v2 + 36);
      }
      v25 = *(_QWORD *)(v13 + 16LL * v26);
    }
    else
    {
      v25 = v24 & 0x3F;
    }
    *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v10 + 36) - v25;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(v13 + 14);
    goto LABEL_60;
  }
  *(_WORD *)(a2 + 18) = 0;
  *(_QWORD *)a2 = v13 + 16;
  *(_BYTE *)(a2 + 16) = 16;
  *(_QWORD *)(a2 + 36) = 16LL;
  *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v10 + 36) - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v13 + 14);
LABEL_60:
  *(_WORD *)(a2 + 18) |= 0x8000u;
  return 1;
}
