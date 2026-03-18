/*
 * XREFs of NVMeMapError @ 0x1C0012230
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00117F0 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006F54 (GetSrbScsiData.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

unsigned __int8 __fastcall NVMeMapError(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  char v4; // di
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  int v7; // ecx
  bool v8; // zf
  char v9; // al
  int v10; // ecx
  bool v11; // zf
  unsigned int v12; // r8d
  char v13; // al
  unsigned __int8 result; // al
  char *v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // r14
  unsigned int v18; // edi
  char *v19; // rcx
  unsigned int v20; // edi
  __int64 Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int16 v23; // [rsp+40h] [rbp-10h]
  unsigned __int8 v24; // [rsp+90h] [rbp+40h] BYREF
  char *v25; // [rsp+98h] [rbp+48h] BYREF
  void *v26; // [rsp+A0h] [rbp+50h] BYREF

  if ( *(_BYTE *)(a1 + 2) == 40 )
    v2 = *(_QWORD *)(a1 + 104);
  else
    v2 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 0xFFF) != 0 )
    v2 = v2 - (v2 & 0xFFF) + 4096;
  v3 = *(unsigned __int16 *)(v2 + 4250);
  Src = 0LL;
  v22 = 0LL;
  v4 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0;
  if ( ((v3 >> 9) & 7) == 0 )
  {
    v12 = v3 >> 1;
    if ( (unsigned __int8)v12 > 0x80u )
    {
      if ( (unsigned __int8)v12 != 129 )
      {
        if ( (unsigned __int8)v12 == 130 )
        {
          v4 = 2;
          v13 = BYTE2(Src) & 0xF2;
          *(_BYTE *)(a1 + 3) = 4;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = v13 | 2;
          if ( *(__int16 *)(v2 + 4250) >= 0 )
            WORD2(v22) = 260;
          else
            WORD2(v22) = 4;
          goto LABEL_124;
        }
        if ( (unsigned __int8)v12 != 131 )
        {
LABEL_123:
          *(_BYTE *)(a1 + 3) = 4;
          goto LABEL_124;
        }
        v4 = 24;
        WORD2(v22) = 2348;
        v9 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_122;
      }
LABEL_119:
      v9 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_120;
    }
    if ( (unsigned __int8)v12 == 128 )
    {
      WORD2(v22) = 33;
      v9 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_121;
    }
    if ( (unsigned __int8)v12 > 0xEu )
    {
      if ( (unsigned __int8)v12 <= 0x16u )
      {
        if ( (unsigned __int8)v12 == 22 )
          goto LABEL_38;
        if ( (unsigned __int8)v12 == 15 || (unsigned __int8)v12 == 16 || (unsigned __int8)v12 == 17 )
          goto LABEL_58;
        if ( (unsigned __int8)v12 != 18 )
        {
          if ( (unsigned __int8)v12 == 19 || (unsigned __int8)v12 == 20 )
            goto LABEL_38;
          if ( (unsigned __int8)v12 != 21 )
            goto LABEL_123;
        }
        goto LABEL_102;
      }
      switch ( (unsigned __int8)v12 )
      {
        case 0x18u:
          goto LABEL_38;
        case 0x19u:
          WORD2(v22) = 42;
          v9 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_121;
        case 0x1Au:
          goto LABEL_38;
      }
      if ( (unsigned __int8)v12 != 27 )
      {
        if ( (unsigned __int8)v12 != 28 )
        {
          v8 = (unsigned __int8)v12 == 30;
LABEL_37:
          if ( !v8 )
            goto LABEL_123;
          goto LABEL_38;
        }
        v9 = BYTE2(Src) & 0xF0 | 4;
LABEL_120:
        WORD2(v22) = 0;
        goto LABEL_121;
      }
    }
    else
    {
      if ( (unsigned __int8)v12 == 14 )
        goto LABEL_58;
      if ( (unsigned __int8)v12 > 7u )
      {
        if ( (unsigned __int8)v12 != 8 && (unsigned __int8)v12 != 9 && (unsigned __int8)v12 != 10 )
        {
          if ( (unsigned __int8)v12 == 11 )
          {
            WORD2(v22) = 2336;
            v9 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_121;
          }
          v10 = (unsigned __int8)v12 - 12;
          if ( (unsigned __int8)v12 == 12 )
          {
            WORD2(v22) = 44;
            v9 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_121;
          }
          goto LABEL_57;
        }
      }
      else if ( (unsigned __int8)v12 != 7 )
      {
        if ( !(_BYTE)v12 )
        {
          *(_BYTE *)(a1 + 3) = 1;
          v4 = 0;
          goto LABEL_124;
        }
        if ( (unsigned __int8)v12 != 1 )
        {
          if ( (unsigned __int8)v12 == 2 )
            goto LABEL_38;
          if ( (unsigned __int8)v12 == 3 )
          {
            WORD2(v22) = 35;
            v9 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_121;
          }
          if ( (unsigned __int8)v12 != 4 )
          {
            if ( (unsigned __int8)v12 != 5 )
            {
              if ( (unsigned __int8)v12 != 6 )
                goto LABEL_123;
              WORD2(v22) = 68;
              v9 = BYTE2(Src) & 0xF0 | 4;
              goto LABEL_121;
            }
            v4 = 34;
            WORD2(v22) = 2059;
            v9 = BYTE2(Src) & 0xF0 | 0xB;
LABEL_122:
            BYTE2(Src) = v9;
            HIBYTE(Src) = 10;
            LOBYTE(Src) = -16;
            goto LABEL_123;
          }
          goto LABEL_119;
        }
LABEL_102:
        WORD2(v22) = 32;
        v9 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_121;
      }
    }
    v4 = 34;
    WORD2(v22) = 0;
    v9 = BYTE2(Src) & 0xF0 | 0xB;
    goto LABEL_122;
  }
  if ( ((v3 >> 9) & 7) == 1 )
  {
    v6 = v3 >> 1;
    if ( (unsigned __int8)v6 > 0x80u )
    {
      v7 = (unsigned __int8)v6 - 129;
      v11 = (unsigned __int8)v6 == 129;
    }
    else
    {
      if ( (unsigned __int8)v6 == 128 )
        goto LABEL_38;
      if ( (unsigned __int8)v6 <= 0x11u )
      {
        if ( (unsigned __int8)v6 != 17 )
        {
          if ( (unsigned __int8)v6 <= 9u )
          {
            if ( (unsigned __int8)v6 == 9 )
              goto LABEL_38;
            if ( !(_BYTE)v6 || (unsigned __int8)v6 == 1 )
            {
              WORD2(v22) = 38;
              v9 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_121;
            }
            if ( (unsigned __int8)v6 != 2 && (unsigned __int8)v6 != 3 && (unsigned __int8)v6 != 5 )
            {
              if ( (unsigned __int8)v6 != 6 )
              {
                v7 = (unsigned __int8)v6 - 7;
                if ( (unsigned __int8)v6 != 7 )
                {
LABEL_36:
                  v8 = v7 == 1;
                  goto LABEL_37;
                }
                goto LABEL_58;
              }
LABEL_38:
              WORD2(v22) = 36;
              v9 = BYTE2(Src) & 0xF0 | 5;
LABEL_121:
              v4 = 2;
              goto LABEL_122;
            }
LABEL_58:
            v9 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_120;
          }
          if ( (unsigned __int8)v6 == 10 )
          {
            WORD2(v22) = 305;
            v9 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_121;
          }
          if ( (unsigned __int8)v6 != 11 )
          {
            if ( (unsigned __int8)v6 == 12
              || (unsigned __int8)v6 == 13
              || (unsigned __int8)v6 == 14
              || (unsigned __int8)v6 == 15 )
            {
              goto LABEL_38;
            }
            if ( (unsigned __int8)v6 != 16 )
              goto LABEL_123;
          }
        }
        goto LABEL_47;
      }
      if ( (unsigned __int8)v6 <= 0x1Au )
      {
        if ( (unsigned __int8)v6 == 26 || (unsigned __int8)v6 == 18 )
        {
LABEL_47:
          v9 = BYTE2(Src) & 0xF0 | 6;
          goto LABEL_120;
        }
        if ( (unsigned __int8)v6 == 19
          || (unsigned __int8)v6 == 20
          || (unsigned __int8)v6 == 21
          || (unsigned __int8)v6 == 22 )
        {
          goto LABEL_38;
        }
        v10 = (unsigned __int8)v6 - 24;
        if ( (unsigned __int8)v6 == 24 )
          goto LABEL_58;
LABEL_57:
        if ( v10 != 1 )
          goto LABEL_123;
        goto LABEL_58;
      }
      if ( (unsigned __int8)v6 == 27
        || (unsigned __int8)v6 == 28
        || (unsigned __int8)v6 == 30
        || (unsigned __int8)v6 == 31
        || (unsigned __int8)v6 == 32 )
      {
        goto LABEL_38;
      }
      v7 = (unsigned __int8)v6 - 33;
      v11 = (unsigned __int8)v6 == 33;
    }
    if ( !v11 )
      goto LABEL_36;
    goto LABEL_38;
  }
  if ( ((v3 >> 9) & 7) != 2 )
    goto LABEL_123;
  v5 = v3 >> 1;
  *(_BYTE *)(a1 + 3) = 4;
  switch ( (unsigned __int8)v5 )
  {
    case 0x80u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v22) = 3;
      break;
    case 0x81u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v22) = 17;
      break;
    case 0x82u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v22) = 272;
      break;
    case 0x83u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v22) = 529;
      break;
    case 0x84u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v22) = 785;
      break;
    case 0x85u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
      WORD2(v22) = 29;
      break;
    case 0x86u:
      v4 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      WORD2(v22) = 2336;
      break;
  }
LABEL_124:
  result = GetSrbScsiData(a1, 0LL, &v25, &v26, &v24);
  if ( v25 )
    *v25 = v4;
  if ( (Src & 0x80) != 0 )
  {
    v15 = (char *)v26;
    if ( v26 )
    {
      result = v24;
      if ( v24 )
      {
        v16 = v24;
        v17 = v24;
        if ( v24 > 0x12u )
          v17 = 18LL;
        result = (unsigned __int8)memmove(v26, &Src, (unsigned int)v17);
        *(_BYTE *)(a1 + 3) |= 0x80u;
        if ( v16 > (unsigned int)v17 )
        {
          v18 = v16 - v17;
          v19 = &v15[v17];
          if ( (v18 & 3) != 0 )
          {
            if ( v18 )
              return (unsigned __int8)memset(v19, 0, v18);
          }
          else
          {
            v20 = v18 >> 2;
            if ( v20 )
              return (unsigned __int8)memset(v19, 0, 4LL * v20);
          }
        }
      }
    }
  }
  return result;
}
