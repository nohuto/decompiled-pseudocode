/*
 * XREFs of sub_180093A28 @ 0x180093A28
 * Callers:
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180093ED0 @ 0x180093ED0 (sub_180093ED0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F082C @ 0x1800F082C (sub_1800F082C.c)
 *     sub_18010216C @ 0x18010216C (sub_18010216C.c)
 *     sub_180102FE0 @ 0x180102FE0 (sub_180102FE0.c)
 */

__int64 __fastcall sub_180093A28(char *BaseAddress, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 UserModeGlobalLogger; // rcx
  char *v10; // rcx
  __int16 v11; // dx
  unsigned __int64 v12; // rbx
  char *v13; // rcx
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rax
  int v17; // eax
  char *v18; // rcx
  bool v19; // zf
  char *v20; // rax
  __int64 v21; // rax
  char *v22; // rax
  char *v23; // r8
  char *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rbx
  char *v31; // rbx
  char *v32; // rdx
  int v33; // eax
  unsigned __int8 v34; // al
  char *v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  unsigned __int16 v39; // cx
  unsigned __int8 v40; // al
  int v41; // eax
  unsigned __int16 v42; // ax
  char v43; // al
  __int64 v44; // rax
  char *v45; // rax
  char v46; // al
  __int64 v47; // rax
  char *v48; // rax
  char v49; // al
  int v50; // edx
  int v51; // eax
  unsigned __int16 v52; // r8
  char v53; // cl
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int16 v56; // ax
  int v57; // eax
  char v58; // cl
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int16 v61; // ax
  int v62; // eax
  int v63; // eax
  unsigned __int16 v64; // ax
  __int64 v65; // rcx
  int v66; // eax
  unsigned __int16 v67; // ax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  int v72; // eax
  unsigned __int16 v73; // ax
  unsigned int v74[4]; // [rsp+20h] [rbp-49h] BYREF
  int v75; // [rsp+30h] [rbp-39h]
  int v76; // [rsp+40h] [rbp-29h]
  int v77; // [rsp+50h] [rbp-19h]
  char Fields[6]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v79; // [rsp+5Eh] [rbp-Bh]
  char *v80; // [rsp+78h] [rbp+Fh]

  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180155448)();
  if ( (((*((_DWORD *)BaseAddress + 28) & 0x61000000) != 0) & !_bittest((const signed __int32 *)BaseAddress + 28, 0x1Cu)) != 0
    && !(unsigned __int8)sub_18010216C(BaseAddress) )
  {
    v74[0] = -1073741811;
    goto LABEL_8;
  }
  v10 = *(char **)a2;
  v74[0] = 0;
  if ( !v10 )
  {
    v14 = BaseAddress;
    goto LABEL_27;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_44;
  v11 = *(_WORD *)(a2 + 18) & 2;
  if ( v11 )
  {
    v16 = BaseAddress[386] == 2 ? (char *)*((_QWORD *)BaseAddress + 47) : 0LL;
    if ( v10 == v16 )
      goto LABEL_26;
  }
  if ( a3 && v11 )
  {
    v12 = *((_QWORD *)v10 + 8);
    goto LABEL_7;
  }
  v12 = (unsigned __int64)&v10[*(_QWORD *)(a2 + 8)];
  if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
  {
    v22 = (char *)*((_QWORD *)BaseAddress + 36);
    v23 = v10 - 48;
    while ( v22 != BaseAddress + 288 )
    {
      v10 = v22 - 24;
      if ( *((_QWORD *)v22 + 3) <= (unsigned __int64)v23 && (unsigned __int64)v23 <= *((_QWORD *)v10 + 9) )
        goto LABEL_23;
      v22 = *(char **)v22;
    }
    v10 = 0LL;
  }
LABEL_23:
  if ( !a3 || v12 >= *((_QWORD *)v10 + 9) )
  {
    v13 = (char *)*((_QWORD *)v10 + 3);
    if ( v13 != BaseAddress + 288 )
    {
      v14 = v13 - 24;
      goto LABEL_27;
    }
    if ( BaseAddress[386] == 2 )
    {
      v14 = (char *)*((_QWORD *)BaseAddress + 47);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  while ( 1 )
  {
LABEL_7:
    if ( !v12 )
      goto LABEL_8;
    v43 = *(_BYTE *)(v12 + 15);
    if ( (v43 & 0x40) != 0 )
    {
      v44 = v43 & 0x3F;
LABEL_130:
      v45 = (char *)(v12 + 16 * v44);
      goto LABEL_82;
    }
    if ( v43 == 4 )
    {
      v44 = *(unsigned __int8 *)(v12 + 14);
      goto LABEL_130;
    }
    v45 = (char *)v12;
LABEL_82:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v45 + 16;
    v29 = BaseAddress[386] == 2 ? *((_QWORD *)BaseAddress + 47) : 0LL;
    if ( !v29 || !(unsigned __int8)sub_180093ED0(BaseAddress, a2) )
      break;
    if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
      goto LABEL_8;
LABEL_44:
    if ( BaseAddress[386] == 2 )
      v21 = *((_QWORD *)BaseAddress + 47);
    else
      v21 = 0LL;
    if ( v21 && (unsigned __int8)sub_180093ED0(BaseAddress, a2) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
      goto LABEL_8;
    v30 = *(char **)a2;
    if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
    {
      v31 = v30 - 16;
      _m_prefetchw(v31);
      if ( v31[15] == 5 )
        v31 -= 16 * (unsigned __int8)v31[14];
      if ( v31[15] == 4 )
      {
        v32 = (char *)*((_QWORD *)v31 - 6);
        v33 = v74[0];
        v19 = v32 == BaseAddress + 272;
        v12 = 0LL;
        if ( v32 == BaseAddress + 272 )
          v33 = -2147483622;
        v74[0] = v33;
        v20 = v32 + 48;
        goto LABEL_41;
      }
      v34 = v31[14];
      if ( v34 )
        v35 = (char *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v34 << 16) + 0x10000);
      else
        v35 = BaseAddress;
      if ( !v35 )
        goto LABEL_79;
      if ( v31[15] == 3 )
        goto LABEL_63;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v36 = *((_DWORD *)v31 + 2);
        v76 = v36;
        if ( (v36 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v76 = *((_DWORD *)BaseAddress + 34) ^ v36;
        LOWORD(v37) = v76;
      }
      else
      {
        LOWORD(v37) = *((_WORD *)v31 + 4);
      }
      v37 = (unsigned __int16)v37;
LABEL_111:
      v12 = (unsigned __int64)&v31[16 * v37];
    }
    else
    {
      v31 = v30 - 32;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v38 = *((_DWORD *)v31 + 2);
        v77 = v38;
        if ( (v38 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v77 = *((_DWORD *)BaseAddress + 34) ^ v38;
        v39 = v77;
      }
      else
      {
        v39 = *((_WORD *)v31 + 4);
      }
      v40 = v31[14];
      if ( v40 )
        v35 = (char *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v40 << 16) + 0x10000);
      else
        v35 = BaseAddress;
      if ( !v35 )
      {
LABEL_79:
        v74[0] = -1073741503;
        goto LABEL_8;
      }
      if ( v31[15] != 3 )
      {
        v37 = v39;
        goto LABEL_111;
      }
LABEL_63:
      if ( (unsigned __int64)&v31[*((_QWORD *)v31 + 7) + 64] < *((_QWORD *)v35 + 9) )
      {
        *(_QWORD *)a2 = *((_QWORD *)v31 + 6);
        v25 = *((_QWORD *)v31 + 7);
        v12 = 0LL;
        *(_QWORD *)(a2 + 8) = v25;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
      }
      else
      {
        v24 = (char *)*((_QWORD *)v35 + 3);
        if ( v24 == BaseAddress + 288 )
LABEL_26:
          v14 = 0LL;
        else
          v14 = v24 - 24;
LABEL_27:
        v12 = 0LL;
        if ( v14 )
        {
          if ( BaseAddress[386] == 2 )
            v15 = (char *)*((_QWORD *)BaseAddress + 47);
          else
            v15 = 0LL;
          if ( v14 == v15 )
          {
            sub_180102FE0(BaseAddress, a2, v74, 1LL);
            goto LABEL_8;
          }
          *(_QWORD *)a2 = v14;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v41 = *((_DWORD *)v14 + 2);
            v75 = v41;
            if ( (v41 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v75 = *((_DWORD *)BaseAddress + 34) ^ v41;
            v42 = v75;
          }
          else
          {
            v42 = *((_WORD *)v14 + 4);
          }
          *(_QWORD *)(a2 + 8) = 16LL * v42;
          *(_DWORD *)(a2 + 16) = 0x20000;
          *(_DWORD *)(a2 + 24) = (*((_DWORD *)v14 + 14) - *((_DWORD *)v14 + 20)) << 12;
          v26 = *((_DWORD *)v14 + 20) << 12;
          *(_DWORD *)(a2 + 28) = v26;
          if ( (v14[20] & 2) != 0 )
            *(_DWORD *)(a2 + 28) = v26 + 4096;
          v27 = *((_QWORD *)v14 + 8);
          if ( (*(_BYTE *)(v27 + 10) & 1) != 0 )
            v6 = v27 + 16;
          else
            v6 = v27 + 32;
          *(_QWORD *)(a2 + 32) = v6;
          *(_QWORD *)(a2 + 40) = *((_QWORD *)v14 + 9);
        }
        else
        {
          v17 = v74[0];
          v18 = (char *)*((_QWORD *)BaseAddress + 34);
          v19 = v18 == BaseAddress + 272;
          if ( v18 == BaseAddress + 272 )
            v17 = -2147483622;
          v74[0] = v17;
          v20 = v18 + 48;
LABEL_41:
          if ( !v19 )
            v12 = (unsigned __int64)v20;
        }
      }
    }
  }
  if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
  {
    v46 = *(_BYTE *)(v12 + 15);
    if ( (v46 & 0x40) != 0 )
    {
      v47 = v46 & 0x3F;
      goto LABEL_137;
    }
    if ( v46 == 4 )
    {
      v47 = *(unsigned __int8 *)(v12 + 14);
LABEL_137:
      v48 = (char *)(v12 + 16 * v47);
    }
    else
    {
      v48 = (char *)v12;
    }
    *(_QWORD *)a2 = v48 + 16;
    v49 = *(_BYTE *)(v12 + 15);
    if ( v49 == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v63 = *(_DWORD *)(v12 + 8);
        v75 = v63;
        if ( (v63 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v75 = *((_DWORD *)BaseAddress + 34) ^ v63;
        v64 = v75;
      }
      else
      {
        v64 = *(_WORD *)(v12 + 8);
      }
      v65 = *(_QWORD *)(v12 - 16) - v64;
      *(_BYTE *)(a2 + 17) = 64;
      *(_QWORD *)(a2 + 8) = v65;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v66 = *(_DWORD *)(v12 + 8);
        v75 = v66;
        if ( (v66 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v75 = *((_DWORD *)BaseAddress + 34) ^ v66;
        v67 = v75;
      }
      else
      {
        v67 = *(_WORD *)(v12 + 8);
      }
      v59 = v67;
LABEL_195:
      *(_BYTE *)(a2 + 16) = v59;
      if ( (*(_BYTE *)(a2 + 18) & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v59;
LABEL_197:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v68 = *(_DWORD *)(v12 + 8);
        if ( (v68 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v68 ^= *((_DWORD *)BaseAddress + 34);
        v69 = HIWORD(v68);
      }
      else
      {
        LOBYTE(v69) = *(_BYTE *)(v12 + 10);
      }
      if ( (v69 & 2) != 0 )
      {
        v28 = sub_1800F082C(BaseAddress, v12);
        *(_QWORD *)(a2 + 24) = *(_QWORD *)(v28 + 8);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          *(_WORD *)(a2 + 32) = *(_WORD *)(v28 + 2);
        else
          *(_WORD *)(a2 + 32) = 0;
        *(_WORD *)(a2 + 18) |= 0x10u;
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v12 + 11);
      }
      else
      {
        *(_WORD *)(a2 + 32) = 0;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v70 = *(_DWORD *)(v12 + 8);
        if ( (v70 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v70 ^= *((_DWORD *)BaseAddress + 34);
        v71 = HIWORD(v70);
      }
      else
      {
        LOBYTE(v71) = *(_BYTE *)(v12 + 10);
      }
      *(_WORD *)(a2 + 18) |= v71 & 0xE0;
      goto LABEL_8;
    }
    if ( v49 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v12 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v12 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
      goto LABEL_197;
    }
    if ( v49 != 1 )
    {
      v50 = *((_DWORD *)BaseAddress + 31);
      if ( v50 )
      {
        v51 = *(_DWORD *)(v12 + 8);
        v50 = *((_DWORD *)BaseAddress + 31);
        v75 = v51;
        if ( (v50 & v51) != 0 )
          v75 = *((_DWORD *)BaseAddress + 34) ^ v51;
        v52 = v75;
      }
      else
      {
        v52 = *(_WORD *)(v12 + 8);
      }
      v53 = *(_BYTE *)(v12 + 15);
      if ( v53 == 5 )
      {
        v54 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
      }
      else if ( (v53 & 0x40) != 0 )
      {
        v54 = *(unsigned __int16 *)(v12 + 16LL * (v53 & 0x3F) + 12);
      }
      else if ( (v53 & 0x3F) == 0x3F )
      {
        if ( v53 >= 0 )
        {
          if ( v50 )
          {
            v57 = *(_DWORD *)(v12 + 8);
            v75 = v57;
            if ( (v57 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v75 = *((_DWORD *)BaseAddress + 34) ^ v57;
            v56 = v75;
          }
          else
          {
            v56 = *(_WORD *)(v12 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(*(_WORD *)(v12 + 8) ^ (unsigned __int16)BaseAddress ^ (v12 >> 4)) )
            v55 = 0LL;
          else
            v55 = *(_QWORD *)(v12
                            - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12));
          v56 = *(_WORD *)(v55 + 36);
        }
        v54 = *(_QWORD *)(v12 + 16LL * v56);
      }
      else
      {
        v54 = v53 & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v52 - v54;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v58 = *(_BYTE *)(v12 + 15);
      if ( v58 == 5 )
      {
        v59 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
      }
      else if ( (v58 & 0x40) != 0 )
      {
        v59 = *(unsigned __int16 *)(16LL * (v58 & 0x3F) + v12 + 12);
      }
      else if ( (v58 & 0x3F) == 0x3F )
      {
        if ( v58 >= 0 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v62 = *(_DWORD *)(v12 + 8);
            v75 = v62;
            if ( (v62 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v75 = *((_DWORD *)BaseAddress + 34) ^ v62;
            v61 = v75;
          }
          else
          {
            v61 = *(_WORD *)(v12 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(*(_WORD *)(v12 + 8) ^ (unsigned __int16)BaseAddress ^ (v12 >> 4)) )
            v60 = 0LL;
          else
            v60 = *(_QWORD *)(v12
                            - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v12 >> 4)) >> 12));
          v61 = *(_WORD *)(v60 + 36);
        }
        v59 = *(_QWORD *)(16LL * v61 + v12);
      }
      else
      {
        v59 = v58 & 0x3F;
      }
      goto LABEL_195;
    }
    *(_WORD *)(a2 + 18) = 1;
    goto LABEL_44;
  }
  *(_QWORD *)a2 = v12 + 32;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v72 = *(_DWORD *)(v12 + 8);
    v75 = v72;
    if ( (v72 & *((_DWORD *)BaseAddress + 31)) != 0 )
      v75 = *((_DWORD *)BaseAddress + 34) ^ v72;
    v73 = v75;
  }
  else
  {
    v73 = *(_WORD *)(v12 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v73 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_8:
  v7 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v74[0] != -2147483622 )
  {
    v80 = BaseAddress;
    v79 = 4142;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 8u, Fields);
  }
  return v74[0];
}
