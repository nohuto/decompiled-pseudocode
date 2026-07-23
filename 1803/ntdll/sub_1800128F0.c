/*
 * XREFs of sub_1800128F0 @ 0x1800128F0
 * Callers:
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002ABD8 @ 0x18002ABD8 (sub_18002ABD8.c)
 *     sub_18002AD5C @ 0x18002AD5C (sub_18002AD5C.c)
 *     sub_18005CB44 @ 0x18005CB44 (sub_18005CB44.c)
 *     sub_18005CD40 @ 0x18005CD40 (sub_18005CD40.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FE14C @ 0x1800FE14C (sub_1800FE14C.c)
 *     sub_1800FE270 @ 0x1800FE270 (sub_1800FE270.c)
 */

int __fastcall sub_1800128F0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _PEB *v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  __int64 UserModeGlobalLogger; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  _BYTE *v32; // rdi
  unsigned __int64 v33; // r15
  bool v34; // cc
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
  __int64 v37; // r8
  _QWORD *v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // r9
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rcx
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rcx
  _BYTE *v56; // rdi
  unsigned __int64 v57; // r15
  __int64 v58; // rdx
  unsigned __int64 v59; // r14
  __int64 v60; // r8
  bool v61; // zf
  int v63[2]; // [rsp+48h] [rbp-29h] BYREF
  int v64[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v65; // [rsp+58h] [rbp-19h]
  __int64 v66; // [rsp+60h] [rbp-11h]
  _QWORD *v67; // [rsp+68h] [rbp-9h]
  __int64 v68; // [rsp+70h] [rbp-1h]
  __int64 v69; // [rsp+78h] [rbp+7h] BYREF
  __int64 v70; // [rsp+80h] [rbp+Fh] BYREF
  char v71[64]; // [rsp+88h] [rbp+17h] BYREF
  char v72; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v73; // [rsp+E8h] [rbp+77h] BYREF
  char v74; // [rsp+F0h] [rbp+7Fh]

  v74 = a4;
  v73 = a3;
  v66 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v72 = 0;
  v8 = a1;
  if ( qword_18015D758 != *(_QWORD *)(a1 + 360) )
    goto LABEL_12;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( (unsigned __int8)sub_18005CD40(a1, a2, v71, &v69) )
        *(_QWORD *)(v8 + 632) -= v69;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
    {
LABEL_12:
      LODWORD(v13) = sub_180012F50(a1, a2, a3);
      return (int)v13;
    }
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
    {
LABEL_11:
      a1 = v8;
      a3 = v6;
      goto LABEL_12;
    }
    v10 = sub_1800135E0(a1);
    v6 = v73;
    v11 = v10;
    if ( v73 - 257 <= 0xFDFF )
    {
      sub_180012F50(v8, v10, v73);
      v12 = *(_QWORD *)(v8 + 544) - 16LL * *(_QWORD *)(v8 + 192);
      v13 = (struct _PEB *)(*(_QWORD *)(v8 + 640) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 640) - (_QWORD)v13 )
      {
        v13 = (struct _PEB *)(*(_QWORD *)(v8 + 648) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 648) - (_QWORD)v13 )
        {
          LODWORD(v13) = sub_18005CB44(v8);
          *(_QWORD *)(v8 + 648) = v12;
          *(_QWORD *)(v8 + 640) = v12;
        }
      }
      return (int)v13;
    }
  }
  v14 = *(_BYTE *)(v7 + 14);
  if ( v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v14 << 16) + 0x10000;
  else
    v15 = v8;
  v16 = 2 * v6;
  if ( *(_BYTE *)(v11 + 16 * v6 + 15) == 3 )
  {
    v17 = v11 + 8 * (v16 + 2);
    sub_18002AD5C(v8, v17);
    v18 = *(_QWORD *)(v17 + 40);
    v66 = *(_QWORD *)(v17 + 32);
    v65 = v18;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v17 + 40) >> 12;
    *(_QWORD *)(v8 + 544) += *(_QWORD *)(v17 + 40);
    --*(_DWORD *)(v8 + 572);
    v19 = *(_QWORD *)(v17 + 40);
    if ( v19 >= 0xFF000 )
    {
      *(_QWORD *)(v8 + 552) -= v19;
      v19 = *(_QWORD *)(v17 + 40);
    }
    v5 = v74;
    v6 += (v19 >> 4) + 64;
    v72 = 1;
    v73 = v6;
    v4 = 1;
  }
  else
  {
    v65 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v38 = (_QWORD *)(v15 + 96);
  *(_QWORD *)v64 = v11;
  v39 = *(_QWORD **)(v15 + 96);
  v40 = v11;
  while ( v38 != v39 )
  {
    v41 = v39 - 2;
    v42 = v39[2] + v39[3];
    v67 = v39 - 2;
    if ( v42 == v11 )
      goto LABEL_54;
    v39 = (_QWORD *)*v39;
  }
  v41 = 0LL;
  v67 = 0LL;
LABEL_54:
  if ( v5 && !v41 )
  {
LABEL_20:
    v20 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v64 = v20;
    if ( v20 == v11 + 80 )
    {
      v20 += 4096LL;
      *(_QWORD *)v64 = v20;
    }
    v21 = 16 * v6;
    if ( v4 )
      v22 = v21 + v11;
    else
      v22 = v21 + v11 - 32;
    v23 = v22 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v63 = v23;
    if ( v23 >= v20 )
    {
      v24 = v23;
      v25 = v23 - v20;
      v26 = v24 - v20;
      *(_QWORD *)v63 = v26;
      if ( !v74 && *(_BYTE *)(v11 + 8 * v16 + 15) != 3 && (!v26 || v26 < *(_QWORD *)(v8 + 176)) )
        goto LABEL_152;
      v27 = 2147353472LL;
      if ( v25 )
      {
        ++*(_DWORD *)(v8 + 580);
        if ( (int)sub_18005CD8C(v20, v64, v63, 0x4000LL) < 0 )
        {
          ++*(_DWORD *)(v8 + 596);
          v61 = v72 == 0;
          goto LABEL_105;
        }
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE270(v8, *(_QWORD *)v64, *(_QWORD *)v63, 6LL);
      }
      if ( !v72 )
      {
        v32 = (_BYTE *)(*(_QWORD *)v64 + *(_QWORD *)v63);
        *(_WORD *)(*(_QWORD *)v64 + *(_QWORD *)v63 + 12LL) = *(_WORD *)(v8 + 140);
        if ( v21 + v11 == *(_QWORD *)v63 + *(_QWORD *)v64 )
        {
          if ( *(_DWORD *)(v8 + 124) )
          {
            v32[11] = v32[8] ^ v32[9] ^ v32[10];
            *((_DWORD *)v32 + 2) ^= *(_DWORD *)(v8 + 136);
          }
        }
        else
        {
          v32[15] = 0;
          v32[10] = 0;
          v33 = (unsigned __int64)(v11 + v21 - *(_QWORD *)v63 - *(_QWORD *)v64) >> 4;
          v34 = dword_18015D450 < 1;
          *((_WORD *)v32 + 4) = v33;
          if ( !v34 && (unsigned __int16)v33 <= 1u )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("(LONG)FreeEntry->Size > 1");
            sub_1800FC3E4(1LL);
          }
          v32[11] = 0;
          v35 = *(_QWORD *)(v15 + 40);
          if ( v35 == v15 )
          {
            LOBYTE(v36) = 0;
          }
          else
          {
            v36 = ((unsigned __int64)&v32[-v15] >> 16) + 1;
            if ( v36 >= 0xFE )
              sub_18009A5F0(3, v35, (_DWORD)v32, v15, 0LL, 0LL);
          }
          v37 = *((unsigned __int16 *)v32 + 4);
          v32[14] = v36;
          sub_180012F50(v8, v32, v37);
        }
      }
      sub_18002AA88(v8, v15, v64[0] - 48, v63[0], v11, (__int64)&v70);
      sub_180012F50(v8, v11, v70);
      if ( RtlGetCurrentServiceSessionId() )
        v29 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        v29 = 2147353472LL;
      if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v27 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        sub_1800FE14C(v8, v64[0], v63[0], 16 * *(_QWORD *)(v8 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v27);
      }
      LODWORD(v13) = RtlGetCurrentServiceSessionId();
      v30 = 2147353482LL;
      if ( (_DWORD)v13 )
      {
        v13 = NtCurrentPeb();
        v31 = (__int64)&v13->SharedData->UserModeGlobalLogger[5];
      }
      else
      {
        v31 = 2147353482LL;
      }
      if ( *(_BYTE *)v31 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        LODWORD(v13) = sub_1800FE14C(
                         v8,
                         v64[0],
                         v63[0],
                         16 * (unsigned int)*(_QWORD *)(v8 + 192),
                         0,
                         0LL,
                         (HANDLE)*(unsigned __int8 *)v30);
      }
      return (int)v13;
    }
    if ( dword_18015D450 < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
  }
  v43 = (unsigned int)dword_18015D450;
  if ( dword_18015D450 >= 1 && !v41 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v38, v11);
    else
      DbgPrint("HEAP: ", 0LL, v38, v11);
    DbgPrint("(UCRBlock != NULL)");
    sub_1800FC3E4(1LL);
    v40 = *(_QWORD *)v64;
    v43 = (unsigned int)dword_18015D450;
    v6 = v73;
  }
  v44 = 16 * v6;
  if ( v4 )
  {
    v45 = v44 + v11;
    v68 = v44 + v11;
  }
  else
  {
    v68 = v44 + v11;
    v45 = v44 + v11 - 32;
  }
  *(_QWORD *)v63 = (v45 & 0xFFFFFFFFFFFFF000uLL) - v40;
  if ( !*(_QWORD *)v63 )
  {
    if ( (int)v43 < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_149:
      DbgPrint("HEAP: ");
      goto LABEL_150;
    }
LABEL_148:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_150:
    DbgPrint("(!TrailingUCR)");
    sub_1800FC3E4(1LL);
    goto LABEL_151;
  }
  if ( (int)sub_18005CD8C(v43, v64, v63, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 596);
    v61 = v4 == 0;
LABEL_105:
    if ( v61 )
    {
LABEL_152:
      a2 = v11;
      goto LABEL_11;
    }
    sub_18002AA88(v8, v15, v66 - 48, v65, v11, (__int64)&v73);
LABEL_151:
    v6 = v73;
    goto LABEL_152;
  }
  v46 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v47 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v47 = 2147353472LL;
  if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE270(v8, *(_QWORD *)v64, *(_QWORD *)v63, 5LL);
  ++*(_DWORD *)(v8 + 580);
  v48 = v67;
  v49 = v67[5];
  if ( v49 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) -= v49;
  sub_18002AD5C(v8, v48);
  v48[5] += *(_QWORD *)v63;
  sub_18002ABD8(v8, v48);
  *(_DWORD *)(v15 + 80) += *(_QWORD *)v63 >> 12;
  *(_QWORD *)(v8 + 544) -= *(_QWORD *)v63;
  v51 = v48[5];
  if ( v51 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) += v51;
  if ( !v72 )
  {
    v56 = (_BYTE *)(*(_QWORD *)v64 + *(_QWORD *)v63);
    *(_WORD *)(*(_QWORD *)v64 + *(_QWORD *)v63 + 12LL) = *(_WORD *)(v8 + 140);
    if ( v68 == *(_QWORD *)v63 + *(_QWORD *)v64 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v56[11] = v56[8] ^ v56[9] ^ v56[10];
        *((_DWORD *)v56 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v56[15] = 0;
      v56[10] = 0;
      v57 = (unsigned __int64)(v44 - *(_QWORD *)v63) >> 4;
      v34 = dword_18015D450 < 1;
      *((_WORD *)v56 + 4) = v57;
      if ( !v34 && (unsigned __int16)v57 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v50, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        sub_1800FC3E4(1LL);
      }
      v56[11] = 0;
      v58 = *(_QWORD *)(v15 + 40);
      if ( v58 == v15 )
      {
        LOBYTE(v59) = 0;
      }
      else
      {
        v59 = ((unsigned __int64)&v56[-v15] >> 16) + 1;
        if ( v59 >= 0xFE )
          sub_18009A5F0(3, v58, (_DWORD)v56, v15, 0LL, 0LL);
      }
      v60 = *((unsigned __int16 *)v56 + 4);
      v56[14] = v59;
      sub_180012F50(v8, v56, v60);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v52 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v52 = 2147353472LL;
  if ( *(_BYTE *)v52 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v46 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    v53 = v65;
    sub_1800FE14C(v8, v64[0], v63[0], 16 * *(_QWORD *)(v8 + 192), v72, v65, (HANDLE)*(unsigned __int8 *)v46);
  }
  else
  {
    v53 = v65;
  }
  LODWORD(v13) = RtlGetCurrentServiceSessionId();
  v54 = 2147353482LL;
  if ( (_DWORD)v13 )
  {
    v13 = NtCurrentPeb();
    v55 = (__int64)&v13->SharedData->UserModeGlobalLogger[5];
  }
  else
  {
    v55 = 2147353482LL;
  }
  if ( *(_BYTE *)v55 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v54 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    LODWORD(v13) = sub_1800FE14C(
                     v8,
                     v64[0],
                     v63[0],
                     16 * (unsigned int)*(_QWORD *)(v8 + 192),
                     v72,
                     v53,
                     (HANDLE)*(unsigned __int8 *)v54);
  }
  return (int)v13;
}
