/*
 * XREFs of sub_1800DB9E4 @ 0x1800DB9E4
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _ltow_s @ 0x180095410 (_ltow_s.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall sub_1800DB9E4(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  wchar_t *v11; // rdx
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  _QWORD v16[5]; // [rsp+58h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+100h] [rbp+0h] BYREF

  v4 = a1;
  v15 = a1;
  v16[0] = L"Type:";
  v16[1] = L" Name:";
  v16[2] = L" Language:";
  v16[3] = L" Item:";
  v8 = 0;
  v9 = 2147353476LL;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&DestinationString.Length = 34078720;
    DestinationString.Buffer = SourceString;
    v10 = 0;
    RtlAppendUnicodeToString(&DestinationString.Length, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&DestinationString.Length, (_WORD *)v16[v10]);
      if ( *(_QWORD *)(a2 + 8LL * v10) < 0x10000uLL || v10 == 3 )
      {
        ltow_s(*(_DWORD *)(a2 + 8LL * v10), Buffer, 0x40uLL, 10);
        v11 = Buffer;
      }
      else
      {
        v11 = *(wchar_t **)(a2 + 8LL * v10);
      }
      RtlAppendUnicodeToString(&DestinationString.Length, v11);
      ++v10;
    }
    while ( v10 < a3 );
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v12 = 2147353476LL;
    sub_1800DBCC0(&DestinationString, *(unsigned __int8 *)v12);
    memset(SourceString, 0, DestinationString.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = sub_180087F60(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      sub_1800DBCC0(&DestinationString, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)v8;
}
