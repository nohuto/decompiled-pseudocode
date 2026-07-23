/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180063BE0
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x18004C7B0 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x180069B20 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x1800797A0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x180083760 (RtlMultiByteToUnicodeSize.c)
 *     RtlCustomCPToUnicodeN @ 0x1800DED10 (RtlCustomCPToUnicodeN.c)
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
  unsigned __int64 v6; // rax
  PWSTR v7; // r10
  unsigned int v8; // edx
  NTSTATUS v9; // r14d
  WCHAR *v11; // rsi
  const CHAR *v12; // r11
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  WCHAR *v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // edx
  char v21; // dl
  int v22; // edx
  unsigned int v23; // ecx
  WCHAR v24; // dx
  CHAR v25; // bp
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  CHAR v29; // cl
  int v30; // edx

  v6 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v7 = UnicodeStringDestination;
  v8 = 0;
  v9 = 0;
  v11 = &UnicodeStringDestination[v6];
  v12 = &UTF8StringSource[UTF8StringByteCount];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( UTF8StringSource >= v12 )
        {
          if ( v8 )
          {
            v9 = 263;
            if ( v7 < v11 )
              *v7++ = -3;
            else
              v9 = -1073741789;
          }
          goto LABEL_13;
        }
        v13 = *UTF8StringSource++;
        if ( !v8 )
        {
          LOWORD(v8) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( v7 >= v11 )
              goto LABEL_78;
            *v7++ = v8;
            v14 = v12 - UTF8StringSource;
            v15 = v11 - v7;
            if ( (unsigned __int64)(v12 - UTF8StringSource) <= 0xD )
            {
              if ( v15 < v14 )
              {
                v8 = 0;
                continue;
              }
              while ( UTF8StringSource < v12 )
              {
                v8 = *UTF8StringSource++;
                if ( v8 > 0x7F )
                  goto LABEL_36;
                *v7++ = v8;
              }
LABEL_13:
              if ( UnicodeStringActualByteCount )
                *UnicodeStringActualByteCount = 2 * (v7 - UnicodeStringDestination);
              return v9;
            }
            if ( v14 < v15 )
              v15 = v12 - UTF8StringSource;
            v17 = &v7[v15 - 7];
            if ( v7 >= v17 )
              goto LABEL_55;
            while ( 1 )
            {
              v18 = *UTF8StringSource++;
              if ( v18 > 0x7F )
                goto LABEL_48;
              *v7++ = v18;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v18 = *UTF8StringSource++;
                if ( v18 > 0x7F )
                  goto LABEL_48;
                *v7++ = v18;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_26;
              v18 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v18 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v7 = v18 & 0x7F;
                v7[1] = (v18 >> 8) & 0x7F;
                v7 += 2;
LABEL_26:
                while ( v7 < v17 )
                {
                  v19 = *((_DWORD *)UTF8StringSource + 1);
                  v18 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                    goto LABEL_46;
                  UTF8StringSource += 8;
                  *v7 = v18 & 0x7F;
                  v7[1] = (v18 >> 8) & 0x7F;
                  v7[2] = BYTE2(v18) & 0x7F;
                  v7[3] = HIBYTE(v18) & 0x7F;
                  v7[4] = v19 & 0x7F;
                  v7[5] = (v19 >> 8) & 0x7F;
                  v7[6] = BYTE2(v19) & 0x7F;
                  v7[7] = HIBYTE(v19) & 0x7F;
                  v7 += 8;
                }
LABEL_55:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_46:
              ++UTF8StringSource;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v7 = (unsigned __int8)v18;
                goto LABEL_54;
              }
LABEL_48:
              v21 = *UTF8StringSource++;
              if ( (v18 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
              {
LABEL_62:
                UTF8StringSource -= 2;
                goto LABEL_55;
              }
              v22 = v21 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v25 = *UTF8StringSource;
                v26 = ((v18 & 0xF) << 6) | v22;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v26 >> 4) - 1 > 0xF )
                    goto LABEL_62;
                  if ( (v25 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v29 = UTF8StringSource[1];
                  v30 = v25 & 0x3F | (v26 << 6);
                  if ( (v29 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  *v7++ = (((v29 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v27 = 2LL;
                  v24 = (v29 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v26 & 0x3E0) == 0 || (v26 & 0x3E0) == 0x360 || (v25 & 0xC0) != 0x80 )
                    goto LABEL_62;
                  v24 = v25 & 0x3F | ((_WORD)v26 << 6);
                  v27 = 1LL;
                }
                UTF8StringSource += v27;
                --v17;
              }
              else
              {
                v23 = v18 & 0x1F;
                if ( v23 <= 1 )
                  goto LABEL_62;
                v24 = ((_WORD)v23 << 6) | v22;
              }
              *v7 = v24;
              --v17;
LABEL_54:
              if ( ++v7 >= v17 )
                goto LABEL_55;
            }
          }
LABEL_36:
          if ( (v8 & 0x40) != 0 )
          {
            if ( (v8 & 0x20) != 0 )
            {
              if ( (v8 & 0x10) == 0 )
              {
                v8 = v8 & 0xF | 0x48228000;
                continue;
              }
              v28 = v8 & 0xF;
              if ( v28 <= 4 )
              {
                v8 = v28 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v20 = v8 & 0x1F;
              if ( v20 > 1 )
              {
                v8 = v20 | 0x800000;
                continue;
              }
            }
          }
LABEL_66:
          v9 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        --UTF8StringSource;
        goto LABEL_66;
      }
      v8 = (v8 << 6) | v13 & 0x3F;
      if ( (v8 & 0x20000000) == 0 )
      {
        if ( (v8 & 0x10000000) != 0 )
        {
          if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v8 & 0x3E0) != 0 && (v8 & 0x3E0) != 0x360 )
        {
          continue;
        }
        goto LABEL_66;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v7 < v11 )
    {
      *v7++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_78:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v7 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return sub_180063F70(
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
