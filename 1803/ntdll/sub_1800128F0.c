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

struct _PEB *__fastcall sub_1800128F0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
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
  struct _PEB *result; // rax
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rcx
  _BYTE *v42; // rdi
  unsigned __int64 v43; // r15
  bool v44; // cc
  __int64 v45; // rdx
  unsigned __int64 v46; // r15
  __int64 v47; // r8
  _QWORD *v48; // r8
  _QWORD *v49; // rcx
  __int64 v50; // r9
  _QWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rcx
  _QWORD *v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // r15
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdi
  __int64 v71; // rcx
  _BYTE *v72; // rdi
  unsigned __int64 v73; // r15
  __int64 v74; // rdx
  unsigned __int64 v75; // r14
  __int64 v76; // r8
  bool v77; // zf
  unsigned __int64 v80; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v81; // [rsp+50h] [rbp-21h] BYREF
  __int64 v82; // [rsp+58h] [rbp-19h]
  __int64 v83; // [rsp+60h] [rbp-11h]
  _QWORD *v84; // [rsp+68h] [rbp-9h]
  __int64 v85; // [rsp+70h] [rbp-1h]
  __int64 v86; // [rsp+78h] [rbp+7h] BYREF
  __int64 v87; // [rsp+80h] [rbp+Fh] BYREF
  char v88[64]; // [rsp+88h] [rbp+17h] BYREF
  char v89; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v90; // [rsp+E8h] [rbp+77h] BYREF
  char v91; // [rsp+F0h] [rbp+7Fh]

  v91 = a4;
  v90 = a3;
  v83 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v89 = 0;
  v8 = a1;
  if ( qword_18015D758 != *(_QWORD *)(a1 + 360) )
    return (struct _PEB *)sub_180012F50(a1, a2, a3);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( (unsigned __int8)sub_18005CD40(a1, a2, v88, &v86) )
        *(_QWORD *)(v8 + 632) -= v86;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
      return (struct _PEB *)sub_180012F50(a1, a2, a3);
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
    {
LABEL_11:
      a1 = v8;
      a3 = v6;
      return (struct _PEB *)sub_180012F50(a1, a2, a3);
    }
    v10 = sub_1800135E0(a1, a2, &v90, 0LL);
    v6 = v90;
    v11 = v10;
    if ( v90 - 257 <= 0xFDFF )
    {
      sub_180012F50(v8, v10, v90);
      v12 = *(_QWORD *)(v8 + 544) - 16LL * *(_QWORD *)(v8 + 192);
      result = (struct _PEB *)(*(_QWORD *)(v8 + 640) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 640) - (_QWORD)result )
      {
        result = (struct _PEB *)(*(_QWORD *)(v8 + 648) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 648) - (_QWORD)result )
        {
          result = (struct _PEB *)sub_18005CB44(v8);
          *(_QWORD *)(v8 + 648) = v12;
          *(_QWORD *)(v8 + 640) = v12;
        }
      }
      return result;
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
    v83 = *(_QWORD *)(v17 + 32);
    v82 = v18;
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
    v5 = v91;
    v6 += (v19 >> 4) + 64;
    v89 = 1;
    v90 = v6;
    v4 = 1;
  }
  else
  {
    v82 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v48 = (_QWORD *)(v15 + 96);
  v81 = v11;
  v49 = *(_QWORD **)(v15 + 96);
  v50 = v11;
  while ( v48 != v49 )
  {
    v51 = v49 - 2;
    v52 = v49[2] + v49[3];
    v84 = v49 - 2;
    if ( v52 == v11 )
      goto LABEL_54;
    v49 = (_QWORD *)*v49;
  }
  v51 = 0LL;
  v84 = 0LL;
LABEL_54:
  if ( v5 && !v51 )
  {
LABEL_20:
    v20 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v81 = v20;
    if ( v20 == v11 + 80 )
    {
      v20 += 4096LL;
      v81 = v20;
    }
    v21 = 16 * v6;
    if ( v4 )
      v22 = v21 + v11;
    else
      v22 = v21 + v11 - 32;
    v23 = v22 & 0xFFFFFFFFFFFFF000uLL;
    v80 = v23;
    if ( v23 >= v20 )
    {
      v24 = v23;
      v25 = v23 - v20;
      v26 = v24 - v20;
      v80 = v26;
      if ( !v91 && *(_BYTE *)(v11 + 8 * v16 + 15) != 3 && (!v26 || v26 < *(_QWORD *)(v8 + 176)) )
        goto LABEL_152;
      v27 = 2147353472LL;
      if ( v25 )
      {
        ++*(_DWORD *)(v8 + 580);
        if ( (int)sub_18005CD8C(v20, &v81, &v80, 0x4000LL) < 0 )
        {
          ++*(_DWORD *)(v8 + 596);
          v77 = v89 == 0;
          goto LABEL_105;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28, v30) )
          v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE270(v8, v81, v80, 6LL);
      }
      if ( !v89 )
      {
        v42 = (_BYTE *)(v81 + v80);
        *(_WORD *)(v81 + v80 + 12) = *(_WORD *)(v8 + 140);
        if ( v21 + v11 == v80 + v81 )
        {
          if ( *(_DWORD *)(v8 + 124) )
          {
            v42[11] = v42[8] ^ v42[9] ^ v42[10];
            *((_DWORD *)v42 + 2) ^= *(_DWORD *)(v8 + 136);
          }
        }
        else
        {
          v42[15] = 0;
          v42[10] = 0;
          v43 = (v11 + v21 - v80 - v81) >> 4;
          v44 = dword_18015D450 < 1;
          *((_WORD *)v42 + 4) = v43;
          if ( !v44 && (unsigned __int16)v43 <= 1u )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("(LONG)FreeEntry->Size > 1");
            sub_1800FC3E4(1LL);
          }
          v42[11] = 0;
          v45 = *(_QWORD *)(v15 + 40);
          if ( v45 == v15 )
          {
            LOBYTE(v46) = 0;
          }
          else
          {
            v46 = ((unsigned __int64)&v42[-v15] >> 16) + 1;
            if ( v46 >= 0xFE )
              sub_18009A5F0(3, v45, (_DWORD)v42, v15, 0LL, 0LL);
          }
          v47 = *((unsigned __int16 *)v42 + 4);
          v42[14] = v46;
          sub_180012F50(v8, v42, v47);
        }
      }
      sub_18002AA88(v8, v15, v81 - 48, v80, v11, (__int64)&v87);
      sub_180012F50(v8, v11, v87);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v33, v32, v34) )
        v37 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v37 = 2147353472LL;
      if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v37, v35, v36) )
          v27 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        sub_1800FE14C(v8, v81, v80, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, *(unsigned __int8 *)v27);
      }
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v37, v35, v36);
      v40 = 2147353482LL;
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v41 = (__int64)result->HotpatchInformation + 560;
      }
      else
      {
        v41 = 2147353482LL;
      }
      if ( *(_BYTE *)v41 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v41, v38, v39) )
          v40 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        return (struct _PEB *)sub_1800FE14C(
                                v8,
                                v81,
                                v80,
                                16 * (unsigned int)*(_QWORD *)(v8 + 192),
                                0,
                                0LL,
                                *(unsigned __int8 *)v40);
      }
      return result;
    }
    if ( dword_18015D450 < 1 || !v4 )
      goto LABEL_152;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
  }
  v53 = (unsigned int)dword_18015D450;
  if ( dword_18015D450 >= 1 && !v51 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v48, v11);
    else
      DbgPrint("HEAP: ", 0LL, v48, v11);
    DbgPrint("(UCRBlock != NULL)");
    sub_1800FC3E4(1LL);
    v50 = v81;
    v53 = (unsigned int)dword_18015D450;
    v6 = v90;
  }
  v54 = 16 * v6;
  if ( v4 )
  {
    v55 = v54 + v11;
    v85 = v54 + v11;
  }
  else
  {
    v85 = v54 + v11;
    v55 = v54 + v11 - 32;
  }
  v80 = (v55 & 0xFFFFFFFFFFFFF000uLL) - v50;
  if ( !v80 )
  {
    if ( (int)v53 < 1 || !v4 )
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
  if ( (int)sub_18005CD8C(v53, &v81, &v80, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 596);
    v77 = v4 == 0;
LABEL_105:
    if ( v77 )
    {
LABEL_152:
      a2 = v11;
      goto LABEL_11;
    }
    sub_18002AA88(v8, v15, v83 - 48, v82, v11, (__int64)&v90);
LABEL_151:
    v6 = v90;
    goto LABEL_152;
  }
  v56 = 2147353472LL;
  if ( (unsigned int)((__int64 (*)(void))RtlGetCurrentServiceSessionId)() )
    v57 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v57 = 2147353472LL;
  if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE270(v8, v81, v80, 5LL);
  ++*(_DWORD *)(v8 + 580);
  v58 = v84;
  v59 = v84[5];
  if ( v59 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) -= v59;
  sub_18002AD5C(v8, v58);
  v58[5] += v80;
  sub_18002ABD8(v8, v58);
  *(_DWORD *)(v15 + 80) += v80 >> 12;
  *(_QWORD *)(v8 + 544) -= v80;
  v62 = v58[5];
  if ( v62 >= 0xFF000 )
    *(_QWORD *)(v8 + 552) += v62;
  v63 = 0LL;
  if ( !v89 )
  {
    v72 = (_BYTE *)(v81 + v80);
    *(_WORD *)(v81 + v80 + 12) = *(_WORD *)(v8 + 140);
    v61 = v80 + v81;
    if ( v85 == v80 + v81 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v72[11] = v72[8] ^ v72[9] ^ v72[10];
        *((_DWORD *)v72 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v72[15] = 0;
      v72[10] = 0;
      v73 = (v54 - v80) >> 4;
      v44 = dword_18015D450 < 1;
      *((_WORD *)v72 + 4) = v73;
      if ( !v44 && (unsigned __int16)v73 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v60, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        sub_1800FC3E4(1LL);
      }
      v72[11] = 0;
      v74 = *(_QWORD *)(v15 + 40);
      if ( v74 == v15 )
      {
        LOBYTE(v75) = 0;
      }
      else
      {
        v75 = ((unsigned __int64)&v72[-v15] >> 16) + 1;
        if ( v75 >= 0xFE )
          sub_18009A5F0(3, v74, (_DWORD)v72, v15, 0LL, 0LL);
      }
      v76 = *((unsigned __int16 *)v72 + 4);
      v72[14] = v75;
      sub_180012F50(v8, v72, v76);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v61, v60, v63) )
    v66 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v66 = 2147353472LL;
  if ( *(_BYTE *)v66 && (v66 = 1LL, (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v64, v65) )
      v56 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    v67 = v82;
    sub_1800FE14C(v8, v81, v80, 16 * *(_QWORD *)(v8 + 192), v89, v82, *(unsigned __int8 *)v56);
  }
  else
  {
    v67 = v82;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v66, v64, v65);
  v70 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v71 = (__int64)result->HotpatchInformation + 560;
  }
  else
  {
    v71 = 2147353482LL;
  }
  if ( *(_BYTE *)v71 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v71, v68, v69) )
      v70 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
    return (struct _PEB *)sub_1800FE14C(
                            v8,
                            v81,
                            v80,
                            16 * (unsigned int)*(_QWORD *)(v8 + 192),
                            v89,
                            v67,
                            *(unsigned __int8 *)v70);
  }
  return result;
}
