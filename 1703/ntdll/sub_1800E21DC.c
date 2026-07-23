/*
 * XREFs of sub_1800E21DC @ 0x1800E21DC
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1800E21DC(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  if ( qword_18015A1F8 )
  {
    *a3 = qword_18015A1F8;
  }
  else
  {
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_18015A1F8, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a3 = qword_18015A1F8;
  }
  return 0;
}
