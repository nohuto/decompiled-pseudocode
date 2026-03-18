/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140720CA0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned __int64 v14; // r11
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // edx
  __int64 v22; // r10
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // r12d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // edx
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // r11d
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // ebp
  _DWORD *v40; // r11
  unsigned int j; // r12d
  __int64 v42; // rbx
  unsigned int v43; // ebp
  __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned int i; // r12d
  void *v47; // r11
  int v48; // ebx
  __int64 v49; // rcx
  size_t pcbLength[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = 0;
  pcbLength[0] = 0LL;
  v7 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
    goto LABEL_77;
  v7 = -1;
  v9 = 4LL * (unsigned int)(v8 - 1);
  if ( v9 <= 0xFFFFFFFF )
    v7 = v9;
  v10 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 <= 0xFFFFFFFF )
  {
LABEL_77:
    v11 = v7 + 20;
    v12 = 20;
    v13 = -1;
    if ( v11 >= 0x14 )
      v13 = v11;
    v10 = v11 < 0x14 ? 0xC0000095 : 0;
    if ( v11 >= 0x14 )
    {
      v10 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, pcbLength);
      if ( (v10 & 0x80000000) == 0 )
      {
        v15 = LODWORD(pcbLength[0]) + 2;
        Size = LODWORD(pcbLength[0]) + 2;
        if ( (unsigned int)(LODWORD(pcbLength[0]) + 2) < LODWORD(pcbLength[0]) )
          return (unsigned int)-1073741675;
        v16 = v15 + v13;
        v17 = v14;
        if ( v15 + v13 >= v13 )
          v17 = v15 + v13;
        v10 = v16 < v13 ? 0xC0000095 : 0;
        v18 = v17;
        if ( v16 >= v13 )
        {
          v19 = *(unsigned __int16 *)(a1 + 8);
          if ( !*(_WORD *)(a1 + 8) )
            goto LABEL_45;
          if ( v19 <= 2 )
            goto LABEL_39;
          if ( v19 != 3 )
          {
            if ( v19 == 5 )
            {
LABEL_21:
              v20 = *(_DWORD *)(a1 + 16);
              v21 = 0;
              if ( v20 )
              {
                do
                {
                  v23 = v14;
                  v22 = *(_QWORD *)(a1 + 24);
                  v24 = v17 + *(_DWORD *)(v22 + 16LL * v21 + 8);
                  if ( v24 >= v17 )
                    v23 = v17 + *(_DWORD *)(v22 + 16LL * v21 + 8);
                  v10 = v24 < v17 ? 0xC0000095 : 0;
                  if ( v24 < v17 )
                    return v10;
                  v25 = v23 + 4;
                  v17 = v14;
                  if ( v23 + 4 >= v23 )
                    v17 = v23 + 4;
                  v10 = v25 < v23 ? 0xC0000095 : 0;
                  if ( v25 < v23 )
                    return v10;
                }
                while ( ++v21 < v20 );
              }
LABEL_45:
              v35 = v17 + 3;
              if ( v17 + 3 >= v17 )
                LODWORD(v14) = v17 + 3;
              v10 = v35 < v17 ? 0xC0000095 : 0;
              if ( v35 < v17 )
                return v10;
              v36 = v14 & 0xFFFFFFFC;
              if ( *a3 < v36 )
              {
                *a3 = v36;
                return (unsigned int)-1073741789;
              }
              if ( a2 )
              {
                *a3 = v36;
                memset(a2, 0, v36);
                *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
                *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
                a2[2] = *(_DWORD *)(a1 + 12);
                a2[3] = *(_DWORD *)(a1 + 16);
                v37 = *(_DWORD *)(a1 + 16);
                if ( v37 )
                  v12 = 4 * v37 + 16;
                *a2 = v12;
                memmove((char *)a2 + v12, *(const void **)a1, Size);
                v38 = *(unsigned __int16 *)(a1 + 8);
                v39 = Size + v12;
                v40 = (unsigned int *)((char *)a2 + v39);
                if ( *(_WORD *)(a1 + 8) )
                {
                  if ( v38 <= 2 )
                    goto LABEL_76;
                  switch ( v38 )
                  {
                    case 3u:
                      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                      {
                        a2[i + 4] = v39;
                        v10 = RtlStringCbLengthW(
                                *(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * i),
                                0xFFFFuLL,
                                pcbLength);
                        if ( (v10 & 0x80000000) != 0 )
                          break;
                        v48 = LODWORD(pcbLength[0]) + 2;
                        memmove(
                          v47,
                          *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i),
                          (unsigned int)(LODWORD(pcbLength[0]) + 2));
                        v39 += v48;
                      }
                      return v10;
                    case 5u:
LABEL_59:
                      for ( j = 0; j < *(_DWORD *)(a1 + 16); v40 = (unsigned int *)((char *)a2 + v39) )
                      {
                        a2[j + 4] = v39;
                        v42 = 2LL * j;
                        v43 = v39 + 4;
                        *v40 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                        v44 = *(_QWORD *)(a1 + 24);
                        v45 = *(_DWORD *)(v44 + 16LL * j + 8);
                        if ( v45 )
                          memmove((char *)a2 + v43, *(const void **)(v44 + 16LL * j), v45);
                        ++j;
                        v39 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v42 + 8) + v43;
                      }
                      return v10;
                    case 6u:
LABEL_76:
                      if ( *(_DWORD *)(a1 + 16) )
                      {
                        do
                        {
                          v49 = v3++;
                          a2[v49 + 4] = v39;
                          v39 += 8;
                          *(_QWORD *)v40 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v49);
                          v40 = (unsigned int *)((char *)a2 + v39);
                        }
                        while ( v3 < *(_DWORD *)(a1 + 16) );
                      }
                      return v10;
                    case 0x10u:
                      goto LABEL_59;
                  }
                }
              }
              return (unsigned int)-1073741811;
            }
            if ( v19 != 6 )
            {
              if ( v19 != 16 )
                goto LABEL_45;
              goto LABEL_21;
            }
LABEL_39:
            v30 = v14;
            v31 = 8LL * *(unsigned int *)(a1 + 16);
            if ( v31 <= v14 )
              v30 = 8 * *(_DWORD *)(a1 + 16);
            v10 = v14 < v31 ? 0xC0000095 : 0;
            if ( v31 > v14 )
              return v10;
            v32 = v17 + v30;
            v33 = v17;
            v34 = v14;
            if ( v32 >= v17 )
              v34 = v32;
            v17 = v34;
            v10 = v32 < v33 ? 0xC0000095 : 0;
            if ( v32 < v18 )
              return v10;
            goto LABEL_45;
          }
          v26 = 0;
          if ( !*(_DWORD *)(a1 + 16) )
            goto LABEL_45;
          while ( 1 )
          {
            v10 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v26), 0xFFFFuLL, pcbLength);
            if ( (v10 & 0x80000000) != 0 )
              break;
            if ( (unsigned int)(LODWORD(pcbLength[0]) + 2) < LODWORD(pcbLength[0]) )
              return (unsigned int)-1073741675;
            v27 = v17 + LODWORD(pcbLength[0]) + 2;
            v28 = v17;
            v29 = v14;
            if ( v27 >= v17 )
              v29 = v17 + LODWORD(pcbLength[0]) + 2;
            v17 = v29;
            v10 = v27 < v28 ? 0xC0000095 : 0;
            if ( v27 < v28 )
              return v10;
            if ( ++v26 >= *(_DWORD *)(a1 + 16) )
              goto LABEL_45;
          }
        }
      }
    }
  }
  return v10;
}
