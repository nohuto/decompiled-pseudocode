/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C01DD3C0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C009E5F8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009E740 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rax
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  HANDLE v19; // r8
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  const struct _UNICODE_STRING *v23; // r9
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // r8
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  HANDLE v33; // rbx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  unsigned int *v37; // [rsp+20h] [rbp-89h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v39; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v41; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v42; // [rsp+60h] [rbp-49h] BYREF
  __int64 v43; // [rsp+70h] [rbp-39h] BYREF
  int v44; // [rsp+78h] [rbp-31h]
  const WCHAR *v45; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v46; // [rsp+88h] [rbp-21h]
  int v47; // [rsp+90h] [rbp-19h]
  int *v48; // [rsp+98h] [rbp-11h]
  int v49; // [rsp+A0h] [rbp-9h]
  __int64 v50; // [rsp+A8h] [rbp-1h]
  int v51; // [rsp+B0h] [rbp+7h]
  _BYTE v52[40]; // [rsp+B8h] [rbp+Fh] BYREF
  int v53; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v53 = 0;
  *(_DWORD *)&a4->Length = 0;
  SessionDataForSpecifiedSession = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v39 = 0LL;
  LODWORD(v8) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v42, a4);
  if ( (int)v8 >= 0 )
  {
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 74);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v25 = WdLogNewEntry5_WdError(v10);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26);
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v25);
      goto LABEL_14;
    }
    if ( *((_QWORD *)SessionDataForSpecifiedSession + 2334) )
    {
      v15 = WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
      v16 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v15 + 24) = 852LL;
      v41 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18664);
    }
    else
    {
      if ( *((_WORD *)SessionDataForSpecifiedSession + 9332) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v27 + 24) = 843LL;
        WdLogEvent5_WdAssertion(v27);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v12, v13) + 24) = 844LL;
      RtlInitUnicodeString(&v41, L"\\Registry\\Machine\\System");
      v16 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v16);
    v17 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v41, 0LL);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v19 = Handle;
      if ( !Handle )
      {
        v28 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v28 + 24) = 872LL;
        WdLogEvent5_WdAssertion(v28);
        v19 = Handle;
      }
      v20 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v19, &DestinationString, 0LL);
      v8 = v20;
      if ( v20 < 0 )
        goto LABEL_11;
      v29 = KeyHandle;
      if ( !KeyHandle )
      {
        v30 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v30 + 24) = 888LL;
        WdLogEvent5_WdAssertion(v30);
        v29 = KeyHandle;
      }
      v31 = OpenRegistrySubkey(&v39, 0xF003Fu, v29, &v42, 0LL);
      v8 = v31;
      if ( v31 < 0 )
      {
LABEL_11:
        v22 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v22 + 24) = v8;
        WdLogEvent5_WdEvent(v22);
        goto LABEL_12;
      }
      v33 = v39;
      if ( !v39 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v34 + 24) = 904LL;
        WdLogEvent5_WdAssertion(v34);
        v33 = v39;
      }
      v43 = 0LL;
      v44 = 288;
      v45 = L"DpiValue";
      v46 = a4;
      v47 = 67108868;
      v48 = &v53;
      v49 = 4;
      v50 = 0LL;
      v51 = 0;
      memset(v52, 0, sizeof(v52));
      v35 = RtlQueryRegistryValuesEx(0x40000000LL, v33, &v43, 0LL, 0LL);
      v8 = v35;
      if ( v35 >= 0 )
        goto LABEL_12;
    }
    v36 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v36 + 24) = v8;
    WdLogEvent5_WdError(v36);
  }
LABEL_12:
  if ( (_DWORD)v8 == -1073741772 )
  {
    LODWORD(v8) = 0;
    *(_DWORD *)&a4->Length = v53;
  }
LABEL_14:
  if ( a3 && (int)v8 >= 0 && SessionDataForSpecifiedSession && *((_QWORD *)SessionDataForSpecifiedSession + 2334) )
  {
    RtlInitUnicodeString(&v41, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v37) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v41, &DestinationString, &v42, v23, (const unsigned __int16 *)v37);
  }
  operator delete[](v42.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v39 )
    ZwClose(v39);
  return (unsigned int)v8;
}
