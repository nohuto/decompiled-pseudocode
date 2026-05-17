/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E8260
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_180058198 @ 0x180058198 (sub_180058198.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
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
  unsigned int v18; // edx
  __int64 v19; // r9
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r12d
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r11d
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ebp
  _DWORD *v36; // r11
  unsigned int j; // r12d
  __int64 v38; // rbx
  unsigned int v39; // ebp
  __int64 v40; // rdx
  unsigned int i; // r12d
  void *v42; // r11
  int v43; // ebx
  __int64 v44; // rcx
  _QWORD v46[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v46[0] = 0LL;
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
    v8 = sub_180058198(*(_WORD **)a1, 0xFFFFuLL, v46);
    if ( (v8 & 0x80000000) == 0 )
    {
      v13 = LODWORD(v46[0]) + 2;
      Size = LODWORD(v46[0]) + 2;
      if ( (unsigned int)(LODWORD(v46[0]) + 2) < LODWORD(v46[0]) )
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
        v27 = 8LL * *(unsigned int *)(a1 + 16);
        if ( v27 <= v12 )
        {
          v28 = v27 + v15;
          v29 = v15;
          v30 = v12;
          if ( v28 >= v15 )
            v30 = v28;
          v15 = v30;
          v8 = v28 < v29 ? 0xC0000095 : 0;
          if ( v28 < v16 )
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
          v18 = 0;
          if ( *(_DWORD *)(a1 + 16) )
          {
            do
            {
              v20 = v12;
              v19 = *(_QWORD *)(a1 + 24);
              v21 = v15 + *(_DWORD *)(v19 + 16LL * v18 + 8);
              if ( v21 >= v15 )
                v20 = v15 + *(_DWORD *)(v19 + 16LL * v18 + 8);
              v8 = v21 < v15 ? 0xC0000095 : 0;
              if ( v21 < v15 )
                return v8;
              v22 = v20 + 4;
              v15 = v12;
              if ( v20 + 4 >= v20 )
                v15 = v20 + 4;
              v8 = v22 < v20 ? 0xC0000095 : 0;
              if ( v22 < v20 )
                return v8;
            }
            while ( ++v18 < *(_DWORD *)(a1 + 16) );
          }
LABEL_41:
          v31 = v15 + 3;
          if ( v15 + 3 >= v15 )
            LODWORD(v12) = v15 + 3;
          v8 = v31 < v15 ? 0xC0000095 : 0;
          if ( v31 < v15 )
            return v8;
          v32 = v12 & 0xFFFFFFFC;
          if ( *a3 < v32 )
          {
            *a3 = v32;
            return (unsigned int)-1073741789;
          }
          if ( a2 )
          {
            *a3 = v32;
            memset(a2, 0, v32);
            *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
            *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
            a2[2] = *(_DWORD *)(a1 + 12);
            a2[3] = *(_DWORD *)(a1 + 16);
            v33 = *(_DWORD *)(a1 + 16);
            if ( v33 )
              v10 = 4 * v33 + 16;
            *a2 = v10;
            memmove((char *)a2 + v10, *(const void **)a1, Size);
            v34 = *(unsigned __int16 *)(a1 + 8);
            v35 = Size + v10;
            v36 = (unsigned int *)((char *)a2 + v35);
            if ( *(_WORD *)(a1 + 8) )
            {
              if ( v34 <= 2 )
                goto LABEL_72;
              switch ( v34 )
              {
                case 3u:
                  for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                  {
                    a2[i + 4] = v35;
                    v8 = sub_180058198(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, v46);
                    if ( (v8 & 0x80000000) != 0 )
                      break;
                    v43 = LODWORD(v46[0]) + 2;
                    memmove(v42, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i), (unsigned int)(LODWORD(v46[0]) + 2));
                    v35 += v43;
                  }
                  return v8;
                case 5u:
LABEL_55:
                  for ( j = 0; j < *(_DWORD *)(a1 + 16); v36 = (unsigned int *)((char *)a2 + v35) )
                  {
                    a2[j + 4] = v35;
                    v38 = 2LL * j;
                    v39 = v35 + 4;
                    *v36 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                    v40 = *(_QWORD *)(a1 + 24);
                    if ( *(_DWORD *)(v40 + 16LL * j + 8) )
                      memmove((char *)a2 + v39, *(const void **)(v40 + 16LL * j), *(unsigned int *)(v40 + 16LL * j + 8));
                    ++j;
                    v35 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v38 + 8) + v39;
                  }
                  return v8;
                case 6u:
LABEL_72:
                  if ( *(_DWORD *)(a1 + 16) )
                  {
                    do
                    {
                      v44 = v3++;
                      a2[v44 + 4] = v35;
                      v35 += 8;
                      *(_QWORD *)v36 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v44);
                      v36 = (unsigned int *)((char *)a2 + v35);
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
      v23 = 0;
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_41;
      while ( 1 )
      {
        v8 = sub_180058198(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v23), 0xFFFFuLL, v46);
        if ( (v8 & 0x80000000) != 0 )
          break;
        if ( (unsigned int)(LODWORD(v46[0]) + 2) < LODWORD(v46[0]) )
          return (unsigned int)-1073741675;
        v24 = v15 + LODWORD(v46[0]) + 2;
        v25 = v15;
        v26 = v12;
        if ( v24 >= v15 )
          v26 = v15 + LODWORD(v46[0]) + 2;
        v15 = v26;
        v8 = v24 < v25 ? 0xC0000095 : 0;
        if ( v24 < v25 )
          break;
        if ( ++v23 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_41;
      }
    }
  }
  return v8;
}
