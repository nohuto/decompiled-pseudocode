/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0108048
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0107EE0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0105344 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseResolutionKeyName @ 0x1C0105D5C (ParseResolutionKeyName.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0109F8C (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATIO.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ParseFreqRangeValue @ 0x1C01E5CFC (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned __int16 NameLength; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  UINT v12; // r15d
  UINT v13; // r12d
  unsigned __int16 v14; // di
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  PVOID v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // r14
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v32; // rbx
  int valid; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r14
  DXGMONITOR *v39; // rbx
  DXGMONITOR **v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  UINT v43; // [rsp+30h] [rbp-39h] BYREF
  UINT v44; // [rsp+34h] [rbp-35h] BYREF
  UINT v45; // [rsp+38h] [rbp-31h] BYREF
  UINT v46; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING v49; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  WCHAR SourceString[8]; // [rsp+70h] [rbp+7h] BYREF

  NameLength = a3->NameLength;
  Handle = 0LL;
  v43 = 0;
  v44 = 0;
  v49.Length = NameLength;
  v49.MaximumLength = NameLength;
  v49.Buffer = a3->Name;
  if ( !(unsigned __int8)ParseResolutionKeyName((const void **)&v49, (int)&v43, (int)&v44) )
  {
    v23 = WdLogNewEntry5_WdError(v7, v6);
    goto LABEL_24;
  }
  v8 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, a2, &v49);
  v11 = v8;
  if ( v8 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdError(v24);
    goto LABEL_8;
  }
  wcscpy(SourceString, L"ModeX");
  RtlInitUnicodeString(&DestinationString, SourceString);
  v12 = v43;
  v13 = v44;
  v14 = 1;
  while ( 1 )
  {
    P = 0LL;
    SourceString[4] = v14 + 48;
    v15 = DxgkRetrieveValueFromRegistry(Handle, &DestinationString, (struct _KEY_VALUE_PARTIAL_INFORMATION **)&P);
    v20 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = v14;
      *(_QWORD *)(v21 + 32) = v20;
      goto LABEL_6;
    }
    v25 = P;
    v44 = 0;
    v43 = 0;
    v45 = 0;
    v46 = 0;
    v28 = ParseFreqRangeValue((_DWORD)P, (unsigned int)&v44, (unsigned int)&v43, (unsigned int)&v45, (__int64)&v46);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( !v28 )
      break;
    v29 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, PagedPool);
    v32 = v29;
    if ( !v29 )
    {
      v42 = WdLogNewEntry5_WdError(v31, v30);
      WdLogEvent5_WdError(v42);
      LODWORD(v11) = -1073741801;
      goto LABEL_8;
    }
    v29->RangeLimits.MinVSyncFreq.Numerator = v44;
    v29->RangeLimits.MaxVSyncFreq.Numerator = v43;
    v29->RangeLimits.MinHSyncFreq.Numerator = v45;
    v29->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v29->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v29->Constraint.ActiveSize.cx = v12;
    v29->Constraint.ActiveSize.cy = v13;
    v29->RangeLimits.MinVSyncFreq.Denominator = 1;
    v29->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v29->RangeLimits.MinHSyncFreq.Denominator = 1;
    v29->RangeLimits.MaxHSyncFreq.Numerator = v46;
    v29->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v29);
    v38 = valid;
    if ( valid < 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v41 + 24) = v38;
      WdLogEvent5_WdWarning(v41);
      ExFreePoolWithTag(v32, 0);
    }
    else
    {
      v39 = (DXGMONITOR *)&v32[1];
      v40 = (DXGMONITOR **)*((_QWORD *)this + 27);
      if ( *v40 != (DXGMONITOR *)((char *)this + 208) )
        __fastfail(3u);
      *(_QWORD *)v39 = (char *)this + 208;
      *((_QWORD *)v39 + 1) = v40;
      *v40 = v39;
      *((_QWORD *)this + 27) = v39;
      ++*((_DWORD *)this + 50);
      ++*((_DWORD *)this + 29);
    }
LABEL_6:
    if ( ++v14 >= 9u )
    {
      LODWORD(v11) = 0;
      goto LABEL_8;
    }
  }
  v23 = WdLogNewEntry5_WdError(v27, v26);
  *(_QWORD *)(v23 + 24) = v14;
LABEL_24:
  WdLogEvent5_WdError(v23);
  LODWORD(v11) = -1073741823;
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
