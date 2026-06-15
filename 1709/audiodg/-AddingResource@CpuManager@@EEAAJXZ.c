/*
 * XREFs of ?AddingResource@CpuManager@@EEAAJXZ @ 0x140036290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z @ 0x1400367C8 (-IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@PEAK@Z.c)
 */

__int64 __fastcall CpuManager::AddingResource(CpuManager *this)
{
  unsigned int v1; // edi
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  HANDLE CurrentProcess; // rax
  int v9[4]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-D8h]
  _QWORD ProcessInformation[21]; // [rsp+48h] [rbp-D0h] BYREF

  v1 = 0;
  v3 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)this + 68) != 1 )
  {
LABEL_9:
    _InterlockedIncrement((volatile signed __int32 *)this + 68);
    goto LABEL_10;
  }
  v10 = 0;
  memset(ProcessInformation, 0, 0xA0uLL);
  v3 = IdentifyCpuSets(
         (CpuManager *)((char *)this + 280),
         (CpuManager *)((char *)this + 448),
         (unsigned int *)this + 116);
  if ( v3 >= 0 )
  {
    v3 = NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, (char *)this + 288, 8 * *((_DWORD *)this + 70));
    if ( v3 >= 0 )
    {
      v4 = *((unsigned __int16 *)this + 224);
      ProcessInformation[v4] |= *((_QWORD *)this + 57);
      v5 = v10;
      v6 = v4 + 1;
      if ( v10 <= v6 )
        v5 = v6;
      v10 = v5;
      CurrentProcess = GetCurrentProcess();
      v3 = NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, ProcessInformation, 8 * v5);
      if ( v3 < 0 || (v3 = RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL), v3 < 0) )
      {
        NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
        v9[0] = -1;
        RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, v9, 4LL, 0LL);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)this + 68);
  if ( v3 < 0 )
    return v3 | 0x10000000u;
  return v1;
}
