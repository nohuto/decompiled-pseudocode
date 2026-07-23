/*
 * XREFs of sub_1800F287C @ 0x1800F287C
 * Callers:
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 * Callees:
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800F287C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE CurrentUserKey; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  CurrentUserKey = 0LL;
  if ( !qword_18015D7B0 && sub_18006F938(0x20019u, 0LL, a3, a4, &CurrentUserKey) >= 0 )
  {
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"68";
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && _InterlockedCompareExchange64(&qword_18015D7B0, (signed __int64)KeyHandle, 0LL) )
    {
      ZwClose(KeyHandle);
    }
    sub_18006F918((char *)CurrentUserKey);
  }
  return qword_18015D7B0;
}
