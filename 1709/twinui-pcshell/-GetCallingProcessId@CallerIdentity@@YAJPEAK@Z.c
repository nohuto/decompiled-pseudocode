/*
 * XREFs of ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x1801C19C4
 * Callers:
 *     ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x1800DDBF0 (-TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ.c)
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1801E01E0 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x180021460 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1801C18C0 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessId(CallerIdentity *this, unsigned int *a2)
{
  __int64 v3; // rcx
  int CallingProcessHandle; // ebx
  HANDLE Process; // [rsp+38h] [rbp+10h] BYREF

  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&Process);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, 0, &Process);
  if ( CallingProcessHandle >= 0 )
    *(_DWORD *)this = GetProcessId(Process);
  CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
  return (unsigned int)CallingProcessHandle;
}
