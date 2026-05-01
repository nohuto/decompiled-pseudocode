/*
 * XREFs of ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18003BE94
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BDCC (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v5; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !SystemInformation )
  {
    v5 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v5 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(SystemInformation, a2, a3, a4) )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v5);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v5);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    LastError = GetLastError();
    p_LastError = &LastError;
    v11 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180080CD9, 0LL, 0LL, 3u, &pData);
  }
  return -1073739509;
}
