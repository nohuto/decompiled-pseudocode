/*
 * XREFs of SepSddlGetAclForString @ 0x1C00FEAC4
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00FE9F0 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00FE908 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00FEE38 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00FEF04 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00FEF98 (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // ebx
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rcx
  wchar_t *v12; // rax
  int i; // r8d
  unsigned int v14; // r13d
  _QWORD *PoolWithTag; // rax
  unsigned int v16; // r15d
  _WORD *v17; // r14
  unsigned int v18; // r12d
  ACCESS_MASK AccessMask; // r15d
  const wchar_t *v20; // rbx
  wchar_t v21; // cx
  wchar_t *j; // rbx
  wchar_t v23; // ax
  wchar_t *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _WORD *v28; // rax
  wchar_t *v29; // rbx
  const void **v30; // rbx
  _WORD *v31; // rcx
  wchar_t *v32; // [rsp+40h] [rbp-28h] BYREF
  _WORD *v33; // [rsp+48h] [rbp-20h]
  PSID Sid; // [rsp+50h] [rbp-18h]
  ACCESS_MASK v35; // [rsp+B0h] [rbp+48h] BYREF
  const void **v36; // [rsp+B8h] [rbp+50h]
  int v37; // [rsp+C0h] [rbp+58h] BYREF
  int v38; // [rsp+C8h] [rbp+60h]

  v36 = a2;
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
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 48 * v14 + 8;
  if ( v16 > 0xFFFF )
    v16 = 0xFFFF;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
  *v36 = v17;
  if ( !v17 )
    return (unsigned int)-1073741670;
  v37 = 8;
  memset(v17, 0, v16);
  *v17 = 2;
  v17[1] = v16;
  v18 = 0;
  *((_DWORD *)v17 + 1) = 0;
LABEL_25:
  AccessMask = 0;
  v35 = 0;
  while ( *v5 == 32 )
    ++v5;
  v20 = v5 + 1;
  v21 = *v5;
  if ( *v5 == 40 )
    v21 = *v20;
  else
    v20 = v5;
  if ( v21 == 32 )
  {
    do
      ++v20;
    while ( *v20 == 32 );
  }
  if ( !_wcsnicmp(v20, L"A", 1uLL) )
  {
    for ( j = (wchar_t *)(v20 + 2); *j == 32; ++j )
      ;
    if ( *j == 59 )
    {
      do
        v23 = *++j;
      while ( *j == 32 );
      while ( 1 )
      {
        if ( v23 == 59 )
        {
          ++j;
          goto LABEL_48;
        }
        if ( v23 == 32 )
        {
          do
            ++j;
          while ( *j == 32 );
        }
        if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
        {
          AccessMask |= v38;
          v24 = v32;
          v35 = AccessMask;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v32, &v35);
          v24 = v32;
          AccessMask = v35;
          if ( v32 == j )
          {
            SidForString = -1073741811;
LABEL_48:
            if ( SidForString )
              goto LABEL_74;
            v25 = 2LL;
            do
            {
              while ( *j == 32 )
                ++j;
              if ( *j != 59 )
                SidForString = -1073741811;
              ++j;
              --v25;
            }
            while ( v25 );
            if ( SidForString )
              goto LABEL_74;
            while ( *j == 32 )
              ++j;
            SidForString = SepSddlGetSidForString(j);
            if ( SidForString )
              goto LABEL_74;
            v28 = v33;
            if ( !v33 )
              goto LABEL_72;
            if ( *v33 == 32 )
            {
              do
                ++v28;
              while ( *v28 == 32 );
              v33 = v28;
            }
            if ( *v28 != 41 )
            {
LABEL_72:
              SidForString = -1073741705;
              goto LABEL_74;
            }
            v29 = v28 + 1;
            if ( Sid )
            {
              SidForString = SepSddlAddAceToAcl(v36, &v37, v26, v27, AccessMask, v14 - v18, Sid);
              if ( SidForString )
                goto LABEL_74;
            }
            v5 = v29 + 1;
            ++v18;
            if ( *v29 != 40 )
              v5 = v29;
            if ( v18 >= v14 )
              goto LABEL_74;
            goto LABEL_25;
          }
        }
        j = v24;
        v23 = *v24;
      }
    }
  }
  SidForString = -1073741811;
LABEL_74:
  v30 = v36;
  v31 = *v36;
  if ( SidForString )
  {
    ExFreePoolWithTag(v31, 0);
    *v30 = 0LL;
  }
  else
  {
    v31[1] = v37;
  }
  return SidForString;
}
