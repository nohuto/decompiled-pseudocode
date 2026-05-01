/*
 * XREFs of ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002FD4
 * Callers:
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x1800036F0 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180003C88 (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003F80 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 */

signed int __fastcall Windows::System::CMemoryManager::GetAppMemoryInformation(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        struct _PROCESS_JOB_MEMORY_INFO *a3)
{
  int InformationProcess; // eax
  signed int result; // eax
  unsigned __int64 v7; // rcx
  __int128 v8; // xmm1
  unsigned __int64 v9; // xmm0_8
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-60h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-38h]
  char SystemInformation[16]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v15; // [rsp+78h] [rbp-20h]

  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess >= 0 )
  {
    if ( (int)Windows::System::CMemoryManager::Init() < 0 )
    {
      v7 = v13;
    }
    else
    {
      result = ModernResourceManagerProxy::GetMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, &v11);
      if ( result < 0 )
        return result;
      v7 = v11;
    }
    if ( ((v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_8;
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x20u,
                           &ReturnLength);
    if ( InformationProcess >= 0 )
    {
      v7 = v15 * RmpPageSize;
LABEL_8:
      *a2 = v7;
      if ( a3 )
      {
        v8 = ProcessInformation[1];
        *(_OWORD *)a3 = ProcessInformation[0];
        v9 = v13;
        *((_OWORD *)a3 + 1) = v8;
        *((_QWORD *)a3 + 4) = v9;
      }
      return 0;
    }
  }
  result = RtlNtStatusToDosError(InformationProcess);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
