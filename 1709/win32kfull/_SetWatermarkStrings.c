/*
 * XREFs of _SetWatermarkStrings @ 0x1C0121B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C00DBB38 (RtlStringCchCopyNW.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rsi
  ULONG64 v6; // rdx
  int v7; // ecx
  WCHAR *v8; // r8
  ULONG64 v9; // r10
  struct _UNICODE_STRING *v10; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 Next_low; // rax
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
    v6 = a1 + 16LL * v3;
    if ( v6 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v7 = *(_DWORD *)v6;
    v15 = *(_DWORD *)v6;
    *(_DWORD *)&SourceString.Length = *(_DWORD *)v6;
    v8 = *(WCHAR **)(v6 + 8);
    SourceString.Buffer = v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (ULONG64)v8 + (unsigned __int16)v7 + 2;
    if ( v9 >= MmUserProbeAddress || (unsigned __int16)v7 > HIWORD(v15) || (v7 & 1) != 0 || v9 <= (unsigned __int64)v8 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(&WPP_MAIN_CB.Dpc.ProcessorHistory + 2 * v3) = (KAFFINITY)&gWatermarkStrings + 256 * (__int64)v3;
    v10 = (struct _UNICODE_STRING *)(&WPP_MAIN_CB.Dpc.DpcListEntry + 2 * v3);
    v10->Length = 0;
    v10->MaximumLength = 256;
    RtlCopyUnicodeString(v10, &SourceString);
    Length = v10->Length;
    if ( Length >= (unsigned __int64)WORD1((&WPP_MAIN_CB.Dpc.DpcListEntry.Next)[v5]) - 2 )
      Length = WORD1((&WPP_MAIN_CB.Dpc.DpcListEntry.Next)[v5]) - 2LL;
    *(_WORD *)(*(&WPP_MAIN_CB.Dpc.ProcessorHistory + v5) + 2 * (Length >> 1)) = 0;
    v3 = v13 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2148LL) )
  {
    Next_low = 126LL;
    if ( LOWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) <= 0x7Eu )
      Next_low = LOWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    gSafeModeStrLen = Next_low >> 1;
    if ( RtlStringCchCopyNW(
           &gwszSafeModeStr,
           0x40uLL,
           (STRSAFE_PCNZWCH)WPP_MAIN_CB.Dpc.ProcessorHistory,
           gSafeModeStrLen) < 0 )
      return 0;
  }
  return v4;
}
