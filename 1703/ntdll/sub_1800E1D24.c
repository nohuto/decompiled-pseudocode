/*
 * XREFs of sub_1800E1D24 @ 0x1800E1D24
 * Callers:
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _itow_s @ 0x1800A00D0 (_itow_s.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall sub_1800E1D24(PVOID BaseAddress, __int64 a2, unsigned int a3, char a4)
{
  PVOID v4; // rax
  int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  wchar_t *v11; // rdx
  __int64 v12; // rcx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v15; // [rsp+50h] [rbp-B0h]
  PCWSTR Source[5]; // [rsp+58h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+100h] [rbp+0h] BYREF

  v4 = BaseAddress;
  v15 = BaseAddress;
  Source[0] = L"Type:";
  Source[1] = L" Name:";
  Source[2] = L" Language:";
  Source[3] = L" Item:";
  v8 = 0;
  v9 = 2147353476LL;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    v10 = 0;
    RtlAppendUnicodeToString(&Destination, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&Destination, Source[v10]);
      if ( (*(_QWORD *)(a2 + 8LL * v10) & 0xFFFFFFFFFFFF0000uLL) == 0 || v10 == 3 )
      {
        itow_s(*(_DWORD *)(a2 + 8LL * v10), Buffer, 0x40uLL, 10);
        v11 = Buffer;
      }
      else
      {
        v11 = *(wchar_t **)(a2 + 8LL * v10);
      }
      RtlAppendUnicodeToString(&Destination, v11);
      ++v10;
    }
    while ( v10 < a3 );
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v12 = 2147353476LL;
    sub_1800E2008(&Destination, *(unsigned __int8 *)v12);
    memset(SourceString, 0, Destination.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = sub_18008C2B0(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&Destination, SourceString);
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      sub_1800E2008(&Destination, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)v8;
}
