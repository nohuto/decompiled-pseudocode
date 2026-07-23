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

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, ULONG *a2)
{
  int v3; // r14d
  __int16 v4; // dx
  int v5; // r8d
  wchar_t *v6; // rax
  NTSTATUS ImageFileKeyOption; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *a1;
  v5 = *a1;
  v6 = (wchar_t *)(*((_QWORD *)a1 + 1) + *a1);
  if ( *a1 )
  {
    do
    {
      if ( *(v6 - 1) == 92 )
        break;
      --v6;
      v5 -= 2;
    }
    while ( v5 );
  }
  ValueName.Buffer = v6;
  ValueName.Length = v4 - v5;
  ValueName.MaximumLength = v4 - v5 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11LL, 0, &KeyHandle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4, a2, 4u, (unsigned int *)&v12);
  if ( ImageFileKeyOption >= 0 )
  {
    if ( v3 || !*a2 )
      goto LABEL_14;
    Data = *a2 - 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  }
  else
  {
    *a2 = 1;
  }
  ImageFileKeyOption = 0;
LABEL_14:
  NtClose(KeyHandle);
  return (unsigned int)ImageFileKeyOption;
}
