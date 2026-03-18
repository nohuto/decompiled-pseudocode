/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C0008AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0006F00 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_InUseByDebugger @ 0x1C00082D0 (Controller_InUseByDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C00093D0 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v6 )
    {
      v4 = -1073741811;
      WPP_RECORDER_SF_q(Context[9], 2u, 4u, 0xFBu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *Context);
    }
    else
    {
      v7 = Context[9];
      if ( *Value )
      {
        WPP_RECORDER_SF_q(v7, 4u, 4u, 0xFDu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_ReleaseWdfPowerReferenceForDebugger(Context);
      }
      else
      {
        WPP_RECORDER_SF_q(v7, 4u, 4u, 0xFCu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_AcquireWdfPowerReferenceForDebugger(Context);
      }
    }
  }
  else
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_q(Context[9], 2u, 4u, 0xFAu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, *Context);
  }
  return v4;
}
