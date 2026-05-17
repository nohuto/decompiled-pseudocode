/*
 * XREFs of sub_18000E224 @ 0x18000E224
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 * Callees:
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 *     sub_18000E6BC @ 0x18000E6BC (sub_18000E6BC.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlCompareMemoryUlong @ 0x1800A97E0 (RtlCompareMemoryUlong.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char __fastcall sub_18000E224(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 k; // rax
  __int64 *v19; // rax
  int v20; // ecx
  unsigned __int64 v21; // rbp
  _QWORD *v22; // rdi
  _QWORD *v23; // r8
  int v24; // ecx
  int v25; // eax
  unsigned __int16 v26; // ax
  __int64 *v27; // rax
  _QWORD *v28; // rdi
  __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 n; // rax
  __int64 *v32; // rax
  int v33; // r8d
  _QWORD *v35; // rdi
  _QWORD *v36; // r8
  int v37; // ecx
  int v38; // eax
  unsigned __int16 v39; // ax
  __int64 *v40; // rax
  unsigned __int64 j; // rax
  __int64 *v42; // rax
  __int64 v43; // r9
  char v44; // al
  unsigned __int64 v45; // r14
  __int64 v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 m; // rax
  __int64 v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *v60; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 i; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+20h] [rbp-38h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]
  int v75; // [rsp+38h] [rbp-20h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( (unsigned __int64)(a3 - a2) >> 16 > 0xFC )
      sub_1800A4DFC(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  v11 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v57 = (_DWORD *)(a3 + 32);
          v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v58 )
          {
            if ( ((unsigned __int8)v57 & 4) != 0 )
            {
              --v58;
              *v57 = -17891602;
              v57 = (_DWORD *)(a3 + 36);
            }
            memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
            if ( (v58 & 1) != 0 )
              v57[v58 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v59 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v60 = (_QWORD *)sub_18000E6BC(a1, (unsigned __int16)a7);
        else
          v60 = (_QWORD *)*v59;
        if ( v59 != v60 )
        {
          v61 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)v60 - 2);
              v61 = *(_DWORD *)(a1 + 124);
              LOWORD(v75) = v62;
              if ( (v62 & v61) != 0 )
                v75 = *(_DWORD *)(a1 + 136) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)v60 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            v60 = (_QWORD *)*v60;
          }
          while ( v59 != v60 );
        }
        v64 = (__int64 *)v60[1];
        v65 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v64 == v60 )
        {
          *v65 = v60;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          v60[1] = v65;
        }
        else
        {
          sub_1800A4DFC(12, 0, (_DWORD)v60, 0, *v64, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v66 = *(__int64 **)(a1 + 312);
        if ( v66 )
        {
          for ( i = *((unsigned int *)v66 + 2); ; i = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_147;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_147:
          v71 = v69;
          LOBYTE(v69) = 1;
          sub_18000E614(a1, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v35 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v36 = (_QWORD *)sub_18000E6BC(a1, (unsigned __int16)a7);
        else
          v36 = (_QWORD *)*v35;
        if ( v35 != v36 )
        {
          v37 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v37 )
            {
              v38 = *((_DWORD *)v36 - 2);
              v37 = *(_DWORD *)(a1 + 124);
              LOWORD(v73) = v38;
              if ( (v37 & v38) != 0 )
                v73 = *(_DWORD *)(a1 + 136) ^ v38;
              v39 = v73;
            }
            else
            {
              v39 = *((_WORD *)v36 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v39 )
              break;
            v36 = (_QWORD *)*v36;
          }
          while ( v35 != v36 );
        }
        v40 = (__int64 *)v36[1];
        v28 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v40 == v36 )
        {
          *v28 = v36;
          *(_QWORD *)(a3 + 24) = v40;
          *v40 = (__int64)v28;
          v36[1] = v28;
        }
        else
        {
          sub_1800A4DFC(12, 0, (_DWORD)v36, 0, *v40, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v29 = *(__int64 **)(a1 + 312);
        if ( v29 )
        {
          v30 = *(unsigned __int16 *)(a3 + 8);
          for ( j = *((unsigned int *)v29 + 2); v30 >= j; j = *((unsigned int *)v42 + 2) )
          {
            v42 = (__int64 *)*v29;
            if ( !*v29 )
            {
LABEL_37:
              v33 = *((_DWORD *)v29 + 2) - 1;
              goto LABEL_38;
            }
            v29 = (__int64 *)*v29;
          }
LABEL_57:
          v33 = v30;
LABEL_38:
          v70 = v33;
          LOBYTE(v33) = 1;
          sub_18000E614(a1, (_DWORD)v29, v33, (_DWORD)v28, v70, v30);
        }
LABEL_39:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
      }
      return 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        sub_1800FDA30(a1, a3 + 16 * a7);
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        for ( k = *((unsigned int *)v17 + 2); ; k = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v20 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_16;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_16:
        LOBYTE(v13) = 1;
        sub_18002F7E0(a1, (_DWORD)v17, v13, v11 + 16, v20, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)sub_180021DA4(a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong(v11 + 32, v45, 4277075694LL);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
              sub_180102310();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v21 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v21 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v21;
          *(_WORD *)(16 * v21 + a3 + 12) = *(_WORD *)(a1 + 140) ^ v21;
          *(_BYTE *)(a3 + 15) = 0;
          if ( a5 )
          {
            *(_BYTE *)(a3 + 10) &= 0xF0u;
            if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
            {
              v47 = (_DWORD *)(a3 + 32);
              v48 = (16 * (unsigned __int64)(unsigned __int16)v21 - 32) >> 2;
              if ( v48 )
              {
                if ( ((unsigned __int8)v47 & 4) != 0 )
                {
                  --v48;
                  *v47 = -17891602;
                  v47 = (_DWORD *)(a3 + 36);
                }
                memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
                if ( (v48 & 1) != 0 )
                  v47[v48 - 1] = -17891602;
              }
              *(_BYTE *)(a3 + 10) |= 4u;
            }
            v49 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v50 = (_QWORD *)sub_18000E6BC(a1, (unsigned __int16)v21);
            else
              v50 = (_QWORD *)*v49;
            if ( v49 != v50 )
            {
              v51 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v51 )
                {
                  v52 = *((_DWORD *)v50 - 2);
                  v51 = *(_DWORD *)(a1 + 124);
                  LOWORD(v74) = v52;
                  if ( (v52 & v51) != 0 )
                    v74 = *(_DWORD *)(a1 + 136) ^ v52;
                  v53 = v74;
                }
                else
                {
                  v53 = *((_WORD *)v50 - 4);
                }
                if ( (unsigned __int16)v21 <= (unsigned __int64)v53 )
                  break;
                v50 = (_QWORD *)*v50;
              }
              while ( v49 != v50 );
            }
            v54 = (__int64 *)v50[1];
            v28 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v54 == v50 )
            {
              *v28 = v50;
              *(_QWORD *)(a3 + 24) = v54;
              *v54 = (__int64)v28;
              v50[1] = v28;
            }
            else
            {
              sub_1800A4DFC(12, 0, (_DWORD)v50, 0, *v54, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v29 = *(__int64 **)(a1 + 312);
            if ( v29 )
            {
              v30 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v29 + 2); v30 >= m; m = *(unsigned int *)(v56 + 8) )
              {
                v56 = *v29;
                if ( !*v29 )
                  goto LABEL_37;
                v29 = (__int64 *)*v29;
              }
              goto LABEL_57;
            }
          }
          else
          {
            *(_BYTE *)(a3 + 10) = 0;
            v22 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v23 = (_QWORD *)sub_18000E6BC(a1, (unsigned __int16)v21);
            else
              v23 = (_QWORD *)*v22;
            if ( v22 != v23 )
            {
              v24 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v24 )
                {
                  v25 = *((_DWORD *)v23 - 2);
                  v24 = *(_DWORD *)(a1 + 124);
                  LOWORD(v72) = v25;
                  if ( (v25 & v24) != 0 )
                    v72 = *(_DWORD *)(a1 + 136) ^ v25;
                  v26 = v72;
                }
                else
                {
                  v26 = *((_WORD *)v23 - 4);
                }
                if ( (unsigned __int16)v21 <= (unsigned __int64)v26 )
                  break;
                v23 = (_QWORD *)*v23;
              }
              while ( v22 != v23 );
            }
            v27 = (__int64 *)v23[1];
            v28 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v27 == v23 )
            {
              *v28 = v23;
              *(_QWORD *)(a3 + 24) = v27;
              *v27 = (__int64)v28;
              v23[1] = v28;
            }
            else
            {
              sub_1800A4DFC(12, 0, (_DWORD)v23, 0, *v27, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v29 = *(__int64 **)(a1 + 312);
            if ( v29 )
            {
              v30 = *(unsigned __int16 *)(a3 + 8);
              for ( n = *((unsigned int *)v29 + 2); v30 >= n; n = *((unsigned int *)v32 + 2) )
              {
                v32 = (__int64 *)*v29;
                if ( !*v29 )
                  goto LABEL_37;
                v29 = (__int64 *)*v29;
              }
              goto LABEL_57;
            }
          }
          goto LABEL_39;
        }
        sub_18001D350(a1, a3, v21);
        return 1;
      }
      LOBYTE(v43) = 1;
      sub_18001C798(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), v43);
    }
    else
    {
      sub_1800A4DFC(12, a1, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
