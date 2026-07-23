/*
 * XREFs of sub_18000C4A0 @ 0x18000C4A0
 * Callers:
 *     RtlWalkFrameChain @ 0x18000C460 (RtlWalkFrameChain.c)
 * Callees:
 *     sub_180003F70 @ 0x180003F70 (sub_180003F70.c)
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     sub_18000D2E0 @ 0x18000D2E0 (sub_18000D2E0.c)
 *     sub_18000F2CC @ 0x18000F2CC (sub_18000F2CC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18009A360 @ 0x18009A360 (sub_18009A360.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_18009EA50 @ 0x18009EA50 (sub_18009EA50.c)
 */

__int64 __fastcall sub_18000C4A0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  char v7; // bl
  unsigned int v8; // r12d
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r15
  _BYTE *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int8 *v13; // rax
  unsigned int v14; // ebx
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  _BYTE *k; // rdx
  __int64 v18; // rsi
  char v19; // cl
  char v20; // cl
  __int64 v21; // rbx
  char v22; // r14
  unsigned int v23; // esi
  _BYTE *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // r8
  _BYTE *v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rax
  NTSTATUS VirtualMemory; // eax
  unsigned int *v31; // r13
  __int64 v32; // r10
  _BYTE *v33; // rcx
  char *v34; // r11
  __int64 v35; // rdi
  __int64 v36; // r14
  char v37; // r8
  unsigned int v38; // esi
  int v39; // edx
  unsigned int v40; // edx
  char v41; // r8
  int v42; // eax
  char v43; // r8
  int v44; // eax
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  char v47; // cl
  int v48; // eax
  unsigned __int8 v49; // r9
  unsigned __int16 v50; // ax
  int v51; // edx
  unsigned int v52; // r11d
  int v53; // r10d
  int v54; // ecx
  unsigned int j; // r8d
  unsigned __int16 v56; // ax
  int v57; // edx
  bool v58; // zf
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  _BYTE *v62; // r9
  char v63; // al
  unsigned __int64 v64; // r9
  char v65; // cl
  PVOID *v66; // rdx
  unsigned __int64 *v67; // rcx
  _DWORD *v68; // rax
  char v69; // r8
  __int64 v70; // r15
  unsigned __int16 v71; // cx
  unsigned int v72; // eax
  char v73; // al
  int v74; // edx
  _QWORD *v75; // r9
  __int64 v76; // rcx
  char v78; // [rsp+40h] [rbp-618h]
  unsigned __int64 v79; // [rsp+60h] [rbp-5F8h] BYREF
  unsigned __int16 v80; // [rsp+68h] [rbp-5F0h]
  unsigned __int64 v81; // [rsp+70h] [rbp-5E8h] BYREF
  NTSTATUS v82; // [rsp+78h] [rbp-5E0h]
  int v83; // [rsp+7Ch] [rbp-5DCh]
  unsigned int i; // [rsp+80h] [rbp-5D8h]
  int v85; // [rsp+84h] [rbp-5D4h]
  unsigned __int64 v86; // [rsp+88h] [rbp-5D0h]
  char *v87; // [rsp+90h] [rbp-5C8h]
  int v88; // [rsp+98h] [rbp-5C0h]
  int v89; // [rsp+9Ch] [rbp-5BCh]
  int v90; // [rsp+A0h] [rbp-5B8h]
  int v91; // [rsp+A4h] [rbp-5B4h]
  unsigned int v92; // [rsp+A8h] [rbp-5B0h]
  int v93; // [rsp+ACh] [rbp-5ACh]
  unsigned int v94; // [rsp+B0h] [rbp-5A8h]
  unsigned int v95; // [rsp+B4h] [rbp-5A4h]
  __int128 v96; // [rsp+B8h] [rbp-5A0h]
  __int64 v97; // [rsp+C8h] [rbp-590h]
  _BYTE *v98; // [rsp+D0h] [rbp-588h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-580h]
  unsigned __int64 v100; // [rsp+E0h] [rbp-578h]
  unsigned int *v101; // [rsp+E8h] [rbp-570h]
  __int64 v102; // [rsp+F0h] [rbp-568h]
  _BYTE *v103; // [rsp+100h] [rbp-558h]
  unsigned int *v104; // [rsp+118h] [rbp-540h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v106[152]; // [rsp+150h] [rbp-508h] BYREF
  unsigned __int64 v107; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v109[102]; // [rsp+2F0h] [rbp-368h]

  v4 = a4;
  v94 = a4;
  v5 = a2;
  v95 = a2;
  v6 = a1;
  v102 = a1;
  if ( (unsigned __int8)sub_18000F2CC(&v79, &v81) )
  {
    sub_18009EA50(v106);
    v7 = 0;
    v78 = 0;
    v8 = 0;
    v90 = 0;
    v96 = xmmword_18016F4E0;
    v97 = qword_18016F4F0;
    v9 = v79;
    v10 = v107;
    while ( 1 )
    {
      if ( (v10 & 7) != 0 )
        return v8;
      if ( v10 < v9 )
        return v8;
      if ( v10 >= v81 )
        return v8;
      v31 = (unsigned int *)sub_18000D2E0(BaseAddress);
      v104 = v31;
      if ( !v31 )
        return v8;
      VirtualMemory = 0;
      v85 = 0;
      v32 = *((_QWORD *)&v96 + 1);
      v33 = (_BYTE *)(*((_QWORD *)&v96 + 1) + v31[2]);
      v103 = v33;
      if ( !v33[2] && !v33[1] && (*v33 & 0x20) == 0 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        v85 = VirtualMemory;
        if ( VirtualMemory >= 0 && (MemoryInformation[36] & 0x40) != 0 )
        {
          v85 = -1073741823;
          return v8;
        }
        v32 = *((_QWORD *)&v96 + 1);
      }
      if ( VirtualMemory < 0 )
      {
        v10 = v107;
        v9 = v79;
        goto LABEL_48;
      }
      v34 = (char *)BaseAddress;
      v87 = (char *)BaseAddress;
      v101 = v31;
      v35 = 0LL;
      v88 = 0;
      v36 = v32 + v31[2];
      v37 = *(_BYTE *)v36;
      v38 = *(_BYTE *)v36 & 7;
      if ( !v7 )
        goto LABEL_60;
      if ( v38 < 2 )
      {
        v11 = (_BYTE *)(v32 + v31[2]);
        v12 = 0;
        v92 = 0;
        v13 = (unsigned __int8 *)(v36 + 2);
        if ( !*(_BYTE *)(v36 + 2) )
          break;
      }
LABEL_5:
      v14 = (_DWORD)BaseAddress - DWORD2(v96) - *v31;
      v15 = *(_BYTE *)(v36 + 3);
      if ( (v15 & 0xF) == 0 )
      {
        v10 = v107;
        v16 = v107;
        goto LABEL_7;
      }
      if ( v14 >= *(unsigned __int8 *)(v36 + 1) || (v37 & 0x20) != 0 )
      {
        v47 = *(_BYTE *)(v36 + 3);
        v48 = v15;
        v10 = v107;
        goto LABEL_89;
      }
      v70 = 0LL;
      for ( i = 0; (unsigned int)v70 < *(unsigned __int8 *)(v36 + 2); i = v70 )
      {
        v71 = *(_WORD *)(v36 + 2 * v70 + 4);
        v80 = v71;
        if ( (HIBYTE(v71) & 0xF) == 3 )
          break;
        v70 = (unsigned int)sub_180003F70(v71) + (unsigned int)v70;
      }
      v72 = *(unsigned __int8 *)(v36 + 2 * v70 + 4);
      v10 = v107;
      v32 = *((_QWORD *)&v96 + 1);
      v34 = v87;
      if ( v14 >= v72 )
      {
        v48 = *(unsigned __int8 *)(v36 + 3);
        v47 = *(_BYTE *)(v36 + 3);
LABEL_89:
        v16 = *(_QWORD *)&v106[8 * (v47 & 0xF) + 120] - (v48 & 0xFFFFFFF0);
LABEL_7:
        v86 = v16;
        goto LABEL_8;
      }
      v86 = v107;
LABEL_8:
      if ( (_DWORD)v35 )
        goto LABEL_22;
      if ( v38 >= 2 )
      {
        v49 = *(_BYTE *)(v36 + 2);
        if ( v49 )
        {
          v50 = *(_WORD *)(v36 + 4);
          v80 = v50;
          v51 = v50;
          LOWORD(v51) = HIBYTE(v50);
          if ( (HIBYTE(v50) & 0xF) == 6 )
          {
            v52 = (unsigned __int8)v50;
            v53 = (_DWORD)v87 - DWORD2(v96);
            if ( (v50 & 0x1000) != 0 )
            {
              v54 = v31[1] - (unsigned __int8)v50;
              v83 = v54;
              if ( v53 - v54 < (unsigned int)(unsigned __int8)v50 )
              {
LABEL_181:
                sub_18009A360(
                  DWORD2(v96),
                  v51,
                  v53 - v54,
                  (_DWORD)v31,
                  (__int64)v106,
                  v35,
                  (__int64)&v79,
                  (__int64)&v81);
                v78 = 0;
                v10 = v107;
                v9 = v79;
LABEL_46:
                VirtualMemory = 0;
                goto LABEL_47;
              }
            }
            else
            {
              v83 = 0;
            }
            for ( j = 1; ; ++j )
            {
              i = j;
              if ( j >= v49 )
                break;
              v56 = *(_WORD *)(v36 + 2LL * j + 4);
              v80 = v56;
              if ( (HIBYTE(v56) & 0xF) != 6 )
                break;
              v57 = HIBYTE(v56) >> 4 << 8;
              v58 = (unsigned __int8)v56 + v57 == 0;
              v51 = (unsigned __int8)v56 + v57;
              v83 = v51;
              if ( v58 )
                break;
              v54 = v31[1] - v51;
              v83 = v54;
              if ( v53 - v54 < v52 )
                goto LABEL_181;
            }
          }
        }
LABEL_22:
        v89 = 0;
        while ( 1 )
        {
          v21 = 0LL;
          v22 = 0;
          v23 = (_DWORD)v87 - *v31 - DWORD2(v96);
          v24 = (_BYTE *)(*((_QWORD *)&v96 + 1) + v31[2]);
          while ( 1 )
          {
            v25 = (unsigned __int8)v24[2];
            if ( (unsigned int)v21 >= v25 )
              break;
            v26 = (unsigned __int8)v24[2 * v21 + 5] >> 4;
            v27 = &v24[2 * v21];
            if ( v23 < (unsigned __int8)v27[4] )
            {
              v21 = (unsigned int)sub_180003F70(*((_WORD *)v27 + 2)) + (unsigned int)v21;
              v10 = v107;
            }
            else
            {
              if ( (v24[2 * v21 + 5] & 0xF) != 0 )
              {
                if ( (v24[2 * v21 + 5] & 0xF) != 4 )
                {
                  switch ( v24[2 * v21 + 5] & 0xF )
                  {
                    case 1:
                      v21 = (unsigned int)(v21 + 1);
                      v39 = *(unsigned __int16 *)&v24[2 * v21 + 4];
                      if ( (_DWORD)v26 )
                      {
                        v21 = (unsigned int)(v21 + 1);
                        v40 = (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16) + v39;
                      }
                      else
                      {
                        v40 = 8 * v39;
                      }
                      v10 += v40;
                      goto LABEL_30;
                    case 2:
                      v10 += (unsigned int)(8 * v26 + 8);
                      goto LABEL_30;
                    case 3:
                      v107 = *(_QWORD *)&v106[8 * (v24[3] & 0xF) + 120];
                      v10 = v107 - (v24[3] & 0xF0);
                      goto LABEL_30;
                    case 5:
                      v21 = (unsigned int)(v21 + 2);
                      v28 = (_QWORD *)(v86
                                     + (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4]);
                      v9 = v79;
                      if ( (unsigned __int64)v28 < v79 )
                        goto LABEL_179;
                      v29 = v81 - 8;
                      goto LABEL_35;
                    case 6:
                      LODWORD(v21) = v21 + 1;
                      goto LABEL_31;
                    case 7:
                      LODWORD(v21) = v21 + 2;
                      goto LABEL_31;
                    case 8:
                      v21 = (unsigned int)(v21 + 1);
                      v59 = (_QWORD *)(v86 + 16 * (unsigned int)*(unsigned __int16 *)&v24[2 * v21 + 4]);
                      v9 = v79;
                      if ( (unsigned __int64)v59 < v79 || (unsigned __int64)v59 > v81 - 16 )
                        goto LABEL_179;
                      v60 = 2LL * (unsigned int)v26;
                      v109[v60] = *v59;
                      v109[v60 + 1] = v59[1];
                      v10 = v107;
                      goto LABEL_31;
                    case 9:
                      v21 = (unsigned int)(v21 + 2);
                      v75 = (_QWORD *)(v86
                                     + (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4]);
                      v9 = v79;
                      if ( (unsigned __int64)v75 < v79 || (unsigned __int64)v75 > v81 - 16 )
                        goto LABEL_179;
                      v76 = 2LL * (unsigned int)v26;
                      v109[v76] = *v75;
                      v109[v76 + 1] = v75[1];
                      goto LABEL_37;
                    case 0xA:
                      v22 = 1;
                      v66 = (PVOID *)v10;
                      v99 = v10;
                      v67 = (unsigned __int64 *)(v10 + 24);
                      v100 = v10 + 24;
                      if ( (_DWORD)v26 )
                      {
                        v66 = (PVOID *)(v10 + 8);
                        v99 = v10 + 8;
                        v67 = (unsigned __int64 *)(v10 + 32);
                        v100 = v10 + 32;
                      }
                      v9 = v79;
                      if ( (unsigned __int64)v66 < v79
                        || (unsigned __int64)v66 > v81 - 8
                        || (unsigned __int64)v67 < v79
                        || (unsigned __int64)v67 > v81 - 8 )
                      {
                        goto LABEL_179;
                      }
                      BaseAddress = *v66;
                      v10 = *v67;
                      goto LABEL_30;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
                v21 = (unsigned int)(v21 + 1);
                v28 = (_QWORD *)(v86 + 8 * (unsigned int)*(unsigned __int16 *)&v24[2 * v21 + 4]);
                v9 = v79;
                if ( (unsigned __int64)v28 < v79 )
                  goto LABEL_179;
                v29 = v81 - 8;
LABEL_35:
                if ( (unsigned __int64)v28 > v29 )
                  goto LABEL_179;
                *(_QWORD *)&v106[8 * v26 + 120] = *v28;
LABEL_37:
                v10 = v107;
              }
              else
              {
                v9 = v79;
                if ( v10 < v79 || v10 > v81 - 8 )
                  goto LABEL_179;
                *(_QWORD *)&v106[8 * v26 + 120] = *(_QWORD *)v10;
                v10 = v107 + 8;
LABEL_30:
                v107 = v10;
              }
LABEL_31:
              v21 = (unsigned int)(v21 + 1);
            }
          }
          if ( (*v24 & 0x20) == 0 )
          {
            v9 = v79;
            if ( !v22 )
            {
              if ( v10 < v79 || v10 > v81 - 8 )
                goto LABEL_179;
              BaseAddress = *(PVOID *)v10;
              v10 += 8LL;
              v107 = v10;
            }
            v78 = v22;
            v101 = v31;
            goto LABEL_46;
          }
          if ( (v25 & 1) != 0 )
            ++v25;
          v31 = (unsigned int *)&v24[2 * v25 + 4];
          if ( (unsigned int)++v89 > 0x20 )
            RtlRaiseStatus(-1073741569);
        }
      }
      k = v34;
      v18 = 0LL;
      v93 = 0;
      v19 = *v34;
      if ( *v34 == 72 )
      {
        if ( v34[1] == -125 && v34[2] == -60 )
        {
          k = v34 + 4;
          goto LABEL_12;
        }
        if ( v34[1] == -127 && v34[2] == -60 )
          goto LABEL_79;
      }
      if ( (v19 & 0xFE) != 0x48 )
        goto LABEL_12;
      if ( v34[1] != -115 )
        goto LABEL_12;
      v41 = v34[2];
      v42 = v41 & 7;
      v18 = v42 | (8 * (v19 & 1u));
      v93 = v42 | (8 * (v19 & 1));
      if ( !v93 || (_DWORD)v18 != (*(_BYTE *)(v36 + 3) & 0xF) )
        goto LABEL_12;
      v43 = v41 & 0xF8;
      if ( v43 != 96 )
      {
        if ( v43 != -96 )
          goto LABEL_12;
LABEL_79:
        k = v34 + 7;
        goto LABEL_12;
      }
      for ( k = v34 + 4; ; k += 2 )
      {
LABEL_12:
        while ( 1 )
        {
          v20 = *k;
          if ( (*k & 0xF8) != 0x58 )
            break;
          ++k;
        }
        if ( (v20 & 0xF0) != 0x40 || (k[1] & 0xF8) != 0x58 )
          break;
      }
      if ( v20 == -14 )
        v20 = *++k;
      if ( (unsigned __int8)(v20 + 62) > 1u && (v20 != -13 || k[1] != 0xC3) )
      {
        if ( ((v20 + 23) & 0xFD) != 0 )
        {
          if ( v20 == -1 && k[1] == 37 )
            goto LABEL_124;
          if ( (v20 & 0xF8) == 0x48 && k[1] == 0xFF && (k[2] & 0x38) == 0x20 )
            LODWORD(v35) = 1;
        }
        else
        {
          v98 = &k[-v32];
          if ( v20 == -21 )
            v44 = (char)k[1] + 2;
          else
            v44 = *(_DWORD *)(k + 1) + 5;
          v45 = (unsigned __int64)&k[v44 - v32];
          v98 = (_BYTE *)v45;
          v46 = *v31;
          if ( v45 < v46 || v45 >= v31[1] )
          {
            v68 = (_DWORD *)sub_18000B108((__int64)v31, v32, &k[v44]);
            if ( !v68 || v45 == *v68 )
            {
              v10 = v107;
              v34 = v87;
              goto LABEL_124;
            }
            v10 = v107;
            v34 = v87;
          }
          else if ( v45 == v46 && (*(_BYTE *)v36 & 0x20) == 0 )
          {
            LODWORD(v35) = 1;
          }
        }
        if ( !(_DWORD)v35 )
          goto LABEL_22;
      }
LABEL_124:
      if ( (*v34 & 0xF8) == 0x48 )
      {
        v63 = v34[1];
        if ( v63 == -125 )
        {
          v10 += v34[3];
          v34 += 4;
        }
        else
        {
          if ( v63 == -127 )
          {
            v10 += (unsigned __int8)v34[3] | (((unsigned __int8)v34[4] | (*(unsigned __int16 *)(v34 + 5) << 8)) << 8);
          }
          else
          {
            if ( v63 != -115 )
              goto LABEL_128;
            v73 = v34[2] & 0xF8;
            if ( v73 == 96 )
            {
              v107 = *(_QWORD *)&v106[8 * v18 + 120];
              v10 = v107 + v34[3];
              v34 += 4;
              goto LABEL_127;
            }
            if ( v73 != -96 )
              goto LABEL_128;
            v74 = (unsigned __int8)v34[3] | (((unsigned __int8)v34[4] | (*(unsigned __int16 *)(v34 + 5) << 8)) << 8);
            v107 = *(_QWORD *)&v106[8 * v18 + 120];
            v10 = v107 + v74;
          }
          v34 += 7;
        }
LABEL_127:
        v107 = v10;
      }
LABEL_128:
      v64 = v81;
      v9 = v79;
      while ( 1 )
      {
        v65 = *v34;
        if ( (*v34 & 0xF8) != 0x58 )
          break;
        if ( v10 < v9 || v10 > v64 - 8 )
          goto LABEL_179;
        *(_QWORD *)&v106[8 * (v65 & 7) + 120] = *(_QWORD *)v10;
        v10 = v107 + 8;
        ++v34;
LABEL_151:
        v107 = v10;
      }
      if ( (v65 & 0xF0) == 0x40 )
      {
        v69 = v34[1];
        if ( (v69 & 0xF8) == 0x58 )
        {
          if ( v10 < v9 || v10 > v64 - 8 )
            goto LABEL_179;
          *(_QWORD *)&v106[8 * (v69 & 7 | (8 * (v65 & 1))) + 120] = *(_QWORD *)v10;
          v10 = v107 + 8;
          v34 += 2;
          goto LABEL_151;
        }
      }
      if ( v10 >= v9 && v10 <= v64 - 8 )
      {
        BaseAddress = *(PVOID *)v10;
        v10 += 8LL;
        v107 = v10;
        v78 = 0;
        goto LABEL_46;
      }
LABEL_179:
      VirtualMemory = -1073741784;
LABEL_47:
      v82 = VirtualMemory;
      v85 = VirtualMemory;
      v7 = v78;
      v4 = v94;
      v5 = v95;
      v6 = v102;
LABEL_48:
      if ( VirtualMemory >= 0 && BaseAddress )
      {
        if ( v8 >= v4 )
        {
          *(_QWORD *)(v6 + 8LL * (v8 - v4)) = BaseAddress;
          v10 = v107;
        }
        v90 = ++v8;
        if ( v8 < v5 )
          continue;
      }
      return v8;
    }
    while ( (*v11 & 0x20) != 0 )
    {
      v61 = *v13;
      v91 = v61;
      if ( (v61 & 1) != 0 )
      {
        v61 = (unsigned int)(v61 + 1);
        v91 = v61;
      }
      v62 = &v11[2 * v61 + 4];
      v92 = ++v12;
      if ( v12 > 0x20 )
        RtlRaiseStatus(-1073741569);
      v11 = (_BYTE *)(v32 + *((unsigned int *)v62 + 2));
      v13 = v11 + 2;
      if ( v11[2] )
        goto LABEL_5;
    }
LABEL_60:
    v35 = 1LL;
    v88 = 1;
    goto LABEL_5;
  }
  return 0LL;
}
