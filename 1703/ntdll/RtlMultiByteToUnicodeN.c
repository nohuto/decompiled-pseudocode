/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x180043840
 * Callers:
 *     RtlAnsiCharToUnicodeChar @ 0x180041790 (RtlAnsiCharToUnicodeChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateEnvironmentEx @ 0x180062AD0 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x180099970 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E3750 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v5; // edx
  PWCH v6; // rbx
  ULONG v7; // r11d
  __int64 v8; // r8
  unsigned int v9; // r10d
  unsigned __int8 *v10; // r9
  WCHAR *v11; // rdx
  int v13; // r11d
  __int64 v14; // rdi
  ULONG v15; // r10d
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rax

  v5 = MaxBytesInUnicodeString >> 1;
  v6 = UnicodeString;
  if ( !NlsMbCodePageTag )
  {
    v7 = BytesInMultiByteString;
    if ( v5 < BytesInMultiByteString )
      v7 = v5;
    if ( BytesInUnicodeString )
      *BytesInUnicodeString = 2 * v7;
    v8 = qword_18015A1D0;
    v9 = v7 & 0x1F;
    v10 = (unsigned __int8 *)&MultiByteString[v7 - v9];
    v11 = &UnicodeString[v7 - v9];
    while ( v9 <= 0x1F )
    {
      if ( v9 == 1 )
        goto LABEL_41;
      switch ( v9 )
      {
        case 0u:
          break;
        case 2u:
          goto LABEL_40;
        case 3u:
          goto LABEL_39;
        case 4u:
          goto LABEL_38;
        case 5u:
          goto LABEL_37;
        case 6u:
          goto LABEL_36;
        case 7u:
          goto LABEL_35;
        case 8u:
          goto LABEL_34;
        case 9u:
          goto LABEL_33;
        case 0xAu:
          goto LABEL_32;
        case 0xBu:
          goto LABEL_31;
        case 0xCu:
          goto LABEL_30;
        case 0xDu:
          goto LABEL_29;
        case 0xEu:
          goto LABEL_28;
        case 0xFu:
          goto LABEL_27;
        case 0x10u:
          goto LABEL_26;
        case 0x11u:
          goto LABEL_25;
        case 0x12u:
          goto LABEL_24;
        case 0x13u:
          goto LABEL_23;
        case 0x14u:
          goto LABEL_22;
        case 0x15u:
          goto LABEL_21;
        case 0x16u:
          goto LABEL_20;
        case 0x17u:
          goto LABEL_19;
        case 0x18u:
          goto LABEL_18;
        case 0x19u:
          goto LABEL_17;
        case 0x1Au:
          goto LABEL_16;
        case 0x1Bu:
          goto LABEL_15;
        case 0x1Cu:
          goto LABEL_14;
        case 0x1Du:
          goto LABEL_13;
        case 0x1Eu:
          goto LABEL_12;
        case 0x1Fu:
          goto LABEL_11;
        default:
          goto LABEL_10;
      }
LABEL_42:
      if ( v7 < 0x20 )
        return 0;
      v9 = 32;
      v7 -= 32;
      v11 -= 32;
      v10 -= 32;
    }
LABEL_10:
    v11[31] = *(_WORD *)(v8 + 2LL * v10[31]);
LABEL_11:
    v11[30] = *(_WORD *)(v8 + 2LL * v10[30]);
LABEL_12:
    v11[29] = *(_WORD *)(v8 + 2LL * v10[29]);
LABEL_13:
    v11[28] = *(_WORD *)(v8 + 2LL * v10[28]);
LABEL_14:
    v11[27] = *(_WORD *)(v8 + 2LL * v10[27]);
LABEL_15:
    v11[26] = *(_WORD *)(v8 + 2LL * v10[26]);
LABEL_16:
    v11[25] = *(_WORD *)(v8 + 2LL * v10[25]);
LABEL_17:
    v11[24] = *(_WORD *)(v8 + 2LL * v10[24]);
LABEL_18:
    v11[23] = *(_WORD *)(v8 + 2LL * v10[23]);
LABEL_19:
    v11[22] = *(_WORD *)(v8 + 2LL * v10[22]);
LABEL_20:
    v11[21] = *(_WORD *)(v8 + 2LL * v10[21]);
LABEL_21:
    v11[20] = *(_WORD *)(v8 + 2LL * v10[20]);
LABEL_22:
    v11[19] = *(_WORD *)(v8 + 2LL * v10[19]);
LABEL_23:
    v11[18] = *(_WORD *)(v8 + 2LL * v10[18]);
LABEL_24:
    v11[17] = *(_WORD *)(v8 + 2LL * v10[17]);
LABEL_25:
    v11[16] = *(_WORD *)(v8 + 2LL * v10[16]);
LABEL_26:
    v11[15] = *(_WORD *)(v8 + 2LL * v10[15]);
LABEL_27:
    v11[14] = *(_WORD *)(v8 + 2LL * v10[14]);
LABEL_28:
    v11[13] = *(_WORD *)(v8 + 2LL * v10[13]);
LABEL_29:
    v11[12] = *(_WORD *)(v8 + 2LL * v10[12]);
LABEL_30:
    v11[11] = *(_WORD *)(v8 + 2LL * v10[11]);
LABEL_31:
    v11[10] = *(_WORD *)(v8 + 2LL * v10[10]);
LABEL_32:
    v11[9] = *(_WORD *)(v8 + 2LL * v10[9]);
LABEL_33:
    v11[8] = *(_WORD *)(v8 + 2LL * v10[8]);
LABEL_34:
    v11[7] = *(_WORD *)(v8 + 2LL * v10[7]);
LABEL_35:
    v11[6] = *(_WORD *)(v8 + 2LL * v10[6]);
LABEL_36:
    v11[5] = *(_WORD *)(v8 + 2LL * v10[5]);
LABEL_37:
    v11[4] = *(_WORD *)(v8 + 2LL * v10[4]);
LABEL_38:
    v11[3] = *(_WORD *)(v8 + 2LL * v10[3]);
LABEL_39:
    v11[2] = *(_WORD *)(v8 + 2LL * v10[2]);
LABEL_40:
    v11[1] = *(_WORD *)(v8 + 2LL * v10[1]);
LABEL_41:
    *v11 = *(_WORD *)(v8 + 2LL * *v10);
    goto LABEL_42;
  }
  v13 = (int)UnicodeString;
  v14 = qword_180159FA0;
  if ( v5 )
  {
    v15 = BytesInMultiByteString;
    v16 = qword_18015A1D0;
    while ( v15 )
    {
      --v5;
      v17 = *(unsigned __int8 *)MultiByteString;
      --v15;
      v18 = word_180159D80[v17];
      if ( v18 )
      {
        if ( !v15 )
        {
          *v6 = 0;
          LODWORD(v6) = (_DWORD)v6 + 2;
          break;
        }
        v19 = *(unsigned __int8 *)++MultiByteString;
        *v6++ = *(_WORD *)(v14 + 2 * (v19 + v18));
        --v15;
      }
      else
      {
        *v6++ = *(_WORD *)(v17 * 2 + v16);
      }
      ++MultiByteString;
      if ( !v5 )
        break;
    }
  }
  if ( BytesInUnicodeString )
    *BytesInUnicodeString = (_DWORD)v6 - v13;
  return 0;
}
