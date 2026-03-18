/*
 * XREFs of FsRtlRemoveDotsFromPath @ 0x1405DCDE0
 * Callers:
 *     IopReplaceSymlinkPath @ 0x14071D76C (IopReplaceSymlinkPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // r10
  __int16 v5; // di
  bool v6; // cc
  unsigned __int16 v7; // dx
  int v8; // r11d
  __int64 v9; // rax
  WCHAR v11; // ax
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdi

  v3 = PathLength >> 1;
  v5 = 0;
  if ( PathLength >> 1 != 3 )
  {
LABEL_2:
    v6 = v3 <= 2u;
    if ( v3 != 2 )
      goto LABEL_3;
    if ( *OriginalString != 46 )
      goto LABEL_5;
    if ( OriginalString[1] != 46 )
    {
      v6 = 1;
LABEL_3:
      if ( v6 )
        goto LABEL_5;
      goto LABEL_4;
    }
    return -1073741192;
  }
  if ( *OriginalString == 92 && OriginalString[1] == 46 )
  {
    if ( OriginalString[2] == 46 )
      return -1073741192;
    goto LABEL_2;
  }
LABEL_4:
  if ( *OriginalString == 46 && OriginalString[1] == 46 && OriginalString[2] == 92 )
    return -1073741192;
LABEL_5:
  v7 = 0;
  if ( v3 )
  {
    while ( v7 )
    {
      v8 = v3 - 1;
      if ( v7 < v8 && OriginalString[v7] == 92 && OriginalString[v7 + 1] == 92 )
        goto LABEL_12;
      v9 = v7;
      if ( OriginalString[v7] != 46 )
        goto LABEL_10;
      if ( v7 == v8 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          if ( v5 > 1 )
            --v5;
          goto LABEL_12;
        }
      }
      else
      {
        v11 = OriginalString[v7 + 1];
        if ( v11 == 92 )
        {
          if ( OriginalString[v7 - 1] == 92 )
            goto LABEL_36;
        }
        else if ( v11 == 46 && OriginalString[v7 - 1] == 92 )
        {
          v12 = v3 - 2;
          if ( v7 == v12 || OriginalString[v7 + 2] == 92 )
          {
            for ( v5 -= 2; v5 > 0 && OriginalString[v5] != 92; --v5 )
              ;
            if ( v5 < 0 || OriginalString[v5] != 92 )
              return -1073741192;
            if ( !v5 )
              v5 = v7 == v12;
LABEL_36:
            ++v7;
            goto LABEL_12;
          }
        }
      }
      OriginalString[v5] = 46;
LABEL_11:
      ++v5;
LABEL_12:
      if ( ++v7 >= v3 )
        goto LABEL_13;
    }
    v9 = 0LL;
LABEL_10:
    OriginalString[v5] = OriginalString[v9];
    goto LABEL_11;
  }
LABEL_13:
  *NewLength = 2 * v5;
  if ( v5 < (int)v3 )
  {
    v13 = (__int16)(v3 - v5);
    v14 = &OriginalString[v5];
    while ( v13 )
    {
      *v14++ = 0;
      --v13;
    }
  }
  return 0;
}
