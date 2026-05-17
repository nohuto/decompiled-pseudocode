/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6450
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwSetValueKey @ 0x1800A0CB0 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, int *a2)
{
  int v3; // r14d
  int v4; // r8d
  __int64 v5; // rax
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *a1;
  v5 = *((_QWORD *)a1 + 1) + *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v5 - 2) == 92 )
        break;
      v5 -= 2LL;
      v4 -= 2;
    }
    while ( v4 );
  }
  v8 = v5;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11LL, 0, &Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  v7 = RtlQueryImageFileKeyOption((__int64)Handle, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v3 || !*a2 )
      goto LABEL_14;
    ZwSetValueKey();
  }
  else
  {
    *a2 = 1;
  }
  v7 = 0;
LABEL_14:
  NtClose(Handle);
  return (unsigned int)v7;
}
