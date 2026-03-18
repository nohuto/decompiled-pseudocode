/*
 * XREFs of ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x180186F04
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800CE118 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180187C10 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmCoreAsimov::UsageEventData::UsageEventData(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  const wchar_t *v6; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = &DwmCoreAsimov::UsageEventData::`vftable';
  *(_QWORD *)(a1 + 16) = word_1801D5868;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 )
  {
    v2 = a2 - 2;
    if ( v2 )
    {
      v3 = v2 - 2;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            if ( v5 == 2 )
              v6 = L"HighErrorRate";
            else
              v6 = L"UnkownEventTypeCount_Quality_Code";
          }
          else
          {
            v6 = L"DesktopCloneUsage";
          }
        }
        else
        {
          v6 = L"DDAUsage";
        }
      }
      else
      {
        v6 = L"RemoteAppRenderTargetUsage";
      }
    }
    else
    {
      v6 = L"OverlayUsage";
    }
  }
  else
  {
    v6 = L"DFlipUsage";
  }
  *(_QWORD *)(a1 + 16) = v6;
  return a1;
}
