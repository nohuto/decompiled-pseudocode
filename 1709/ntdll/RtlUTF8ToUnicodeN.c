/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180068230
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x18006B810 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18006C8D0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x18007B4F0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x180087780 (RtlMultiByteToUnicodeSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // esi
  PWSTR v8; // rax
  const CHAR *v9; // r11
  WCHAR *v10; // rbp
  unsigned int v11; // edx
  const CHAR *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  WCHAR *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  char v19; // r10
  char v20; // r8
  int v21; // r8d
  unsigned int v22; // edx
  WCHAR v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // r8d
  bool v26; // zf
  CHAR v27; // dl
  __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // r8d
  CHAR v31; // dl

  v5 = 0;
  v8 = UnicodeStringDestination;
  v9 = &UTF8StringSource[UTF8StringByteCount];
  v10 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v11 = 0;
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v12 = UTF8StringSource;
        if ( UTF8StringSource >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
          return v5;
        }
        if ( !v11 )
        {
          v11 = *UTF8StringSource++;
          if ( v11 <= 0x7F )
          {
LABEL_6:
            if ( v8 >= v10 )
              goto LABEL_77;
            *v8++ = v11;
            v13 = v9 - UTF8StringSource;
            v14 = v10 - v8;
            if ( (unsigned __int64)(v9 - UTF8StringSource) <= 0xD )
            {
              if ( v14 < v13 )
                goto LABEL_50;
              while ( UTF8StringSource < v9 )
              {
                v11 = *UTF8StringSource++;
                if ( v11 > 0x7F )
                  goto LABEL_35;
                *v8++ = v11;
              }
              goto LABEL_13;
            }
            if ( v13 < v14 )
              v14 = v9 - UTF8StringSource;
            v16 = &v8[v14 - 7];
            if ( v8 >= v16 )
              goto LABEL_50;
            while ( 1 )
            {
              v17 = *UTF8StringSource++;
              if ( v17 > 0x7F )
                goto LABEL_43;
              *v8++ = v17;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v17 = *UTF8StringSource++;
                if ( v17 > 0x7F )
                  goto LABEL_43;
                *v8++ = v17;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_24;
              v17 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v17 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v8 = v17 & 0x7F;
                v8[1] = (v17 >> 8) & 0x7F;
                v8 += 2;
LABEL_24:
                while ( v8 < v16 )
                {
                  v18 = *((_DWORD *)UTF8StringSource + 1);
                  v17 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
                    goto LABEL_51;
                  UTF8StringSource += 8;
                  *v8 = v17 & 0x7F;
                  v8[1] = (v17 >> 8) & 0x7F;
                  v8[2] = BYTE2(v17) & 0x7F;
                  v8[3] = HIBYTE(v17) & 0x7F;
                  v8[4] = v18 & 0x7F;
                  v8[5] = (v18 >> 8) & 0x7F;
                  v8[6] = BYTE2(v18) & 0x7F;
                  v8[7] = HIBYTE(v18) & 0x7F;
                  v8 += 8;
                }
LABEL_50:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_51:
              ++UTF8StringSource;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v8 = (unsigned __int8)v17;
                goto LABEL_49;
              }
LABEL_43:
              v20 = *UTF8StringSource++;
              if ( (v17 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_62:
                UTF8StringSource -= 2;
                goto LABEL_50;
              }
              v21 = v20 & 0x3F;
              if ( (v17 & 0x20) != 0 )
              {
                v25 = ((v17 & 0xF) << 6) | v21;
                v26 = (v17 & 0x10) == 0;
                v27 = *UTF8StringSource;
                if ( v26 )
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v27 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v23 = v27 & 0x3F | ((_WORD)v25 << 6);
                  v28 = 1LL;
                }
                else
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_62;
                  if ( (v27 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v30 = v27 & 0x3F | (v25 << 6);
                  v31 = UTF8StringSource[1];
                  if ( (v31 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  *v8++ = (((v31 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v28 = 2LL;
                  v23 = (v31 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                UTF8StringSource += v28;
                --v16;
              }
              else
              {
                v22 = v17 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_62;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v8 = v23;
              --v16;
LABEL_49:
              if ( ++v8 >= v16 )
                goto LABEL_50;
            }
          }
LABEL_35:
          if ( (v11 & 0x40) != 0 )
          {
            if ( (v11 & 0x20) != 0 )
            {
              if ( (v11 & 0x10) == 0 )
              {
                v11 = v11 & 0xF | 0x48228000;
                continue;
              }
              v29 = v11 & 0xF;
              if ( v29 <= 4 )
              {
                v11 = v29 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v24 = v11 & 0x1F;
              if ( v24 > 1 )
              {
                v11 = v24 | 0x800000;
                continue;
              }
            }
          }
LABEL_64:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      v19 = *UTF8StringSource++;
      if ( (v19 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v12;
        goto LABEL_64;
      }
      v11 = (v11 << 6) | v19 & 0x3F;
      if ( (v11 & 0x20000000) == 0 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          if ( (v11 & 0x800000) != 0 || (v11 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v11 & 0x3E0) != 0 )
        {
          if ( (v11 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        goto LABEL_64;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_77:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode(
             (PWSTR)UTF8StringSource,
             UTF8StringByteCount,
             UnicodeStringActualByteCount,
             UTF8StringSource,
             UTF8StringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
