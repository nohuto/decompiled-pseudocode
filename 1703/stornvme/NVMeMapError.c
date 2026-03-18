/*
 * XREFs of NVMeMapError @ 0x1C0010570
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C000FC90 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006898 (GetSrbScsiData.c)
 *     memmove @ 0x1C0012040 (memmove.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

unsigned __int8 __fastcall NVMeMapError(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  char v4; // di
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  int v7; // ecx
  char v8; // al
  unsigned int v9; // r8d
  char v10; // al
  unsigned __int8 result; // al
  char *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r14
  unsigned int v15; // edi
  char *v16; // rcx
  unsigned int v17; // edi
  __int64 Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int16 v20; // [rsp+40h] [rbp-10h]
  unsigned __int8 v21; // [rsp+90h] [rbp+40h] BYREF
  char *v22; // [rsp+98h] [rbp+48h] BYREF
  void *v23; // [rsp+A0h] [rbp+50h] BYREF

  if ( *(_BYTE *)(a1 + 2) == 40 )
    v2 = *(_QWORD *)(a1 + 104);
  else
    v2 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 0xFFF) != 0 )
    v2 = v2 - (v2 & 0xFFF) + 4096;
  v3 = *(unsigned __int16 *)(v2 + 4242);
  v22 = 0LL;
  Src = 0LL;
  v4 = 0;
  v19 = 0LL;
  v20 = 0;
  v23 = 0LL;
  v21 = 0;
  if ( ((v3 >> 9) & 7) == 0 )
  {
    v9 = v3 >> 1;
    if ( (unsigned __int8)v9 <= 0x80u )
    {
      if ( (unsigned __int8)v9 == 128 )
      {
        WORD2(v19) = 33;
        v8 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_88;
      }
      if ( (unsigned __int8)v9 > 9u )
      {
        if ( (unsigned __int8)v9 != 10 )
        {
          if ( (unsigned __int8)v9 == 11 )
          {
            WORD2(v19) = 2336;
            v8 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_88;
          }
          if ( (unsigned __int8)v9 == 12 )
          {
            WORD2(v19) = 44;
            v8 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_88;
          }
          if ( (unsigned __int8)v9 != 13
            && (unsigned __int8)v9 != 14
            && (unsigned __int8)v9 != 15
            && (unsigned int)(unsigned __int8)v9 - 16 > 1 )
          {
            goto LABEL_90;
          }
          goto LABEL_36;
        }
      }
      else if ( (unsigned __int8)v9 != 9 )
      {
        if ( !(_BYTE)v9 )
        {
          *(_BYTE *)(a1 + 3) = 1;
          v4 = 0;
          goto LABEL_91;
        }
        switch ( (unsigned __int8)v9 )
        {
          case 1u:
            WORD2(v19) = 32;
            v8 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_88;
          case 2u:
            goto LABEL_35;
          case 3u:
            WORD2(v19) = 35;
            v8 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_88;
        }
        if ( (unsigned __int8)v9 != 4 )
        {
          if ( (unsigned __int8)v9 == 5 )
          {
            v4 = 34;
            WORD2(v19) = 2059;
            v8 = BYTE2(Src) & 0xF0 | 0xB;
            goto LABEL_89;
          }
          if ( (unsigned __int8)v9 == 6 )
          {
            WORD2(v19) = 68;
            v8 = BYTE2(Src) & 0xF0 | 4;
            goto LABEL_88;
          }
          if ( (unsigned int)(unsigned __int8)v9 - 7 > 1 )
            goto LABEL_90;
          goto LABEL_62;
        }
LABEL_86:
        WORD2(v19) = 0;
        goto LABEL_87;
      }
LABEL_62:
      v4 = 34;
      WORD2(v19) = 0;
      v8 = BYTE2(Src) & 0xF0 | 0xB;
      goto LABEL_89;
    }
    if ( (unsigned __int8)v9 != 129 )
    {
      if ( (unsigned __int8)v9 == 130 )
      {
        v4 = 2;
        v10 = BYTE2(Src) & 0xF2;
        *(_BYTE *)(a1 + 3) = 4;
        LOBYTE(Src) = -16;
        HIBYTE(Src) = 10;
        BYTE2(Src) = v10 | 2;
        if ( *(__int16 *)(v2 + 4242) >= 0 )
          WORD2(v19) = 260;
        else
          WORD2(v19) = 4;
        goto LABEL_91;
      }
      if ( (unsigned __int8)v9 != 131 )
      {
LABEL_90:
        *(_BYTE *)(a1 + 3) = 4;
        goto LABEL_91;
      }
      v4 = 24;
      WORD2(v19) = 2348;
      v8 = BYTE2(Src) & 0xF0 | 5;
LABEL_89:
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = v8;
      goto LABEL_90;
    }
    goto LABEL_86;
  }
  if ( ((v3 >> 9) & 7) == 1 )
  {
    v6 = v3 >> 1;
    if ( (unsigned __int8)v6 > 0x80u )
    {
      v7 = (unsigned __int8)v6 - 129;
      if ( (unsigned __int8)v6 != 129 )
      {
LABEL_34:
        if ( v7 != 1 )
          goto LABEL_90;
        goto LABEL_35;
      }
      goto LABEL_35;
    }
    if ( (unsigned __int8)v6 == 128 )
      goto LABEL_35;
    if ( (unsigned __int8)v6 > 9u )
    {
      if ( (unsigned __int8)v6 == 10 )
      {
        WORD2(v19) = 305;
        v8 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_88;
      }
      if ( (unsigned __int8)v6 != 11 )
      {
        if ( (unsigned __int8)v6 == 12
          || (unsigned __int8)v6 == 13
          || (unsigned __int8)v6 == 14
          || (unsigned __int8)v6 == 15 )
        {
          goto LABEL_35;
        }
        if ( (unsigned __int8)v6 != 16 )
          goto LABEL_90;
      }
      v8 = BYTE2(Src) & 0xF0 | 6;
      goto LABEL_37;
    }
    if ( (unsigned __int8)v6 == 9 )
    {
LABEL_35:
      WORD2(v19) = 36;
      v8 = BYTE2(Src) & 0xF0 | 5;
LABEL_88:
      v4 = 2;
      goto LABEL_89;
    }
    if ( !(_BYTE)v6 || (unsigned __int8)v6 == 1 )
    {
      WORD2(v19) = 38;
      v8 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_88;
    }
    if ( (unsigned __int8)v6 != 2 && (unsigned __int8)v6 != 3 && (unsigned __int8)v6 != 5 )
    {
      if ( (unsigned __int8)v6 != 6 )
      {
        v7 = (unsigned __int8)v6 - 7;
        if ( (unsigned __int8)v6 != 7 )
          goto LABEL_34;
        goto LABEL_36;
      }
      goto LABEL_35;
    }
LABEL_36:
    v8 = BYTE2(Src) & 0xF0 | 5;
LABEL_37:
    WORD2(v19) = 0;
    goto LABEL_88;
  }
  if ( ((v3 >> 9) & 7) != 2 )
    goto LABEL_90;
  v5 = v3 >> 1;
  switch ( (unsigned __int8)v5 )
  {
    case 0x80u:
      WORD2(v19) = 3;
      goto LABEL_87;
    case 0x81u:
      WORD2(v19) = 17;
      goto LABEL_87;
    case 0x82u:
      WORD2(v19) = 272;
      goto LABEL_87;
    case 0x83u:
      WORD2(v19) = 529;
LABEL_87:
      v8 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_88;
  }
  *(_BYTE *)(a1 + 3) = 4;
  switch ( (unsigned __int8)v5 )
  {
    case 0x84u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v19) = 785;
      break;
    case 0x85u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
      WORD2(v19) = 29;
      break;
    case 0x86u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      WORD2(v19) = 2336;
      break;
  }
LABEL_91:
  result = GetSrbScsiData(a1, 0LL, &v22, &v23, &v21);
  if ( v22 )
    *v22 = v4;
  if ( (Src & 0x80) != 0 )
  {
    v12 = (char *)v23;
    if ( v23 )
    {
      result = v21;
      if ( v21 )
      {
        v13 = v21;
        v14 = v21;
        if ( v21 > 0x12u )
          v14 = 18LL;
        result = (unsigned __int8)memmove(v23, &Src, (unsigned int)v14);
        *(_BYTE *)(a1 + 3) |= 0x80u;
        if ( v13 > (unsigned int)v14 )
        {
          v15 = v13 - v14;
          v16 = &v12[v14];
          if ( (v15 & 3) != 0 )
          {
            if ( v15 )
              return (unsigned __int8)memset(v16, 0, v15);
          }
          else
          {
            v17 = v15 >> 2;
            if ( v17 )
              return (unsigned __int8)memset(v16, 0, 4LL * v17);
          }
        }
      }
    }
  }
  return result;
}
