/*
 * XREFs of PspAssignSiloSystemRootPath @ 0x1406DE660
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     PsCreateSiloContext @ 0x1405A3CA0 (PsCreateSiloContext.c)
 *     PsInsertSiloContext @ 0x1406DE270 (PsInsertSiloContext.c)
 */

__int64 __fastcall PspAssignSiloSystemRootPath(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r8
  __int64 result; // rax
  unsigned __int16 *v7; // rdi
  void *v8; // rcx
  unsigned int inserted; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  Length = a2->Length;
  if ( a2->Length < 8u )
    return 3221225485LL;
  if ( (unsigned __int64)Length - 2 > 0x208 )
    return 3221225485LL;
  Buffer = a2->Buffer;
  if ( (unsigned __int16)(*Buffer - 65) > 0x19u && (unsigned __int16)(*Buffer - 97) > 0x19u )
    return 3221225485LL;
  if ( Buffer[1] != 58 )
    return 3221225485LL;
  if ( Buffer[2] != 92 )
    return 3221225485LL;
  if ( Buffer[((unsigned __int64)Length >> 1) - 1] == 92 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
  if ( !RtlEqualUnicodeString(a2, &DestinationString, 1u) )
    return 3221225485LL;
  result = PsCreateSiloContext(a1, (unsigned int)a2->Length + 16, 1, 0LL, &v11);
  if ( (int)result >= 0 )
  {
    v7 = (unsigned __int16 *)v11;
    v8 = (void *)(v11 + 16);
    *(_QWORD *)(v11 + 8) = v11 + 16;
    *v7 = a2->Length;
    v7[1] = a2->Length;
    memmove(v8, a2->Buffer, a2->Length);
    inserted = PsInsertSiloContext(a1, PsSystemRootSiloContextSlot, (__int64)v7);
    PsDereferenceSiloContext(v7);
    return inserted;
  }
  return result;
}
