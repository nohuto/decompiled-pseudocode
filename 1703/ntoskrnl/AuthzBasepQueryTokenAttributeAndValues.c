/*
 * XREFs of AuthzBasepQueryTokenAttributeAndValues @ 0x1402637A8
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     AuthzBasepFindTokenAttribute @ 0x140263734 (AuthzBasepFindTokenAttribute.c)
 */

__int64 __fastcall AuthzBasepQueryTokenAttributeAndValues(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  _UNKNOWN **TokenAttribute; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rcx
  _QWORD *v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 8) != 1 )
      return (unsigned int)-2147483622;
    v13 = *(_QWORD *)(a1 + 8);
    v8 = (_QWORD *)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 64) + 1;
    if ( v14 > 0x24 )
      return (unsigned int)-2147483622;
    do
    {
      v15 = *(_QWORD *)(v13 + 72);
      if ( _bittest64(&v15, v14) )
        break;
      ++v14;
    }
    while ( v14 <= 0x24 );
    if ( v14 > 0x24 )
      return (unsigned int)-2147483622;
    *v8 = v14;
    goto LABEL_27;
  }
  TokenAttribute = AuthzBasepFindTokenAttribute((const void **)(a1 + 16));
  if ( TokenAttribute )
  {
    *(_QWORD *)(a1 + 56) = TokenAttribute;
    *(_WORD *)(a1 + 32) = *((_WORD *)TokenAttribute + 6);
    if ( *((_DWORD *)TokenAttribute + 2) == 1 )
    {
      v7 = (__int64 *)(a1 + 64);
      v9 = 2;
      v10 = 2LL;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      do
      {
        if ( _bittest64(&v11, v9) )
        {
          v12 = *v7;
          ++*(_DWORD *)(a1 + 40);
          if ( !v12 )
            v12 = v10;
          *v7 = v12;
        }
        ++v9;
        ++v10;
      }
      while ( v9 <= 0x24 );
      if ( !*(_DWORD *)(a1 + 40) )
        return (unsigned int)-1073741275;
      goto LABEL_20;
    }
    if ( *((_DWORD *)TokenAttribute + 2) != 2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL);
      if ( *((_DWORD *)TokenAttribute + 2) == 3 )
      {
        if ( !v5 )
          return (unsigned int)-1073741275;
        v6 = *(unsigned int *)(v5 + 8);
      }
      else
      {
        if ( !v5 )
          return (unsigned int)-1073741275;
        v6 = *(unsigned int *)(v5 + 12);
      }
      v7 = (__int64 *)(a1 + 64);
      *(_DWORD *)(a1 + 40) = 1;
      *(_QWORD *)(a1 + 64) = v6;
LABEL_20:
      *(_QWORD *)(a1 + 48) = v7;
      return v2;
    }
    SepCopyTokenIntegrity();
    v8 = (_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = *(unsigned int *)(v17 + 8);
    *(_DWORD *)(a1 + 40) = 1;
LABEL_27:
    *(_QWORD *)(a1 + 48) = v8;
    return v2;
  }
  return (unsigned int)-1073741275;
}
