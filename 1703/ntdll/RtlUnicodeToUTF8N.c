/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180064CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // ebp
  unsigned int v6; // r10d
  int v8; // ebx
  CHAR *v9; // rsi
  const WCHAR *v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  NTSTATUS result; // eax
  const WCHAR *v15; // r10
  unsigned int v16; // edx
  int v17; // r8d
  unsigned int v18; // eax
  CHAR v19; // al
  CHAR v20; // al
  unsigned int v21; // eax
  int v22; // edx
  int v23; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( UTF8StringDestination )
  {
    if ( (UnicodeStringByteCount & 1) == 0 )
    {
      v9 = &UTF8StringDestination[UTF8StringMaxByteCount];
      v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
LABEL_5:
      while ( UnicodeStringSource < v10 )
      {
        if ( v6 )
        {
          v22 = *UnicodeStringSource;
          if ( (unsigned int)(v22 - 56320) <= 0x3FF )
          {
            v6 = v22 + (v6 << 10) - 56613888;
            ++UnicodeStringSource;
          }
          goto LABEL_9;
        }
        v6 = *UnicodeStringSource++;
LABEL_8:
        if ( v6 - 55296 > 0x3FF )
        {
LABEL_9:
          if ( v6 - 55296 <= 0x7FF )
          {
            v5 = 263;
            v6 = 65533;
          }
          v11 = 1LL;
          if ( v6 > 0x7F )
          {
            if ( v6 > 0x7FF )
            {
              if ( v6 > 0xFFFF )
                v11 = 2LL;
              ++v11;
            }
            ++v11;
          }
          if ( UTF8StringDestination > &v9[-v11] )
          {
            result = -1073741789;
LABEL_20:
            *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
            return result;
          }
          if ( v6 > 0x7F )
          {
            if ( v6 > 0x7FF )
            {
              if ( v6 > 0xFFFF )
              {
                *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
                v20 = (v6 >> 12) & 0x3F | 0x80;
              }
              else
              {
                v20 = (v6 >> 12) | 0xE0;
              }
              *UTF8StringDestination++ = v20;
              v19 = (v6 >> 6) & 0x3F | 0x80;
            }
            else
            {
              v19 = (v6 >> 6) | 0xC0;
            }
            *UTF8StringDestination++ = v19;
            LOBYTE(v6) = v6 & 0x3F | 0x80;
          }
          *UTF8StringDestination++ = v6;
          v12 = v10 - UnicodeStringSource;
          v13 = v9 - UTF8StringDestination;
          if ( v12 <= 0xD )
          {
            if ( v13 < v12 )
              goto LABEL_29;
            while ( UnicodeStringSource < v10 )
            {
              v6 = *UnicodeStringSource++;
              if ( v6 > 0x7F )
                goto LABEL_8;
              *UTF8StringDestination++ = v6;
            }
LABEL_19:
            result = v5;
            goto LABEL_20;
          }
          if ( v13 < v12 )
            v12 = v9 - UTF8StringDestination;
          v15 = &UnicodeStringSource[v12 - 5];
          if ( UnicodeStringSource < v15 )
          {
            while ( 1 )
            {
              v16 = *UnicodeStringSource++;
              if ( v16 <= 0x7F )
              {
                *UTF8StringDestination++ = v16;
                if ( ((unsigned __int8)UnicodeStringSource & 2) != 0 )
                {
                  v16 = *UnicodeStringSource++;
                  if ( v16 > 0x7F )
                    goto LABEL_38;
                  *UTF8StringDestination++ = v16;
                }
                if ( UnicodeStringSource >= v15 )
                  break;
                while ( 1 )
                {
                  v17 = *((_DWORD *)UnicodeStringSource + 1);
                  v16 = *(_DWORD *)UnicodeStringSource;
                  if ( ((*(_DWORD *)UnicodeStringSource | v17) & 0xFF80FF80) != 0 )
                    break;
                  *UTF8StringDestination = v16;
                  UnicodeStringSource += 4;
                  UTF8StringDestination[2] = v17;
                  UTF8StringDestination[1] = BYTE2(v16);
                  UTF8StringDestination[3] = BYTE2(v17);
                  UTF8StringDestination += 4;
                  if ( UnicodeStringSource >= v15 )
                    goto LABEL_29;
                }
                v16 = (unsigned __int16)v16;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v16 <= 0x7Fu )
                {
                  *UTF8StringDestination++ = v16;
                  goto LABEL_36;
                }
              }
LABEL_38:
              if ( v16 > 0x7FF )
              {
                if ( v16 - 55296 <= 0x7FF )
                {
                  if ( v16 > 0xDBFF )
                  {
                    --UnicodeStringSource;
                    break;
                  }
                  v23 = *UnicodeStringSource++;
                  if ( (unsigned int)(v23 - 56320) > 0x3FF )
                  {
                    UnicodeStringSource -= 2;
                    v6 = 0;
                    goto LABEL_5;
                  }
                  v16 = v23 + (v16 << 10) - 56613888;
                  *UTF8StringDestination++ = (v16 >> 18) | 0xF0;
                  v21 = v16 & 0x3F000 | 0x80000;
                }
                else
                {
                  v21 = v16 | 0xE0000;
                }
                --v15;
                *UTF8StringDestination++ = v21 >> 12;
                v18 = v16 & 0xFC0 | 0x2000;
              }
              else
              {
                v18 = v16 | 0x3000;
              }
              *UTF8StringDestination = v18 >> 6;
              --v15;
              UTF8StringDestination[1] = v16 & 0x3F | 0x80;
              UTF8StringDestination += 2;
LABEL_36:
              if ( UnicodeStringSource >= v15 )
              {
                v6 = 0;
                goto LABEL_5;
              }
            }
          }
LABEL_29:
          v6 = 0;
        }
      }
      if ( !v6 )
        goto LABEL_19;
      goto LABEL_9;
    }
    return -1073741581;
  }
  else if ( UTF8StringActualByteCount )
  {
    return sub_180064FE0(
             (PCHAR)UnicodeStringSource,
             UnicodeStringByteCount,
             UTF8StringActualByteCount,
             UnicodeStringSource,
             UnicodeStringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
