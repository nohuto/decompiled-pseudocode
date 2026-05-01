/*
 * XREFs of ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18002417C
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800240BC (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18002695C (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  if ( !SystemInformation )
  {
    v2 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v2);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v2);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    LastError = GetLastError();
    p_LastError = &LastError;
    v10 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AA5D, v5, v6, 3u, &pData);
  }
  return -1073739509;
}
