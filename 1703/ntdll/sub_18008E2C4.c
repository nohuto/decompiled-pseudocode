/*
 * XREFs of sub_18008E2C4 @ 0x18008E2C4
 * Callers:
 *     sub_18003B380 @ 0x18003B380 (sub_18003B380.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlFindCharInUnicodeString @ 0x1800401C0 (RtlFindCharInUnicodeString.c)
 *     sub_180061D0C @ 0x180061D0C (sub_180061D0C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18008E2C4(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v7; // ecx
  __int64 result; // rax
  const wchar_t *Buffer; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rax
  char v15; // [rsp+40h] [rbp-C8h]
  unsigned int v16; // [rsp+44h] [rbp-C4h]
  unsigned __int16 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  struct _CURDIR *p_CurrentDirectory; // [rsp+58h] [rbp-B0h]
  _BYTE v20[16]; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+70h] [rbp-98h]
  _BYTE v22[64]; // [rsp+80h] [rbp-88h] BYREF
  _WORD Src[16]; // [rsp+C0h] [rbp-48h] BYREF

  v15 = 0;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v15 = 1;
    Buffer = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
LABEL_19:
    v10 = Length >> 1;
    goto LABEL_7;
  }
  v7 = a1 - 1;
  if ( !v7 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1,
                            (__int16 *)&ProcessParameters->ImagePathName,
                            (__int64)&unk_180110160,
                            &v17);
    Buffer = ProcessParameters->ImagePathName.Buffer;
    if ( CharInUnicodeString >= 0 )
    {
      v10 = (v17 >> 1) + 1;
      goto LABEL_7;
    }
    Length = ProcessParameters->ImagePathName.Length;
    goto LABEL_19;
  }
  if ( v7 == 1 )
  {
    result = ZwQuerySystemInformation(0LL, v22, 64LL, 0LL);
    v16 = result;
    if ( (int)result < 0 )
      goto LABEL_23;
    result = sub_180061D0C(Src, 0x20uLL, &v18, 0LL, 0, L"%u", v22[56]);
    v16 = result;
    if ( (int)result < 0 )
      goto LABEL_23;
    Buffer = Src;
    v10 = (v18 - (__int64)Src) >> 1;
LABEL_7:
    if ( a2 )
    {
      if ( v10 < a3 )
      {
        *a4 = v10;
        v11 = v10;
        memmove(a2, Buffer, 2 * v10);
        a2[v11] = 0;
        result = 0LL;
LABEL_10:
        v16 = result;
        goto LABEL_23;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v10 + 1;
    result = 3221225507LL;
    goto LABEL_10;
  }
  result = ZwQuerySystemInformation(90LL, v20, 32LL, 0LL);
  v16 = result;
  if ( (int)result >= 0 )
  {
    if ( v21 == 1 )
    {
      Buffer = L"Legacy";
      v10 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v10 = 4LL;
    }
    goto LABEL_7;
  }
LABEL_23:
  if ( v15 )
  {
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
