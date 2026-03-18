/*
 * XREFs of _SetWatermarkStrings @ 0x1C0117E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rsi
  int *v6; // rdx
  int v7; // ecx
  WCHAR *v8; // r8
  char *v9; // r10
  struct _UNICODE_STRING *v10; // rbx
  unsigned __int64 Length; // rcx
  unsigned int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+10h]

  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v13 = v3;
    if ( (unsigned __int64)v3 >= 1 )
      break;
    v5 = 2LL * v3;
    v6 = (int *)(a1 + 16LL * v3);
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (int *)W32UserProbeAddress;
    v7 = *v6;
    v15 = *v6;
    *(_DWORD *)&SourceString.Length = *v6;
    v8 = (WCHAR *)*((_QWORD *)v6 + 1);
    SourceString.Buffer = v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)v8 + (unsigned __int16)v7 + 2;
    if ( (unsigned __int64)v9 >= W32UserProbeAddress
      || (unsigned __int16)v7 > HIWORD(v15)
      || (v7 & 1) != 0
      || v9 <= (char *)v8 )
    {
      *W32UserProbeAddress = 0;
    }
    *(&(&gWatermarkStringArray)[2 * v3] + 1) = (struct _UNICODE_STRING near *)((char *)&gWatermarkStrings
                                                                             + 256 * (__int64)v3);
    v10 = (struct _UNICODE_STRING *)&(&gWatermarkStringArray)[2 * v3];
    v10->Length = 0;
    v10->MaximumLength = 256;
    RtlCopyUnicodeString(v10, &SourceString);
    Length = WORD1((&gWatermarkStringArray)[v5]) - 2LL;
    if ( v10->Length < Length )
      Length = v10->Length;
    *(&(*(&(&gWatermarkStringArray)[v5] + 1))->Length + (Length >> 1)) = 0;
    v3 = v13 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2148LL) )
  {
    v12 = 126;
    if ( (unsigned __int16)gWatermarkStringArray <= 0x7Eu )
      v12 = (unsigned __int16)gWatermarkStringArray;
    gSafeModeStrLen = v12 >> 1;
    if ( RtlStringCchCopyNW(&gwszSafeModeStr, 0x40uLL, qword_1C032AD48, v12 >> 1) < 0 )
      return 0;
  }
  return v4;
}
