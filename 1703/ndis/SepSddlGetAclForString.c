/*
 * XREFs of SepSddlGetAclForString @ 0x1C00F3230
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00F316C (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00F3084 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00F3590 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00F3658 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00F36EC (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // r14d
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  int v12; // r8d
  wchar_t *i; // rax
  unsigned int v14; // r12d
  _QWORD *v15; // rax
  unsigned int v16; // r15d
  _WORD *PoolWithTag; // r14
  unsigned int v18; // r13d
  ACCESS_MASK AccessMask; // r15d
  const wchar_t *v20; // rbx
  wchar_t *j; // rbx
  __int64 v22; // rax
  wchar_t *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  _WORD *v26; // rax
  wchar_t *v27; // rbx
  const void **v28; // rbx
  wchar_t *v29; // [rsp+40h] [rbp-28h] BYREF
  _WORD *v30; // [rsp+48h] [rbp-20h]
  PSID Sid; // [rsp+50h] [rbp-18h]
  ACCESS_MASK v32; // [rsp+B0h] [rbp+48h] BYREF
  const void **v33; // [rsp+B8h] [rbp+50h]
  int v34; // [rsp+C0h] [rbp+58h] BYREF
  int v35; // [rsp+C8h] [rbp+60h]

  v33 = a2;
  *a2 = 0LL;
  v5 = Str1;
  Sid = 0LL;
  SidForString = 0;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *a3 = v11;
  v12 = 0;
  for ( i = v5; i < *a3; ++i )
  {
    if ( *i == 59 )
    {
      ++v7;
    }
    else if ( *i != 32 )
    {
      v12 = 1;
    }
  }
  v14 = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && v12 )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *v33 = PoolWithTag;
    if ( PoolWithTag )
    {
      v34 = 8;
      memset(PoolWithTag, 0, v16);
      *PoolWithTag = 2;
      PoolWithTag[1] = v16;
      v18 = 0;
      *((_DWORD *)PoolWithTag + 1) = 0;
      while ( 1 )
      {
        AccessMask = 0;
        v32 = 0;
        while ( *v5 == 32 )
          ++v5;
        v20 = v5 + 1;
        if ( *v5 != 40 )
          v20 = v5;
        while ( *v20 == 32 )
          ++v20;
        if ( _wcsnicmp(v20, L"A", 1uLL) )
          break;
        for ( j = (wchar_t *)(v20 + 2); *j == 32; ++j )
          ;
        if ( *j != 59 )
        {
          SidForString = -1073741811;
          goto LABEL_76;
        }
        do
          ++j;
        while ( *j == 32 );
        if ( *j != 59 )
        {
          do
          {
            while ( *j == 32 )
              ++j;
            if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
            {
              AccessMask |= v35;
              v23 = v29;
              v32 = AccessMask;
            }
            else
            {
              SepSddlParseWideStringUlong(j, &v29, &v32);
              v23 = v29;
              AccessMask = v32;
              if ( v29 == j )
              {
                SidForString = -1073741811;
                goto LABEL_41;
              }
            }
            j = v23;
          }
          while ( *v23 != 59 );
        }
        ++j;
LABEL_41:
        if ( SidForString )
          goto LABEL_76;
        v22 = 2LL;
        do
        {
          while ( *j == 32 )
            ++j;
          if ( *j != 59 )
            SidForString = -1073741811;
          ++j;
          --v22;
        }
        while ( v22 );
        if ( SidForString )
          goto LABEL_76;
        while ( *j == 32 )
          ++j;
        SidForString = SepSddlGetSidForString(j);
        if ( SidForString )
          goto LABEL_76;
        v26 = v30;
        if ( !v30 )
          goto LABEL_72;
        if ( *v30 == 32 )
        {
          do
            ++v26;
          while ( *v26 == 32 );
          v30 = v26;
        }
        if ( *v26 != 41 )
        {
LABEL_72:
          SidForString = -1073741705;
          goto LABEL_76;
        }
        v27 = v26 + 1;
        if ( Sid )
        {
          SidForString = SepSddlAddAceToAcl(v33, &v34, v24, v25, AccessMask, v14 - v18, Sid);
          if ( SidForString )
            goto LABEL_76;
        }
        ++v18;
        v5 = v27 + 1;
        if ( *v27 != 40 )
          v5 = v27;
        if ( v18 >= v14 )
          goto LABEL_75;
      }
      SidForString = -1073741811;
LABEL_75:
      if ( SidForString )
      {
LABEL_76:
        v28 = v33;
        ExFreePoolWithTag((PVOID)*v33, 0);
        *v28 = 0LL;
        return SidForString;
      }
      *((_WORD *)*v33 + 1) = v34;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *a2 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = 524290LL;
  return SidForString;
}
