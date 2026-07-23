/*
 * XREFs of LdrpMUIEtwOutput @ 0x1800E0A80
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _itow_s @ 0x18009AE30 (_itow_s.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpMUIEtwOutput(PVOID BaseAddress, __int64 a2, unsigned int a3, char a4)
{
  PVOID v4; // rax
  int ModuleInfoFromVirtualMemory; // r14d
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
  ModuleInfoFromVirtualMemory = 0;
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
      if ( *(_QWORD *)(a2 + 8LL * v10) < 0x10000uLL || v10 == 3 )
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
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v12);
    memset(SourceString, 0, Destination.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&Destination, SourceString);
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
