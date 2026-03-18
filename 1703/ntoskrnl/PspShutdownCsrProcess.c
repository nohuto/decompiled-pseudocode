/*
 * XREFs of PspShutdownCsrProcess @ 0x1406DF114
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14017DFC0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14017E100 (ZwSetEvent.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenEvent @ 0x14017E740 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14017E840 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x1406E2DE4 (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspShutdownCsrProcess(__int64 a1, unsigned int a2, _KPROCESS *a3)
{
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  int v8; // ebx
  __int64 result; // rax
  HANDLE EventHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  $5BC46E0569261879018906DEC3127961 v15; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = a2;
  EventHandle = 0LL;
  v5 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v7 = Handle;
  if ( v6 < 0 )
    v7 = 0LL;
  Handle = v7;
  PsDetachSiloFromCurrentThread(v5);
  KiStackAttachProcess(a3, 0, (__int64)&v15);
  v8 = PsInvokeWin32Callout(31, 0LL, 1, (int *)&v12);
  KiUnstackDetachProcess(&v15, 0LL);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  if ( v8 >= 0 && Handle )
  {
    ZwWaitForSingleObject(Handle, 0, 0LL);
    ZwClose(Handle);
  }
  result = PsTerminateProcess((ULONG_PTR)a3);
  if ( (int)result >= 0 )
    return PspWaitForUsermodeExit(a3);
  return result;
}
