/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x1406B12D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1406B1260 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  unsigned __int16 Length; // bx
  PANSI_STRING v3; // r11
  void *v5; // r9
  char v6; // r10
  unsigned __int16 v7; // r14
  _STRING v9; // xmm0
  unsigned __int16 v10; // di
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned __int8 v15; // r8
  int v16; // eax
  char *v18; // rdx
  char *v19; // r15
  int v20; // edi
  unsigned __int16 v21; // r8
  __int16 v22; // r14
  char *Buffer; // rcx
  char v24; // dl
  __int16 v25; // ax
  __int64 v26; // r12
  __int64 v27; // rbx
  unsigned int v28; // ebp
  unsigned int v29; // ebp
  __int16 v30; // cx
  unsigned __int16 v31; // ax
  __int16 v32; // di
  int v33; // r8d
  char v34; // dl
  char *v35; // r8
  __int16 v36; // ax
  __int16 v37; // si
  _OWORD *PoolWithTag; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int16 v44; // r10
  unsigned __int16 v45; // dx
  char *v46; // r11
  char v47; // r9
  __int16 v48; // r8
  __int16 v49; // ax
  __int64 v50; // rax
  __int16 v51; // di
  __int16 v52; // bp
  __int64 v53; // rax
  unsigned int v54; // ebp
  char *v55; // rax
  __int16 v56; // bx
  char v57; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v58; // [rsp+22h] [rbp-B6h]
  __int16 v59; // [rsp+24h] [rbp-B4h]
  __int16 v60; // [rsp+28h] [rbp-B0h]
  int v62; // [rsp+38h] [rbp-A0h]
  unsigned int v63; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v64; // [rsp+40h] [rbp-98h]
  _STRING Namea; // [rsp+48h] [rbp-90h] BYREF
  _OWORD *v66; // [rsp+58h] [rbp-80h]
  _WORD v67[16]; // [rsp+60h] [rbp-78h] BYREF
  char v68; // [rsp+80h] [rbp-58h] BYREF

  Length = Name->Length;
  v3 = Name;
  v60 = 0;
  v66 = 0LL;
  v5 = 0LL;
  v57 = 0;
  v6 = 0;
  if ( !Length )
    return Length + Expression->Length == 0;
  v7 = Expression->Length;
  if ( !Expression->Length )
    return Length + Expression->Length == 0;
  if ( v7 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v9 = *Expression;
    *(_QWORD *)&Namea.Length = *(_QWORD *)&v9.Length;
    v10 = v9.Length;
    v11 = _mm_srli_si128((__m128i)v9, 8).m128i_u64[0];
    v12 = (unsigned __int16)(v10 - 1);
    Namea.Length = v12;
    Namea.Buffer = (char *)(v11 + 1);
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( Length >= (unsigned __int16)(v7 - 1) )
      {
        v13 = Length - (unsigned __int16)v12;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp((const void *)(v11 + 1), &Name->Buffer[v13], (unsigned __int16)v12) == 0;
        v14 = 0;
        if ( !v13 )
          return memcmp((const void *)(v11 + 1), &Name->Buffer[v13], (unsigned __int16)v12) == 0;
        do
        {
          v15 = Name->Buffer[v14];
          if ( v15 >= 0x80u )
            v16 = (NlsOemLeadByteInfoTable[v15] != 0) + 1;
          else
            v16 = 1;
          v14 += v16;
        }
        while ( v14 < v13 );
        if ( v14 <= v13 )
          return memcmp((const void *)(v11 + 1), &Name->Buffer[v13], (unsigned __int16)v12) == 0;
      }
      return 0;
    }
    v3 = Name;
    v5 = 0LL;
    v6 = 0;
  }
  v18 = (char *)v67;
  v67[0] = 0;
  *(_QWORD *)&Namea.Length = v67;
  v19 = &v68;
  v20 = 1;
  v64 = 1;
  v21 = 0;
  v58 = 0;
  v22 = 2 * v7;
  do
  {
    if ( v21 >= v3->Length )
    {
      v57 = 1;
      v6 = 1;
      if ( *(_WORD *)&v18[2 * (v20 - 1)] == v22 )
        break;
    }
    else
    {
      Buffer = v3->Buffer;
      v24 = Buffer[v21];
      if ( (unsigned __int8)v24 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[(unsigned __int8)v24] )
      {
        v25 = 2;
        v60 = v24 + (Buffer[v21 + 1] << 8);
      }
      else
      {
        v60 = v24;
        v25 = 1;
      }
      v18 = *(char **)&Namea.Length;
      v21 += v25;
      v58 = v21;
    }
    v63 = 0;
    LODWORD(v26) = 0;
    LODWORD(v27) = 0;
    do
    {
      v28 = *(unsigned __int16 *)&v18[2 * (unsigned int)v26] + 1;
      v26 = (unsigned int)(v26 + 1);
      v29 = v28 >> 1;
      v30 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = Expression->Length;
            if ( (_WORD)v29 == Expression->Length )
              goto LABEL_82;
            LOWORD(v29) = v30 + v29;
            v32 = 2 * v29;
            if ( (_WORD)v29 == v31 )
            {
              v53 = (unsigned int)v27;
              LODWORD(v27) = v27 + 1;
              *(_WORD *)&v19[2 * v53] = v22;
              goto LABEL_82;
            }
            v33 = v31;
            v62 = v31;
            if ( (unsigned __int16)v29 == v31 - 1 )
            {
              v34 = Expression->Buffer[(unsigned __int16)v29];
              if ( (unsigned __int8)v34 >= 0x80u
                && (_BYTE)NlsMbOemCodePageTag
                && NlsOemLeadByteInfoTable[(unsigned __int8)v34] )
              {
                v59 = 1;
LABEL_42:
                v37 = v34;
                goto LABEL_43;
              }
            }
            v35 = Expression->Buffer;
            v34 = v35[(unsigned __int16)v29];
            if ( (unsigned __int8)v34 < 0x80u
              || !(_BYTE)NlsMbOemCodePageTag
              || !NlsOemLeadByteInfoTable[(unsigned __int8)v34] )
            {
              v33 = v31;
              v59 = 1;
              goto LABEL_42;
            }
            v36 = v35[(unsigned __int16)v29 + 1];
            v33 = v62;
            v37 = v34 + (v36 << 8);
            v59 = 2;
LABEL_43:
            if ( (unsigned int)v27 >= 0xE && !v5 )
            {
              PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * (unsigned int)(v33 + 1), 0x64725346u);
              v39 = *(_OWORD *)v19;
              v3 = Name;
              v5 = PoolWithTag;
              v66 = PoolWithTag;
              *PoolWithTag = v39;
              v40 = *((_OWORD *)v19 + 1);
              v19 = (char *)PoolWithTag;
              PoolWithTag[1] = v40;
              v41 = 2 * (unsigned int)Expression->Length + 2;
              v42 = *(_QWORD *)&Namea.Length;
              *(_OWORD *)((char *)PoolWithTag + 2 * v41) = *(_OWORD *)*(_QWORD *)&Namea.Length;
              *(_OWORD *)((char *)PoolWithTag + 2 * v41 + 16) = *(_OWORD *)(v42 + 16);
              *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * (unsigned int)Expression->Length + 4;
            }
            if ( v37 == 42 )
            {
              v21 = v58;
              v43 = (unsigned int)v27;
              v27 = (unsigned int)(v27 + 1);
              *(_WORD *)&v19[2 * v43] = v32;
              *(_WORD *)&v19[2 * v27] = v32 + 1;
LABEL_48:
              v6 = v57;
              goto LABEL_49;
            }
            v6 = v57;
            if ( v37 != 60 )
              break;
            if ( !v57 && v60 == 46 )
            {
              v21 = v58;
              v44 = v3->Length;
              v45 = v58;
              if ( v58 >= v3->Length )
              {
LABEL_63:
                *(_WORD *)&v19[2 * (unsigned int)v27] = v32 + 1;
                goto LABEL_48;
              }
              v46 = v3->Buffer;
              while ( 1 )
              {
                v47 = v46[v45];
                if ( (unsigned __int8)v47 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && NlsOemLeadByteInfoTable[(unsigned __int8)v47] )
                {
                  v48 = v47 + (v46[v45 + 1] << 8);
                  v49 = 2;
                }
                else
                {
                  v48 = v47;
                  v49 = 1;
                }
                if ( v48 == 46 )
                  break;
                v45 += v49;
                if ( v45 >= v44 )
                {
                  v5 = v66;
                  v3 = Name;
                  v21 = v58;
                  goto LABEL_63;
                }
              }
              v5 = v66;
              v6 = 0;
            }
            v3 = Name;
            v21 = v58;
            v50 = (unsigned int)v27;
            v27 = (unsigned int)(v27 + 1);
            *(_WORD *)&v19[2 * v50] = v32;
            *(_WORD *)&v19[2 * v27] = v32 + 1;
LABEL_49:
            v30 = v59;
            LODWORD(v27) = v27 + 1;
          }
          v30 = v59;
          v51 = 2 * v59 + v32;
          if ( v37 != 62 )
            break;
          v21 = v58;
          if ( !v57 )
          {
            if ( v60 != 46 )
              goto LABEL_69;
            goto LABEL_72;
          }
        }
        if ( v37 != 34 )
          break;
        if ( !v57 )
        {
          v52 = v60;
          if ( v60 == 46 )
            goto LABEL_69;
          goto LABEL_78;
        }
LABEL_72:
        v21 = v58;
      }
      if ( v57 )
      {
        v21 = v58;
        goto LABEL_82;
      }
      if ( v37 == 63 )
      {
LABEL_69:
        v21 = v58;
        *(_WORD *)&v19[2 * (unsigned int)v27] = v51;
        LODWORD(v27) = v27 + 1;
        goto LABEL_82;
      }
      v52 = v60;
LABEL_78:
      v21 = v58;
      if ( v37 == v52 )
      {
        *(_WORD *)&v19[2 * (unsigned int)v27] = v51;
        LODWORD(v27) = v27 + 1;
      }
LABEL_82:
      v18 = *(char **)&Namea.Length;
      if ( (unsigned int)v26 >= v64 )
        break;
      v54 = v63;
      do
      {
        if ( v54 >= (unsigned int)v27 )
          break;
        for ( ; (unsigned int)v26 < v64; v26 = (unsigned int)(v26 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v26) >= *(_WORD *)&v19[2 * v54] )
            break;
        }
        ++v54;
      }
      while ( (unsigned int)v26 < v64 );
      v5 = v66;
      v63 = v54;
    }
    while ( (unsigned int)v26 < v64 );
    if ( !(_DWORD)v27 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0;
    }
    v64 = v27;
    v55 = *(char **)&Namea.Length;
    v18 = v19;
    *(_QWORD *)&Namea.Length = v19;
    v20 = v27;
    v19 = v55;
  }
  while ( !v6 );
  v56 = *(_WORD *)&v18[2 * (v20 - 1)];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v56 == v22;
}
