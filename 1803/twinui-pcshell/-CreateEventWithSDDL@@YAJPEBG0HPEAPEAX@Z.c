/*
 * XREFs of ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1801E31CC
 * Callers:
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C (_lambda_5eeb3274d8dd6409222f94091fb661d1_--operator().c)
 *     _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054 (_lambda_4f3507863b21d28a47ffae36e7c55767_--operator().c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CreateEventWithSDDL(LPCWSTR lpName, const unsigned __int16 *a2, __int64 a3, void **a4)
{
  unsigned int v4; // ebx
  bool v7; // r15
  unsigned int Error; // eax
  HANDLE v9; // rax
  const char *v10; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HLOCAL hMem; // [rsp+98h] [rbp+48h]
  ULONG SecurityDescriptorSize; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  v13 = 1;
  *a4 = 0LL;
  hMem = 0LL;
  SecurityDescriptorSize = 0;
  SecurityDescriptor = 0LL;
  v7 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize);
  if ( v13 )
    hMem = SecurityDescriptor;
  if ( v7 )
  {
    Error = ResultFromKnownLastError();
  }
  else
  {
    *(&EventAttributes.nLength + 1) = 0;
    *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = hMem;
    v9 = CreateEventW(&EventAttributes, 1, 0, lpName);
    *a4 = v9;
    if ( v9 )
      goto LABEL_8;
    Error = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x15F,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
              v10);
  }
  v4 = Error;
LABEL_8:
  if ( hMem )
    LocalFree(hMem);
  return v4;
}
