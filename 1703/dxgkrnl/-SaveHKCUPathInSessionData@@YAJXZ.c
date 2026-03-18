/*
 * XREFs of ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00A6C9C
 * Callers:
 *     DxgkInitializeDpi @ 0x1C00A6C90 (DxgkInitializeDpi.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C0004148 (RtlUnicodeStringCopy.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C000D498 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

NTSTATUS SaveHKCUPathInSessionData(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  NTSTATUS result; // eax
  void *v6; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
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
      v6 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2327);
      if ( v6 )
      {
        operator delete[](v6);
        *((_DWORD *)SessionDataForSpecifiedSession + 4652) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2327) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, KeyPath.MaximumLength);
      v8 = RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v8 < 0 )
      {
        v12 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v12 + 24) = v8;
        WdLogEvent5_WdError(v12);
      }
      return v8;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v1, v0);
    *(_QWORD *)(v11 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return -1073741811;
  }
  return result;
}
