/*
 * XREFs of ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01AEAF0
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01AE778 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00D0EE0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall EDIDCACHE::ReadEdidFromRegistry(
        EDIDCACHE *this,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a3)
{
  __int64 v5; // rdx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  HANDLE v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v21; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  const WCHAR *v25; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+90h] [rbp-70h]
  const WCHAR *v32; // [rsp+98h] [rbp-68h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  _BYTE v39[40]; // [rsp+D0h] [rbp-30h] BYREF

  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid");
  v6 = OpenRegistrySubkey(&Handle, v5, 0LL, &DestinationString, 0LL);
  v10 = v6;
  if ( v6 >= 0 )
  {
    v12 = Handle;
    if ( !Handle )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v13 + 24) = 270LL;
      WdLogEvent5_WdAssertion(v13);
      v12 = Handle;
    }
    v23 = 0LL;
    v28 = 0LL;
    v30 = 0LL;
    v35 = 0LL;
    v37 = 0LL;
    v38 = 0;
    v25 = L"EDID";
    v24 = 292;
    v32 = L"Origin";
    v31 = 292;
    v33 = &v21;
    *(_DWORD *)a2 = -128;
    v26 = a2;
    v27 = 50331651;
    v29 = 128;
    v34 = 67108868;
    v36 = 4;
    memset(v39, 0, sizeof(v39));
    v14 = RtlQueryRegistryValuesEx(0x40000000LL, v12, &v23, 0LL, 0LL);
    v10 = v14;
    if ( v14 >= 0 )
    {
      *a3 = v21;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[3] = v10;
      v18[4] = Handle;
      v18[5] = &v23;
      WdLogEvent5_WdWarning(v18);
    }
    ZwClose(Handle);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    *(_QWORD *)(v11 + 32) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
    WdLogEvent5_WdWarning(v11);
  }
  return (unsigned int)v10;
}
