/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C010AC28
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AA88 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ParseResolutionKeyName @ 0x1C011FF0C (ParseResolutionKeyName.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C012203C (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseFreqRangeValue @ 0x1C02002B4 (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int16 v9; // r14
  void *v10; // r12
  PVOID v11; // rbx
  ULONG Length; // r15d
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // si
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v25; // rax
  __int64 v26; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v27; // rbx
  UINT v28; // ecx
  UINT v29; // eax
  UINT v30; // ecx
  UINT v31; // eax
  UINT v32; // eax
  int valid; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  DXGMONITOR *v38; // rbx
  DXGMONITOR **v39; // rcx
  __int64 v40; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  UINT v42; // [rsp+34h] [rbp-65h] BYREF
  UINT v43; // [rsp+38h] [rbp-61h] BYREF
  UINT v44; // [rsp+3Ch] [rbp-5Dh] BYREF
  UINT v45; // [rsp+40h] [rbp-59h] BYREF
  UINT v46; // [rsp+44h] [rbp-55h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  _WORD v48[4]; // [rsp+50h] [rbp-49h] BYREF
  WCHAR *Name; // [rsp+58h] [rbp-41h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp+7h] BYREF

  v48[0] = a3->NameLength;
  v48[1] = v48[0];
  KeyHandle = 0LL;
  Name = a3->Name;
  v42 = 0;
  v43 = 0;
  if ( !(unsigned __int8)ParseResolutionKeyName(v48, &v42, &v43) )
  {
    v20 = WdLogNewEntry5_WdError(v5);
    goto LABEL_35;
  }
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = v8;
LABEL_23:
    WdLogEvent5_WdError(v21);
    goto LABEL_17;
  }
  wcscpy(SourceString, L"ModeX");
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(v8) = -1073741801;
  v9 = 1;
  while ( 1 )
  {
    v10 = KeyHandle;
    v11 = 0LL;
    SourceString[4] = v9 + 48;
    Length = 1024;
    do
    {
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      v11 = operator new(Length, 0x4D677844u, PagedPool);
      if ( v11 )
      {
        ResultLength = 0;
        v14 = ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, v11, Length, &ResultLength);
        Length = ResultLength;
        v17 = v14;
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v13);
        WdLogEvent5_WdError(v22);
        v17 = -1073741801;
      }
    }
    while ( v17 == -2147483643 || v17 == -1073741789 );
    if ( v17 < 0 )
    {
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      v18 = WdLogNewEntry5_WdTrace(v16, v15);
      *(_QWORD *)(v18 + 24) = v9;
      *(_QWORD *)(v18 + 32) = v17;
      goto LABEL_15;
    }
    ResultLength = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v24 = ParseFreqRangeValue(
            (_DWORD)v11,
            (unsigned int)&ResultLength,
            (unsigned int)&v44,
            (unsigned int)&v45,
            (__int64)&v46);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( !v24 )
      break;
    v25 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, PagedPool);
    v27 = v25;
    if ( !v25 )
    {
      v21 = WdLogNewEntry5_WdError(v26);
      goto LABEL_23;
    }
    v25->RangeLimits.MinVSyncFreq.Numerator = ResultLength;
    v28 = v44;
    v25->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v25->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v29 = v42;
    v27->RangeLimits.MaxVSyncFreq.Numerator = v28;
    v30 = v45;
    v27->Constraint.ActiveSize.cx = v29;
    v31 = v43;
    v27->RangeLimits.MinHSyncFreq.Numerator = v30;
    v27->Constraint.ActiveSize.cy = v31;
    v32 = v46;
    v27->RangeLimits.MinVSyncFreq.Denominator = 1;
    v27->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v27->RangeLimits.MinHSyncFreq.Denominator = 1;
    v27->RangeLimits.MaxHSyncFreq.Numerator = v32;
    v27->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v27);
    v37 = valid;
    if ( valid < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v40 + 24) = v37;
      WdLogEvent5_WdWarning(v40);
      ExFreePoolWithTag(v27, 0);
    }
    else
    {
      v38 = (DXGMONITOR *)&v27[1];
      v39 = (DXGMONITOR **)*((_QWORD *)this + 32);
      if ( *v39 != (DXGMONITOR *)((char *)this + 248) )
        __fastfail(3u);
      *(_QWORD *)v38 = (char *)this + 248;
      *((_QWORD *)v38 + 1) = v39;
      *v39 = v38;
      *((_QWORD *)this + 32) = v38;
      ++*((_DWORD *)this + 60);
      ++*((_DWORD *)this + 29);
    }
LABEL_15:
    if ( ++v9 >= 9u )
    {
      LODWORD(v8) = 0;
      goto LABEL_17;
    }
  }
  v20 = WdLogNewEntry5_WdError(v23);
  *(_QWORD *)(v20 + 24) = v9;
LABEL_35:
  WdLogEvent5_WdError(v20);
  LODWORD(v8) = -1073741823;
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
