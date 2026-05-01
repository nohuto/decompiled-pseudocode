/*
 * XREFs of ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x18000913C
 * Callers:
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000BD70 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180009438 (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 */

signed int __fastcall Windows::System::CMemoryManager::GetAppMemoryInformation(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        struct _PROCESS_JOB_MEMORY_INFO *a3)
{
  int InformationProcess; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  signed int result; // eax
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm1
  unsigned __int64 v12; // xmm0_8
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-38h]
  char SystemInformation[16]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v18; // [rsp+78h] [rbp-20h]

  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
    goto LABEL_2;
  if ( (int)Windows::System::CMemoryManager::Init(v7, v6, v8) < 0 )
  {
    v10 = v16;
  }
  else
  {
    result = ModernResourceManagerProxy::GetMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, &v14);
    if ( result < 0 )
      return result;
    v10 = v14;
  }
  if ( ((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x20u,
                           &ReturnLength);
    if ( InformationProcess < 0 )
    {
LABEL_2:
      result = RtlNtStatusToDosError(InformationProcess);
      if ( result > 0 )
        return (unsigned __int16)result | 0x80070000;
      return result;
    }
    v10 = v18 * RmpPageSize;
  }
  *a2 = v10;
  if ( a3 )
  {
    v11 = ProcessInformation[1];
    *(_OWORD *)a3 = ProcessInformation[0];
    v12 = v16;
    *((_OWORD *)a3 + 1) = v11;
    *((_QWORD *)a3 + 4) = v12;
  }
  return 0;
}
