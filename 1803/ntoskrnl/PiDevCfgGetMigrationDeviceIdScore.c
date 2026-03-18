/*
 * XREFs of PiDevCfgGetMigrationDeviceIdScore @ 0x14023BD6C
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  wchar_t *v3; // rdi
  unsigned __int16 v4; // si
  char v5; // r12
  unsigned __int16 v6; // r15
  const wchar_t *v7; // rbp
  wchar_t v8; // cx
  const wchar_t *v9; // r14
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  wchar_t *v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  const wchar_t *v18; // rbx

  v2 = Str2;
  v3 = Str1;
  v4 = 0;
  v5 = 0;
  if ( !Str1 )
    return (unsigned __int16)-1;
  if ( !Str2 )
    return (unsigned __int16)-1;
  v6 = 0x4000;
  v7 = Str2;
  if ( !*Str2 )
    return (unsigned __int16)-1;
  do
  {
    v8 = *v3;
    v9 = v3;
    if ( *v3 )
    {
      while ( wcsicmp(v9, v7) )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v9[v10] );
        v9 += v10 + 1;
        if ( !*v9 )
        {
          v8 = 0;
          goto LABEL_11;
        }
      }
      v8 = *v9;
      v5 = 1;
    }
LABEL_11:
    v11 = v4 | v6;
    if ( v8 )
      v11 = v4;
    v4 = v11;
    if ( v6 > 2u )
      v6 >>= 1;
    v12 = -1LL;
    do
      ++v12;
    while ( v7[v12] );
    v7 += v12 + 1;
  }
  while ( *v7 );
  if ( v5 )
  {
    if ( wcsicmp(v3, v2) )
      v4 |= 0x8000u;
    v13 = -1LL;
    do
      ++v13;
    while ( v3[v13] );
    while ( 1 )
    {
      v16 = v3[v13 + 1] == 0;
      v14 = -1LL;
      if ( v16 )
        break;
      do
        ++v14;
      while ( v3[v14] );
      v15 = &v3[v14];
      v13 = -1LL;
      v3 = v15 + 1;
      do
        ++v13;
      while ( v3[v13] );
    }
    do
      ++v14;
    while ( v2[v14] );
    while ( v2[v14 + 1] )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v2[v17] );
      v18 = &v2[v17];
      v14 = -1LL;
      v2 = v18 + 1;
      do
        ++v14;
      while ( v2[v14] );
    }
    if ( wcsicmp(v3, v2) )
      v4 |= 1u;
  }
  else
  {
    return (unsigned __int16)-1;
  }
  return v4;
}
