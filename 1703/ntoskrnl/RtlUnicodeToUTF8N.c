/*
 * XREFs of RtlUnicodeToUTF8N @ 0x1405CB4E0
 * Callers:
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140163B08 (CountUnicodeToUTF8.c)
 */

NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // edi
  unsigned int v6; // r10d
  int v8; // ebx
  CHAR *v9; // rbp
  const WCHAR *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  NTSTATUS result; // eax
  const WCHAR *v15; // r10
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // edx
  CHAR v19; // al
  CHAR v20; // al
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8((unsigned int *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = &UTF8StringDestination[UTF8StringMaxByteCount];
  v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  while ( 1 )
  {
    do
    {
      if ( UnicodeStringSource >= v10 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      if ( v6 )
      {
        v18 = *UnicodeStringSource;
        if ( (unsigned int)(v18 - 56320) <= 0x3FF )
        {
          v6 = v18 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
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
      v5 = -1073741789;
      goto LABEL_19;
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
    if ( v12 > 0xD )
    {
      if ( v13 < v12 )
        v12 = v9 - UTF8StringDestination;
      v15 = &UnicodeStringSource[v12 - 5];
LABEL_28:
      while ( 2 )
      {
        if ( UnicodeStringSource >= v15 )
          goto LABEL_29;
        v16 = *UnicodeStringSource++;
        if ( v16 > 0x7F )
          goto LABEL_54;
        *UTF8StringDestination++ = v16;
        if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
          goto LABEL_25;
        v16 = *UnicodeStringSource++;
        if ( v16 > 0x7F )
          goto LABEL_54;
        *UTF8StringDestination++ = v16;
LABEL_25:
        if ( UnicodeStringSource >= v15 )
          goto LABEL_29;
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
            goto LABEL_28;
        }
        v16 = (unsigned __int16)v16;
        ++UnicodeStringSource;
        if ( (unsigned __int16)v16 > 0x7Fu )
        {
LABEL_54:
          if ( v16 > 0x7FF )
          {
            if ( v16 - 55296 <= 0x7FF )
            {
              if ( v16 > 0xDBFF )
              {
                --UnicodeStringSource;
                goto LABEL_29;
              }
              v23 = *UnicodeStringSource++;
              if ( (unsigned int)(v23 - 56320) > 0x3FF )
              {
                UnicodeStringSource -= 2;
                goto LABEL_29;
              }
              v16 = v23 + (v16 << 10) - 56613888;
              *UTF8StringDestination++ = (v16 >> 18) | 0xF0;
              v22 = v16 & 0x3F000 | 0x80000;
            }
            else
            {
              v22 = v16 | 0xE0000;
            }
            --v15;
            *UTF8StringDestination++ = v22 >> 12;
            v21 = v16 & 0xFC0 | 0x2000;
          }
          else
          {
            v21 = v16 | 0x3000;
          }
          --v15;
          *UTF8StringDestination++ = v21 >> 6;
          LOBYTE(v16) = v16 & 0x3F | 0x80;
        }
        *UTF8StringDestination++ = v16;
        continue;
      }
    }
    if ( v13 >= v12 )
      break;
LABEL_29:
    v6 = 0;
  }
  while ( UnicodeStringSource < v10 )
  {
    v6 = *UnicodeStringSource++;
    if ( v6 > 0x7F )
      goto LABEL_8;
    *UTF8StringDestination++ = v6;
  }
LABEL_19:
  result = v5;
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
