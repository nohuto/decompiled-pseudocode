/*
 * XREFs of sub_180012270 @ 0x180012270
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 * Callees:
 *     sub_1800111DC @ 0x1800111DC (sub_1800111DC.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_18006B2D8 @ 0x18006B2D8 (sub_18006B2D8.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FE4B0 @ 0x1800FE4B0 (sub_1800FE4B0.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 */

__int64 __fastcall sub_180012270(__int64 a1, int a2, char *a3, unsigned __int64 a4, unsigned __int64 *a5, _WORD *a6)
{
  unsigned int v7; // ebx
  int v10; // ebp
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  int v19; // edi
  unsigned int v20; // r9d
  unsigned int v21; // edx
  int v22; // esi
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rax
  char v26; // cl
  unsigned __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // r8
  unsigned int v30; // edx
  unsigned __int64 v31; // r8
  unsigned __int16 v32; // ax
  int v33; // ecx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  int v37; // r15d
  int v38; // eax
  int v39; // r8d
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned __int64 v42; // rax
  _WORD *v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // r13
  int v46; // r12d
  unsigned int v47; // edi
  __int64 v48; // rax
  __int64 v49; // rbp
  bool v50; // zf
  unsigned __int64 v51; // rbx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  char *v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  char *v59; // rax
  __int16 v60; // cx
  unsigned int v61; // eax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  signed __int32 v68[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v69; // [rsp+30h] [rbp-68h]
  _QWORD v70[5]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v72; // [rsp+A0h] [rbp+8h]
  int v73; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v74; // [rsp+B8h] [rbp+20h]

  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  memset(v70, 0, sizeof(v70));
  v10 = 0;
  v74 = a4;
  v70[3] = a4;
  v69 = (unsigned __int16)a3;
  v11 = 1LL;
  if ( (_WORD)a3 )
  {
    v12 = 0;
  }
  else
  {
    v63 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)&a3[-qword_18015D878] >> 20));
    if ( !v63 || (v12 = v63 - 1, v12 == 2) )
    {
      v65 = sub_180063438(a1, a3, v7, &v70[2]);
      v34 = v70[3];
      v35 = v65;
      v74 = v70[3];
      goto LABEL_18;
    }
  }
  v13 = 120LL * v12 + a1;
  v14 = sub_180012820(v13 + 112, a3);
  if ( v14 )
  {
    v15 = *(_BYTE *)(v13 + 120);
    v16 = v14 & *(_QWORD *)(v13 + 112);
    v17 = v16 + ((v14 - v16) >> 5 << v15);
    if ( (unsigned __int64)a3 <= v17 )
    {
      v62 = *(_WORD *)(v14 + 8) & 1;
      if ( v62 )
      {
        _InterlockedOr(v68, 0);
        v34 = v70[3];
        v15 = *(_BYTE *)(v13 + 120);
        v74 = v70[3];
      }
      else
      {
        v34 = a4;
      }
      v35 = ((unsigned __int64)*(unsigned __int8 *)(v14 + 31) << v15) - *(unsigned int *)(v14 + 4);
      LODWORD(v70[2]) = v62;
    }
    else if ( (*(_BYTE *)(v14 + 24) & 0xC) == 8 )
    {
      v18 = *(_QWORD *)(v13 + 192);
      v19 = *(_DWORD *)(v17 + 40);
      v20 = (unsigned int)v17 >> 12;
      v21 = qword_18015A448 ^ ((unsigned int)v17 >> 12) ^ v19;
      v22 = (unsigned __int16)v21;
      v23 = *(_QWORD *)(v18
                      + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v21 + 15) >> 4]
                      + 224);
      v24 = (_DWORD)a3 - HIWORD(v21) - v17;
      v25 = *(unsigned int *)(v23 + 72);
      v26 = *(_BYTE *)(v23 + 76);
      if ( (_DWORD)v25 )
      {
        v27 = (v25 * (unsigned __int64)v24) >> v26;
        v28 = v24 - v27 * v22;
      }
      else
      {
        LODWORD(v27) = v24 >> v26;
        v28 = ((1 << v26) - 1) & v24;
      }
      if ( v28 )
      {
        v30 = -1;
      }
      else
      {
        v29 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)(2 * v27) >> 6) + 48) >> ((2 * v27) & 0x3F);
        if ( (v29 & 1) != 0 )
        {
          v30 = (unsigned __int16)qword_18015A448 ^ (unsigned __int16)(v19 ^ v20);
          if ( (v29 & 2) != 0 )
          {
            v31 = (unsigned __int16)qword_18015A448 ^ (unsigned __int64)(unsigned __int16)(v19 ^ v20);
            v32 = *(_WORD *)&a3[v31 - 2];
            v33 = (v32 >> 14) & 1;
            if ( v33 )
            {
              _InterlockedOr(v68, 0);
              v32 = *(_WORD *)&a3[v31 - 2];
            }
            if ( (v32 & 0x8000u) != 0 )
              --v30;
            else
              v30 -= v32 & 0x3FFF;
          }
          else
          {
            v33 = 0;
          }
          LODWORD(v70[2]) = v33;
        }
        else
        {
          v30 = -1;
        }
      }
      v34 = v70[3];
      v74 = v70[3];
      v35 = v30;
    }
    else
    {
      v61 = sub_18006B2D8(*(_QWORD *)(v13 + 200), a3, v16, &v70[2]);
      v34 = v70[3];
      v74 = v70[3];
      v35 = v61;
    }
LABEL_18:
    v70[0] = v35;
    if ( v35 == -1LL )
      return -1LL;
    v36 = v35;
    v37 = v7 & 0x10000000;
    v38 = v7 & 0x10000000 | 8;
    if ( !LODWORD(v70[2]) )
      v38 = v7 & 0x10000000;
    v39 = v38 & 0x10000000;
    if ( (v38 & 0x10000000) != 0 )
      v36 = v35 + 16;
    if ( (v38 & 0x20000F08) != 0 )
      v36 = ((v36 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v40 = 1LL;
    if ( v36 )
      v40 = v36;
    if ( LODWORD(v70[2]) )
    {
      v55 = &a3[v35];
      if ( v39 )
        v55 += 16;
      v41 = 16 * *(unsigned __int8 *)(((unsigned __int64)(v55 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v40 += v41;
    }
    else
    {
      v41 = 0;
    }
    v70[1] = v40;
    v42 = v34;
    if ( (v7 & 0x10000000) != 0 )
      v42 = v34 + 16;
    if ( (LODWORD(v70[2]) != 0 ? 8 : 0) != 0 )
      v42 = ((v42 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    if ( v42 )
      v11 = v42;
    v70[4] = v11 + v41;
    if ( v70[4] < a4 )
      return -1LL;
    v43 = a6;
    v44 = 0LL;
    if ( !a6 )
    {
      v45 = a1;
      if ( a5 )
        *a5 = v35;
LABEL_39:
      if ( v35 == a4 )
      {
        v49 = (__int64)a3;
      }
      else
      {
        v46 = 0;
        if ( (v7 & 0x1000000) == 0 )
        {
          if ( *(_DWORD *)(v45 + 56) )
          {
            if ( (v44 || (v44 = sub_180063A64(v45, a3, v7, 0LL)) != 0) && v44 != -1LL )
            {
              v46 = *(_BYTE *)(v44 + 2) & 0xF;
              if ( (*(_BYTE *)(v44 + 2) & 0xF) != 0 && (int)sub_1800EBFF8(v46, v45, (_DWORD)a3, 5, v44 + 16) < 0 )
                return -1LL;
            }
          }
        }
        v47 = v7 & 0x12000003 | 0x1000000;
        if ( v69
          || (v64 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)&a3[-qword_18015D878] >> 20))) != 0
          && (v10 = v64 - 1, (_DWORD)v64 != 3) )
        {
          v48 = sub_180011AE0(v45 + 120LL * v10 + 112, v47, a3, (__int64)v70);
        }
        else
        {
          v48 = sub_1801055C8(v45, v47, a3, v70);
        }
        v49 = v48;
        if ( v46 )
        {
          v66 = (__int64)a3;
          if ( (unsigned __int64)(v48 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            v66 = v48;
          v67 = sub_180063A64(v45, v66, v7, 0LL);
          sub_1800EBFF8(v46, v45, v66, 6, v67 + 16);
        }
        if ( (unsigned __int64)(v49 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v49;
        v50 = (v7 & 2) == 0;
        v51 = v74;
        if ( !v50 && v74 > v35 )
          memset((void *)(v35 + v49), 0, v74 - v35);
        if ( v37 )
        {
          *(_QWORD *)(v51 + v49) = 0xABABABABABABABABuLL;
          *(_QWORD *)(v51 + v49 + 8) = 0xABABABABABABABABuLL;
        }
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && SharedData->ServiceSessionId )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( v49 )
          sub_1800FE4B0(v45, v49, (_DWORD)a3, v70[0], v70[3], 3);
      }
      return v49;
    }
    if ( v69
      || (v44 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)&a3[-qword_18015D878] >> 20))) != 0
      && (LODWORD(v44) = v44 - 1, (_DWORD)v44 != 2) )
    {
      v45 = a1;
      v72 = 120LL * (int)v44 + a1 + 112;
      v56 = sub_180012820(v72, a3);
      if ( !v56 )
        goto LABEL_94;
      v58 = sub_1800111DC(v72, v56, (unsigned __int64)a3, v57, &v73);
    }
    else
    {
      v45 = a1;
      v58 = sub_180063438(a1, a3, v7, &v73);
    }
    if ( v58 != -1LL )
    {
      if ( a5 )
        *a5 = v58;
      if ( v73 )
      {
        v59 = &a3[v58];
        if ( v37 )
          v59 += 16;
        v44 = (unsigned __int64)(v59 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v44 )
        {
          v60 = *(_WORD *)v44;
LABEL_67:
          *v43 = v60;
          goto LABEL_39;
        }
      }
      else
      {
        v44 = 0LL;
      }
LABEL_95:
      v60 = 0;
      goto LABEL_67;
    }
LABEL_94:
    v44 = -1LL;
    goto LABEL_95;
  }
  return -1LL;
}
