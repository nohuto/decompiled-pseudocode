/*
 * XREFs of sub_18007CF10 @ 0x18007CF10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_18007CF10(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  __int64 KeyValueInformation; // [rsp+70h] [rbp+37h] BYREF
  __int128 v11; // [rsp+78h] [rbp+3Fh]

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  KeyValueInformation = 0LL;
  v11 = 0uLL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110860;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_180110850,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    v4 = DWORD1(v11);
    qword_18015D468 = *(_QWORD *)((char *)&v11 + 4);
    v5 = 1049601;
    if ( BYTE4(v11) > 0x14u || !_bittest(&v5, BYTE4(v11)) )
      LOBYTE(qword_18015D468) = 0;
    if ( BYTE1(qword_18015D468) > 0x14u || (v4 = BYTE1(qword_18015D468), !_bittest(&v5, BYTE1(qword_18015D468))) )
      BYTE1(qword_18015D468) = 0;
    LOBYTE(v4) = BYTE2(qword_18015D468);
    if ( BYTE2(qword_18015D468) > 0x14u || (v6 = 1082401, !_bittest(&v6, v4)) )
      BYTE2(qword_18015D468) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}
