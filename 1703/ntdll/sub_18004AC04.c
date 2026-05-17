/*
 * XREFs of sub_18004AC04 @ 0x18004AC04
 * Callers:
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 *     sub_1800902F8 @ 0x1800902F8 (sub_1800902F8.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     sub_180049BCC @ 0x180049BCC (sub_180049BCC.c)
 *     RtlMapGenericMask @ 0x18004A040 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18004AC04(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        _DWORD *a13,
        __int64 a14)
{
  char v14; // r14
  _DWORD *v15; // r15
  _DWORD *v16; // r13
  unsigned __int8 v18; // al
  __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned int v21; // esi
  _BYTE *v22; // rdi
  bool v23; // al
  __int64 v24; // r13
  int v25; // ecx
  int v26; // eax
  int v28; // edx
  _BYTE *v29; // rsi
  char v30; // r15
  char v31; // al
  char v32; // r8
  int v33; // ecx
  _BYTE v35[11]; // [rsp+89h] [rbp-68h] BYREF
  int v36; // [rsp+94h] [rbp-5Dh]
  void *v37; // [rsp+98h] [rbp-59h] BYREF
  int v38; // [rsp+A0h] [rbp-51h]
  __int64 v39; // [rsp+A8h] [rbp-49h]
  __int64 v40; // [rsp+B0h] [rbp-41h]
  __int64 v41; // [rsp+B8h] [rbp-39h]
  __int64 v42; // [rsp+C0h] [rbp-31h]
  __int64 v43; // [rsp+C8h] [rbp-29h]
  __int64 v44; // [rsp+D0h] [rbp-21h]
  __int64 v45; // [rsp+D8h] [rbp-19h]
  int v46; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v47; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = (_DWORD *)a2;
  v16 = a13;
  v43 = a6;
  v42 = a7;
  v41 = a8;
  v40 = a9;
  v18 = *(_BYTE *)a14 - 2;
  v38 = a3;
  v39 = a2;
  v44 = a1;
  v45 = (__int64)a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(a14, &v37) )
    return 3221225597LL;
  v19 = a1 + 8;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)&v35[3] = 0;
  v36 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_29;
  v22 = v37;
  do
  {
    if ( *(_BYTE *)v19 != 17 )
    {
      if ( a12 == 3 )
        goto LABEL_26;
      goto LABEL_7;
    }
    if ( a12 != 3 )
      goto LABEL_26;
    if ( RtlFindAceByType(a14, 17, 0LL) )
      break;
    v20 = *(_DWORD *)&v35[3];
LABEL_7:
    switch ( v38 )
    {
      case 0:
        if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
          goto LABEL_13;
        v23 = 0;
LABEL_10:
        if ( !v23 )
          break;
LABEL_13:
        if ( !a5 )
        {
          v24 = *(unsigned __int16 *)(v19 + 2);
          if ( v22 && v24 <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v22 )
          {
            if ( !v14 )
            {
              memmove(v22, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
              if ( (*v22 <= 0xAu || (unsigned __int8)(*v22 - 13) <= 1u) && (v22[1] & 8) == 0 )
              {
                RtlMapGenericMask((_DWORD *)v22 + 1, v15);
                if ( *v22 <= 0xAu && (v25 = 1651, _bittest(&v25, (unsigned __int8)*v22)) )
                  v26 = v15[3];
                else
                  v26 = v15[3] | 0x1000000;
                *((_DWORD *)v22 + 1) &= v26;
              }
              v22[1] &= ~a4;
              ++*(_WORD *)(a14 + 4);
              goto LABEL_24;
            }
LABEL_58:
            v22 = (_BYTE *)(a14 + *(unsigned __int16 *)(a14 + 2));
            goto LABEL_25;
          }
          v14 = 1;
          goto LABEL_51;
        }
        v28 = 0;
        v35[0] = 0;
        v29 = v22;
        *(_DWORD *)&v35[7] = 0;
        LODWORD(v24) = 0;
        v37 = v22;
        if ( !a10 || (v30 = 1, (*(_BYTE *)(v19 + 1) & 3) == 0) )
          v30 = 0;
        if ( (*(_BYTE *)(v19 + 1) & 8) == 0 )
        {
          v31 = 0;
          if ( a11 )
            v31 = (*(_BYTE *)(v19 + 1) & 0x10) != 0;
          if ( !sub_180049BCC(
                  (char *)v19,
                  v31,
                  v30,
                  v43,
                  v42,
                  v41,
                  v40,
                  v39,
                  0LL,
                  0,
                  &v37,
                  &v35[7],
                  a14,
                  0LL,
                  v35,
                  &v35[1]) )
            return 3221225597LL;
          v28 = *(_DWORD *)&v35[7];
          LODWORD(v24) = *(_DWORD *)&v35[7];
          if ( v35[1] )
            v14 = 1;
          if ( !v14 && *(_DWORD *)&v35[7] )
          {
            v32 = a4;
            v29 = v37;
            v22[1] &= ~a4;
            goto LABEL_41;
          }
          v29 = v37;
        }
        v32 = a4;
LABEL_41:
        if ( v30 )
        {
          v46 = 0;
          v33 = *(_DWORD *)(v19 + 10);
          v47 = 768;
          if ( !v33 )
            v33 = *(unsigned __int16 *)(v19 + 14) - v47;
          if ( v28 && !v35[0] )
          {
            if ( v14 )
              goto LABEL_58;
            v22[1] = ~v32 & (v22[1] | *(_BYTE *)(v19 + 1) & 0x1F);
LABEL_24:
            v22 += (unsigned int)v24;
LABEL_25:
            v15 = (_DWORD *)v39;
            v21 = v24 + v36;
            v20 = *(_DWORD *)&v35[3];
            v36 += v24;
            break;
          }
          if ( *(_BYTE *)v19 > 8u || *(_DWORD *)(v19 + 4) || !v33 )
          {
            LODWORD(v24) = *(unsigned __int16 *)(v19 + 2) + (_DWORD)v24;
            if ( (unsigned int)v24 > 0xFFFF )
              return 3221225597LL;
            if ( *(unsigned __int16 *)(v19 + 2) > a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v29 )
            {
              v14 = 1;
              goto LABEL_58;
            }
            if ( v14 )
              goto LABEL_58;
            memmove(v29, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
            v29[1] = ~a4 & (v29[1] | 8);
            ++*(_WORD *)(a14 + 4);
          }
        }
LABEL_51:
        if ( v14 )
          goto LABEL_58;
        goto LABEL_24;
      case 1:
        v23 = (~*(_BYTE *)(v19 + 1) & 0x10) != 0;
        goto LABEL_10;
      case 2:
        goto LABEL_13;
    }
LABEL_26:
    ++v20;
    v19 += *(unsigned __int16 *)(v19 + 2);
    *(_DWORD *)&v35[3] = v20;
  }
  while ( v20 < *(unsigned __int16 *)(v44 + 4) );
  if ( v21 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v45;
LABEL_29:
  *v16 = v21;
  return v14 != 0 ? 0xC0000023 : 0;
}
