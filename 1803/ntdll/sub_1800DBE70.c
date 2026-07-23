/*
 * XREFs of sub_1800DBE70 @ 0x1800DBE70
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1800DBE70(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  if ( qword_18015B240 )
  {
    *a3 = qword_18015B240;
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
    if ( _InterlockedCompareExchange64(&qword_18015B240, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    *a3 = qword_18015B240;
  }
  return 0;
}
