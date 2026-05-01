/*
 * XREFs of ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180003C88
 * Callers:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002FD4 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003AC0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        unsigned __int64 *a2,
        __int64 a3)
{
  signed int v5; // ebx
  NTSTATUS v6; // eax
  signed int v8; // eax
  int v9; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[4]; // [rsp+34h] [rbp-34h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]

  RtlAcquireSRWLockExclusive((char *)this + 72, a2, a3);
  *((_DWORD *)this + 20) = GetCurrentThreadId();
  v5 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v5 >= 0 )
  {
    v9 = 16;
    v6 = NtQueryWnfStateData((char *)this + 48, 0LL, 0LL, v10, v11, &v9);
    if ( v6 < 0 )
    {
      v8 = RtlNtStatusToDosError(v6);
      v5 = v8;
      if ( v8 > 0 )
        v5 = (unsigned __int16)v8 | 0x80070000;
    }
    else
    {
      v5 = 0;
      *a2 = v12;
    }
  }
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v5;
}
