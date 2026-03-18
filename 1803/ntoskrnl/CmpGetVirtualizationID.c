/*
 * XREFs of CmpGetVirtualizationID @ 0x1405C08C4
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x1406F5614 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     CmpEffectiveTokenForSubject @ 0x140105530 (CmpEffectiveTokenForSubject.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  NTSTATUS v5; // ebx
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = CmpEffectiveTokenForSubject(a2, &v9);
  if ( v9 == 2 && *(int *)(v4 + 8) < 2 )
    v3 = *(_QWORD *)(v4 + 16);
  SeQueryUserSidToken(v3, Sid, 0x44u, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x65564D43u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v5;
}
