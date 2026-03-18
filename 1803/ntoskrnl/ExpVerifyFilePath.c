/*
 * XREFs of ExpVerifyFilePath @ 0x1407C26DC
 * Callers:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpVerifyWindowsOsOptions @ 0x1407C2864 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x1407C51D4 (NtTranslateFilePath.c)
 * Callees:
 *     ExpSafeWcslen @ 0x1407C09E8 (ExpSafeWcslen.c)
 */

__int64 __fastcall ExpVerifyFilePath(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  _WORD *i; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  char v9; // al
  _WORD *v10; // rax
  __int16 v11; // bx
  _WORD *v12; // rdi
  _WORD *v13; // rax
  __int64 v14; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  int v19; // eax
  int v20; // r11d

  if ( a1 > a2 )
    return 3221225485LL;
  v2 = a1 + 12;
  if ( a1 + 12 > a2 )
    return 3221225485LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 < 0xC )
    return 3221225485LL;
  v4 = a1 + v3;
  if ( a1 + v3 < a1 )
    return 3221225485LL;
  if ( v4 > a2 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 - 1 > 4 )
    return 3221225485LL;
  if ( v4 < a2 )
    a2 = a1 + v3;
  if ( !v5 )
    return 3221225485LL;
  if ( v5 <= 2 )
  {
    v19 = ExpSafeWcslen((_WORD *)(a1 + 12), a2);
    v20 = -1;
  }
  else
  {
    if ( v5 != 3 )
    {
      if ( v5 == 4 )
      {
        for ( i = (_WORD *)(a1 + 16); v2 + 4 <= a2; i = (_WORD *)(v2 + 4) )
        {
          v7 = *(unsigned __int16 *)(v2 + 2);
          if ( (unsigned int)v7 < 4 )
            break;
          v8 = v7 + v2;
          if ( v7 + v2 > a2 )
            break;
          v9 = *(_BYTE *)v2 & 0x7F;
          if ( v9 == 127 )
            return 0LL;
          if ( v9 == 4 && *(_BYTE *)(v2 + 1) == 4 )
          {
            v10 = i;
            if ( (unsigned __int64)i >= v8 )
              goto LABEL_27;
            do
            {
              v11 = *v10;
              v12 = v10;
              if ( !*v10 )
                break;
              ++v10;
            }
            while ( (unsigned __int64)v10 < v8 );
            v13 = v12 + 1;
            if ( !v11 )
              v13 = v12;
            if ( (unsigned __int64)v13 >= v8 )
LABEL_27:
              LODWORD(v14) = -1;
            else
              v14 = v13 - i;
            if ( (_DWORD)v14 == -1 )
              break;
          }
          v2 += (*(unsigned __int8 *)(v2 + 3) << 8) | (unsigned __int64)*(unsigned __int8 *)(v2 + 2);
        }
      }
      return 3221225485LL;
    }
    v16 = ExpSafeWcslen((_WORD *)(a1 + 12), a2);
    if ( v16 == -1 )
      return 3221225485LL;
    v19 = ExpSafeWcslen((_WORD *)(v18 + 2 * (v16 + 1LL)), v17);
  }
  if ( v19 == v20 )
    return 3221225485LL;
  return 0LL;
}
