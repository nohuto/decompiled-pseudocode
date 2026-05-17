/*
 * XREFs of sub_18000F300 @ 0x18000F300
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 *     sub_180076DAC @ 0x180076DAC (sub_180076DAC.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 */

__int64 __fastcall sub_18000F300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6)
{
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r13
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  const char *v21; // r15
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  unsigned __int64 v27; // rdi
  char *v28; // r13
  int v29; // eax
  __int16 v30; // ax
  __int64 v31; // rax
  int v32; // r11d
  int v33; // r10d
  int v34; // r9d
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
  int v47; // [rsp+40h] [rbp-578h] BYREF
  unsigned int v48; // [rsp+44h] [rbp-574h]
  unsigned int v49; // [rsp+48h] [rbp-570h]
  int v50; // [rsp+4Ch] [rbp-56Ch]
  __int64 v51; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-560h]
  char *v53; // [rsp+60h] [rbp-558h]
  _BYTE *v54; // [rsp+68h] [rbp-550h]
  __int64 v55; // [rsp+70h] [rbp-548h] BYREF
  char *v56; // [rsp+78h] [rbp-540h] BYREF
  __int64 v57; // [rsp+80h] [rbp-538h]
  __int64 v58; // [rsp+88h] [rbp-530h] BYREF
  __int64 v59; // [rsp+90h] [rbp-528h]
  const char *v60; // [rsp+98h] [rbp-520h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v62)(char **, __int64, char *, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
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
  v57 = a1;
  v67 = a5;
  v55 = 0LL;
  v10 = sub_180041814(a1, a2, (unsigned int)&v51, a6, (__int64)a5);
  v11 = v10;
  v50 = v10;
  if ( v10 >= 0 )
  {
    v12 = v51;
    sub_180075968(*(_QWORD *)(v51 + 48), 0LL);
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
      Heap = (_BYTE *)RtlAllocateHeap(
                        qword_18015C288,
                        (unsigned int)(dword_18015C294 + 0x40000),
                        8LL * (unsigned int)v15);
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
    if ( byte_18015CFB4 )
      v62 = (void (__fastcall *)(char **, __int64, char *, _QWORD, _QWORD))(__ROR8__(
                                                                              qword_18016F1F0,
                                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v62 = 0LL;
    v17 = 0LL;
    v48 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_58;
    v18 = 0LL;
    v66 = 0LL;
    v49 = v47;
    while ( 1 )
    {
      v68 = (char **)&Heap[8 * v18];
      *v68 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( v13[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v43 = v48;
          goto LABEL_57;
        }
        v17 = v48;
      }
      v53 = 0LL;
      v56 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v13 + 8 * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
      if ( v20 < 0 )
        v21 = 0LL;
      else
        v21 = (const char *)(v20 + v19 + 2);
      v22 = (unsigned __int16)v20;
      if ( v20 >= 0 )
        v22 = 0;
      v60 = v21;
      v47 = v22;
      v23 = v12;
      v58 = v12;
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
        v61 = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v27 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
          v26 = (v25 & 1) == 0;
        }
        v29 = RtlImageNtHeaderEx(1LL, v27, 0LL, &v61);
        if ( !v61 )
          goto LABEL_99;
        v30 = *(_WORD *)(v61 + 24);
        if ( v30 == 267 )
        {
          if ( !*(_DWORD *)(v61 + 116) )
            goto LABEL_100;
          v31 = *(unsigned int *)(v61 + 120);
          if ( !(_DWORD)v31 )
            goto LABEL_100;
          v49 = *(_DWORD *)(v61 + 124);
          if ( v26 || (unsigned int)v31 < *(_DWORD *)(v61 + 84) )
          {
LABEL_26:
            v28 = (char *)(v27 + v31);
            goto LABEL_27;
          }
        }
        else
        {
          if ( v30 != 523 )
            goto LABEL_100;
          if ( !*(_DWORD *)(v61 + 132) )
            goto LABEL_100;
          v31 = *(unsigned int *)(v61 + 136);
          if ( !(_DWORD)v31 )
            goto LABEL_100;
          v49 = *(_DWORD *)(v61 + 140);
          if ( v26 || (unsigned int)v31 < *(_DWORD *)(v61 + 84) )
            goto LABEL_26;
        }
        v28 = (char *)RtlAddressInSectionTable(v61, v27, (unsigned int)v31);
        if ( v28 )
        {
          v29 = 0;
LABEL_99:
          if ( v29 >= 0 )
            goto LABEL_27;
        }
LABEL_100:
        v28 = 0LL;
LABEL_27:
        if ( !v28 )
        {
          v41 = -1073741702;
          goto LABEL_112;
        }
        if ( v21 )
          break;
        if ( (dword_180156A70 & 5) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            776,
            (unsigned int)"LdrpGetProcedureAddress",
            2,
            "Loading procedure 0x%lx by ordinal\n",
            v22);
        if ( !v22 )
        {
          v41 = -1073741811;
LABEL_112:
          v40 = v53;
          goto LABEL_46;
        }
        v39 = v22 - *((_DWORD *)v28 + 4);
LABEL_43:
        if ( v39 >= *((_DWORD *)v28 + 5) )
        {
          v41 = (v21 != 0LL) - 1073741512;
          v40 = v53;
          goto LABEL_46;
        }
        v40 = (char *)(v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 7) + 4LL * (int)v39));
        v53 = v40;
        v56 = v40;
        if ( v40 < v28 || v40 >= &v28[v49] )
        {
          v41 = 0;
          goto LABEL_46;
        }
        v46 = v52++;
        if ( v46 >= 0x20 )
        {
          v41 = -1073741701;
          goto LABEL_46;
        }
        v41 = sub_180076DAC(v40, v71, &v60, &v47);
        if ( v41 < 0 )
          goto LABEL_46;
        LODWORD(v72[3]) = *(_DWORD *)(v58 + 272);
        v41 = sub_180041914((unsigned int)v71, (unsigned int)v72, v51, v58, 2, (__int64)&v58);
        if ( v41 < 0 )
          goto LABEL_46;
        v23 = v58;
        sub_18001F5FC(v58);
        v21 = v60;
        v22 = v47;
      }
      if ( (dword_180156A70 & 5) != 0 )
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          758,
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
              goto LABEL_36;
            }
          }
          v38 = v37 < (unsigned int)v35[v36] ? -1 : 1;
LABEL_36:
          if ( !v38 )
            break;
          if ( v38 >= 0 )
            v32 = v34 + 1;
          else
            v33 = v34 - 1;
          v34 = (v33 + v32) / 2;
          if ( v33 < v32 )
            goto LABEL_103;
        }
        v39 = *(unsigned __int16 *)(v25 + *((unsigned int *)v28 + 9) + 2LL * v34);
        goto LABEL_43;
      }
LABEL_103:
      if ( (dword_180156A70 & 3) != 0 )
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1487,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          v21,
          (const void *)v25);
      if ( (dword_180156A70 & 0x40) != 0 )
        __debugbreak();
      v41 = -1073741702;
      v40 = v53;
LABEL_46:
      if ( BYTE4(v72[15]) )
        RtlReleasePath(v72[0]);
      if ( v41 < 0 )
      {
        v40 = 0LL;
        v56 = 0LL;
      }
      v47 = v41;
      if ( v41 >= 0 )
      {
        v42 = v57;
        if ( byte_18016F299 )
        {
          sub_1800D3C0C(*(_QWORD *)(v57 + 48), *(_QWORD *)(v51 + 48), (_DWORD)v40, 1, (__int64)&v56);
          v40 = v56;
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
      v43 = v48;
      LODWORD(v14) = v64;
      Heap = v54;
      v9 = v57;
      v8 = v65;
      v12 = v51;
      if ( v48 == (_DWORD)v64 )
      {
        v50 = v41;
        v55 = *(_QWORD *)&v54[8 * (unsigned int)v64];
      }
      v13 = (_QWORD *)v59;
LABEL_57:
      v17 = v43 + 1;
      v48 = v17;
      v18 = ++v66;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_58:
        if ( v50 < 0 )
        {
          v44 = sub_18007FCDC(v9, v12, v8, v70, v69, (__int64)v67, v50);
          v55 = v44;
          if ( v44 && ((unsigned int)(v50 + 1073741512) <= 1 || v50 == -1073741702 || v50 == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v44;
        }
        else
        {
          v44 = v55;
        }
        sub_18004FD90(v9, (_DWORD)v13, (_DWORD)Heap, v15, v14);
        if ( v73 != Heap )
          RtlFreeHeap(qword_18015C288, 0LL, Heap);
        sub_18001F5FC(v12);
        return v44;
      }
    }
  }
  v44 = sub_18007FCDC(v9, 0, v8, v7, a4, (__int64)a5, v10);
  v55 = v44;
  if ( v44 && v11 == -1073741515 )
    sub_18004FD90(v9, (_DWORD)a5, (unsigned int)&v55, 1, 0);
  return v44;
}
