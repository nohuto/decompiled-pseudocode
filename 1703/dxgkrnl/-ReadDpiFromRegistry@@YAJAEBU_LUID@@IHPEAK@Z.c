/*
 * XREFs of ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230
 * Callers:
 *     DxgkGetDpiOverrideForSource @ 0x1C00A6E80 (DxgkGetDpiOverrideForSource.c)
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD690 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00AE610 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00AEBE4 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall ReadDpiFromRegistry(const struct _LUID *a1, unsigned int a2, int a3, unsigned int *a4)
{
  struct _UNICODE_STRING *SessionDataForSpecifiedSession; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  HANDLE v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // ebx
  const unsigned __int16 *v28; // r9
  HANDLE v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  HANDLE v35; // rbx
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v48; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v50; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v51; // [rsp+60h] [rbp-49h] BYREF
  __int64 v52; // [rsp+70h] [rbp-39h] BYREF
  int v53; // [rsp+78h] [rbp-31h]
  const WCHAR *v54; // [rsp+80h] [rbp-29h]
  unsigned int *v55; // [rsp+88h] [rbp-21h]
  int v56; // [rsp+90h] [rbp-19h]
  unsigned int *v57; // [rsp+98h] [rbp-11h]
  int v58; // [rsp+A0h] [rbp-9h]
  __int64 v59; // [rsp+A8h] [rbp-1h]
  int v60; // [rsp+B0h] [rbp+7h]
  _BYTE v61[40]; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned int v62; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v62 = 0;
  *a4 = 0;
  SessionDataForSpecifiedSession = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v48 = 0LL;
  LODWORD(v7) = AllocateMonitorSetIdFromAdapterSource(a1, a2, &v51);
  if ( (int)v7 >= 0 )
  {
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
    if ( v10 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
      SessionDataForSpecifiedSession = (struct _UNICODE_STRING *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                   v10,
                                                                   CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v37 = WdLogNewEntry5_WdError(v9, v8);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v37 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v39, v38, v40, v41);
      *(_QWORD *)(v37 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v37);
      goto LABEL_14;
    }
    if ( SessionDataForSpecifiedSession[1163].Buffer )
    {
      v14 = WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
      v15 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v14 + 24) = 961LL;
      v50 = SessionDataForSpecifiedSession[1163];
    }
    else
    {
      if ( SessionDataForSpecifiedSession[1163].Length )
      {
        v42 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
        *(_QWORD *)(v42 + 24) = 952LL;
        WdLogEvent5_WdAssertion(v42);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v11, v12) + 24) = 953LL;
      RtlInitUnicodeString(&v50, L"\\Registry\\Machine\\System");
      v15 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v15);
    v17 = OpenRegistrySubkey(&Handle, v16, 0LL, &v50, 0LL);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v21 = Handle;
      if ( !Handle )
      {
        v43 = WdLogNewEntry5_WdAssertion(v19, v18, 0LL, v20);
        *(_QWORD *)(v43 + 24) = 981LL;
        WdLogEvent5_WdAssertion(v43);
        v21 = Handle;
      }
      v22 = OpenRegistrySubkey(&KeyHandle, v18, v21, &DestinationString, 0LL);
      v7 = v22;
      if ( v22 < 0 )
        goto LABEL_11;
      v30 = KeyHandle;
      if ( !KeyHandle )
      {
        v44 = WdLogNewEntry5_WdAssertion(v24, v23, 0LL, v25);
        *(_QWORD *)(v44 + 24) = 997LL;
        WdLogEvent5_WdAssertion(v44);
        v30 = KeyHandle;
      }
      v31 = OpenRegistrySubkey(&v48, v23, v30, &v51, 0LL);
      v7 = v31;
      if ( v31 < 0 )
      {
LABEL_11:
        v26 = WdLogNewEntry5_WdEvent(v24);
        *(_QWORD *)(v26 + 24) = v7;
        WdLogEvent5_WdEvent(v26);
        goto LABEL_12;
      }
      v35 = v48;
      if ( !v48 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v24, v32, v33, v34);
        *(_QWORD *)(v45 + 24) = 1013LL;
        WdLogEvent5_WdAssertion(v45);
        v35 = v48;
      }
      v52 = 0LL;
      v53 = 288;
      v54 = L"DpiValue";
      v55 = a4;
      v56 = 67108868;
      v57 = &v62;
      v58 = 4;
      v59 = 0LL;
      v60 = 0;
      memset(v61, 0, sizeof(v61));
      v36 = RtlQueryRegistryValuesEx(0x40000000LL, v35, &v52, 0LL, 0LL);
      v7 = v36;
      if ( v36 >= 0 )
        goto LABEL_12;
    }
    v46 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v46 + 24) = v7;
    WdLogEvent5_WdError(v46);
  }
LABEL_12:
  if ( (_DWORD)v7 == -1073741772 )
    *a4 = v62;
LABEL_14:
  v27 = 0;
  if ( (_DWORD)v7 != -1073741772 )
    v27 = v7;
  if ( a3 && v27 >= 0 && SessionDataForSpecifiedSession && SessionDataForSpecifiedSession[1163].Buffer )
  {
    RtlInitUnicodeString(&v50, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    WriteDwordToParticularRegValue(&v50, &DestinationString, &v51, v28, *a4);
  }
  if ( v51.Buffer )
    ExFreePoolWithTag(v51.Buffer, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v48 )
    ZwClose(v48);
  return (unsigned int)v27;
}
