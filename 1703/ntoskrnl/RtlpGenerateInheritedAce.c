/*
 * XREFs of RtlpGenerateInheritedAce @ 0x140471860
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x140471690 (RtlpGenerateInheritAcl.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1404721D0 (RtlpCopyEffectiveAce.c)
 *     RtlpIsDuplicateAce @ 0x1404726C0 (RtlpIsDuplicateAce.c)
 */

__int64 RtlpGenerateInheritedAce(
        unsigned __int16 *Src,
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
        ...)
{
  __int64 v13; // r9
  unsigned int v14; // edi
  char v15; // r11
  char v16; // bp
  unsigned int v18; // r15d
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  bool v21; // r12
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rbx
  char v26; // al
  char v28; // al
  char v29; // al
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  char v32; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-54h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-50h]
  unsigned __int16 *Srca; // [rsp+E0h] [rbp+8h]
  __int64 v36; // [rsp+E8h] [rbp+10h] BYREF
  char v37; // [rsp+F0h] [rbp+18h]
  __int64 v38; // [rsp+F8h] [rbp+20h]
  _BYTE *v39; // [rsp+148h] [rbp+70h] BYREF
  va_list va; // [rsp+148h] [rbp+70h]
  va_list va1; // [rsp+150h] [rbp+78h] BYREF

  va_start(va1, a13);
  va_start(va, a13);
  v39 = va_arg(va1, _BYTE *);
  v38 = a4;
  v37 = a3;
  Srca = Src;
  v13 = (__int64)v39;
  v14 = 0;
  v15 = 0;
  v34 = 0LL;
  v16 = 0;
  v33 = 0;
  v32 = 0;
  *v39 = 0;
  v18 = 0;
  LOBYTE(v36) = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( a2 )
  {
    v28 = *((_BYTE *)Src + 1);
    if ( (v28 & 4) == 0 && ((v28 & 1) != 0 || (v28 & 2) != 0) )
      v21 = 1;
  }
  v22 = a12;
  v23 = 0;
  v24 = *(_WORD *)(a12 + 4);
  v25 = a12 + 8;
  if ( v24 )
  {
    while ( v25 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v23;
      v25 += *(unsigned __int16 *)(v25 + 2);
      if ( v23 >= v24 )
        goto LABEL_6;
    }
    return 3221225597LL;
  }
LABEL_6:
  if ( v25 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  v39 = (_BYTE *)v25;
  if ( !v25 )
    return 3221225597LL;
  v26 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v26 & 2) == 0 )
      goto LABEL_10;
  }
  else if ( (v26 & 1) == 0 )
  {
    goto LABEL_10;
  }
  v34 = v25;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)va,
                           (__int64)&v33,
                           a12,
                           v13,
                           (__int64)&v32,
                           (__int64)&v36) )
    return 3221225597LL;
  v16 = v36;
  v20 = v33;
  if ( !(_BYTE)v36 && v33 && (unsigned __int8)RtlpIsDuplicateAce(v22, v25) )
  {
    v15 = v32;
    --*(_WORD *)(v22 + 4);
    v19 = v20;
    Src = Srca;
    v20 = 0;
    v18 = 0;
  }
  else
  {
    v25 = (unsigned __int64)v39;
    v15 = v32;
    v18 = v20;
    Src = Srca;
  }
LABEL_10:
  if ( v21 )
  {
    if ( v20 && !v15 )
    {
      if ( !v16 )
      {
        v29 = *((_BYTE *)Src + 1);
        v30 = v34;
        *(_BYTE *)(v34 + 1) |= v29 & 3;
        if ( v37 )
          *(_BYTE *)(v30 + 1) |= 0x10u;
      }
      goto LABEL_11;
    }
    if ( *(_BYTE *)Src > 8u || *((_DWORD *)Src + 1) )
    {
      v18 += Src[1];
      if ( v18 <= 0xFFFF )
      {
        if ( Src[1] > (__int64)(v22 + *(unsigned __int16 *)(v22 + 2) - v25) )
        {
          v16 = 1;
        }
        else if ( !v16 )
        {
          memmove((void *)v25, Src, Src[1]);
          *(_BYTE *)(v25 + 1) |= 8u;
          ++*(_WORD *)(v22 + 4);
          if ( v37 )
          {
            *(_BYTE *)(v25 + 1) |= 0x10u;
            if ( (unsigned __int8)RtlpIsDuplicateAce(v22, v25) )
            {
              --*(_WORD *)(v22 + 4);
              v31 = Srca[1];
              if ( v19 <= v31 )
                v19 = Srca[1];
              v18 -= v31;
            }
          }
        }
        goto LABEL_11;
      }
      return 3221225597LL;
    }
  }
LABEL_11:
  *a11 = v18;
  *a13 = v19;
  if ( v16 )
    return (unsigned int)-1073741789;
  return v14;
}
