/*
 * XREFs of CmpCreatePredefined @ 0x1405C1114
 * Callers:
 *     CmpCreatePerfKeys @ 0x1405C104C (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 */

__int64 *__fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, struct _OBJECT_HANDLE_INFORMATION a3)
{
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+78h] [rbp-88h]
  __int128 v14; // [rsp+80h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION v15[30]; // [rsp+90h] [rbp-70h] BYREF

  memset(v15, 0, sizeof(v15));
  v15[19] = (struct _OBJECT_HANDLE_INFORMATION)&v15[18];
  v15[18] = (struct _OBJECT_HANDLE_INFORMATION)&v15[18];
  memset(&v15[20], 0, 0x50uLL);
  v15[3].HandleAttributes = 16777217;
  v15[0].HandleAttributes = 33;
  v15[7] = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  v10 = 48;
  v11 = a1;
  v13 = 576;
  v14 = 0LL;
  if ( (int)ObOpenObjectByName((__int64)&v10, (__int64)CmKeyObjectType, 0, 0LL, 0x20019u, (__int64)v15, &Handle) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
  }
  return CmpCleanupParseContext((__int64)v15, 0);
}
