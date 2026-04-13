/*
 * XREFs of ??$LayoutAndItemsRetrieved@_NII@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEA_N$$QEAI1@Z @ 0x18008E390
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::LayoutAndItemsRetrieved<bool,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]

  v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v11 = a2;
    v12 = 1LL;
    v13 = a3;
    v14 = 4LL;
    v15 = a4;
    v16 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_18013EE60, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
  }
  return (int)v8;
}
