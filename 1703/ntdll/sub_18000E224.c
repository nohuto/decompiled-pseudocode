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

char __fastcall sub_18000E224(_WORD *BaseAddress, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
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
  char v43; // al
  SIZE_T v44; // r14
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 m; // rax
  __int64 v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rdi
  _QWORD *v59; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  _QWORD *v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 i; // rax
  __int64 *v67; // rax
  int v68; // r8d
  int v69; // [rsp+20h] [rbp-38h]
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+38h] [rbp-20h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v9 = 0;
  *(_WORD *)(a3 + 12) = BaseAddress[70] ^ a6;
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
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = BaseAddress[70] ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (BaseAddress[56] & 0x40) != 0 )
        {
          v56 = (_DWORD *)(a3 + 32);
          v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v57 )
          {
            if ( ((unsigned __int8)v56 & 4) != 0 )
            {
              --v57;
              *v56 = -17891602;
              v56 = (_DWORD *)(a3 + 36);
            }
            memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
            if ( (v57 & 1) != 0 )
              v56[v57 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v58 = BaseAddress + 168;
        if ( *((_QWORD *)BaseAddress + 39) )
          v59 = (_QWORD *)sub_18000E6BC(BaseAddress, (unsigned __int16)a7);
        else
          v59 = (_QWORD *)*v58;
        if ( v58 != v59 )
        {
          v60 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v60 )
            {
              v61 = *((_DWORD *)v59 - 2);
              v60 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v74) = v61;
              if ( (v61 & v60) != 0 )
                v74 = *((_DWORD *)BaseAddress + 34) ^ v61;
              v62 = v74;
            }
            else
            {
              v62 = *((_WORD *)v59 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
              break;
            v59 = (_QWORD *)*v59;
          }
          while ( v58 != v59 );
        }
        v63 = (__int64 *)v59[1];
        v64 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v63 == v59 )
        {
          *v64 = v59;
          *(_QWORD *)(a3 + 24) = v63;
          *v63 = (__int64)v64;
          v59[1] = v64;
        }
        else
        {
          sub_1800A4DFC(12, 0, (_DWORD)v59, 0, *v63, 0LL);
        }
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v65 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( v65 )
        {
          for ( i = *((unsigned int *)v65 + 2); ; i = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_147;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_147:
          v70 = v68;
          LOBYTE(v68) = 1;
          sub_18000E614((_DWORD)BaseAddress, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v35 = BaseAddress + 168;
        if ( *((_QWORD *)BaseAddress + 39) )
          v36 = (_QWORD *)sub_18000E6BC(BaseAddress, (unsigned __int16)a7);
        else
          v36 = (_QWORD *)*v35;
        if ( v35 != v36 )
        {
          v37 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v37 )
            {
              v38 = *((_DWORD *)v36 - 2);
              v37 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v72) = v38;
              if ( (v37 & v38) != 0 )
                v72 = *((_DWORD *)BaseAddress + 34) ^ v38;
              v39 = v72;
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
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v29 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
          v69 = v33;
          LOBYTE(v33) = 1;
          sub_18000E614((_DWORD)BaseAddress, (_DWORD)v29, v33, (_DWORD)v28, v69, v30);
        }
LABEL_39:
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
      }
      return 1;
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v11 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        sub_1800FDA30(BaseAddress, a3 + 16 * a7);
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v11 + 8);
      v17 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
        sub_18002F7E0((_DWORD)BaseAddress, (_DWORD)v17, v13, v11 + 16, v20, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)sub_180021DA4(BaseAddress) )
      {
        if ( a5 )
        {
          v43 = *(_BYTE *)(v11 + 10);
          if ( (v43 & 4) != 0 )
          {
            v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v43 & 2) != 0 && v44 > 4 )
              v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v45 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v44, 0xFEEEFEEE);
            if ( v45 != v44 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v45 + v11 + 32));
              sub_180102310();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v21 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v21 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v21;
          *(_WORD *)(16 * v21 + a3 + 12) = BaseAddress[70] ^ v21;
          *(_BYTE *)(a3 + 15) = 0;
          if ( a5 )
          {
            *(_BYTE *)(a3 + 10) &= 0xF0u;
            if ( (BaseAddress[56] & 0x40) != 0 )
            {
              v46 = (_DWORD *)(a3 + 32);
              v47 = (16 * (unsigned __int64)(unsigned __int16)v21 - 32) >> 2;
              if ( v47 )
              {
                if ( ((unsigned __int8)v46 & 4) != 0 )
                {
                  --v47;
                  *v46 = -17891602;
                  v46 = (_DWORD *)(a3 + 36);
                }
                memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
                if ( (v47 & 1) != 0 )
                  v46[v47 - 1] = -17891602;
              }
              *(_BYTE *)(a3 + 10) |= 4u;
            }
            v48 = BaseAddress + 168;
            if ( *((_QWORD *)BaseAddress + 39) )
              v49 = (_QWORD *)sub_18000E6BC(BaseAddress, (unsigned __int16)v21);
            else
              v49 = (_QWORD *)*v48;
            if ( v48 != v49 )
            {
              v50 = *((_DWORD *)BaseAddress + 31);
              do
              {
                if ( v50 )
                {
                  v51 = *((_DWORD *)v49 - 2);
                  v50 = *((_DWORD *)BaseAddress + 31);
                  LOWORD(v73) = v51;
                  if ( (v51 & v50) != 0 )
                    v73 = *((_DWORD *)BaseAddress + 34) ^ v51;
                  v52 = v73;
                }
                else
                {
                  v52 = *((_WORD *)v49 - 4);
                }
                if ( (unsigned __int16)v21 <= (unsigned __int64)v52 )
                  break;
                v49 = (_QWORD *)*v49;
              }
              while ( v48 != v49 );
            }
            v53 = (__int64 *)v49[1];
            v28 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v53 == v49 )
            {
              *v28 = v49;
              *(_QWORD *)(a3 + 24) = v53;
              *v53 = (__int64)v28;
              v49[1] = v28;
            }
            else
            {
              sub_1800A4DFC(12, 0, (_DWORD)v49, 0, *v53, 0LL);
            }
            *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
            v29 = (__int64 *)*((_QWORD *)BaseAddress + 39);
            if ( v29 )
            {
              v30 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v29 + 2); v30 >= m; m = *(unsigned int *)(v55 + 8) )
              {
                v55 = *v29;
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
            v22 = BaseAddress + 168;
            if ( *((_QWORD *)BaseAddress + 39) )
              v23 = (_QWORD *)sub_18000E6BC(BaseAddress, (unsigned __int16)v21);
            else
              v23 = (_QWORD *)*v22;
            if ( v22 != v23 )
            {
              v24 = *((_DWORD *)BaseAddress + 31);
              do
              {
                if ( v24 )
                {
                  v25 = *((_DWORD *)v23 - 2);
                  v24 = *((_DWORD *)BaseAddress + 31);
                  LOWORD(v71) = v25;
                  if ( (v25 & v24) != 0 )
                    v71 = *((_DWORD *)BaseAddress + 34) ^ v25;
                  v26 = v71;
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
            *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
            v29 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
        sub_18001D350(BaseAddress, a3, v21);
        return 1;
      }
      sub_18001C798(BaseAddress);
    }
    else
    {
      sub_1800A4DFC(12, (_DWORD)BaseAddress, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
