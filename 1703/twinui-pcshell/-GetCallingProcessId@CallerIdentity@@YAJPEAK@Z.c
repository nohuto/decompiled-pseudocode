/*
 * XREFs of ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x18017611C
 * Callers:
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x180191FF0 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800207A0 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180176018 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
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
