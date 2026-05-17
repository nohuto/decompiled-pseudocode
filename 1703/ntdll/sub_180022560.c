/*
 * XREFs of sub_180022560 @ 0x180022560
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 * Callees:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlTryEnterCriticalSection @ 0x18001EEC0 (RtlTryEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_1800812F8 @ 0x1800812F8 (sub_1800812F8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F0F1C @ 0x1800F0F1C (sub_1800F0F1C.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

__int64 __fastcall sub_180022560(unsigned __int16 *Src, int a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  char *v11; // rdx
  unsigned __int64 v12; // rdi
  int *v13; // r9
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  size_t v18; // rdi
  void *Heap; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v23; // rcx
  _DWORD *HotpatchInformation; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  void *v27; // rdi
  unsigned int v29; // edi
  char v30; // r15
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 *i; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  _BYTE *v38; // r8
  char v39; // dl
  unsigned __int16 *v40; // r10
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  bool v43; // al
  _WORD *v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  char v47; // r9
  int v48; // ecx
  __int64 v49; // rdi
  char v50; // r10
  unsigned __int8 v51; // al
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned int v54; // edi
  char v55; // al
  unsigned __int64 v56; // r15
  size_t v57; // r8
  _QWORD *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int16 v61; // cx
  __int64 v62; // rdx
  unsigned __int16 v63; // ax
  struct _TEB *v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r9
  size_t v68; // rax
  unsigned __int64 v69; // r10
  unsigned __int64 v70; // rbx
  __int64 v71; // rcx
  unsigned __int8 v72; // al
  struct _TEB *v73; // rdi
  _BYTE *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rbx
  __int64 v79; // rcx
  unsigned int v80; // edi
  unsigned __int16 v81; // ax
  struct _TEB *v82; // rdi
  NTSTATUS v83; // ecx
  int v84; // eax
  char *v85; // r15
  unsigned int v87; // [rsp+40h] [rbp-218h]
  char v88; // [rsp+48h] [rbp-210h]
  unsigned __int64 v89; // [rsp+50h] [rbp-208h]
  unsigned __int64 v90; // [rsp+50h] [rbp-208h]
  unsigned __int64 v91; // [rsp+58h] [rbp-200h]
  char *Srca; // [rsp+60h] [rbp-1F8h]
  void *v93; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v94; // [rsp+68h] [rbp-1F0h]
  size_t Size; // [rsp+70h] [rbp-1E8h]
  size_t Sizea; // [rsp+70h] [rbp-1E8h]
  unsigned __int64 v97; // [rsp+78h] [rbp-1E0h]
  _BYTE *v98; // [rsp+80h] [rbp-1D8h]
  unsigned __int64 v99; // [rsp+90h] [rbp-1C8h]
  unsigned __int64 v100; // [rsp+98h] [rbp-1C0h]
  int v101; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v102; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v103; // [rsp+A8h] [rbp-1B0h]
  int v104; // [rsp+B0h] [rbp-1A8h]
  _BYTE *v105; // [rsp+B8h] [rbp-1A0h]
  size_t v106; // [rsp+C8h] [rbp-190h]
  _WORD *v107; // [rsp+C8h] [rbp-190h]
  _QWORD *v108; // [rsp+E0h] [rbp-178h]
  __int64 v109; // [rsp+E0h] [rbp-178h]
  int v110; // [rsp+F4h] [rbp-164h]
  unsigned __int64 v111; // [rsp+100h] [rbp-158h] BYREF
  unsigned __int64 v112; // [rsp+108h] [rbp-150h]
  const void *v113; // [rsp+110h] [rbp-148h] BYREF
  char *v114; // [rsp+118h] [rbp-140h]
  unsigned int v115; // [rsp+120h] [rbp-138h]
  unsigned int v116; // [rsp+124h] [rbp-134h]
  unsigned int NtGlobalFlag; // [rsp+128h] [rbp-130h]
  __int64 v118; // [rsp+130h] [rbp-128h]
  size_t v119; // [rsp+138h] [rbp-120h]
  unsigned __int64 v120; // [rsp+140h] [rbp-118h]
  __int64 v121; // [rsp+148h] [rbp-110h]
  __int64 v122; // [rsp+150h] [rbp-108h]
  int v123; // [rsp+158h] [rbp-100h]
  _OWORD *v124; // [rsp+160h] [rbp-F8h]
  char v125[6]; // [rsp+170h] [rbp-E8h] BYREF
  __int16 v126; // [rsp+176h] [rbp-E2h]
  unsigned __int16 *v127; // [rsp+190h] [rbp-C8h]
  void *v128; // [rsp+198h] [rbp-C0h]
  char *v129; // [rsp+1A0h] [rbp-B8h]
  unsigned __int64 v130; // [rsp+1A8h] [rbp-B0h]
  size_t v131; // [rsp+1B0h] [rbp-A8h]
  int v132; // [rsp+1B8h] [rbp-A0h]
  char v133[6]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v134; // [rsp+1C6h] [rbp-92h]
  unsigned __int16 *v135; // [rsp+1E0h] [rbp-78h]
  char *v136; // [rsp+1E8h] [rbp-70h]
  char *v137; // [rsp+1F0h] [rbp-68h]
  unsigned __int64 v138; // [rsp+1F8h] [rbp-60h]
  size_t v139; // [rsp+200h] [rbp-58h]
  int v140; // [rsp+208h] [rbp-50h]

  v4 = a4;
  Srca = a3;
  v106 = a4;
  v102 = a4;
  v8 = 0LL;
  v105 = 0LL;
  v88 = 0;
  v114 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v82 = NtCurrentTeb();
    v83 = 0;
LABEL_229:
    v82->LastErrorValue = RtlNtStatusToDosError(v83);
    return 0LL;
  }
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v10 = v9;
  if ( *(_BYTE *)(v9 + 15) == 5 )
  {
    v10 = v9 - 16LL * *(unsigned __int8 *)(v9 + 14);
    v89 = v10;
  }
  else
  {
    v89 = v9;
  }
  if ( *((_BYTE *)Src + 386) == 2 )
  {
    if ( *((_QWORD *)Src + 47) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = v10 >> 4;
          v13 = (int *)(v10 + 8);
          if ( *(_WORD *)(v10 + 8) ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)Src ^ (v10 >> 4)) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - ((*(_DWORD *)(v10 + 8) ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)Src ^ (unsigned int)(v10 >> 4)) >> 12));
          v15 = *(_WORD *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *(unsigned __int16 *)(v89 + 12) ^ (unsigned __int64)Src[70];
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)(v89 + 16LL * (v16 & 0x3F) + 12);
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *((_DWORD *)Src + 31) )
              {
                v84 = *v13;
                v123 = v84;
                if ( (v84 & *((_DWORD *)Src + 31)) != 0 )
                  v123 = *((_DWORD *)Src + 34) ^ v84;
                v81 = v123;
              }
              else
              {
                v81 = *(_WORD *)v13;
              }
            }
            else
            {
              v80 = *v13 ^ qword_18015BFE8 ^ (unsigned int)Src ^ v12;
              if ( !(_WORD)v80 )
                v8 = *(_QWORD *)(v89 - (v80 >> 12));
              v81 = *(_WORD *)(v8 + 36);
            }
            v17 = *(_QWORD *)(v89 + 16LL * v81);
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16LL * v15 - v17;
          Size = v18;
          Heap = (void *)RtlAllocateHeap(Src, a2 & 0xC003FFFF, v4);
          v93 = Heap;
          v23 = v106;
          if ( Heap )
          {
            if ( v102 >= v18 )
              v23 = v18;
            memmove(Heap, Srca, v23);
            RtlFreeHeap(Src, a2 & 0xC003FFFF);
          }
          HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
          if ( HotpatchInformation && *HotpatchInformation )
          {
            v26 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
            v25 = 2147353472LL;
          }
          else
          {
            v25 = 2147353472LL;
            v26 = 2147353472LL;
          }
          if ( !*(_BYTE *)v26 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return (__int64)v93;
          v27 = v93;
          if ( v93 )
          {
            v126 = 4130;
            v127 = Src;
            v128 = v93;
            v129 = Srca;
            v131 = Size;
            v130 = v4;
            v132 = 2;
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v20, v21, v22) )
            {
              v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
              v27 = v93;
            }
            ZwTraceEvent(*(unsigned __int8 *)v25, 132098LL, 44LL, v125);
          }
          return (__int64)v27;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v10 == Src )
  {
    sub_1800A4DFC(9, (_DWORD)Src, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v29 = *((_DWORD *)Src + 29) | a2;
  v87 = v29;
  if ( (v29 & 0x61000000) != 0 && (v29 & 0x10000000) == 0 )
    return sub_180101730(Src);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v82 = NtCurrentTeb();
    v83 = -1073741801;
    goto LABEL_229;
  }
  v30 = 1;
  if ( a4 )
    v31 = a4;
  else
    v31 = 1LL;
  v32 = *((_QWORD *)Src + 33) & (v31 + *((_QWORD *)Src + 32));
  if ( v32 < 0x20 )
    v32 = 32LL;
  v91 = v32;
  Sizea = 0LL;
  if ( (v29 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44)) )
    {
      ++*((_DWORD *)Src + 146);
    }
    else
    {
      if ( byte_18015B388 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v73 = NtCurrentTeb();
        v73->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_185;
      }
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      sub_1800812F8(Src, 1LL);
    }
    v88 = 1;
    v29 ^= 1u;
    v87 = v29;
  }
  _m_prefetchw((const void *)v9);
  if ( *(_BYTE *)(v9 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v90 = v9;
  if ( *((_DWORD *)Src + 31) )
  {
    *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      sub_1800FDA30(Src, v9);
  }
  v105 = (_BYTE *)v9;
  v33 = *(unsigned __int16 *)(v9 + 8);
  for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
  {
    v35 = *((unsigned int *)i + 2);
    if ( v33 < v35 )
      break;
    if ( !*i )
    {
      v33 = (unsigned int)(v35 - 1);
      break;
    }
  }
  v36 = (unsigned int)(v35 - 1);
  if ( v33 < v36 || *i && v33 == v36 )
  {
    v37 = v33 - *((unsigned int *)i + 6);
    if ( *((_DWORD *)i + 3) )
      v37 *= 2LL;
    v118 = i[6] + 8 * v37;
  }
  else
  {
    v118 = 0LL;
  }
  if ( (v29 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) || (*(_BYTE *)(v9 + 10) & 2) != 0 )
    v91 += 16LL;
  v38 = (_BYTE *)(v9 + 15);
  v98 = (_BYTE *)(v9 + 15);
  v39 = *(_BYTE *)(v9 + 15);
  if ( (v39 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v64 = NtCurrentTeb();
    v64->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_185;
  }
  v40 = (unsigned __int16 *)(v9 + 8);
  v107 = (_WORD *)(v9 + 8);
  if ( v39 == 4 )
  {
    if ( *((_DWORD *)Src + 31) )
    {
      v104 = *(_DWORD *)v40;
      if ( (*(_DWORD *)v40 & *((_DWORD *)Src + 31)) != 0 )
        v104 = *(_DWORD *)v40 ^ *((_DWORD *)Src + 34);
      v63 = v104;
      v29 = v87;
    }
    else
    {
      v63 = *v40;
    }
    a4 = *(_QWORD *)(v9 - 48 + 32) - v63;
    Sizea = a4;
    v41 = (a4 + *v40) >> 4;
    v97 = v41;
    v91 = (v91 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v41 = *v40;
    v103 = v41;
    v97 = v41;
    if ( v39 == 5 )
    {
      v42 = *(unsigned __int16 *)(v9 + 12) ^ (unsigned __int64)Src[70];
    }
    else if ( (v39 & 0x40) != 0 )
    {
      v42 = *(unsigned __int16 *)(v9 + 16LL * (v39 & 0x3F) + 12);
    }
    else if ( (v39 & 0x3F) == 0x3F )
    {
      if ( v39 < 0 )
      {
        if ( *v40 ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)Src ^ (v9 >> 4)) )
          v65 = 0LL;
        else
          v65 = *(_QWORD *)(v9
                          - ((*(_DWORD *)v40 ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)Src ^ (unsigned int)(v9 >> 4)) >> 12));
        v62 = *(unsigned __int16 *)(v65 + 36);
        v41 = *v40;
        v103 = v41;
        v29 = v87;
      }
      else
      {
        if ( *((_DWORD *)Src + 31) )
        {
          v101 = *(_DWORD *)v40;
          if ( (*(_DWORD *)v40 & *((_DWORD *)Src + 31)) != 0 )
            v101 = *(_DWORD *)v40 ^ *((_DWORD *)Src + 34);
          LOWORD(v62) = v101;
          v41 = *v40;
          v103 = v41;
          v29 = v87;
        }
        else
        {
          LOWORD(v62) = v41;
        }
        v62 = (unsigned __int16)v62;
      }
      v42 = *(_QWORD *)(v9 + 16 * v62);
    }
    else
    {
      v42 = *(_BYTE *)(v9 + 15) & 0x3F;
    }
    Sizea = 16 * v41 - v42;
    if ( v41 >= Src[200] )
      goto LABEL_61;
    v43 = ((unsigned __int8)(1 << (v41 & 7)) & *((_BYTE *)Src + (v41 >> 3) + 402)) != 0;
    v41 = *v40;
    if ( !v43 )
    {
      v103 = *v40;
      v44 = (_WORD *)(*((_QWORD *)Src + 49) + 2 * v97);
      if ( *v44 > 1u )
        --*v44;
      v29 = v87;
      goto LABEL_61;
    }
    v29 = v87;
  }
  v103 = v41;
LABEL_61:
  v45 = v91 >> 4;
  v100 = v91 >> 4;
  v99 = v91 >> 4;
  if ( v91 >> 4 <= v41 )
  {
    v46 = v45 + 1;
    if ( v45 + 1 == v41 )
    {
      ++v45;
      v100 = v46;
      v99 = v46;
      v91 += 16LL;
    }
    if ( *v38 == 4 )
    {
      *v40 = v91 - v4;
LABEL_69:
      a4 = Sizea;
      if ( v4 <= Sizea )
        goto LABEL_70;
      if ( (v29 & 8) != 0 )
      {
        memset(&Srca[Sizea], 0, v4 - Sizea);
        v45 = v100;
        v38 = (_BYTE *)(v9 + 15);
        goto LABEL_70;
      }
      if ( (Src[56] & 0x40) != 0 )
      {
        v68 = Sizea & 3;
        v119 = v68;
        if ( (Sizea & 3) != 0 )
        {
          v68 = 4 - v68;
          v119 = v68;
        }
        a4 = Sizea;
        if ( v4 > v68 + Sizea && ((v4 - v68 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          a4 = v68 + Sizea + v9 + 16;
          v120 = a4;
          v69 = ((v4 - v68 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v112 = v69;
          if ( v69 )
          {
            if ( (a4 & 4) != 0 )
            {
              *(_DWORD *)a4 = -1163005939;
              v112 = --v69;
              if ( !v69 )
                goto LABEL_70;
              a4 += 4LL;
              v120 = a4;
            }
            memset64((void *)a4, 0xBAADF00DBAADF00DuLL, v69 >> 1);
            if ( (v69 & 1) != 0 )
              *(_DWORD *)(a4 + 4 * v69 - 4) = -1163005939;
          }
        }
      }
LABEL_70:
      if ( (Src[56] & 0x20) != 0 )
      {
        *(_QWORD *)(v4 + v9 + 16) = 0xABABABABABABABABuLL;
        *(_QWORD *)(v4 + v9 + 24) = 0xABABABABABABABABuLL;
      }
      if ( v45 == v103 )
        goto LABEL_79;
      v47 = *(_BYTE *)(v9 + 10) & 0xFE;
      if ( *v38 == 4 )
      {
        v70 = v9 - 48;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v71 = NtGlobalFlag;
        v100 = v99;
        if ( (NtGlobalFlag & 0x800) != 0 )
          *(_WORD *)(v70 + 18) = sub_1800F0F1C((_DWORD)Src, *(unsigned __int16 *)(v70 + 18), v97, v99, 5);
        v113 = (const void *)(v70 + v91);
        v111 = 16 * v97 - v91;
        v110 = sub_18001E5E0(v71, &v113, &v111, 0x4000LL);
        if ( v110 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v113, v111, v110);
          sub_180102310();
          v9 = v90;
          v45 = v99;
          goto LABEL_78;
        }
        *(_QWORD *)(v70 + 32) -= v111;
        v9 = v90;
      }
      else
      {
        v48 = (unsigned __int16)*v107 - (unsigned __int16)v45;
        v49 = v48;
        v122 = v48;
        *v107 = v45;
        v50 = (Src[56] & 0x40) != 0;
        v51 = *(_BYTE *)(v9 + 14);
        if ( v51 )
          v52 = (v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v51 << 16) + 0x10000;
        else
          v52 = (__int64)Src;
        v121 = v52;
        sub_18000E224((__int64)Src, v52, v9 + 16 * v45, v47, v50, v45, v49);
      }
      v45 = v100;
LABEL_78:
      v38 = v98;
LABEL_79:
      if ( *v38 != 4 )
        v30 = 0;
      if ( !v30 )
      {
        v53 = v91 - v4;
        if ( v91 - v4 >= 0x3F )
        {
          v45 *= 2LL;
          *(_QWORD *)(v9 + 8 * v45) = v53;
          *v38 = 63;
        }
        else
        {
          *v38 = v53;
        }
      }
      goto LABEL_185;
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v124 = (_OWORD *)(v9 + 16LL * *v40 - 16);
      v109 = 16 * v45 + v9 - 16;
      *(_OWORD *)v109 = *v124;
      v115 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v115 & 0x800) != 0 )
      {
        v100 = v99;
        v103 = v97;
        *(_WORD *)(v109 + 2) = sub_1800F0F1C((_DWORD)Src, *(unsigned __int16 *)(v109 + 2), v97, v99, 4);
        v45 = v66;
        v38 = (_BYTE *)(v9 + 15);
        goto LABEL_68;
      }
    }
    else
    {
      v116 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v116 & 0x800) != 0 )
      {
        v100 = v99;
        *(_BYTE *)(v9 + 11) = sub_1800F0F1C((_DWORD)Src, *(unsigned __int8 *)(v9 + 11), *v40, v99, 4);
        v103 = v97;
        v45 = v67;
        v38 = (_BYTE *)(v9 + 15);
        goto LABEL_68;
      }
    }
    v103 = v97;
    v45 = v99;
    v100 = v99;
LABEL_68:
    LOBYTE(v29) = v87;
    goto LABEL_69;
  }
  if ( *v38 != 4 )
    v30 = 0;
  if ( !v30 && sub_18000DDA0((__int64)Src, v29, v9, v4, v91 >> 4) )
    goto LABEL_185;
  if ( (v29 & 0x10) == 0 )
  {
    v54 = v29 & 0xC003FFFF;
    v87 = v54;
    v55 = *(_BYTE *)(v9 + 10);
    if ( (v55 & 2) != 0 )
    {
      v54 = (16 * (v55 & 0xE0 | 0x10)) | v54 & 0xFFFFF1FF;
      v87 = v54;
      v61 = *(_WORD *)(sub_1800774AC(v9) + 2);
      if ( v61 > 0 )
      {
        v54 |= (unsigned __int16)v61 << 18;
        v87 = v54;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v72 = *(_BYTE *)(v9 + 11);
      if ( v72 )
      {
        v54 |= v72 << 18;
        v87 = v54;
      }
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
    }
    v105 = 0LL;
    a4 = RtlAllocateHeap(Src, v54, v4);
    v94 = a4;
    if ( !a4 )
      goto LABEL_114;
    v56 = a4 - 16;
    _m_prefetchw((const void *)(a4 - 16));
    if ( *(_BYTE *)(a4 - 16 + 15) == 5 )
      v56 -= 16LL * *(unsigned __int8 *)(v56 + 14);
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v56 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v56 + 11) != (*(_BYTE *)(v56 + 8) ^ (unsigned __int8)(*(_BYTE *)(v56 + 9) ^ *(_BYTE *)(v56 + 10))) )
      {
        sub_1800FDA30(Src, v56);
        a4 = v94;
      }
    }
    if ( (*(_BYTE *)(v56 + 10) & 2) != 0 )
    {
      v58 = (_QWORD *)sub_1800774AC(v56);
      v108 = v58;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
        {
          sub_1800FDA30(Src, v9);
          a4 = v94;
          v58 = v108;
        }
      }
      if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
      {
        v59 = sub_1800774AC(v9);
        *(_QWORD *)(v60 + 8) = *(_QWORD *)(v59 + 8);
      }
      else
      {
        *v58 = 0LL;
        v58[1] = 0LL;
      }
      if ( !*((_DWORD *)Src + 31) )
        goto LABEL_109;
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
    }
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v56 + 11) = *(_BYTE *)(v56 + 8) ^ *(_BYTE *)(v56 + 9) ^ *(_BYTE *)(v56 + 10);
      *(_DWORD *)(v56 + 8) ^= *((_DWORD *)Src + 34);
    }
LABEL_109:
    v105 = 0LL;
    if ( v88 )
    {
      RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      v88 = 0;
      v54 &= ~1u;
      v87 = v54;
      a4 = v94;
    }
    if ( v4 < Sizea )
      v57 = v4;
    else
      v57 = Sizea;
    memmove((void *)a4, Srca, v57);
    RtlFreeHeap(Src, v54);
    a4 = v94;
LABEL_114:
    v114 = Srca;
    Srca = (char *)a4;
    goto LABEL_185;
  }
  Srca = 0LL;
LABEL_185:
  v74 = v105;
  if ( v105 && *((_DWORD *)Src + 31) )
  {
    v105[11] = v105[8] ^ v105[9] ^ v105[10];
    *((_DWORD *)v105 + 2) ^= *((_DWORD *)Src + 34);
  }
  if ( v88 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  v78 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v74, v45, v38, a4) )
    v79 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v79 = 2147353472LL;
  if ( *(_BYTE *)v79 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v85 = Srca;
      if ( Srca )
      {
        if ( (v87 & 0x800000) == 0 )
        {
          v134 = 4130;
          v135 = Src;
          v136 = Srca;
          if ( v114 )
            v85 = v114;
          v137 = v85;
          v139 = Sizea;
          v138 = v4;
          v140 = 3;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v79, v75, v76, v77) )
            v78 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          ZwTraceEvent(*(unsigned __int8 *)v78, 132098LL, 44LL, v133);
        }
      }
    }
  }
  return (__int64)Srca;
}
