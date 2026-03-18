/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1406E8E7C
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v6; // rax
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned __int64 v12; // r11
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // edx
  __int64 v20; // r10
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // r12d
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r11d
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ebp
  _DWORD *v37; // r11
  unsigned int j; // r12d
  __int64 v39; // rbx
  unsigned int v40; // ebp
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int i; // r12d
  void *v44; // r11
  int v45; // ebx
  __int64 v46; // rcx
  size_t pcbLength[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = 0;
  pcbLength[0] = 0LL;
  LODWORD(v6) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = *(_DWORD *)(a1 + 16);
  if ( v7 )
  {
    v6 = 4LL * (unsigned int)(v7 - 1);
    if ( v6 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v6 + 20;
  v10 = 20;
  v11 = -1;
  if ( v9 >= 0x14 )
    v11 = v9;
  v8 = v9 < 0x14 ? 0xC0000095 : 0;
  if ( v9 >= 0x14 )
  {
    v8 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, pcbLength);
    if ( (v8 & 0x80000000) == 0 )
    {
      v13 = LODWORD(pcbLength[0]) + 2;
      Size = LODWORD(pcbLength[0]) + 2;
      if ( (unsigned int)(LODWORD(pcbLength[0]) + 2) < LODWORD(pcbLength[0]) )
        return (unsigned int)-1073741675;
      v14 = v13 + v11;
      v15 = v12;
      if ( v13 + v11 >= v11 )
        v15 = v13 + v11;
      v8 = v14 < v11 ? 0xC0000095 : 0;
      v16 = v15;
      if ( v14 < v11 )
        return v8;
      v17 = *(unsigned __int16 *)(a1 + 8);
      if ( !*(_WORD *)(a1 + 8) )
        goto LABEL_41;
      if ( v17 <= 2 )
      {
LABEL_37:
        v28 = 8LL * *(unsigned int *)(a1 + 16);
        if ( v28 <= v12 )
        {
          v29 = v28 + v15;
          v30 = v15;
          v31 = v12;
          if ( v29 >= v15 )
            v31 = v29;
          v15 = v31;
          v8 = v29 < v30 ? 0xC0000095 : 0;
          if ( v29 < v16 )
            return v8;
          goto LABEL_41;
        }
        return (unsigned int)-1073741675;
      }
      if ( v17 != 3 )
      {
        if ( v17 == 5 )
        {
LABEL_20:
          v18 = *(_DWORD *)(a1 + 16);
          v19 = 0;
          if ( v18 )
          {
            do
            {
              v21 = v12;
              v20 = *(_QWORD *)(a1 + 24);
              v22 = v15 + *(_DWORD *)(v20 + 16LL * v19 + 8);
              if ( v22 >= v15 )
                v21 = v15 + *(_DWORD *)(v20 + 16LL * v19 + 8);
              v8 = v22 < v15 ? 0xC0000095 : 0;
              if ( v22 < v15 )
                return v8;
              v23 = v21 + 4;
              v15 = v12;
              if ( v21 + 4 >= v21 )
                v15 = v21 + 4;
              v8 = v23 < v21 ? 0xC0000095 : 0;
              if ( v23 < v21 )
                return v8;
            }
            while ( ++v19 < v18 );
          }
LABEL_41:
          v32 = v15 + 3;
          if ( v15 + 3 >= v15 )
            LODWORD(v12) = v15 + 3;
          v8 = v32 < v15 ? 0xC0000095 : 0;
          if ( v32 < v15 )
            return v8;
          v33 = v12 & 0xFFFFFFFC;
          if ( *a3 < v33 )
          {
            *a3 = v33;
            return (unsigned int)-1073741789;
          }
          if ( a2 )
          {
            *a3 = v33;
            memset(a2, 0, v33);
            *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
            *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
            a2[2] = *(_DWORD *)(a1 + 12);
            a2[3] = *(_DWORD *)(a1 + 16);
            v34 = *(_DWORD *)(a1 + 16);
            if ( v34 )
              v10 = 4 * v34 + 16;
            *a2 = v10;
            memmove((char *)a2 + v10, *(const void **)a1, Size);
            v35 = *(unsigned __int16 *)(a1 + 8);
            v36 = Size + v10;
            v37 = (unsigned int *)((char *)a2 + v36);
            if ( *(_WORD *)(a1 + 8) )
            {
              if ( v35 <= 2 )
                goto LABEL_72;
              switch ( v35 )
              {
                case 3u:
                  for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                  {
                    a2[i + 4] = v36;
                    v8 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, pcbLength);
                    if ( (v8 & 0x80000000) != 0 )
                      break;
                    v45 = LODWORD(pcbLength[0]) + 2;
                    memmove(
                      v44,
                      *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i),
                      (unsigned int)(LODWORD(pcbLength[0]) + 2));
                    v36 += v45;
                  }
                  return v8;
                case 5u:
LABEL_55:
                  for ( j = 0; j < *(_DWORD *)(a1 + 16); v37 = (unsigned int *)((char *)a2 + v36) )
                  {
                    a2[j + 4] = v36;
                    v39 = 2LL * j;
                    v40 = v36 + 4;
                    *v37 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                    v41 = *(_QWORD *)(a1 + 24);
                    v42 = *(_DWORD *)(v41 + 16LL * j + 8);
                    if ( v42 )
                      memmove((char *)a2 + v40, *(const void **)(v41 + 16LL * j), v42);
                    ++j;
                    v36 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v39 + 8) + v40;
                  }
                  return v8;
                case 6u:
LABEL_72:
                  if ( *(_DWORD *)(a1 + 16) )
                  {
                    do
                    {
                      v46 = v3++;
                      a2[v46 + 4] = v36;
                      v36 += 8;
                      *(_QWORD *)v37 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v46);
                      v37 = (unsigned int *)((char *)a2 + v36);
                    }
                    while ( v3 < *(_DWORD *)(a1 + 16) );
                  }
                  return v8;
                case 0x10u:
                  goto LABEL_55;
              }
            }
          }
          return (unsigned int)-1073741811;
        }
        if ( v17 != 6 )
        {
          if ( v17 != 16 )
            goto LABEL_41;
          goto LABEL_20;
        }
        goto LABEL_37;
      }
      v24 = 0;
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_41;
      while ( 1 )
      {
        v8 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v24), 0xFFFFuLL, pcbLength);
        if ( (v8 & 0x80000000) != 0 )
          break;
        if ( (unsigned int)(LODWORD(pcbLength[0]) + 2) < LODWORD(pcbLength[0]) )
          return (unsigned int)-1073741675;
        v25 = v15 + LODWORD(pcbLength[0]) + 2;
        v26 = v15;
        v27 = v12;
        if ( v25 >= v15 )
          v27 = v15 + LODWORD(pcbLength[0]) + 2;
        v15 = v27;
        v8 = v25 < v26 ? 0xC0000095 : 0;
        if ( v25 < v26 )
          break;
        if ( ++v24 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_41;
      }
    }
  }
  return v8;
}
