/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x140685EC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x140685E40 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  unsigned __int16 Length; // bx
  PANSI_STRING v3; // r11
  void *v5; // r9
  unsigned __int16 v6; // r14
  _STRING v8; // xmm0
  __int64 v9; // rdi
  char *v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  int v14; // eax
  char *v16; // rdx
  char *v17; // r15
  int v18; // edi
  unsigned __int16 v19; // si
  __int16 v20; // r14
  char *Buffer; // r8
  char v22; // dl
  __int16 v23; // ax
  __int64 v24; // r12
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned int v27; // ebp
  __int16 v28; // ax
  unsigned __int16 v29; // r8
  __int16 v30; // di
  char v31; // dl
  char *v32; // rcx
  __int16 v33; // si
  _OWORD *PoolWithTag; // rax
  _OWORD *v35; // rdx
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int16 v40; // r10
  unsigned __int16 v41; // r9
  char *v42; // r11
  char v43; // dl
  __int16 v44; // r8
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  char v49; // r8
  __int16 v50; // di
  __int64 v51; // rax
  unsigned int v52; // r10d
  char *v53; // rax
  __int16 v54; // bx
  __int16 v55; // bp
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v59; // [rsp+22h] [rbp-B6h]
  __int16 v60; // [rsp+24h] [rbp-B4h]
  __int16 v61; // [rsp+28h] [rbp-B0h]
  unsigned int v63; // [rsp+38h] [rbp-A0h]
  unsigned int v64; // [rsp+3Ch] [rbp-9Ch]
  _STRING Namea; // [rsp+40h] [rbp-98h] BYREF
  _OWORD *v66; // [rsp+50h] [rbp-88h]
  _WORD v67[16]; // [rsp+60h] [rbp-78h] BYREF
  char v68; // [rsp+80h] [rbp-58h] BYREF

  Length = Name->Length;
  v3 = Name;
  v61 = 0;
  v66 = 0LL;
  v5 = 0LL;
  v58 = 0;
  if ( !Length )
    return Length + Expression->Length == 0;
  v6 = Expression->Length;
  if ( !Expression->Length )
    return Length + Expression->Length == 0;
  if ( v6 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v8 = *Expression;
    *(_QWORD *)&Namea.Length = *(_QWORD *)&Expression->Length;
    v9 = --Namea.Length;
    v10 = (char *)(_mm_srli_si128((__m128i)v8, 8).m128i_u64[0] + 1);
    Namea.Buffer = v10;
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( Length >= (unsigned __int16)(v6 - 1) )
      {
        v11 = Length - (unsigned __int16)v9;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp(v10, &Name->Buffer[v11], (unsigned __int16)v9) == 0;
        v12 = 0;
        if ( !v11 )
          return memcmp(v10, &Name->Buffer[v11], (unsigned __int16)v9) == 0;
        do
        {
          v13 = Name->Buffer[v12];
          if ( v13 < 0x80u || (v14 = 2, !NlsOemLeadByteInfoTable[v13]) )
            v14 = 1;
          v12 += v14;
        }
        while ( v12 < v11 );
        if ( v12 <= v11 )
          return memcmp(v10, &Name->Buffer[v11], (unsigned __int16)v9) == 0;
      }
      return 0;
    }
    v3 = Name;
    v5 = 0LL;
  }
  v16 = (char *)v67;
  v67[0] = 0;
  *(_QWORD *)&Namea.Length = v67;
  v17 = &v68;
  v18 = 1;
  v64 = 1;
  v19 = 0;
  v59 = 0;
  v20 = 2 * v6;
  do
  {
    if ( v19 >= v3->Length )
    {
      v58 = 1;
      if ( *(_WORD *)&v16[2 * (v18 - 1)] == v20 )
        break;
    }
    else
    {
      Buffer = v3->Buffer;
      v22 = Buffer[v19];
      if ( (unsigned __int8)v22 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[(unsigned __int8)v22] )
      {
        v23 = 2;
        v61 = v22 + (Buffer[v19 + 1] << 8);
      }
      else
      {
        v61 = v22;
        v23 = 1;
      }
      v16 = *(char **)&Namea.Length;
      v19 += v23;
      v59 = v19;
    }
    v63 = 0;
    LODWORD(v24) = 0;
    v25 = 0;
    do
    {
      v26 = (unsigned int)v24;
      v24 = (unsigned int)(v24 + 1);
      v27 = ((unsigned int)*(unsigned __int16 *)&v16[2 * v26] + 1) >> 1;
      v28 = 0;
      while ( 1 )
      {
        v29 = Expression->Length;
        if ( (_WORD)v27 == Expression->Length )
          goto LABEL_95;
        LOWORD(v27) = v28 + v27;
        v30 = 2 * v27;
        if ( (_WORD)v27 == v29 )
          break;
        if ( (unsigned __int16)v27 == v29 - 1
          && (v31 = Expression->Buffer[(unsigned __int16)v27], (unsigned __int8)v31 >= 0x80u)
          && (_BYTE)NlsMbOemCodePageTag
          && NlsOemLeadByteInfoTable[(unsigned __int8)v31] )
        {
          v60 = 1;
        }
        else
        {
          v32 = Expression->Buffer;
          v31 = v32[(unsigned __int16)v27];
          if ( (unsigned __int8)v31 >= 0x80u )
          {
            if ( (_BYTE)NlsMbOemCodePageTag )
            {
              v5 = v66;
              if ( NlsOemLeadByteInfoTable[(unsigned __int8)v31] )
              {
                v33 = v31 + (v32[(unsigned __int16)v27 + 1] << 8);
                v60 = 2;
                goto LABEL_43;
              }
            }
          }
          v60 = 1;
        }
        v33 = v31;
LABEL_43:
        if ( v25 >= 0xE && !v5 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 8LL * v29 + 8, 0x64725346u);
          v35 = *(_OWORD **)&Namea.Length;
          v5 = PoolWithTag;
          v3 = Name;
          *PoolWithTag = *(_OWORD *)v17;
          v66 = PoolWithTag;
          v36 = *((_OWORD *)v17 + 1);
          v17 = (char *)PoolWithTag;
          PoolWithTag[1] = v36;
          v37 = Expression->Length;
          *(_OWORD *)((char *)PoolWithTag + 4 * v37 + 4) = *v35;
          *(_OWORD *)((char *)PoolWithTag + 4 * v37 + 20) = v35[1];
          *(_QWORD *)&Namea.Length = (char *)PoolWithTag + 4 * Expression->Length + 4;
        }
        if ( v33 == 42 )
        {
          v38 = v25;
          v39 = v25 + 1;
          *(_WORD *)&v17[2 * v38] = v30;
          *(_WORD *)&v17[2 * v39] = v30 + 1;
          v25 = v39 + 1;
          goto LABEL_48;
        }
        if ( v33 == 60 )
        {
          v19 = v59;
          if ( v58 || v61 != 46 )
            goto LABEL_64;
          v40 = v3->Length;
          v41 = v59;
          if ( v59 >= v3->Length )
          {
LABEL_62:
            v5 = v66;
            v46 = v25++;
            *(_WORD *)&v17[2 * v46] = v30 + 1;
            v28 = v60;
          }
          else
          {
            v42 = v3->Buffer;
            while ( 1 )
            {
              v43 = v42[v41];
              if ( (unsigned __int8)v43 >= 0x80u
                && (_BYTE)NlsMbOemCodePageTag
                && (v19 = v59, NlsOemLeadByteInfoTable[(unsigned __int8)v43]) )
              {
                v44 = v43 + (v42[v41 + 1] << 8);
                v45 = 2;
              }
              else
              {
                v44 = v43;
                v45 = 1;
              }
              if ( v44 == 46 )
                break;
              v41 += v45;
              if ( v41 >= v40 )
              {
                v3 = Name;
                goto LABEL_62;
              }
            }
            v5 = v66;
LABEL_64:
            v3 = Name;
            v47 = v25;
            v48 = v25 + 1;
            *(_WORD *)&v17[2 * v47] = v30;
            v28 = v60;
            *(_WORD *)&v17[2 * v48] = v30 + 1;
            v25 = v48 + 1;
          }
        }
        else
        {
          v49 = v58;
          v50 = 2 * v60 + v30;
          if ( v33 == 62 )
          {
            v28 = v60;
            v19 = v59;
            if ( !v58 )
            {
              if ( v61 != 46 )
                goto LABEL_68;
LABEL_48:
              v28 = v60;
              v19 = v59;
            }
          }
          else
          {
            if ( v33 != 34 )
            {
              if ( !v58 )
              {
                if ( v33 == 63 )
                {
                  v56 = v25++;
                  *(_WORD *)&v17[2 * v56] = v50;
                }
                else
                {
                  v55 = v61;
LABEL_92:
                  if ( v33 == v55 )
                  {
LABEL_68:
                    v51 = v25++;
                    *(_WORD *)&v17[2 * v51] = v50;
                  }
                }
              }
              v19 = v59;
              goto LABEL_70;
            }
            if ( !v58 )
            {
              v55 = v61;
              if ( v61 == 46 )
                goto LABEL_68;
              goto LABEL_92;
            }
            v28 = v60;
            v19 = v59;
          }
        }
      }
      v57 = v25++;
      *(_WORD *)&v17[2 * v57] = v20;
LABEL_95:
      v49 = v58;
LABEL_70:
      v16 = *(char **)&Namea.Length;
      if ( (unsigned int)v24 >= v64 )
        break;
      v52 = v63;
      do
      {
        if ( v52 >= v25 )
          break;
        for ( ; (unsigned int)v24 < v64; v24 = (unsigned int)(v24 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v24) >= *(_WORD *)&v17[2 * v52] )
            break;
        }
        ++v52;
      }
      while ( (unsigned int)v24 < v64 );
      v63 = v52;
    }
    while ( (unsigned int)v24 < v64 );
    if ( !v25 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0;
    }
    v64 = v25;
    v53 = *(char **)&Namea.Length;
    v16 = v17;
    *(_QWORD *)&Namea.Length = v17;
    v18 = v25;
    v17 = v53;
  }
  while ( !v49 );
  v54 = *(_WORD *)&v16[2 * (v18 - 1)];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v54 == v20;
}
