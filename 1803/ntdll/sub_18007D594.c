/*
 * XREFs of sub_18007D594 @ 0x18007D594
 * Callers:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 * Callees:
 *     sub_1800726B8 @ 0x1800726B8 (sub_1800726B8.c)
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CC66C @ 0x1800CC66C (sub_1800CC66C.c)
 */

__int64 __fastcall sub_18007D594(__int64 a1)
{
  struct _PEB *v1; // rax
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  __int64 result; // rax
  int v6; // r8d
  int v7; // r9d
  _BYTE v8[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_180114044;
  result = (unsigned int)_InterlockedCompareExchange(&dword_18015D088, 1, 0);
  if ( !(_DWORD)result )
  {
    sub_1800726B8((ULONGLONG *)&dword_180156570);
    result = (unsigned int)_InterlockedExchange(&dword_18015D088, 2);
  }
  if ( (unsigned int)dword_180156570 > 5 && dword_18015D088 == 2 )
  {
    sub_1800CC66C(v9, a1);
    sub_1800CC66C(v10, Buffer);
    return sub_1800886A4((int)&dword_180156570, (int)&dword_180123AF5, v6, v7, 4u, (PEVENT_DATA_DESCRIPTOR)v8);
  }
  return result;
}
