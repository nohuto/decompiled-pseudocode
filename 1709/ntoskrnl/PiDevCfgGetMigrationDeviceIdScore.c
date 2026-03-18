/*
 * XREFs of PiDevCfgGetMigrationDeviceIdScore @ 0x1401FF33C
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  wchar_t *v3; // rdi
  unsigned __int16 v4; // si
  char v5; // r12
  unsigned __int16 v6; // r15
  const wchar_t *v7; // rbp
  const wchar_t *v8; // r14
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  wchar_t *v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  const wchar_t *v17; // rbx

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
    v8 = v3;
    if ( *v3 )
    {
      while ( wcsicmp(v8, v7) )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v8 += v9 + 1;
        if ( !*v8 )
          goto LABEL_11;
      }
      v5 = 1;
    }
LABEL_11:
    v10 = v4 | v6;
    if ( *v8 )
      v10 = v4;
    v4 = v10;
    if ( v6 > 2u )
      v6 >>= 1;
    v11 = -1LL;
    do
      ++v11;
    while ( v7[v11] );
    v7 += v11 + 1;
  }
  while ( *v7 );
  if ( v5 )
  {
    if ( wcsicmp(v3, v2) )
      v4 |= 0x8000u;
    v12 = -1LL;
    do
      ++v12;
    while ( v3[v12] );
    while ( 1 )
    {
      v15 = v3[v12 + 1] == 0;
      v13 = -1LL;
      if ( v15 )
        break;
      do
        ++v13;
      while ( v3[v13] );
      v14 = &v3[v13];
      v12 = -1LL;
      v3 = v14 + 1;
      do
        ++v12;
      while ( v3[v12] );
    }
    do
      ++v13;
    while ( v2[v13] );
    while ( v2[v13 + 1] )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v2[v16] );
      v17 = &v2[v16];
      v13 = -1LL;
      v2 = v17 + 1;
      do
        ++v13;
      while ( v2[v13] );
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
