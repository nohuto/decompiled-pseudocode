/*
 * XREFs of sub_180013F50 @ 0x180013F50
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     RtlTryEnterCriticalSection @ 0x180060E90 (RtlTryEnterCriticalSection.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18007C6F0 @ 0x18007C6F0 (sub_18007C6F0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FE4B0 @ 0x1800FE4B0 (sub_1800FE4B0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_180013F50(unsigned __int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  __int64 v8; // r12
  char *v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  int *v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  size_t v18; // rdi
  void *Heap; // rax
  _DWORD *HotpatchInformation; // rcx
  __int64 v21; // rcx
  void *v22; // rdi
  int v24; // r14d
  __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 v27; // rax
  char *v28; // r10
  int v29; // edx
  __int64 **v30; // rcx
  _BYTE *v31; // r8
  char v32; // cl
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // dl
  int v36; // r9d
  _WORD *v37; // rcx
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // ecx
  __int64 v41; // rdi
  char v42; // r10
  unsigned __int8 v43; // al
  unsigned int v44; // ecx
  unsigned __int64 v45; // rax
  size_t v46; // rax
  char *v47; // r10
  unsigned __int64 v48; // r9
  unsigned int v49; // r14d
  char v50; // al
  char *v51; // r9
  _DWORD *v52; // rdx
  char *v53; // rdi
  int v54; // edx
  size_t v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // rdx
  _QWORD *v58; // r8
  unsigned int v59; // edi
  __int64 v60; // rax
  __int64 v61; // r8
  __int16 v62; // cx
  int v63; // ecx
  unsigned __int16 v64; // dx
  int v65; // ecx
  struct _TEB *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r9
  char *v69; // rsi
  unsigned __int8 v70; // al
  struct _TEB *v71; // rdi
  _DWORD *v72; // rcx
  __int64 v73; // rcx
  char *v74; // rdi
  unsigned __int16 v75; // ax
  struct _TEB *v76; // rdi
  NTSTATUS v77; // ecx
  int v78; // eax
  char v79; // [rsp+40h] [rbp-138h]
  char *v80; // [rsp+48h] [rbp-130h]
  char *v81; // [rsp+48h] [rbp-130h]
  unsigned __int64 v82; // [rsp+50h] [rbp-128h]
  int Size; // [rsp+58h] [rbp-120h]
  size_t Sizea; // [rsp+58h] [rbp-120h]
  unsigned __int64 v85; // [rsp+60h] [rbp-118h]
  void *v86; // [rsp+68h] [rbp-110h]
  char *v87; // [rsp+68h] [rbp-110h]
  char *v88; // [rsp+78h] [rbp-100h]
  char *v89; // [rsp+80h] [rbp-F8h]
  __int64 v90; // [rsp+88h] [rbp-F0h]
  _BYTE *v91; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v92; // [rsp+98h] [rbp-E0h]
  __int64 v93; // [rsp+A8h] [rbp-D0h]
  char *v94; // [rsp+B8h] [rbp-C0h]
  __int64 v95; // [rsp+C8h] [rbp-B0h]
  _QWORD *v96; // [rsp+C8h] [rbp-B0h]
  int v97; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-A0h] BYREF
  unsigned __int64 v99; // [rsp+E0h] [rbp-98h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-90h]
  const void *v101[2]; // [rsp+F0h] [rbp-88h] BYREF
  char *v102; // [rsp+100h] [rbp-78h]
  unsigned int NtGlobalFlag; // [rsp+108h] [rbp-70h]
  unsigned int v104; // [rsp+10Ch] [rbp-6Ch]
  unsigned int v105; // [rsp+110h] [rbp-68h]
  size_t v106; // [rsp+118h] [rbp-60h]
  char *v107; // [rsp+120h] [rbp-58h]
  __int64 v108; // [rsp+128h] [rbp-50h]
  int v109; // [rsp+130h] [rbp-48h]
  char *v110; // [rsp+138h] [rbp-40h]
  int v112; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v8 = 0LL;
  v94 = 0LL;
  v79 = 0;
  v102 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v76 = NtCurrentTeb();
    v77 = 0;
LABEL_187:
    v76->LastErrorValue = RtlNtStatusToDosError(v77);
    return 0LL;
  }
  v9 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v10 = (unsigned __int64)v9;
  if ( v9[15] == 5 )
  {
    v10 = (unsigned __int64)&v9[-16 * (unsigned __int8)v9[14]];
    v80 = (char *)v10;
  }
  else
  {
    v80 = v9;
  }
  if ( *(_BYTE *)(a1 + 386) == 2 )
  {
    if ( *(_QWORD *)(a1 + 376) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = (int *)(v10 + 8);
          v13 = v10 >> 4;
          if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)((v10 >> 4) ^ a1 ^ *(_WORD *)(v10 + 8)) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - (((unsigned int)qword_18015D458 ^ (unsigned int)(v10 >> 4) ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8)) >> 12));
          v15 = *(_WORD *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *((unsigned __int16 *)v80 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)&v80[16 * (v16 & 0x3F) + 12];
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v78 = *v12;
                v109 = v78;
                if ( (v78 & *(_DWORD *)(a1 + 124)) != 0 )
                  v109 = *(_DWORD *)(a1 + 136) ^ v78;
                v75 = v109;
              }
              else
              {
                v75 = *(_WORD *)v12;
              }
            }
            else
            {
              if ( !((unsigned __int16)qword_18015D458 ^ (unsigned __int16)(v13 ^ a1 ^ *(_WORD *)v12)) )
                v8 = *(_QWORD *)&v80[-(((unsigned int)qword_18015D458 ^ (unsigned int)v13 ^ (unsigned int)a1 ^ *v12) >> 12)];
              v75 = *(_WORD *)(v8 + 36);
            }
            v17 = *(_QWORD *)&v80[16 * v75];
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16LL * v15 - v17;
          Size = 16 * v15 - v17;
          Heap = (void *)RtlAllocateHeap(a1, a2 & 0xC003FFFF, a4);
          v86 = Heap;
          if ( Heap )
          {
            if ( a4 < v18 )
              v18 = a4;
            memmove(Heap, Src, v18);
            RtlFreeHeap(a1, a2 & 0xC003FFFF, Src);
          }
          HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
          if ( HotpatchInformation && *HotpatchInformation )
            v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          else
            v21 = 2147353472LL;
          if ( !*(_BYTE *)v21 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return (__int64)v86;
          v22 = v86;
          if ( v86 )
            sub_1800FE4B0(a1, (_DWORD)v86, (_DWORD)Src, Size, a4, 2);
          return (__int64)v22;
        }
        return 0LL;
      }
    }
  }
  if ( v10 == a1 )
  {
    sub_18009A5F0(9, a1, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v24 = *(_DWORD *)(a1 + 116) | a2;
  v112 = v24;
  if ( (v24 & 0x61000000) != 0 && (v24 & 0x10000000) == 0 )
    return sub_1801005E4((void *)a1);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v76 = NtCurrentTeb();
    v77 = -1073741801;
    goto LABEL_187;
  }
  v25 = a4;
  v26 = 1;
  if ( !a4 )
    v25 = 1LL;
  v27 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v25);
  if ( v27 < 0x20 )
    v27 = 32LL;
  v82 = v27;
  LODWORD(Sizea) = 0;
  if ( (v24 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 584);
      v26 = 1;
    }
    else
    {
      if ( byte_18015C3A8 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v71 = NtCurrentTeb();
        v71->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_170;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      sub_18007C6F0(a1, 1LL);
    }
    v79 = 1;
    v24 ^= 1u;
    v112 = v24;
  }
  _m_prefetchw(v9);
  if ( v9[15] == 5 )
    v9 -= 16 * (unsigned __int8)v9[14];
  v81 = v9;
  v28 = v9;
  v89 = v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v29 = *((_DWORD *)v9 + 2) ^ *(_DWORD *)(a1 + 136);
    *((_DWORD *)v9 + 2) = v29;
    if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
    {
      sub_1800FC010(a1, v9);
      v26 = 1;
      v28 = v9;
    }
  }
  v94 = v9;
  v30 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( *((unsigned __int16 *)v9 + 4) < (unsigned __int64)*((unsigned int *)v30 + 2) )
      break;
    v30 = (__int64 **)*v30;
  }
  while ( v30 );
  if ( (v24 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (v9[10] & 2) != 0 )
    v82 += 16LL;
  v31 = v9 + 15;
  v91 = v9 + 15;
  v32 = v9[15];
  if ( (v32 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v66 = NtCurrentTeb();
    v66->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_170;
  }
  if ( v32 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v63 = *((_DWORD *)v28 + 2);
      if ( (v63 & *(_DWORD *)(a1 + 124)) != 0 )
        LOWORD(v63) = v63 ^ *(_WORD *)(a1 + 136);
      v64 = *((_WORD *)v9 + 4);
      v24 = v112;
    }
    else
    {
      v64 = *((_WORD *)v28 + 4);
      LOWORD(v63) = v64;
    }
    Sizea = *((_QWORD *)v9 - 2) - (unsigned __int16)v63;
    v33 = (Sizea + v64) >> 4;
    v85 = v33;
    v82 = (v82 + 4151) & 0xFFFFFFFFFFFFF000uLL;
    v92 = v33;
  }
  else
  {
    v33 = *((unsigned __int16 *)v28 + 4);
    v92 = v33;
    v85 = v33;
    if ( v32 == 5 )
    {
      v34 = *((unsigned __int16 *)v9 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v32 & 0x40) != 0 )
    {
      v34 = *(unsigned __int16 *)&v9[16 * (v32 & 0x3F) + 12];
    }
    else if ( (v32 & 0x3F) == 0x3F )
    {
      if ( v32 < 0 )
      {
        if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)(a1 ^ *((_WORD *)v9 + 4) ^ ((unsigned __int64)v9 >> 4)) )
          v67 = 0LL;
        else
          v67 = *(_QWORD *)&v9[-(((unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ *((_DWORD *)v9 + 2) ^ (unsigned int)((unsigned __int64)v9 >> 4)) >> 12)];
        LOWORD(v65) = *(_WORD *)(v67 + 36);
        v24 = v112;
        v33 = *((unsigned __int16 *)v28 + 4);
        v92 = v33;
      }
      else if ( *(_DWORD *)(a1 + 124) )
      {
        v65 = *((_DWORD *)v9 + 2);
        if ( (v65 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v65) = v65 ^ *(_WORD *)(a1 + 136);
        v24 = v112;
        v33 = *((unsigned __int16 *)v28 + 4);
        v92 = v33;
      }
      else
      {
        LOWORD(v65) = v33;
      }
      v34 = *(_QWORD *)&v9[16 * (unsigned __int16)v65];
    }
    else
    {
      v34 = v9[15] & 0x3F;
    }
    Sizea = 16 * v33 - v34;
    if ( v33 < *(unsigned __int16 *)(a1 + 400) )
    {
      v35 = *(_BYTE *)((v33 >> 3) + a1 + 402);
      v36 = v26 << (v33 & 7);
      v33 = *((unsigned __int16 *)v28 + 4);
      if ( ((unsigned __int8)v36 & v35) != 0 )
      {
        v24 = v112;
        v92 = *((unsigned __int16 *)v28 + 4);
      }
      else
      {
        v92 = *((unsigned __int16 *)v28 + 4);
        v37 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2 * v85);
        if ( *v37 > 1u )
          --*v37;
        v24 = v112;
      }
    }
  }
  v38 = v82 >> 4;
  v93 = v82 >> 4;
  v90 = v82 >> 4;
  if ( v82 >> 4 <= v33 )
  {
    if ( (v82 >> 4) + 1 == v33 )
    {
      v38 = (v82 >> 4) + 1;
      v93 = v38;
      v90 = v38;
      v82 += 16LL;
    }
    if ( *v31 == 4 )
    {
      *((_WORD *)v9 + 4) = v82 - a4;
    }
    else if ( (v9[10] & 2) != 0 )
    {
      v110 = &v9[16 * *((unsigned __int16 *)v9 + 4) - 16];
      v95 = (__int64)&v9[16 * v38 - 16];
      *(_OWORD *)v95 = *(_OWORD *)v110;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) == 0 )
        goto LABEL_65;
      v93 = v90;
      v92 = v85;
      *(_WORD *)(v95 + 2) = sub_1800ED320(a1, *(unsigned __int16 *)(v95 + 2), v85, v90, 4);
      LOBYTE(v24) = v112;
      v33 = v85;
      v38 = v56;
      v31 = v9 + 15;
    }
    else
    {
      v104 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v104 & 0x800) == 0 )
      {
LABEL_65:
        LOBYTE(v24) = v112;
        v33 = v85;
        v92 = v85;
        v38 = v90;
        v93 = v90;
        goto LABEL_66;
      }
      v93 = v90;
      v9[11] = sub_1800ED320(a1, (unsigned __int8)v9[11], *((unsigned __int16 *)v9 + 4), v90, 4);
      LOBYTE(v24) = v112;
      v33 = v85;
      v92 = v85;
      v38 = v68;
      v31 = v9 + 15;
    }
LABEL_66:
    if ( a4 <= Sizea )
      goto LABEL_67;
    if ( (v24 & 8) != 0 )
    {
      memset(&Src[Sizea], 0, a4 - Sizea);
      v38 = v93;
      v31 = v9 + 15;
    }
    else if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v46 = Sizea & 3;
      v106 = v46;
      if ( (Sizea & 3) != 0 )
      {
        v46 = 4 - v46;
        v106 = v46;
      }
      if ( a4 > v46 + Sizea && ((a4 - v46 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        v47 = &v9[v46 + 16 + Sizea];
        v107 = v47;
        v48 = ((a4 - v46 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v100 = v48;
        if ( v48 )
        {
          if ( ((unsigned __int8)v47 & 4) != 0 )
          {
            *(_DWORD *)v47 = -1163005939;
            v100 = --v48;
            if ( !v48 )
              goto LABEL_67;
            v47 += 4;
            v107 = v47;
          }
          memset64(v47, 0xBAADF00DBAADF00DuLL, v48 >> 1);
          if ( (v48 & 1) != 0 )
            *(_DWORD *)&v47[4 * v48 - 4] = -1163005939;
          v33 = v92;
        }
      }
    }
LABEL_67:
    if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    {
      *(_QWORD *)&v9[a4 + 16] = 0xABABABABABABABABuLL;
      *(_QWORD *)&v9[a4 + 24] = 0xABABABABABABABABuLL;
    }
    if ( v38 == v33 )
      goto LABEL_76;
    v39 = (unsigned __int8)v9[10];
    LOBYTE(v39) = v39 & 0xFE;
    if ( *v31 == 4 )
    {
      v69 = v9 - 48;
      v105 = NtCurrentPeb()->NtGlobalFlag;
      v93 = v90;
      if ( (v105 & 0x800) != 0 )
        *((_WORD *)v69 + 9) = sub_1800ED320(a1, *((unsigned __int16 *)v69 + 9), v85, v90, 5);
      v101[0] = &v69[v82];
      v98 = 16 * v85 - v82;
      v97 = sub_18005CD8C(v82, v101, &v98, 0x4000LL);
      if ( v97 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v101[0], v98, v97);
        sub_1801011EC();
        v9 = v81;
        v38 = v90;
        goto LABEL_75;
      }
      *((_QWORD *)v69 + 4) -= v98;
      v9 = v81;
    }
    else
    {
      v40 = *((unsigned __int16 *)v9 + 4) - (unsigned __int16)v38;
      v41 = v40;
      v108 = v40;
      *((_WORD *)v9 + 4) = v38;
      v42 = (*(_BYTE *)(a1 + 112) & 0x40) != 0;
      v43 = v9[14];
      if ( v43 )
      {
        v44 = ((unsigned int)v9 & 0xFFFF0000) - (v43 << 16) + 0x10000;
        v99 = ((unsigned __int64)v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v43 << 16) + 0x10000;
      }
      else
      {
        v44 = a1;
        v99 = a1;
      }
      sub_18005BDB4(a1, v44, (_DWORD)v9 + 16 * v38, v39, v42, v38, v41);
    }
    v38 = v93;
LABEL_75:
    v31 = v91;
LABEL_76:
    if ( *v31 != 4 )
    {
      v45 = v82 - a4;
      if ( v82 - a4 >= 0x3F )
      {
        *(_QWORD *)&v9[16 * v38] = v45;
        v89[15] = 63;
      }
      else
      {
        v89[15] = v45;
      }
    }
    goto LABEL_170;
  }
  if ( *v31 != 4 && (unsigned __int8)sub_18005B944(a1, v24, (_DWORD)v9, a4, v82 >> 4) )
    goto LABEL_170;
  if ( (v24 & 0x10) == 0 )
  {
    v49 = v24 & 0xC003FFFF;
    v112 = v49;
    v50 = v9[10];
    if ( (v50 & 2) != 0 )
    {
      v49 = (16 * (v50 & 0xE0 | 0x10)) | v49 & 0xFFFFF1FF;
      v112 = v49;
      v62 = *(_WORD *)(sub_180063B6C(v9, v38) + 2);
      if ( v62 > 0 )
      {
        v49 |= (unsigned __int16)v62 << 18;
        v112 = v49;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v70 = v9[11];
      if ( v70 )
      {
        v49 |= v70 << 18;
        v112 = v49;
      }
    }
    v99 = a1 + 124;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9[11] = v9[8] ^ v9[9] ^ v9[10];
      *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    v94 = 0LL;
    v51 = (char *)RtlAllocateHeap(a1, v49, a4);
    v87 = v51;
    v52 = (_DWORD *)(a1 + 124);
    if ( !v51 )
      goto LABEL_113;
    v53 = v51 - 16;
    v88 = v51 - 16;
    _m_prefetchw(v51 - 16);
    if ( *(v51 - 1) == 5 )
    {
      v53 -= 16 * (unsigned __int8)v53[14];
      v88 = v53;
    }
    v101[1] = v53;
    if ( *v52 )
    {
      v54 = *((_DWORD *)v53 + 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v53 + 2) = v54;
      if ( HIBYTE(v54) != ((unsigned __int8)v54 ^ (unsigned __int8)(BYTE1(v54) ^ BYTE2(v54))) )
      {
        sub_1800FC010(a1, v53);
        v51 = v87;
      }
      v52 = (_DWORD *)(a1 + 124);
    }
    if ( (v53[10] & 2) != 0 )
    {
      v58 = (_QWORD *)sub_180063B6C(v53, v52);
      v96 = v58;
      if ( *v57 )
      {
        v59 = *((_DWORD *)v9 + 2) ^ *(_DWORD *)(a1 + 136);
        *((_DWORD *)v9 + 2) = v59;
        v57 = (_DWORD *)HIWORD(v59);
        LOBYTE(v57) = v59 ^ BYTE1(v59) ^ BYTE2(v59);
        if ( HIBYTE(v59) != (_BYTE)v57 )
        {
          sub_1800FC010(a1, v9);
          v51 = v87;
          v58 = v96;
        }
        v53 = v88;
      }
      if ( (v9[10] & 2) != 0 )
      {
        v60 = sub_180063B6C(v9, v57);
        *(_QWORD *)(v61 + 8) = *(_QWORD *)(v60 + 8);
      }
      else
      {
        *v58 = 0LL;
        v58[1] = 0LL;
      }
      v52 = (_DWORD *)(a1 + 124);
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_108;
      v9[11] = v9[8] ^ v9[9] ^ v9[10];
      *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    if ( *v52 )
    {
      v53[11] = v53[8] ^ v53[9] ^ v53[10];
      *((_DWORD *)v53 + 2) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_108:
    v94 = 0LL;
    if ( v79 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v79 = 0;
      v49 &= ~1u;
      v112 = v49;
      v51 = v87;
    }
    if ( a4 < Sizea )
      v55 = a4;
    else
      v55 = Sizea;
    memmove(v51, Src, v55);
    RtlFreeHeap(a1, v49, Src);
    v51 = v87;
LABEL_113:
    v102 = Src;
    Src = v51;
    goto LABEL_170;
  }
  Src = 0LL;
LABEL_170:
  if ( v94 && *(_DWORD *)(a1 + 124) )
  {
    v94[11] = v94[8] ^ v94[9] ^ v94[10];
    *((_DWORD *)v94 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v79 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  v72 = NtCurrentPeb()->HotpatchInformation;
  if ( v72 && *v72 )
    v73 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v73 = 2147353472LL;
  if ( !*(_BYTE *)v73 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return (__int64)Src;
  v74 = Src;
  if ( Src && (v112 & 0x800000) == 0 )
    sub_1800FE4B0(a1, (_DWORD)Src, (_DWORD)v102, Sizea, a4, 3);
  return (__int64)v74;
}
