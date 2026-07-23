/*
 * XREFs of sub_1800D79F0 @ 0x1800D79F0
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_1800D79F0(unsigned __int16 *a1, _DWORD *a2)
{
  __int16 v2; // r8
  int v3; // esi
  WCHAR *v5; // rax
  int v6; // edx
  NTSTATUS v8; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  ULONG ReturnedLength; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v2 = *a1;
  v3 = 0;
  v5 = (WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
  v6 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(v5 - 1) == 92 )
        break;
      --v5;
      v6 -= 2;
    }
    while ( v6 );
  }
  ValueName.Buffer = v5;
  ValueName.Length = v2 - v6;
  ValueName.MaximumLength = v2 - v6 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( sub_18007C34C(&DestinationString.Length, 0xBu, &KeyHandle) < 0 )
  {
    if ( sub_18007C34C(&DestinationString.Length, 9u, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  v8 = LdrQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4u, a2, 4u, &ReturnedLength);
  if ( v8 >= 0 )
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
  v8 = 0;
LABEL_14:
  ZwClose(KeyHandle);
  return (unsigned int)v8;
}
