/*
 * XREFs of ?InitialRegisterForProcess@CpuManager@@EEAAJPEAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x140037280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForProcess(
        CpuManager *this,
        void *a2,
        struct CpuManager::HandleRegistrations::RegistrationData *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // r9d
  NTSTATUS v12; // ebx
  int v13; // ebx
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-B0h]
  _QWORD ProcessInformation[21]; // [rsp+58h] [rbp-A8h] BYREF

  TargetHandle = 0LL;
  v16 = 0;
  memset(ProcessInformation, 0, 0xA0uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x2000u, 0, 0) )
  {
    v10 = *((unsigned __int16 *)this + 224);
    ProcessInformation[v10] |= *((_QWORD *)this + 57);
    v11 = v16;
    if ( v16 <= (int)v10 + 1 )
      v11 = v10 + 1;
    v16 = v11;
    v12 = NtSetInformationProcess(TargetHandle, ProcessVmCounters|0x40, ProcessInformation, 8 * v11);
    if ( v12 >= 0 )
    {
      v13 = RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID, 0LL, (char *)this + 448, 16LL, TargetHandle);
      if ( v13 >= 0 )
      {
        v13 = RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL);
        if ( v13 >= 0 )
        {
          v9 = 0;
          *(_QWORD *)a3 = TargetHandle;
          return v9;
        }
      }
      v9 = v13 | 0x10000000;
      NtSetInformationProcess(TargetHandle, ProcessVmCounters|0x40, 0LL, 0);
      RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL);
    }
    else
    {
      v9 = v12 | 0x10000000;
    }
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return v9;
}
