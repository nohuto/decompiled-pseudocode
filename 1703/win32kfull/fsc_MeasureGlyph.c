/*
 * XREFs of fsc_MeasureGlyph @ 0x1C02C0E00
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 * Callees:
 *     FindExtrema @ 0x1C02C01E4 (FindExtrema.c)
 *     fsc_CheckYReversal @ 0x1C02C04F4 (fsc_CheckYReversal.c)
 *     fsc_CheckYReversalInSpline @ 0x1C02C05A0 (fsc_CheckYReversalInSpline.c)
 *     FixPointers @ 0x1C02CCF28 (FixPointers.c)
 *     GetIxEstimate @ 0x1C02CD054 (GetIxEstimate.c)
 *     fsc_AddXReversal @ 0x1C02CD3BC (fsc_AddXReversal.c)
 *     fsc_AddYReversal @ 0x1C02CD400 (fsc_AddYReversal.c)
 */

__int64 __fastcall fsc_MeasureGlyph(__int64 a1, __int64 a2, int *a3, char a4, __int16 a5, __int16 a6, __int16 a7)
{
  char v7; // si
  int *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // r8
  __int16 v13; // cx
  __int16 v14; // ax
  __int16 v15; // dx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // r9
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int16 v24; // cx
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int *v29; // r15
  int *v30; // r14
  char *v31; // r12
  int *v32; // r11
  int v33; // r8d
  char v34; // al
  int v35; // r9d
  unsigned int v36; // r10d
  __int64 v37; // rcx
  char v38; // al
  unsigned __int16 v39; // si
  int v40; // ecx
  int v41; // esi
  __int16 v42; // r14
  __int16 v43; // r15
  unsigned __int16 v44; // si
  __int64 v45; // rax
  unsigned int v46; // r14d
  signed int *v47; // r12
  __int16 v48; // cx
  int v49; // eax
  signed int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int8 v54; // r9
  int *v55; // r11
  unsigned int *v56; // r10
  unsigned __int8 *v57; // rsi
  unsigned int v58; // edi
  unsigned int v59; // r13d
  int v60; // ecx
  __int64 v61; // r14
  unsigned __int8 v62; // r8
  unsigned int v63; // r15d
  unsigned int v64; // r12d
  char v65; // al
  int v66; // r9d
  int v67; // ecx
  signed int v68; // eax
  int v69; // eax
  int v70; // r10d
  __int16 v71; // ax
  int v72; // r10d
  int IxEstimate; // edi
  __int64 v74; // r9
  unsigned int v75; // edx
  __int64 v76; // r8
  __int64 v77; // rdx
  int v78; // r9d
  int v79; // r11d
  unsigned int v80; // ecx
  unsigned int v81; // r8d
  __int16 v82; // r10
  int v83; // edx
  _WORD v84[2]; // [rsp+58h] [rbp-51h] BYREF
  char v85; // [rsp+5Ch] [rbp-4Dh]
  unsigned int v86; // [rsp+60h] [rbp-49h]
  __int16 v87; // [rsp+64h] [rbp-45h]
  unsigned int v88; // [rsp+68h] [rbp-41h]
  _WORD v89[2]; // [rsp+6Ch] [rbp-3Dh] BYREF
  _WORD v90[2]; // [rsp+70h] [rbp-39h] BYREF
  int v91; // [rsp+74h] [rbp-35h]
  int v92; // [rsp+78h] [rbp-31h]
  __int16 v93; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int16 v94; // [rsp+7Eh] [rbp-2Bh]
  int v95; // [rsp+80h] [rbp-29h]
  int *v96; // [rsp+88h] [rbp-21h]
  __int64 v97; // [rsp+90h] [rbp-19h]
  __int64 v98; // [rsp+98h] [rbp-11h]
  __int64 v99; // [rsp+A0h] [rbp-9h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  result = FindExtrema((unsigned __int16 *)a1, a2);
  if ( !(_DWORD)result )
  {
    v13 = *(_WORD *)(v9 + 6);
    *(_WORD *)(v9 + 8) &= -a5;
    v14 = *(_WORD *)(v9 + 10);
    v15 = *(_WORD *)(v9 + 8);
    if ( v13 != v14 )
    {
      v12 = *(unsigned __int16 *)(v9 + 12);
      if ( v15 != (_WORD)v12 )
      {
        if ( a6 <= 0 )
        {
          *(_WORD *)(v9 + 8) = a6 + v15;
        }
        else
        {
          LOWORD(v12) = a6 + v12;
          *(_WORD *)(v9 + 12) = v12;
        }
        if ( a7 <= 0 )
          *(_WORD *)(v9 + 6) = v13 - a7;
        else
          *(_WORD *)(v9 + 10) = v14 - a7;
      }
    }
    v16 = *v8;
    v17 = *((_QWORD *)v8 + 3);
    v99 = v17;
    if ( (unsigned int)v16 < 0x38 )
    {
      return 6656LL;
    }
    else
    {
      v91 = 0;
      *(_QWORD *)v17 = v17 + 40;
      v18 = 0x7FFFLL;
      *(_QWORD *)(v17 + 8) = v17 + 40;
      v19 = 0;
      *(_DWORD *)(v17 + 40) = 0x7FFF;
      v20 = 4LL;
      *(_QWORD *)(v17 + 48) = 0LL;
      *(_QWORD *)(v17 + 16) = v17 + 56;
      *(_QWORD *)(v17 + 24) = v17 + v16;
      v21 = 0;
      *(_QWORD *)(v17 + 32) = v17;
      v94 = 0;
      if ( *(_WORD *)v10 )
      {
        v12 = 1LL;
        do
        {
          v22 = v21;
          v18 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 8) + 2LL * v21);
          v23 = *(_QWORD *)(v10 + 16);
          v93 = v18;
          v24 = *(_WORD *)(v23 + 2 * v22);
          v87 = v24;
          if ( (_WORD)v18 != v24 )
          {
            v25 = *(_QWORD *)(v10 + 32);
            v26 = *(_QWORD *)(v10 + 40);
            v27 = (__int16)v18;
            v28 = *(_QWORD *)(v10 + 24);
            v98 = v27;
            v29 = (unsigned int *)(v25 + 4 * v27);
            v97 = v24;
            v30 = (int *)(v28 + 4 * v27);
            v31 = (char *)(v26 + v27);
            LOBYTE(v27) = *(_BYTE *)(v24 + v26);
            v32 = (int *)(v28 + 4LL * v24);
            v96 = v32;
            if ( (v27 & 1) != 0 )
            {
              v18 = *(unsigned int *)(v25 + 4LL * v24);
              v33 = *v32++;
              v34 = *v31;
              v35 = *v30;
              v36 = *v29;
              v96 = v32;
              v86 = v18;
              v92 = v35;
              v88 = v36;
              v85 = v34;
            }
            else
            {
              v36 = *(_DWORD *)(v25 + 4LL * v24);
              v88 = v36;
              v37 = v24 - 1;
              v92 = *v32;
              v38 = *(_BYTE *)(v37 + v26);
              v33 = *(_DWORD *)(v28 + 4 * v37);
              v18 = *(unsigned int *)(v25 + 4 * v37);
              v35 = v92;
              v86 = v18;
              if ( (v38 & 1) == 0 )
              {
                v33 = (v92 + v33 + 1) >> 1;
                v18 = (unsigned int)((int)(v36 + v18 + 1) >> 1);
                v86 = v18;
              }
              --v30;
              --v29;
              v85 = 0;
              v34 = 0;
              --v31;
            }
            v84[0] = 0;
            v39 = 0;
            v89[0] = 0;
            v90[0] = 1;
            if ( v30 >= v32 )
              goto LABEL_108;
            do
            {
              if ( (v34 & 1) != 0 )
              {
                result = fsc_CheckYReversal(v17, v18, v36, v84, v90, v89);
                if ( (_DWORD)result )
                  return result;
                v35 = v92;
                v36 = v88;
                ++v30;
                ++v29;
                v33 = v92;
                v18 = v88;
                ++v31;
              }
              else
              {
                ++v31;
                ++v29;
                ++v30;
                v40 = *v29;
                v41 = *v30;
                v86 = *v29;
                if ( (*v31 & 1) != 0 )
                {
                  ++v30;
                  ++v29;
                  ++v31;
                }
                else
                {
                  v41 = (v35 + v41 + 1) >> 1;
                  v40 = (int)(v36 + v40 + 1) >> 1;
                  v86 = v40;
                }
                result = fsc_CheckYReversalInSpline(v17, v84, v90, v89, v33, v18, v35, v36, v41, v40);
                if ( (_DWORD)result )
                  return result;
                v18 = v86;
                v36 = v88;
                v33 = v41;
                v35 = v92;
              }
              v86 = v18;
              if ( v30 == v96 )
              {
                v34 = v85;
              }
              else
              {
                v34 = *v31;
                v35 = *v30;
                v36 = *v29;
                v85 = *v31;
                v92 = v35;
                v88 = v36;
              }
            }
            while ( v30 < v96 );
            v42 = v89[0];
            v39 = v84[0];
            while ( v42 > 0 )
            {
              if ( !v39 )
                v39 = 1;
              result = fsc_AddYReversal(v17, v18, v39);
              if ( (_DWORD)result )
                return result;
              v18 = v86;
              v39 = -v39;
              --v42;
            }
            if ( v90[0] != v39 )
            {
LABEL_108:
              result = fsc_AddYReversal(v17, v86, v39);
              if ( (_DWORD)result )
                return result;
            }
            v7 = a4;
            if ( (a4 & 2) != 0 )
            {
              v10 = a1;
              v12 = 1LL;
              v19 = v91;
LABEL_86:
              v20 = 4LL;
              goto LABEL_87;
            }
            v18 = 0LL;
            v43 = v93;
            v44 = 0;
            v84[0] = 0;
            v45 = *(_QWORD *)(a1 + 24);
            v46 = *(_DWORD *)(v45 + 4 * v97);
            v47 = (signed int *)(v45 + 4 * v98);
            v48 = v87;
            do
            {
              if ( v43 > v87 )
                break;
              v49 = *v47++;
              if ( v49 <= (int)v46 )
              {
                if ( v49 >= (int)v46 )
                  LOWORD(v18) = v18 + 1;
                else
                  v44 = -1;
              }
              else
              {
                v44 = 1;
              }
              ++v43;
              v46 = v49;
            }
            while ( !v44 );
            v9 = a2;
            v84[0] = v18;
            LOWORD(v95) = v44;
            if ( v43 <= v87 )
            {
              while ( 1 )
              {
                v50 = *v47++;
                v88 = v50;
                if ( v44 == 1 )
                {
                  if ( v50 <= (int)v46 )
                  {
                    result = fsc_AddXReversal(v17, v46, 1LL, 1LL);
                    if ( (_DWORD)result )
                      return result;
                    v44 = -1;
LABEL_57:
                    v50 = v88;
                    v48 = v87;
                  }
                }
                else if ( v50 >= (int)v46 )
                {
                  result = fsc_AddXReversal(v17, v46, 0xFFFFFFFFLL, 1LL);
                  if ( (_DWORD)result )
                    return result;
                  v44 = 1;
                  goto LABEL_57;
                }
                ++v43;
                v46 = v50;
                if ( v43 > v48 )
                {
                  v18 = v84[0];
                  break;
                }
              }
            }
            while ( (__int16)v18 > 0 )
            {
              if ( !v44 )
              {
                v44 = 1;
                v95 = 1;
              }
              result = fsc_AddXReversal(v17, v46, v44, 1LL);
              if ( (_DWORD)result )
                return result;
              v18 = v84[0];
              v44 = -v44;
              LOWORD(v18) = --v84[0];
            }
            if ( (_WORD)v95 != v44 )
            {
              result = fsc_AddXReversal(v17, v46, v44, 1LL);
              if ( (_DWORD)result )
                return result;
            }
            v7 = a4;
            v20 = 4LL;
            v10 = a1;
            v19 = v91;
            if ( (a4 & 4) != 0 )
            {
              v51 = *(_QWORD *)(a1 + 24);
              v52 = *(_QWORD *)(a1 + 32);
              v88 = *(_DWORD *)(v51 + 4 * v97);
              v86 = *(_DWORD *)(v52 + 4 * v97);
              v53 = *(_QWORD *)(a1 + 40);
              v54 = *(_BYTE *)(v53 + v97);
              v55 = (int *)(v52 + 4 * v98);
              v56 = (unsigned int *)(v51 + 4 * v98);
              v18 = (unsigned int)v87;
              v57 = (unsigned __int8 *)(v53 + v98);
              v19 = v87 - v93 + v91 + 2;
              v91 = v19;
              if ( v93 > v87 )
              {
                v12 = 1LL;
              }
              else
              {
                v58 = v88;
                v59 = v86;
                v60 = v91;
                v61 = (unsigned __int16)(v87 - v93 + 1);
                do
                {
                  v62 = *v57;
                  v63 = *v56;
                  ++v57;
                  v64 = *v55;
                  ++v56;
                  ++v55;
                  v18 = 1LL;
                  if ( (v54 & v62 & 1) == 0 )
                  {
                    v65 = v54 | v62;
                    v66 = v60 + 1;
                    if ( (v65 & 1) != 0 )
                      v66 = v60;
                    v67 = abs32(v64 - v59);
                    v68 = abs32(v63 - v58);
                    v18 = 1600LL;
                    if ( v68 > v67 )
                      v67 = v68;
                    v69 = 0;
                    while ( v67 > 1600 )
                    {
                      v69 = 2 * v69 + 2;
                      v67 >>= 1;
                    }
                    v60 = v66 + v69;
                  }
                  v58 = v63;
                  v59 = v64;
                  v54 = v62;
                  --v61;
                }
                while ( v61 );
                v17 = v99;
                v19 = v60;
                v9 = a2;
                v8 = a3;
                v12 = 1LL;
                v10 = a1;
                v91 = v60;
              }
              v7 = a4;
              goto LABEL_86;
            }
            v12 = 1LL;
          }
LABEL_87:
          v21 = v94 + 1;
          v94 = v21;
        }
        while ( v21 < *(_WORD *)v10 );
      }
      if ( (v7 & 6) == 4 && (v19 += 2 * ((*(_QWORD *)(v17 + 16) - v17 - 56) >> 4), v19 > 0x3FFF) )
      {
        return 4869LL;
      }
      else
      {
        v70 = *(__int16 *)(v9 + 6) - *(__int16 *)(v9 + 10);
        v71 = ((*(__int16 *)(v9 + 12) - *(__int16 *)(v9 + 8) + 31) >> 3) & 0xFFFC;
        *(_WORD *)v9 = v71;
        *(_DWORD *)(v9 + 36) = v70 * v71;
        if ( v17 != *(_QWORD *)(v17 + 32) )
          FixPointers(v17, v18, v12, 4LL);
        IxEstimate = GetIxEstimate(*(_QWORD *)v17, v18, v12, v20);
        v75 = (v72 + 7) & 0xFFFFFFF8;
        v76 = (IxEstimate + 7) & 0xFFFFFFF8;
        if ( (v7 & 4) != 0 )
          v77 = 8 * ((_DWORD)v76 + 4 * v75 + v75);
        else
          v77 = 4 * ((unsigned int)v76 + 10 * v75);
        v8[1] = v77;
        if ( (v7 & 2) != 0 )
        {
          v8[2] = 0;
          v78 = 0;
        }
        else
        {
          if ( v17 != *(_QWORD *)(v17 + 32) )
            FixPointers(v17, v77, v76, v74);
          v78 = GetIxEstimate(*(_QWORD *)(v17 + 8), v77, v76, v74);
          v80 = (v79 + 7) & 0xFFFFFFF8;
          v81 = (v78 + 7) & 0xFFFFFFF8;
          if ( v82 )
            v83 = 8 * (v81 + ((v19 + 7) & 0xFFFFFFF8) + 5 * v80);
          else
            v83 = 4 * (v81 + 10 * v80);
          v8[2] = v83;
        }
        v8[3] = IxEstimate;
        v8[4] = v78;
        v8[5] = v19;
        *v8 = *(_DWORD *)(v17 + 16) - v17;
        return 0LL;
      }
    }
  }
  return result;
}
