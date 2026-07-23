/*
 * XREFs of RtlpGenerateInheritedAce @ 0x180055AD4
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x1800558EC (RtlpGenerateInheritAcl.c)
 * Callees:
 *     RtlpIsDuplicateAce @ 0x180055DB8 (RtlpIsDuplicateAce.c)
 *     RtlpCopyEffectiveAce @ 0x180055F34 (RtlpCopyEffectiveAce.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  __int64 v14; // r9
  unsigned int v15; // r12d
  char v16; // si
  unsigned int v17; // r15d
  char v18; // r10
  unsigned __int64 v19; // r13
  char v21; // al
  unsigned int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned int v26; // eax
  char v27; // [rsp+88h] [rbp-9h] BYREF
  char v28; // [rsp+89h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+8Ch] [rbp-5h]
  __int64 v30[7]; // [rsp+90h] [rbp-1h] BYREF
  bool v31; // [rsp+E0h] [rbp+4Fh]

  v14 = (__int64)a14;
  v15 = 0;
  v29 = 0;
  v16 = 0;
  v17 = 0;
  v27 = 0;
  v18 = 0;
  LODWORD(v30[0]) = 0;
  v19 = 0LL;
  *a14 = 0;
  v28 = 0;
  v31 = 0;
  if ( a2 )
  {
    v21 = Src[1];
    if ( (v21 & 4) == 0 && ((v21 & 1) != 0 || (v21 & 2) != 0) )
      v31 = 1;
  }
  v22 = 0;
  v23 = a12 + 8;
  if ( *(_WORD *)(a12 + 4) )
  {
    while ( v23 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v22;
      v23 += *(unsigned __int16 *)(v23 + 2);
      if ( v22 >= *(unsigned __int16 *)(a12 + 4) )
        goto LABEL_10;
    }
    return 3221225597LL;
  }
LABEL_10:
  if ( v23 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  a14 = (_BYTE *)v23;
  if ( !v23 )
    return 3221225597LL;
  if ( a2 )
  {
    if ( (Src[1] & 2) != 0 )
    {
LABEL_14:
      v19 = v23;
      if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                               Src,
                               a5,
                               a6,
                               a7,
                               GenericMapping,
                               a9,
                               a10,
                               (__int64)&a14,
                               (__int64)v30,
                               a12,
                               v14,
                               (__int64)&v28,
                               (__int64)&v27) )
        return 3221225597LL;
      v16 = v27;
      v17 = v30[0];
      if ( !v27 && LODWORD(v30[0]) && (unsigned __int8)RtlpIsDuplicateAce(a12, v23) )
      {
        v29 = v17;
        --*(_WORD *)(a12 + 4);
        v17 = 0;
      }
      else
      {
        v23 = (unsigned __int64)a14;
      }
      v18 = v28;
      v15 = v17;
    }
  }
  else if ( (Src[1] & 1) != 0 )
  {
    goto LABEL_14;
  }
  if ( !v31 )
    goto LABEL_21;
  if ( v17 && !v18 )
  {
    if ( !v16 )
    {
      *(_BYTE *)(v19 + 1) |= Src[1] & 3;
      if ( a3 )
        *(_BYTE *)(v19 + 1) |= 0x10u;
    }
    goto LABEL_21;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_21:
    v24 = v29;
    *a11 = v15;
    *a13 = v24;
    return v16 != 0 ? 0xC0000023 : 0;
  }
  v15 += *((unsigned __int16 *)Src + 1);
  if ( v15 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)(a12 + *(unsigned __int16 *)(a12 + 2) - v23) )
    {
      v16 = 1;
    }
    else if ( !v16 )
    {
      memmove((void *)v23, Src, *((unsigned __int16 *)Src + 1));
      *(_BYTE *)(v23 + 1) |= 8u;
      ++*(_WORD *)(a12 + 4);
      if ( a3 )
      {
        *(_BYTE *)(v23 + 1) |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v23) )
        {
          --*(_WORD *)(a12 + 4);
          v26 = *((unsigned __int16 *)Src + 1);
          v15 -= v26;
          if ( v29 > v26 )
            v26 = v29;
          v29 = v26;
        }
      }
    }
    goto LABEL_21;
  }
  return 3221225597LL;
}
