/*
 * XREFs of sub_1800818B0 @ 0x1800818B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1800818B0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110820;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_180110810,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    v4 = DWORD1(v11);
    qword_18015C428 = *(_QWORD *)((char *)&v11 + 4);
    v5 = 1049601;
    if ( BYTE4(v11) > 0x14u || !_bittest(&v5, BYTE4(v11)) )
      LOBYTE(qword_18015C428) = 0;
    if ( BYTE1(qword_18015C428) > 0x14u || (v4 = BYTE1(qword_18015C428), !_bittest(&v5, BYTE1(qword_18015C428))) )
      BYTE1(qword_18015C428) = 0;
    LOBYTE(v4) = BYTE2(qword_18015C428);
    if ( BYTE2(qword_18015C428) > 0x14u || (v6 = 1082401, !_bittest(&v6, v4)) )
      BYTE2(qword_18015C428) = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}
