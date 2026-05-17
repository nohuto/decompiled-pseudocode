/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180072D30
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     RtlGetIntegerAtom @ 0x180072910 (RtlGetIntegerAtom.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FA598 @ 0x1800FA598 (sub_1800FA598.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringToInteger(unsigned __int16 *a1, unsigned int a2, int *a3)
{
  unsigned int v5; // r9d
  int v6; // r10d
  unsigned __int16 *v7; // r8
  int v8; // edx
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // cx
  unsigned __int16 *v11; // r14
  int v12; // r15d
  int v13; // r11d
  unsigned int v14; // eax
  __int16 v16; // ax

  v5 = 0;
  v6 = 0;
  if ( !*a1 || (*(_BYTE *)a1 & 1) != 0 )
  {
LABEL_49:
    v5 = -1073741811;
    goto LABEL_20;
  }
  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v8 = *a1 >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *v7++;
      if ( v9 > 0x20u )
        break;
      if ( !v8 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v8 = -1;
  }
  v10 = v9;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( v8 )
    {
      --v8;
      v10 = *v7++;
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = v7;
  v12 = v8;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 0xAu:
        v13 = 0;
        goto LABEL_10;
      case 2u:
        v13 = 1;
        goto LABEL_10;
      case 8u:
        v13 = 3;
        goto LABEL_10;
      case 0x10u:
        v13 = 4;
        goto LABEL_10;
    }
    goto LABEL_49;
  }
  a2 = 10;
  v13 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v16 = *v7++;
      switch ( v16 )
      {
        case 'x':
          a2 = 16;
          v13 = 4;
          break;
        case 'o':
          a2 = 8;
          v13 = 3;
          break;
        case 'b':
          a2 = 2;
          v13 = 1;
          break;
        default:
          v8 = v12;
          v7 = v11;
          break;
      }
      if ( v8 )
        goto LABEL_17;
    }
    v10 = 0;
  }
LABEL_10:
  while ( v10 )
  {
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 65) <= 5u )
      {
        v14 = v10 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          break;
        v14 = v10 - 87;
      }
    }
    else
    {
      v14 = v10 - 48;
    }
    if ( v14 >= a2 )
      break;
    v6 = v13 ? v14 | (v6 << v13) : v14 + a2 * v6;
    if ( !v8 )
      break;
LABEL_17:
    --v8;
    v10 = *v7++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_20:
  *a3 = v6;
  return v5;
}
