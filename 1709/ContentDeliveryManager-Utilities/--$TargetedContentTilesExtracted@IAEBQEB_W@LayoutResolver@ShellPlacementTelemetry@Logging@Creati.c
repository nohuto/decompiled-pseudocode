/*
 * XREFs of ??$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAIAEBQEB_W@Z @ 0x18008E450
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::TargetedContentTilesExtracted<unsigned int,wchar_t const * const &>(
        __int64 a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-30h]
  const WCHAR *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v4 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v8 = a2;
    v9 = 4LL;
    v5 = -1LL;
    do
      ++v5;
    while ( *(&Src + v5) );
    v10 = &Src;
    v11 = 2 * v5 + 2;
    v12 = 0;
    LODWORD(v4) = TlgWrite(v4, &unk_18013EE20, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return (int)v4;
}
