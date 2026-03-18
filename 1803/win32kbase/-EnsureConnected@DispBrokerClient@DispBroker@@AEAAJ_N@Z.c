/*
 * XREFs of ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00A03FC
 * Callers:
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00A0778 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?IsSupported@DispBrokerClient@DispBroker@@SA_NXZ @ 0x1C00A06B4 (-IsSupported@DispBrokerClient@DispBroker@@SA_NXZ.c)
 *     ?IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00A0720 (-IsValid@DispBrokerClient@DispBroker@@QEAA_NXZ.c)
 *     RtlStringCchPrintfW @ 0x1C00A0A6C (RtlStringCchPrintfW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall DispBroker::DispBrokerClient::EnsureConnected(DispBroker::DispBrokerClient *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS result; // eax
  unsigned int CurrentProcessSessionId; // eax
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DispBroker::DispBrokerClientHandle *PoolWithTag; // rbx
  HANDLE v10; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v12[3]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v13; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v15[10]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[48]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t SourceString[48]; // [rsp+160h] [rbp+60h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(DispBroker::DispBrokerClient::s_pSessionLock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( DispBroker::DispBrokerClient::IsValid(this) )
    return 0;
  DispBroker::DispBrokerClientReference::Assign((void **)this, 0LL);
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
      memset(v12, 0, sizeof(v12));
      LODWORD(v12[0]) = 48;
      *((_QWORD *)&v12[0] + 1) = 0LL;
      DWORD2(v12[1]) = 512;
      *(_QWORD *)&v12[1] = 0LL;
      v12[2] = 0LL;
      memset(v15, 0, 0x48uLL);
      v15[2] = 0xFFFFLL;
      LODWORD(v15[0]) = 0x100000;
      v13 = -2000000LL;
      Handle = 0LL;
      v6 = ZwAlpcConnectPort(&Handle, &DestinationString, v12, v15, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v6 < 0 || !Handle )
        return v6;
      PoolWithTag = (struct DispBroker::DispBrokerClientHandle *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x44535042u);
      if ( PoolWithTag )
      {
        v10 = Handle;
        *(_DWORD *)PoolWithTag = 1;
        *((_QWORD *)PoolWithTag + 1) = v10;
        if ( !v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      }
      else
      {
        PoolWithTag = 0LL;
      }
      DispBroker::DispBrokerClientReference::Assign((void **)this, PoolWithTag);
      if ( *(_QWORD *)this )
      {
        return v6;
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
