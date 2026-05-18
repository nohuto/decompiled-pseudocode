/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x180002550
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180002670 (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001518 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x180003740 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005808 (-ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800059A0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     memset_0 @ 0x1800072D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800072F0 (_guard_dispatch_icall_nop.c)
 */

bool FallBackToBDD(void)
{
  int v0; // ebx
  HMODULE LibraryW; // rax
  HMODULE v2; // rdi
  FARPROC ProcAddress; // rsi
  int v4; // r9d
  const struct _TlgProvider_t *v5; // rcx
  DwmInitAsimov::CDwmInitEventManager *Manager; // rax
  int v7; // r9d
  unsigned __int16 v9; // [rsp+28h] [rbp-60h]
  unsigned __int16 v10; // [rsp+30h] [rbp-58h]
  struct _GUID v11; // [rsp+40h] [rbp-48h] BYREF
  struct _GUID v12; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v13[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+78h] [rbp-10h]

  v0 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v2 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      memset_0(v13, 0, 0x20uLL);
      v13[0] = 0;
      v13[1] = 0;
      v14 = 0LL;
      v15 = 0;
      v13[2] = 1029;
      v0 = ((__int64 (__fastcall *)(_DWORD *))ProcAddress)(v13);
      if ( v0 >= 0 )
      {
        LOBYTE(v4) = 1;
        CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
          (unsigned int)&gDwmInitTelemetryAggregator,
          1,
          1,
          v4,
          1);
        v11 = gDwmInitTargetAppSessionGuid;
        v12 = gDwmInitTelemetryActivityId;
        Manager = DwmInitAsimov::CDwmInitEventManager::GetManager(v5);
        DwmInitAsimov::CDwmInitEventManager::ReportFallbackToBdd(Manager, &v12, v0, v7, &v11, v9, v10);
        TraceLoggingWriteEtw(1, v0 | 0x10000000, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
      }
    }
    FreeLibrary(v2);
  }
  return v0 >= 0;
}
