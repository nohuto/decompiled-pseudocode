/*
 * XREFs of ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00DBECC
 * Callers:
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00DC1B4 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0005048 (RtlStringCchPrintfW.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?IsSupported@DispBrokerClient@DispBroker@@SA_NXZ @ 0x1C00DC104 (-IsSupported@DispBrokerClient@DispBroker@@SA_NXZ.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00DC15C (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 */

NTSTATUS __fastcall DispBroker::DispBrokerClient::EnsureConnected(DispBroker::DispBrokerClient *this)
{
  NTSTATUS result; // eax
  unsigned int CurrentProcessSessionId; // eax
  int v4; // edi
  HANDLE *PoolWithTag; // rdx
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v7[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v8; // [rsp+A0h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v10[10]; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t pszDest[48]; // [rsp+108h] [rbp+0h] BYREF
  wchar_t SourceString[48]; // [rsp+168h] [rbp+60h] BYREF

  if ( DispBroker::DispBrokerClient::IsValid(this) )
    return 0;
  DispBroker::DispBrokerClientReference::Assign((HANDLE **)this, 0LL);
  if ( !DispBroker::DispBrokerClient::IsSupported() )
    return -1073741637;
  memset(pszDest, 0, 0x5AuLL);
  memset(SourceString, 0, 0x5AuLL);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  result = RtlStringCchPrintfW(pszDest, 0x2DuLL, L"\\Sessions\\%d", CurrentProcessSessionId);
  if ( result >= 0 )
  {
    result = RtlStringCchPrintfW(SourceString, 0x2DuLL, L"%s\\Windows\\DispBrokerPort", pszDest);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      memset(v7, 0, sizeof(v7));
      LODWORD(v7[0]) = 48;
      *((_QWORD *)&v7[0] + 1) = 0LL;
      DWORD2(v7[1]) = 512;
      *(_QWORD *)&v7[1] = 0LL;
      v7[2] = 0LL;
      memset(v10, 0, 0x48uLL);
      v10[2] = 0xFFFFLL;
      LODWORD(v10[0]) = 0x100000;
      v8 = -2000000LL;
      Handle = 0LL;
      v4 = ZwAlpcConnectPort(&Handle, &DestinationString, v7, v10, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v4 < 0 || !Handle )
        return v4;
      PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x44535042u);
      if ( PoolWithTag )
      {
        PoolWithTag[1] = Handle;
        *(_DWORD *)PoolWithTag = 1;
      }
      else
      {
        PoolWithTag = 0LL;
      }
      DispBroker::DispBrokerClientReference::Assign((HANDLE **)this, PoolWithTag);
      if ( *(_QWORD *)this )
      {
        return v4;
      }
      else
      {
        NtClose(Handle);
        return -1073741801;
      }
    }
  }
  return result;
}
