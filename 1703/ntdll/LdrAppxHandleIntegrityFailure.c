/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800D3C90
 * Callers:
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x180061980 (RtlQueryPackageIdentity.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A91B0 (RtlCaptureContext.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D3E98 @ 0x1800D3E98 (sub_1800D3E98.c)
 *     sub_1800D3F18 @ 0x1800D3F18 (sub_1800D3F18.c)
 *     sub_1800D400C @ 0x1800D400C (sub_1800D400C.c)
 *     sub_1800D4168 @ 0x1800D4168 (sub_1800D4168.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  NTSTATUS v2; // ebx
  _WORD *v3; // rdi
  __int64 v4; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v9; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+5E0h] [rbp+4E0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+630h] [rbp+530h] BYREF

  PackageSize = 256LL;
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryHash";
  v2 = RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, 0LL, 0LL, 0LL);
  if ( v2 < 0 )
    goto LABEL_14;
  v2 = sub_1800D4168(a1, PackageFullName, &KeyHandle);
  if ( v2 < 0 )
    goto LABEL_14;
  v2 = sub_1800D400C(KeyHandle);
  if ( v2 >= 0 )
  {
    v3 = v9;
    LODWORD(v4) = 0;
    if ( *v9 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( v9[v4] );
    }
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x50u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( KeyValueInformation[1] != 3 || !KeyValueInformation[2] )
        v2 = -1073739509;
      if ( v2 >= 0 )
        sub_1800D3F18(a1, PackageFullName, v3);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  ZwClose(KeyHandle);
  if ( v2 < 0 )
LABEL_14:
    sub_1800D3E98((unsigned int)v2);
  if ( a1 != -1073740673 )
  {
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    ExceptionRecord.ExceptionFlags = 1;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord.ExceptionCode);
  }
  return 3221225781LL;
}
