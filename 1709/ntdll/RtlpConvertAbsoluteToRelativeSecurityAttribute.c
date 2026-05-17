/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7630
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E7040 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x180079544 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
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
  unsigned int v20; // edx
  __int64 v21; // r9
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // r12d
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // edx
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // r11d
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ebp
  _DWORD *v39; // r11
  unsigned int j; // r12d
  __int64 v41; // rbx
  unsigned int v42; // ebp
  __int64 v43; // rdx
  unsigned int i; // r12d
  void *v45; // r11
  int v46; // ebx
  __int64 v47; // rcx
  _QWORD v49[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v49[0] = 0LL;
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
      v10 = RtlStringCbLengthW(*(_WORD **)a1, 0xFFFFuLL, v49);
      if ( (v10 & 0x80000000) == 0 )
      {
        v15 = LODWORD(v49[0]) + 2;
        Size = LODWORD(v49[0]) + 2;
        if ( (unsigned int)(LODWORD(v49[0]) + 2) < LODWORD(v49[0]) )
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
              v20 = 0;
              if ( *(_DWORD *)(a1 + 16) )
              {
                do
                {
                  v22 = v14;
                  v21 = *(_QWORD *)(a1 + 24);
                  v23 = v17 + *(_DWORD *)(v21 + 16LL * v20 + 8);
                  if ( v23 >= v17 )
                    v22 = v17 + *(_DWORD *)(v21 + 16LL * v20 + 8);
                  v10 = v23 < v17 ? 0xC0000095 : 0;
                  if ( v23 < v17 )
                    return v10;
                  v24 = v22 + 4;
                  v17 = v14;
                  if ( v22 + 4 >= v22 )
                    v17 = v22 + 4;
                  v10 = v24 < v22 ? 0xC0000095 : 0;
                  if ( v24 < v22 )
                    return v10;
                }
                while ( ++v20 < *(_DWORD *)(a1 + 16) );
              }
LABEL_45:
              v34 = v17 + 3;
              if ( v17 + 3 >= v17 )
                LODWORD(v14) = v17 + 3;
              v10 = v34 < v17 ? 0xC0000095 : 0;
              if ( v34 < v17 )
                return v10;
              v35 = v14 & 0xFFFFFFFC;
              if ( *a3 < v35 )
              {
                *a3 = v35;
                return (unsigned int)-1073741789;
              }
              if ( a2 )
              {
                *a3 = v35;
                memset(a2, 0, v35);
                *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
                *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
                a2[2] = *(_DWORD *)(a1 + 12);
                a2[3] = *(_DWORD *)(a1 + 16);
                v36 = *(_DWORD *)(a1 + 16);
                if ( v36 )
                  v12 = 4 * v36 + 16;
                *a2 = v12;
                memmove((char *)a2 + v12, *(const void **)a1, Size);
                v37 = *(unsigned __int16 *)(a1 + 8);
                v38 = Size + v12;
                v39 = (unsigned int *)((char *)a2 + v38);
                if ( *(_WORD *)(a1 + 8) )
                {
                  if ( v37 <= 2 )
                    goto LABEL_76;
                  switch ( v37 )
                  {
                    case 3u:
                      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                      {
                        a2[i + 4] = v38;
                        v10 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, v49);
                        if ( (v10 & 0x80000000) != 0 )
                          break;
                        v46 = LODWORD(v49[0]) + 2;
                        memmove(
                          v45,
                          *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i),
                          (unsigned int)(LODWORD(v49[0]) + 2));
                        v38 += v46;
                      }
                      return v10;
                    case 5u:
LABEL_59:
                      for ( j = 0; j < *(_DWORD *)(a1 + 16); v39 = (unsigned int *)((char *)a2 + v38) )
                      {
                        a2[j + 4] = v38;
                        v41 = 2LL * j;
                        v42 = v38 + 4;
                        *v39 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                        v43 = *(_QWORD *)(a1 + 24);
                        if ( *(_DWORD *)(v43 + 16LL * j + 8) )
                          memmove(
                            (char *)a2 + v42,
                            *(const void **)(v43 + 16LL * j),
                            *(unsigned int *)(v43 + 16LL * j + 8));
                        ++j;
                        v38 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v41 + 8) + v42;
                      }
                      return v10;
                    case 6u:
LABEL_76:
                      if ( *(_DWORD *)(a1 + 16) )
                      {
                        do
                        {
                          v47 = v3++;
                          a2[v47 + 4] = v38;
                          v38 += 8;
                          *(_QWORD *)v39 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v47);
                          v39 = (unsigned int *)((char *)a2 + v38);
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
            v29 = v14;
            v30 = 8LL * *(unsigned int *)(a1 + 16);
            if ( v30 <= v14 )
              v29 = 8 * *(_DWORD *)(a1 + 16);
            v10 = v14 < v30 ? 0xC0000095 : 0;
            if ( v30 > v14 )
              return v10;
            v31 = v17 + v29;
            v32 = v17;
            v33 = v14;
            if ( v31 >= v17 )
              v33 = v31;
            v17 = v33;
            v10 = v31 < v32 ? 0xC0000095 : 0;
            if ( v31 < v18 )
              return v10;
            goto LABEL_45;
          }
          v25 = 0;
          if ( !*(_DWORD *)(a1 + 16) )
            goto LABEL_45;
          while ( 1 )
          {
            v10 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v25), 0xFFFFuLL, v49);
            if ( (v10 & 0x80000000) != 0 )
              break;
            if ( (unsigned int)(LODWORD(v49[0]) + 2) < LODWORD(v49[0]) )
              return (unsigned int)-1073741675;
            v26 = v17 + LODWORD(v49[0]) + 2;
            v27 = v17;
            v28 = v14;
            if ( v26 >= v17 )
              v28 = v17 + LODWORD(v49[0]) + 2;
            v17 = v28;
            v10 = v26 < v27 ? 0xC0000095 : 0;
            if ( v26 < v27 )
              return v10;
            if ( ++v25 >= *(_DWORD *)(a1 + 16) )
              goto LABEL_45;
          }
        }
      }
    }
  }
  return v10;
}
