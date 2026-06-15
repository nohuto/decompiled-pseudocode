/*
 * XREFs of ?ResourceRemoved@CpuManager@@EEAAXXZ @ 0x140037DA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall CpuManager::ResourceRemoved(CpuManager *this)
{
  HANDLE CurrentProcess; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-C8h]
  _OWORD v14[11]; // [rsp+40h] [rbp-B8h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 68, 0xFFFFFFFF) == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, 0LL, 0);
    NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
    LODWORD(v14[0]) = 0;
    memset((char *)v14 + 8, 0, 0xA0uLL);
    LOWORD(v13) = 0;
    v3 = v14[0];
    v4 = v14[1];
    *((_DWORD *)this + 116) = -1;
    *(_OWORD *)((char *)this + 280) = v3;
    v5 = v14[2];
    *(_OWORD *)((char *)this + 296) = v4;
    v6 = v14[3];
    *(_OWORD *)((char *)this + 312) = v5;
    v7 = v14[4];
    *(_OWORD *)((char *)this + 328) = v6;
    v8 = v14[5];
    *(_OWORD *)((char *)this + 344) = v7;
    v9 = v14[6];
    *(_OWORD *)((char *)this + 360) = v8;
    v10 = v14[8];
    *(_OWORD *)((char *)this + 376) = v9;
    *(_OWORD *)((char *)this + 392) = v14[7];
    v11 = v14[9];
    v12 = *(_QWORD *)&v14[10];
    *(_OWORD *)((char *)this + 408) = v10;
    *(_OWORD *)((char *)this + 424) = v11;
    *((_QWORD *)this + 55) = v12;
    *((_OWORD *)this + 28) = v13;
    RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL);
  }
}
