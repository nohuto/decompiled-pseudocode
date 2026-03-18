/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x1405867F0
 * Callers:
 *     RtlMultiByteToUnicodeN @ 0x1404DEA00 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x1404DF6E0 (RtlOemToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140564E80 (RtlAnsiCharToUnicodeChar.c)
 *     RtlMultiByteToUnicodeSize @ 0x1405F2890 (RtlMultiByteToUnicodeSize.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x140256CAC (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // ebx
  const CHAR *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v11; // r10
  WCHAR *v12; // rbp
  const CHAR *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  WCHAR *v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edx
  char v20; // cl
  unsigned int v21; // edx
  unsigned int v22; // edx
  char v23; // dl
  int v24; // edx
  unsigned int v25; // edx
  bool v26; // zf
  CHAR v27; // cl
  int v28; // edx
  unsigned int v29; // edx
  WCHAR v30; // dx
  __int64 v31; // rax
  unsigned int v32; // ecx

  v5 = 0;
  v6 = &UTF8StringSource[UTF8StringByteCount];
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v11 = UnicodeStringDestination;
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = UTF8StringSource;
        if ( UTF8StringSource >= v6 )
          goto LABEL_26;
        if ( v8 )
          break;
        v8 = *UTF8StringSource++;
        if ( v8 <= 0x7F )
          goto LABEL_6;
LABEL_48:
        if ( (v8 & 0x40) == 0 )
          goto LABEL_36;
        if ( (v8 & 0x20) != 0 )
        {
          if ( (v8 & 0x10) != 0 )
          {
            v21 = v8 & 0xF;
            if ( v21 > 4 )
              goto LABEL_36;
            v8 = v21 | 0x504D0C00;
          }
          else
          {
            v8 = v8 & 0xF | 0x48228000;
          }
        }
        else
        {
          v22 = v8 & 0x1F;
          if ( v22 <= 1 )
            goto LABEL_36;
          v8 = v22 | 0x800000;
        }
      }
      v20 = *UTF8StringSource++;
      if ( (v20 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v13;
LABEL_36:
        v5 = 263;
        LOWORD(v8) = -3;
        goto LABEL_6;
      }
      v8 = (v8 << 6) | v20 & 0x3F;
      if ( (v8 & 0x20000000) != 0 )
        break;
      if ( (v8 & 0x10000000) != 0 )
      {
        if ( (v8 & 0x800000) == 0 && (v8 & 0x1F0) - 16 > 0xF0 )
          goto LABEL_36;
      }
      else if ( (v8 & 0x3E0) == 0 || (v8 & 0x3E0) == 0x360 )
      {
        goto LABEL_36;
      }
    }
    if ( (v8 & 0x101F0000) > 0x10000000 )
    {
      if ( v11 >= v12 )
      {
LABEL_78:
        if ( UnicodeStringActualByteCount )
          *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
        return -1073741789;
      }
      *v11++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
    }
LABEL_6:
    if ( v11 >= v12 )
      goto LABEL_78;
    *v11++ = v8;
    v14 = v6 - UTF8StringSource;
    v15 = v12 - v11;
    if ( (unsigned __int64)(v6 - UTF8StringSource) > 0xD )
    {
      if ( v14 < v15 )
        v15 = v6 - UTF8StringSource;
      v16 = &v11[v15 - 7];
      while ( 2 )
      {
        if ( v11 >= v16 )
          goto LABEL_20;
        v17 = *UTF8StringSource++;
        if ( v17 > 0x7F )
          goto LABEL_60;
        *v11++ = v17;
        if ( ((unsigned __int8)UTF8StringSource & 1) == 0 )
          goto LABEL_14;
        v17 = *UTF8StringSource++;
        if ( v17 > 0x7F )
          goto LABEL_60;
        *v11++ = v17;
LABEL_14:
        if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
          goto LABEL_17;
        v17 = *(unsigned __int16 *)UTF8StringSource;
        if ( (v17 & 0x8080) == 0 )
        {
          UTF8StringSource += 2;
          *v11 = v17 & 0x7F;
          v11[1] = (v17 >> 8) & 0x7F;
          v11 += 2;
LABEL_17:
          while ( v11 < v16 )
          {
            v18 = *((_DWORD *)UTF8StringSource + 1);
            v17 = *(_DWORD *)UTF8StringSource;
            if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
              goto LABEL_58;
            UTF8StringSource += 8;
            *v11 = v17 & 0x7F;
            v11[1] = (v17 >> 8) & 0x7F;
            v11[2] = BYTE2(v17) & 0x7F;
            v11[3] = HIBYTE(v17) & 0x7F;
            v11[4] = v18 & 0x7F;
            v11[5] = (v18 >> 8) & 0x7F;
            v11[6] = BYTE2(v18) & 0x7F;
            v11[7] = HIBYTE(v18) & 0x7F;
            v11 += 8;
          }
          goto LABEL_20;
        }
LABEL_58:
        ++UTF8StringSource;
        if ( (unsigned __int8)v17 > 0x7Fu )
        {
LABEL_60:
          v23 = *UTF8StringSource++;
          if ( (v17 & 0x40) == 0 || (v23 & 0xC0) != 0x80 )
          {
LABEL_77:
            UTF8StringSource -= 2;
            goto LABEL_20;
          }
          v24 = v23 & 0x3F;
          if ( (v17 & 0x20) != 0 )
          {
            v25 = ((v17 & 0xF) << 6) | v24;
            v26 = (v17 & 0x10) == 0;
            v27 = *UTF8StringSource;
            if ( v26 )
            {
              if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v27 & 0xC0) != 0x80 )
                goto LABEL_77;
              v30 = v27 & 0x3F | ((_WORD)v25 << 6);
              v31 = 1LL;
            }
            else
            {
              if ( (v25 >> 4) - 1 > 0xF )
                goto LABEL_77;
              if ( (v27 & 0xC0) != 0x80 )
                goto LABEL_77;
              v28 = v27 & 0x3F | (v25 << 6);
              if ( (UTF8StringSource[1] & 0xC0) != 0x80 )
                goto LABEL_77;
              v29 = UTF8StringSource[1] & 0x3F | (v28 << 6);
              *v11++ = ((v29 >> 10) & 0x7FF) - 10304;
              v30 = (v29 & 0x3FF) - 9216;
              v31 = 2LL;
            }
            UTF8StringSource += v31;
            --v16;
          }
          else
          {
            v32 = v17 & 0x1F;
            if ( v32 <= 1 )
              goto LABEL_77;
            v30 = ((_WORD)v32 << 6) | v24;
          }
          *v11 = v30;
          --v16;
        }
        else
        {
          *v11 = (unsigned __int8)v17;
        }
        ++v11;
        continue;
      }
    }
    if ( v15 >= v14 )
      break;
LABEL_20:
    v8 = 0;
  }
  while ( UTF8StringSource < v6 )
  {
    v8 = *UTF8StringSource++;
    if ( v8 > 0x7F )
      goto LABEL_48;
    *v11++ = v8;
  }
  v8 = 0;
LABEL_26:
  if ( v8 )
  {
    v5 = 263;
    if ( v11 < v12 )
      *v11++ = -3;
    else
      v5 = -1073741789;
  }
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
  return v5;
}
