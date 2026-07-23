/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x140715DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x140715D50 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  unsigned __int16 Length; // bx
  __int64 v3; // r12
  PANSI_STRING v4; // r15
  PANSI_STRING v5; // r8
  void *v6; // r10
  char v7; // r11
  unsigned __int16 v8; // bp
  _STRING v10; // xmm0
  char *v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned __int8 v15; // r8
  int v16; // eax
  char *v18; // rdx
  char *v19; // r14
  unsigned int v20; // r13d
  unsigned __int16 v21; // r9
  __int16 v22; // bp
  char *Buffer; // rcx
  char v24; // dl
  __int16 v25; // ax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int16 v29; // cx
  unsigned __int16 v30; // ax
  __int16 v31; // di
  char *v32; // rdx
  char v33; // cl
  __int16 v34; // si
  char v35; // r8
  __int16 v36; // ax
  _OWORD *PoolWithTag; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int16 v43; // dx
  char *v44; // r11
  char v45; // r9
  __int16 v46; // r8
  __int16 v47; // ax
  __int16 v48; // di
  __int64 v49; // rax
  __int16 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // edi
  char *v54; // rax
  __int16 v55; // bx
  char v56; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v57; // [rsp+22h] [rbp-C6h]
  __int16 v58; // [rsp+24h] [rbp-C4h]
  __int16 v59; // [rsp+28h] [rbp-C0h]
  unsigned int v61; // [rsp+38h] [rbp-B0h]
  _STRING Namea; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD *v63; // [rsp+50h] [rbp-98h]
  int v64; // [rsp+58h] [rbp-90h]
  PANSI_STRING v65; // [rsp+60h] [rbp-88h]
  _WORD v66[16]; // [rsp+70h] [rbp-78h] BYREF
  char v67; // [rsp+90h] [rbp-58h] BYREF

  Length = Name->Length;
  LODWORD(v3) = 0;
  v65 = Name;
  v4 = Name;
  v5 = Expression;
  v59 = 0;
  v6 = 0LL;
  v63 = 0LL;
  v7 = 0;
  v56 = 0;
  if ( !Length )
    return Expression->Length + Length == 0;
  v8 = Expression->Length;
  if ( !Expression->Length )
    return Expression->Length + Length == 0;
  if ( v8 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v10 = *Expression;
    *(_QWORD *)&Namea.Length = *(_QWORD *)&Expression->Length;
    v11 = (char *)(_mm_srli_si128((__m128i)v10, 8).m128i_u64[0] + 1);
    v12 = (unsigned __int16)(v10.Length - 1);
    Namea.Buffer = v11;
    Namea.Length = v10.Length - 1;
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( Length >= (unsigned __int16)(v8 - 1) )
      {
        v13 = Length - (unsigned __int16)v12;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp(v11, &v4->Buffer[v13], (unsigned __int16)v12) == 0;
        v14 = 0;
        if ( !v13 )
          return memcmp(v11, &v4->Buffer[v13], (unsigned __int16)v12) == 0;
        do
        {
          v15 = v4->Buffer[v14];
          if ( v15 >= 0x80u )
            v16 = (NlsOemLeadByteInfoTable[v15] != 0) + 1;
          else
            v16 = 1;
          v14 += v16;
        }
        while ( v14 < v13 );
        if ( v14 <= v13 )
          return memcmp(v11, &v4->Buffer[v13], (unsigned __int16)v12) == 0;
      }
      return 0;
    }
    v5 = Expression;
    v6 = 0LL;
    v7 = 0;
  }
  v18 = (char *)v66;
  v66[0] = 0;
  *(_QWORD *)&Namea.Length = v66;
  v19 = &v67;
  v20 = 1;
  v57 = 0;
  v21 = 0;
  v22 = 2 * v8;
  do
  {
    if ( v21 >= v4->Length )
    {
      v56 = 1;
      v7 = 1;
      if ( *(_WORD *)&v18[2 * v20 - 2] == v22 )
        break;
    }
    else
    {
      Buffer = v4->Buffer;
      v24 = Buffer[v21];
      if ( (unsigned __int8)v24 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[(unsigned __int8)v24] )
      {
        v25 = 2;
        v59 = v24 + (Buffer[v21 + 1] << 8);
      }
      else
      {
        v59 = v24;
        v25 = 1;
      }
      v18 = *(char **)&Namea.Length;
      v21 += v25;
      v57 = v21;
    }
    v61 = 0;
    LODWORD(v26) = 0;
    do
    {
      v27 = (unsigned int)v3;
      v3 = (unsigned int)(v3 + 1);
      v28 = ((unsigned int)*(unsigned __int16 *)&v18[2 * v27] + 1) >> 1;
      v29 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v30 = v5->Length;
            if ( (_WORD)v28 == v5->Length )
              goto LABEL_81;
            LOWORD(v28) = v29 + v28;
            v31 = 2 * v28;
            if ( (_WORD)v28 == v30 )
            {
              v52 = (unsigned int)v26;
              LODWORD(v26) = v26 + 1;
              *(_WORD *)&v19[2 * v52] = v22;
              goto LABEL_81;
            }
            v32 = v5->Buffer;
            v64 = v30;
            if ( (unsigned __int16)v28 == v30 - 1
              && (v33 = v32[(unsigned __int16)v28], (unsigned __int8)v33 >= 0x80u)
              && (_BYTE)NlsMbOemCodePageTag
              && (v6 = v63, NlsOemLeadByteInfoTable[(unsigned __int8)v33]) )
            {
              v34 = v33;
              v58 = 1;
            }
            else
            {
              v35 = v32[(unsigned __int16)v28];
              if ( (unsigned __int8)v35 >= 0x80u
                && (_BYTE)NlsMbOemCodePageTag
                && NlsOemLeadByteInfoTable[(unsigned __int8)v35] )
              {
                v34 = v35 + (v32[(unsigned __int16)v28 + 1] << 8);
                v36 = 2;
              }
              else
              {
                v34 = v35;
                v36 = 1;
              }
              v5 = Expression;
              v58 = v36;
            }
            if ( (unsigned int)v26 >= 0xE && !v6 )
            {
              PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * (unsigned int)(v64 + 1), 0x64725346u);
              v38 = *(_OWORD *)v19;
              v5 = Expression;
              v6 = PoolWithTag;
              v63 = PoolWithTag;
              *PoolWithTag = v38;
              v39 = *((_OWORD *)v19 + 1);
              v19 = (char *)PoolWithTag;
              PoolWithTag[1] = v39;
              v40 = 2 * (unsigned int)Expression->Length + 2;
              v41 = *(_QWORD *)&Namea.Length;
              *(_OWORD *)((char *)PoolWithTag + 2 * v40) = *(_OWORD *)*(_QWORD *)&Namea.Length;
              *(_OWORD *)((char *)PoolWithTag + 2 * v40 + 16) = *(_OWORD *)(v41 + 16);
              *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * (unsigned int)Expression->Length + 4;
            }
            if ( v34 == 42 )
              goto LABEL_47;
            v7 = v56;
            if ( v34 != 60 )
              break;
            if ( v56 || v59 != 46 )
              goto LABEL_48;
            v21 = v57;
            v43 = v57;
            if ( v57 < v65->Length )
            {
              v44 = v65->Buffer;
              while ( 1 )
              {
                v45 = v44[v43];
                if ( (unsigned __int8)v45 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && NlsOemLeadByteInfoTable[(unsigned __int8)v45] )
                {
                  v46 = v45 + (v44[v43 + 1] << 8);
                  v47 = 2;
                }
                else
                {
                  v46 = v45;
                  v47 = 1;
                }
                if ( v46 == 46 )
                  break;
                v43 += v47;
                if ( v43 >= v65->Length )
                {
                  v5 = Expression;
                  v21 = v57;
                  v7 = 0;
                  goto LABEL_63;
                }
              }
              v5 = Expression;
              v6 = v63;
LABEL_47:
              v7 = v56;
LABEL_48:
              v21 = v57;
              v42 = (unsigned int)v26;
              v26 = (unsigned int)(v26 + 1);
              *(_WORD *)&v19[2 * v42] = v31;
              *(_WORD *)&v19[2 * v26] = v31 + 1;
              goto LABEL_49;
            }
LABEL_63:
            v6 = v63;
            *(_WORD *)&v19[2 * (unsigned int)v26] = v31 + 1;
LABEL_49:
            v29 = v58;
            LODWORD(v26) = v26 + 1;
          }
          v29 = v58;
          v48 = 2 * v58 + v31;
          if ( v34 != 62 )
            break;
          v21 = v57;
          if ( !v56 )
          {
            if ( v59 != 46 )
              goto LABEL_68;
            goto LABEL_71;
          }
        }
        if ( v34 != 34 )
          break;
        if ( !v56 )
        {
          v50 = v59;
          if ( v59 == 46 )
            goto LABEL_68;
          goto LABEL_77;
        }
LABEL_71:
        v21 = v57;
      }
      if ( v56 )
      {
        v21 = v57;
        goto LABEL_81;
      }
      if ( v34 == 63 )
      {
LABEL_68:
        v21 = v57;
        v49 = (unsigned int)v26;
        LODWORD(v26) = v26 + 1;
        *(_WORD *)&v19[2 * v49] = v48;
        goto LABEL_81;
      }
      v50 = v59;
LABEL_77:
      v21 = v57;
      if ( v34 == v50 )
      {
        v51 = (unsigned int)v26;
        LODWORD(v26) = v26 + 1;
        *(_WORD *)&v19[2 * v51] = v48;
      }
LABEL_81:
      v18 = *(char **)&Namea.Length;
      if ( (unsigned int)v3 >= v20 )
        break;
      v53 = v61;
      do
      {
        if ( v53 >= (unsigned int)v26 )
          break;
        for ( ; (unsigned int)v3 < v20; v3 = (unsigned int)(v3 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v3) >= *(_WORD *)&v19[2 * v53] )
            break;
        }
        ++v53;
      }
      while ( (unsigned int)v3 < v20 );
      v61 = v53;
    }
    while ( (unsigned int)v3 < v20 );
    LODWORD(v3) = 0;
    if ( !(_DWORD)v26 )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      return 0;
    }
    v4 = v65;
    v54 = *(char **)&Namea.Length;
    v18 = v19;
    *(_QWORD *)&Namea.Length = v19;
    v20 = v26;
    v19 = v54;
  }
  while ( !v7 );
  v55 = *(_WORD *)&v18[2 * v20 - 2];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v55 == v22;
}
