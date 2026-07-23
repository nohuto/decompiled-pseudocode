/*
 * XREFs of RtlUnicodeToOemN @ 0x1800718F0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180071840 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E99E0 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v7; // ebx
  ULONG v8; // edi
  __int64 v9; // r9
  __int64 v10; // r10
  CHAR *v11; // rdx
  const WCHAR *v12; // r8
  __int64 v13; // rax
  int v15; // r9d
  __int64 v16; // rdi
  __int64 v17; // rax
  __int16 v18; // r10
  unsigned int v19; // eax

  v6 = BytesInUnicodeString >> 1;
  v7 = MaxBytesInOemString;
  if ( !NlsMbOemCodePageTag )
  {
    v8 = MaxBytesInOemString;
    if ( v6 < MaxBytesInOemString )
      v8 = BytesInUnicodeString >> 1;
    if ( BytesInOemString )
      *BytesInOemString = v8;
    v9 = qword_180159F90;
    v10 = v8 & 0xF;
    v11 = &OemString[v10 - 15];
    v12 = &UnicodeString[v10 - 15];
    while ( (unsigned int)v10 <= 8 )
    {
      if ( (_DWORD)v10 == 8 )
        goto LABEL_23;
      if ( !(_DWORD)v10 )
        goto LABEL_31;
      if ( (_DWORD)v10 != 1 )
      {
        if ( (_DWORD)v10 != 2 )
        {
          if ( (_DWORD)v10 != 3 )
          {
            if ( (_DWORD)v10 != 4 )
            {
              if ( (_DWORD)v10 != 5 )
              {
                if ( (_DWORD)v10 != 6 )
                  goto LABEL_24;
                goto LABEL_25;
              }
LABEL_26:
              v11[10] = *(_BYTE *)(v12[10] + v9);
            }
            v11[11] = *(_BYTE *)(v12[11] + v9);
          }
          v11[12] = *(_BYTE *)(v12[12] + v9);
        }
        v11[13] = *(_BYTE *)(v12[13] + v9);
      }
      v11[14] = *(_BYTE *)(v12[14] + v9);
LABEL_31:
      v8 -= v10;
      LODWORD(v10) = 16;
      if ( !v8 )
        return v7 < v6 ? 0x80000005 : 0;
    }
    if ( (_DWORD)v10 != 9 )
    {
      if ( (_DWORD)v10 != 10 )
      {
        if ( (_DWORD)v10 != 11 )
        {
          if ( (_DWORD)v10 != 12 )
          {
            if ( (_DWORD)v10 != 13 )
            {
              if ( (_DWORD)v10 != 14 )
              {
                if ( (_DWORD)v10 != 15 )
                {
                  v13 = v12[15];
                  v12 += 16;
                  v11 += 16;
                  *(v11 - 1) = *(_BYTE *)(v13 + v9);
                }
                *v11 = *(_BYTE *)(*v12 + v9);
              }
              v11[1] = *(_BYTE *)(v12[1] + v9);
            }
            v11[2] = *(_BYTE *)(v12[2] + v9);
          }
          v11[3] = *(_BYTE *)(v12[3] + v9);
        }
        v11[4] = *(_BYTE *)(v12[4] + v9);
      }
      v11[5] = *(_BYTE *)(v12[5] + v9);
    }
    v11[6] = *(_BYTE *)(v12[6] + v9);
LABEL_23:
    v11[7] = *(_BYTE *)(v12[7] + v9);
LABEL_24:
    v11[8] = *(_BYTE *)(v12[8] + v9);
LABEL_25:
    v11[9] = *(_BYTE *)(v12[9] + v9);
    goto LABEL_26;
  }
  v15 = (int)OemString;
  if ( v6 )
  {
    v16 = qword_180159F80;
    do
    {
      if ( !v7 )
        break;
      v17 = *UnicodeString++;
      v18 = *(_WORD *)(v16 + 2 * v17);
      if ( HIBYTE(v18) )
      {
        v19 = v7--;
        if ( v19 < 2 )
          break;
        *OemString++ = HIBYTE(v18);
      }
      *OemString = v18;
      --v7;
      ++OemString;
      --v6;
    }
    while ( v6 );
  }
  if ( BytesInOemString )
    *BytesInOemString = (_DWORD)OemString - v15;
  return v7 < v6 ? 0x80000005 : 0;
}
