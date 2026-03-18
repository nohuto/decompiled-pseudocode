/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00E2740
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00E2A20 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C00FACB0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00D0EE0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1D98 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C00F7CF0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  __int64 v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  HANDLE v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // ebx
  const struct _UNICODE_STRING *v28; // r9
  HANDLE v30; // r8
  NTSTATUS v31; // eax
  HANDLE v32; // rbx
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int *v41; // [rsp+20h] [rbp-89h]
  unsigned int v42; // [rsp+28h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v44; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v46; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v47; // [rsp+60h] [rbp-49h] BYREF
  __int64 v48; // [rsp+70h] [rbp-39h] BYREF
  int v49; // [rsp+78h] [rbp-31h]
  const WCHAR *v50; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v51; // [rsp+88h] [rbp-21h]
  int v52; // [rsp+90h] [rbp-19h]
  int *v53; // [rsp+98h] [rbp-11h]
  int v54; // [rsp+A0h] [rbp-9h]
  __int64 v55; // [rsp+A8h] [rbp-1h]
  int v56; // [rsp+B0h] [rbp+7h]
  _BYTE v57[40]; // [rsp+B8h] [rbp+Fh] BYREF
  int v58; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v58 = 0;
  *(_DWORD *)&a4->Length = 0;
  SessionDataForSpecifiedSession = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v44 = 0LL;
  LODWORD(v8) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v47, a4);
  if ( (int)v8 >= 0 )
  {
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 73);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v11,
                                         CurrentProcessSessionId,
                                         v13);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v34 = WdLogNewEntry5_WdError(v10);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v34 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35);
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      goto LABEL_14;
    }
    if ( *((_QWORD *)SessionDataForSpecifiedSession + 2328) )
    {
      v14 = WdLogNewEntry5_WdTrace(v10, v9);
      v15 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v14 + 24) = 964LL;
      v46 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18616);
    }
    else
    {
      if ( *((_WORD *)SessionDataForSpecifiedSession + 9308) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v36 + 24) = 955LL;
        WdLogEvent5_WdAssertion(v36);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = 956LL;
      RtlInitUnicodeString(&v46, L"\\Registry\\Machine\\System");
      v15 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v15);
    v17 = OpenRegistrySubkey(&Handle, v16, 0LL, &v46, 0LL);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v20 = Handle;
      if ( !Handle )
      {
        v37 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v37 + 24) = 984LL;
        WdLogEvent5_WdAssertion(v37);
        v20 = Handle;
      }
      v21 = OpenRegistrySubkey(&KeyHandle, v18, v20, &DestinationString, 0LL);
      v8 = v21;
      if ( v21 < 0 )
        goto LABEL_11;
      v30 = KeyHandle;
      if ( !KeyHandle )
      {
        v38 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v38 + 24) = 1000LL;
        WdLogEvent5_WdAssertion(v38);
        v30 = KeyHandle;
      }
      v31 = OpenRegistrySubkey(&v44, v22, v30, &v47, 0LL);
      v8 = v31;
      if ( v31 < 0 )
      {
LABEL_11:
        v26 = WdLogNewEntry5_WdEvent(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = v8;
        WdLogEvent5_WdEvent(v26);
        goto LABEL_12;
      }
      v32 = v44;
      if ( !v44 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v39 + 24) = 1016LL;
        WdLogEvent5_WdAssertion(v39);
        v32 = v44;
      }
      v48 = 0LL;
      v49 = 288;
      v50 = L"DpiValue";
      v51 = a4;
      v52 = 67108868;
      v53 = &v58;
      v54 = 4;
      v55 = 0LL;
      v56 = 0;
      memset(v57, 0, sizeof(v57));
      v33 = RtlQueryRegistryValuesEx(0x40000000LL, v32, &v48, 0LL, 0LL);
      v8 = v33;
      if ( v33 >= 0 )
        goto LABEL_12;
    }
    v40 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v40 + 24) = v8;
    WdLogEvent5_WdError(v40);
  }
LABEL_12:
  if ( (_DWORD)v8 == -1073741772 )
    *(_DWORD *)&a4->Length = v58;
LABEL_14:
  v27 = 0;
  if ( (_DWORD)v8 != -1073741772 )
    v27 = v8;
  if ( a3 && v27 >= 0 && SessionDataForSpecifiedSession && *((_QWORD *)SessionDataForSpecifiedSession + 2328) )
  {
    RtlInitUnicodeString(&v46, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v41) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(
      &v46,
      &DestinationString,
      &v47,
      v28,
      (const unsigned __int16 *const)v41,
      v42);
  }
  if ( v47.Buffer )
    ExFreePoolWithTag(v47.Buffer, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v44 )
    ZwClose(v44);
  return (unsigned int)v27;
}
