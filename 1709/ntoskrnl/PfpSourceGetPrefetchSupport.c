/*
 * XREFs of PfpSourceGetPrefetchSupport @ 0x1406F37E4
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x1406F2B50 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     NtOpenProcess @ 0x1404C0C60 (NtOpenProcess.c)
 *     NtOpenSession @ 0x1405E228C (NtOpenSession.c)
 */

__int64 __fastcall PfpSourceGetPrefetchSupport(int *a1, __int64 a2)
{
  PVOID v2; // rsi
  HANDLE v3; // rbx
  HANDLE UniqueProcess; // r14
  int v6; // ecx
  int v8; // ecx
  NTSTATUS v9; // edi
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-81h] BYREF
  CLIENT_ID ClientId; // [rsp+50h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-29h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  *(_DWORD *)a2 = *a1;
  UniqueProcess = 0LL;
  Object = 0LL;
  ProcessHandle = 0LL;
  v6 = *a1;
  ClientId.UniqueProcess = 0LL;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_16;
  }
  v8 = v6 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)-1073741637;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ClientId.UniqueThread = 0LL;
    v10 = (unsigned int)a1[1];
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = (HANDLE)v10;
    v9 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( v9 < 0 )
    {
      v3 = ProcessHandle;
LABEL_19:
      if ( !v3 )
        return (unsigned int)v9;
      NtClose(v3);
      goto LABEL_21;
    }
    v3 = ProcessHandle;
    v11 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ProcessHandle,
            0x1FFFFF,
            (__int64)PsProcessType,
            0,
            1935107664,
            &Object,
            0LL,
            0LL);
    v2 = Object;
    v9 = v11;
    if ( v11 < 0 )
    {
LABEL_17:
      if ( v2 )
        ObfDereferenceObjectWithTag(v2, 0x73576650u);
      goto LABEL_19;
    }
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 && v12 != (((unsigned __int64)Object ^ *((_QWORD *)Object + 97)) & 0x1FFFFFFFFFFFFFFFLL) )
    {
      v9 = -1073741275;
      goto LABEL_17;
    }
    *(_QWORD *)(a2 + 8) = v3;
    v3 = 0LL;
LABEL_16:
    v9 = 0;
    goto LABEL_17;
  }
  RtlStringCbPrintfW(pszDest, 0x50uLL, L"\\KernelObjects\\Session%d", (unsigned int)a1[1]);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenSession(&ClientId.UniqueProcess, 0xF0003u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    *(_QWORD *)(a2 + 8) = ClientId.UniqueProcess;
    goto LABEL_16;
  }
  UniqueProcess = ClientId.UniqueProcess;
LABEL_21:
  if ( UniqueProcess )
    NtClose(UniqueProcess);
  return (unsigned int)v9;
}
