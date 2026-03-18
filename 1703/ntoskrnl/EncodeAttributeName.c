/*
 * XREFs of EncodeAttributeName @ 0x1406FCABC
 * Callers:
 *     GetPrintableAttributeName @ 0x1406FD8D0 (GetPrintableAttributeName.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406FF890 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     IsEncodedAttributeChar @ 0x1406FE440 (IsEncodedAttributeChar.c)
 */

__int64 __fastcall EncodeAttributeName(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v6; // rsi
  __int64 v7; // rbp
  PVOID v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rbp

  v3 = 0;
  v6 = a1;
  LODWORD(v7) = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v8 = SddlpAlloc(5 * a2 + 2LL);
    *a3 = (__int64)v8;
    if ( v8 )
    {
      v9 = a2 >> 1;
      if ( (_DWORD)v9 )
      {
        do
        {
          if ( (unsigned __int8)IsEncodedAttributeChar(*v6) )
          {
            v10 = *a3;
            v11 = (unsigned int)v7;
            v12 = (unsigned int)(v7 + 1);
            *(_WORD *)(v10 + 2 * v11) = 37;
            *(_WORD *)(v10 + 2 * v12) = a0123456789abcd[*v6 >> 12];
            v13 = (unsigned int)(v12 + 1);
            *(_WORD *)(v10 + 2 * v13) = a0123456789abcd[*((_BYTE *)v6 + 1) & 0xF];
            v14 = (unsigned int)(v13 + 1);
            *(_WORD *)(v10 + 2 * v14) = a0123456789abcd[(*v6 >> 4) & 0xF];
            v7 = (unsigned int)(v14 + 1);
            *(_WORD *)(v10 + 2 * v7) = a0123456789abcd[*(_BYTE *)v6 & 0xF];
          }
          else
          {
            *(_WORD *)(*a3 + 2LL * (unsigned int)v7) = *v6;
          }
          ++v6;
          LODWORD(v7) = v7 + 1;
          --v9;
        }
        while ( v9 );
      }
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
