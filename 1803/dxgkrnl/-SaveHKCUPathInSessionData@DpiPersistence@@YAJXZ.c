/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01DD0A4
 * Callers:
 *     DxgkInitializeDpi @ 0x1C01DD480 (DxgkInitializeDpi.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0001518 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0001BFC (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  NTSTATUS result; // eax
  void *v8; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  ULONG v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v8 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2334);
      if ( v8 )
      {
        operator delete[](v8);
        *((_DWORD *)SessionDataForSpecifiedSession + 4666) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2334) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, KeyPath.MaximumLength);
      v11 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath, v10);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v11 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v13 + 24) = v11;
        WdLogEvent5_WdError(v13);
      }
      return v11;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v5 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v6);
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return -1073741811;
  }
  return result;
}
