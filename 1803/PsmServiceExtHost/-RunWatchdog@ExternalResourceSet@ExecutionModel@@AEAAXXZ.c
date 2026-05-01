/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18005C618
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18005C490 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005C800 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180032644 (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18004ED44 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x18005C40C (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  unsigned int v2; // edi
  const struct _TlgProvider_t *v3; // rcx
  UCHAR v4; // dl
  HANDLE ProcessHandle; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v6; // [rsp+40h] [rbp-21h] BYREF
  ExecutionModel::ExternalResourceSet *v7; // [rsp+48h] [rbp-19h] BYREF
  struct _GUID v8; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF
  struct _GUID *v11; // [rsp+98h] [rbp+37h]
  int v12; // [rsp+A0h] [rbp+3Fh]
  int v13; // [rsp+A4h] [rbp+43h]

  ProcessHandle = 0LL;
  if ( *((_DWORD *)this + 350) )
  {
    v2 = *((_DWORD *)this + 2);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      pDesc.Reserved = 0;
      v13 = 0;
      pDesc.Ptr = (ULONGLONG)&v7;
      v11 = (struct _GUID *)&v6;
      v7 = this;
      pDesc.Size = 8;
      v6 = v2;
      v12 = 4;
      TlgWrite(v3, &unk_18007F813, 0LL, 0LL, 4u, &pData);
    }
    if ( v2 && !ExecutionModel::ExternalResourceSet::IsDebuggerAttached(v2) )
    {
      if ( (*((_BYTE *)this + 1472) & 2) != 0 )
      {
        ExecutionModel::ResourceManager::ForceReleaseExternalResources(
          *((ExecutionModel::ResourceManager **)this + 3),
          v2);
      }
      else if ( RmpSystemOpenProcess(&ProcessHandle, 0x1001u, v2) >= 0
             && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
      {
        if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v4, 0LL) )
        {
          if ( *((_QWORD *)this + 182) )
          {
            HampSystemQueryProcessAppSessionGuid(ProcessHandle, &v8);
            if ( hProvider > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
              {
                TlgCreateWsz(&pDesc, (LPCWSTR)(*((_QWORD *)this + 182) + 88LL));
                v13 = 0;
                v11 = &v8;
                v12 = 16;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F7C3, 0LL, 0LL, 4u, &pData);
              }
            }
          }
        }
      }
    }
    if ( ProcessHandle )
      CloseHandle(ProcessHandle);
  }
}
