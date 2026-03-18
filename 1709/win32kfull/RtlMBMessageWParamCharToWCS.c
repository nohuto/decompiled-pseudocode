/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x1C023AA3C
 * Callers:
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C00AA9D0 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x1C01EEDC0 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C0200CC8 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(__int64 a1, CHAR *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  BOOL v5; // ebp
  unsigned int v7; // ebx
  unsigned __int16 v8; // dx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0;
  v7 = a1;
  v8 = THREAD_CODEPAGE(a1, (__int64)a2, a3, a4);
  if ( v7 == 47 || v7 == 204 )
    goto LABEL_17;
  if ( v7 == 258 )
  {
    v5 = (*gpsi & 2) != 0 && (*(_QWORD *)a2 & 0x80000000LL) != 0;
LABEL_12:
    if ( (*gpsi & 2) != 0 )
    {
      if ( (v4 & 0xFF00) != 0 )
        v9 = HIBYTE(v4) | (unsigned __int64)(unsigned __int16)((unsigned __int8)v4 << 8);
      else
        v9 = (unsigned __int8)v4;
      *(_QWORD *)a2 = v9;
    }
    goto LABEL_17;
  }
  if ( v7 != 259 )
  {
    if ( v7 <= 0x105 )
      return 1LL;
    if ( v7 > 0x107 )
    {
      if ( v7 != 271 )
      {
        if ( v7 == 288 )
          goto LABEL_17;
        if ( v7 != 646 )
          return 1LL;
      }
      goto LABEL_12;
    }
  }
LABEL_17:
  UnicodeString = 0;
  if ( v8 == NlsAnsiCodePage || !v8 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_20;
  }
  else if ( (unsigned int)ConvertToAndFromWideChar(v8, (WCHAR *)&UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_20:
    v10 = UnicodeString;
    if ( v5 )
      v10 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v10;
    return 1LL;
  }
  return 0LL;
}
