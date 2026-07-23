/*
 * XREFs of sub_18005032C @ 0x18005032C
 * Callers:
 *     sub_18004CBB4 @ 0x18004CBB4 (sub_18004CBB4.c)
 * Callees:
 *     sub_180086558 @ 0x180086558 (sub_180086558.c)
 *     sub_1800905E4 @ 0x1800905E4 (sub_1800905E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D6BE4 @ 0x1800D6BE4 (sub_1800D6BE4.c)
 */

__int64 __fastcall sub_18005032C(__int64 a1)
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
    Buffer = &word_18011B604;
  result = (unsigned int)_InterlockedCompareExchange(&dword_18015C058, 1, 0);
  if ( !(_DWORD)result )
  {
    sub_180086558(&dword_180155540);
    result = (unsigned int)_InterlockedExchange(&dword_18015C058, 2);
  }
  if ( (unsigned int)dword_180155540 > 5 && dword_18015C058 == 2 )
  {
    sub_1800D6BE4(v9, a1);
    sub_1800D6BE4(v10, Buffer);
    return sub_1800905E4((int)&dword_180155540, (int)&dword_1801243C4, v6, v7, 4u, (PEVENT_DATA_DESCRIPTOR)v8);
  }
  return result;
}
