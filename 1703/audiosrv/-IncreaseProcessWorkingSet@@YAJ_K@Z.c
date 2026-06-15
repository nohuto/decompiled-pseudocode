/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1800D120C
 * Callers:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1800D0CF4 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_PP @ 0x1800D13A8 (WPP_SF_PP.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800D90A4 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(unsigned __int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  void *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  HANDLE v8; // rax
  unsigned __int64 v9; // rdx
  HANDLE v10; // rax
  __int64 v11; // r8
  unsigned __int64 v13; // [rsp+48h] [rbp-59h]
  unsigned __int64 v14; // [rsp+50h] [rbp-51h]
  ULONG_PTR MaximumWorkingSetSize; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  DWORD Flags[4]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+7h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess < 0 )
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
    goto LABEL_3;
  }
  v8 = GetCurrentProcess();
  if ( !GetProcessWorkingSetSizeEx(v8, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags)
    || (v9 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL,
        MaximumWorkingSetSize += v9 + v19 - MinimumWorkingSetSize,
        MinimumWorkingSetSize = v19 + v9,
        v10 = GetCurrentProcess(),
        !SetProcessWorkingSetSizeEx(v10, MinimumWorkingSetSize, MaximumWorkingSetSize, 0)) )
  {
    LastError = GetLastError();
LABEL_3:
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_13;
  }
  v6 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_PP(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v11, MinimumWorkingSetSize, MaximumWorkingSetSize);
  }
  v7 = 0;
LABEL_13:
  AEWMILOG_MEMORY(v6, v5, 5u, 0xEu, 0LL, 0LL, 0LL, 0LL, v13, v14, a1);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_3e42f0fdf336358029d789576155ad31_Traceguids, v7);
  }
  return v7;
}
