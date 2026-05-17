/*
 * XREFs of sub_1800324E0 @ 0x1800324E0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180073184 @ 0x180073184 (sub_180073184.c)
 *     sub_1800799C0 @ 0x1800799C0 (sub_1800799C0.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     sub_1800845DC @ 0x1800845DC (sub_1800845DC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 */

__int64 __fastcall sub_1800324E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6)
{
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // r13
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  const char *v21; // r15
  int v22; // esi
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  unsigned __int64 v27; // rdi
  char *v28; // r13
  int v29; // eax
  __int16 v30; // ax
  __int64 v31; // rax
  int v32; // r10d
  int v33; // r9d
  int v34; // r8d
  const char *v35; // rax
  signed __int64 v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // eax
  unsigned int v39; // esi
  char *v40; // rdi
  int v41; // ebx
  __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 v44; // r15
  unsigned int v46; // eax
  unsigned int v47; // [rsp+40h] [rbp-578h]
  int v48; // [rsp+44h] [rbp-574h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-570h]
  int v50; // [rsp+4Ch] [rbp-56Ch]
  unsigned __int64 v51; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-560h]
  char *v53; // [rsp+60h] [rbp-558h]
  _BYTE *v54; // [rsp+68h] [rbp-550h]
  __int64 v55; // [rsp+70h] [rbp-548h] BYREF
  __int64 v56; // [rsp+78h] [rbp-540h]
  unsigned __int64 v57; // [rsp+80h] [rbp-538h] BYREF
  char *v58; // [rsp+88h] [rbp-530h] BYREF
  __int64 v59; // [rsp+90h] [rbp-528h]
  __int64 v60; // [rsp+98h] [rbp-520h] BYREF
  const char *v61; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v62)(char **, unsigned __int64, char *, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
  char *v63; // [rsp+B0h] [rbp-508h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-500h]
  __int64 v65; // [rsp+C0h] [rbp-4F8h]
  __int64 v66; // [rsp+C8h] [rbp-4F0h]
  _QWORD *v67; // [rsp+D0h] [rbp-4E8h]
  char **v68; // [rsp+D8h] [rbp-4E0h]
  __int64 v69; // [rsp+E0h] [rbp-4D8h]
  __int64 v70; // [rsp+E8h] [rbp-4D0h]
  _BYTE v71[16]; // [rsp+F0h] [rbp-4C8h] BYREF
  _QWORD v72[16]; // [rsp+100h] [rbp-4B8h] BYREF
  _BYTE v73[1024]; // [rsp+180h] [rbp-438h] BYREF

  v69 = a4;
  v7 = a3;
  v70 = a3;
  v8 = a2;
  v65 = a2;
  v9 = a1;
  v56 = a1;
  v67 = a5;
  v55 = 0LL;
  v10 = sub_18003AB88(a1, a2, (unsigned int)&v51, a6, (__int64)a5);
  v11 = v10;
  v50 = v10;
  if ( v10 >= 0 )
  {
    v12 = v51;
    sub_1800799C0(*(_QWORD *)(v51 + 48));
    v13 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v59 = (__int64)v13;
    v14 = a5 - v13;
    v64 = v14;
    LODWORD(v15) = 0;
    if ( *v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( v13[v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap = (_BYTE *)RtlAllocateHeap(qword_18015B328, dword_18015B268 + 0x40000, 8LL * (unsigned int)v15);
      v54 = Heap;
      if ( !Heap )
      {
        Heap = v73;
        v54 = v73;
        v13 = v67;
        v59 = (__int64)v67;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
        v64 = 0LL;
      }
    }
    else
    {
      Heap = v73;
      v54 = v73;
    }
    if ( byte_18015BF54 )
      v62 = (void (__fastcall *)(char **, unsigned __int64, char *, _QWORD, _QWORD))(__ROR8__(
                                                                                       qword_18016B1E0,
                                                                                       64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v62 = 0LL;
    v17 = 0LL;
    v47 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_54;
    v18 = 0LL;
    v66 = 0LL;
    v49 = v48;
    while ( 1 )
    {
      v68 = (char **)&Heap[8 * v18];
      *v68 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( v13[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v43 = v47;
          goto LABEL_53;
        }
        v17 = v47;
      }
      v53 = 0LL;
      v58 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v13 + 8 * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
      if ( v20 < 0 )
      {
        v21 = 0LL;
        v22 = (unsigned __int16)v20;
      }
      else
      {
        v21 = (const char *)(v20 + v19 + 2);
        v22 = 0;
      }
      v61 = v21;
      v48 = v22;
      v23 = v12;
      v57 = v12;
      v52 = 0;
      v24 = *(_QWORD *)(v12 + 80);
      memset(v72, 0, sizeof(v72));
      LODWORD(v72[3]) = 0;
      v72[4] = v24;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v23 + 48);
        v26 = 1;
        v27 = v25;
        v60 = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v27 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
          v26 = (v25 & 1) == 0;
        }
        v29 = RtlImageNtHeaderEx(1LL, v27, 0LL, &v60);
        if ( !v60 )
          goto LABEL_96;
        v30 = *(_WORD *)(v60 + 24);
        if ( v30 == 267 )
        {
          if ( !*(_DWORD *)(v60 + 116) )
            goto LABEL_97;
          v31 = *(unsigned int *)(v60 + 120);
          if ( !(_DWORD)v31 )
            goto LABEL_97;
          v49 = *(_DWORD *)(v60 + 124);
          if ( v26 || (unsigned int)v31 < *(_DWORD *)(v60 + 84) )
          {
LABEL_24:
            v28 = (char *)(v27 + v31);
            goto LABEL_25;
          }
        }
        else
        {
          if ( v30 != 523 )
            goto LABEL_97;
          if ( !*(_DWORD *)(v60 + 132) )
            goto LABEL_97;
          v31 = *(unsigned int *)(v60 + 136);
          if ( !(_DWORD)v31 )
            goto LABEL_97;
          v49 = *(_DWORD *)(v60 + 140);
          if ( v26 || (unsigned int)v31 < *(_DWORD *)(v60 + 84) )
            goto LABEL_24;
        }
        v28 = (char *)RtlAddressInSectionTable(v60, v27, (unsigned int)v31);
        if ( v28 )
        {
          v29 = 0;
LABEL_96:
          if ( v29 >= 0 )
            goto LABEL_25;
        }
LABEL_97:
        v28 = 0LL;
LABEL_25:
        if ( !v28 )
          goto LABEL_105;
        if ( v21 )
          break;
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            689,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            "Loading procedure 0x%lx by ordinal\n",
            v22);
        if ( !v22 )
        {
          v41 = -1073741811;
          goto LABEL_106;
        }
        v39 = v22 - *((_DWORD *)v28 + 4);
LABEL_41:
        if ( v39 >= *((_DWORD *)v28 + 5) )
        {
          v41 = (v21 != 0LL) - 1073741512;
          goto LABEL_106;
        }
        v40 = (char *)(v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 7) + 4LL * (int)v39));
        v53 = v40;
        v58 = v40;
        if ( v40 < v28 || v40 >= &v28[v49] )
        {
          v41 = 0;
          goto LABEL_44;
        }
        v46 = v52++;
        if ( v46 >= 0x20 )
        {
          v41 = -1073741701;
          goto LABEL_44;
        }
        v41 = sub_180079A1C(v40, v71, &v61, &v48);
        if ( v41 < 0 )
          goto LABEL_44;
        LODWORD(v72[3]) = *(_DWORD *)(v57 + 272);
        v41 = sub_18003BB58((unsigned int)v71, (unsigned int)v72, v51, v57, 2, (__int64)&v57);
        if ( v41 < 0 )
          goto LABEL_44;
        v23 = v57;
        sub_18003015C(v57);
        v21 = v61;
        v22 = v48;
      }
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          671,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v21);
      v32 = 0;
      v33 = *((_DWORD *)v28 + 6) - 1;
      v34 = v33 / 2;
      if ( v33 >= 0 )
      {
        while ( 1 )
        {
          v35 = v21;
          v36 = v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 8) + 4LL * v34) - (_QWORD)v21;
          while ( 1 )
          {
            v37 = *v35;
            if ( *v35 != v35[v36] )
              break;
            ++v35;
            if ( !v37 )
            {
              v38 = 0;
              goto LABEL_34;
            }
          }
          v38 = v37 < (unsigned int)v35[v36] ? -1 : 1;
LABEL_34:
          if ( !v38 )
            break;
          if ( v38 >= 0 )
            v32 = v34 + 1;
          else
            v33 = v34 - 1;
          v34 = (v33 + v32) / 2;
          if ( v33 < v32 )
            goto LABEL_98;
        }
        v39 = *(unsigned __int16 *)(v25 + *((unsigned int *)v28 + 9) + 2LL * v34);
        goto LABEL_41;
      }
LABEL_98:
      if ( (dword_180155A10 & 3) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1379,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v21,
          (const void *)v25);
      if ( (dword_180155A10 & 0x40) != 0 )
        __debugbreak();
LABEL_105:
      v41 = -1073741702;
LABEL_106:
      v40 = v53;
LABEL_44:
      if ( BYTE4(v72[15]) )
        RtlReleasePath(v72[0]);
      v48 = v41;
      if ( v41 >= 0 )
      {
        v42 = v56;
        if ( byte_18016B280 )
        {
          sub_1800DA4EC(*(_QWORD *)(v56 + 48), *(_QWORD *)(v51 + 48), (_DWORD)v40, 1, (__int64)&v58);
          v40 = v58;
        }
        if ( v62 )
        {
          v63 = 0LL;
          v62(&v63, v51, v40, *(_QWORD *)(v42 + 48), 0LL);
          if ( v63 )
            v40 = v63;
        }
      }
      *v68 = v40;
      v43 = v47;
      LODWORD(v14) = v64;
      Heap = v54;
      v9 = v56;
      v12 = v51;
      v8 = v65;
      if ( v47 == (_DWORD)v64 )
      {
        v50 = v41;
        v55 = *(_QWORD *)&v54[8 * (unsigned int)v64];
      }
      v13 = (_QWORD *)v59;
LABEL_53:
      v17 = v43 + 1;
      v47 = v17;
      v18 = ++v66;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_54:
        if ( v50 < 0 )
        {
          v44 = sub_1800845DC(v9, v12, v8, v70, v69, (__int64)v67, v50);
          v55 = v44;
          if ( v44 && ((unsigned int)(v50 + 1073741512) <= 1 || v50 == -1073741702 || v50 == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v44;
        }
        else
        {
          v44 = v55;
        }
        sub_180073184(v9, (_DWORD)v13, (_DWORD)Heap, v15, v14);
        if ( v73 != Heap )
          RtlFreeHeap(qword_18015B328, 0, (unsigned __int64)Heap);
        sub_18003015C(v12);
        return v44;
      }
    }
  }
  v44 = sub_1800845DC(v9, 0, v8, v7, a4, (__int64)a5, v10);
  v55 = v44;
  if ( v44 && v11 == -1073741515 )
    sub_180073184(v9, (_DWORD)a5, (unsigned int)&v55, 1, 0);
  return v44;
}
