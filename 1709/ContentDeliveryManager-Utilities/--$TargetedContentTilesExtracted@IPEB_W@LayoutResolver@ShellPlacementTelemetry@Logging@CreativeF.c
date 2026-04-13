/*
 * XREFs of ??$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAI$$QEAPEB_W@Z @ 0x18008E500
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::TargetedContentTilesExtracted<unsigned int,wchar_t const *>(
        __int64 a1,
        __int64 a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  const WCHAR *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a3;
    v8 = &Src;
    v12 = a2;
    LODWORD(v9) = 0;
    v13 = 4LL;
    if ( v7 )
    {
      v8 = v7;
      v9 = -1LL;
      do
        ++v9;
      while ( v7[v9] );
    }
    v14 = v8;
    v15 = 2 * v9 + 2;
    v16 = 0;
    LODWORD(v6) = TlgWrite(v6, &unk_18013EE20, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return (int)v6;
}
