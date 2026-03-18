/*
 * XREFs of ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198C90
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0198918 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00AEBE4 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
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
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  HANDLE v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v23; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  const WCHAR *v27; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-70h]
  const WCHAR *v34; // [rsp+98h] [rbp-68h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  _BYTE v41[40]; // [rsp+D0h] [rbp-30h] BYREF

  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid");
  v6 = OpenRegistrySubkey(&Handle, v5, 0LL, &DestinationString, 0LL);
  v11 = v6;
  if ( v6 >= 0 )
  {
    v13 = Handle;
    if ( !Handle )
    {
      v14 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v14 + 24) = 270LL;
      WdLogEvent5_WdAssertion(v14);
      v13 = Handle;
    }
    v25 = 0LL;
    v30 = 0LL;
    v32 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    v40 = 0;
    v27 = L"EDID";
    v26 = 292;
    v34 = L"Origin";
    v33 = 292;
    v35 = &v23;
    *(_DWORD *)a2 = -128;
    v28 = a2;
    v29 = 50331651;
    v31 = 128;
    v36 = 67108868;
    v38 = 4;
    memset(v41, 0, sizeof(v41));
    v15 = RtlQueryRegistryValuesEx(0x40000000LL, v13, &v25, 0LL, 0LL);
    v11 = v15;
    if ( v15 >= 0 )
    {
      *a3 = v23;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v20[3] = v11;
      v20[4] = Handle;
      v20[5] = &v25;
      WdLogEvent5_WdWarning(v20);
    }
    ZwClose(Handle);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v11;
    *(_QWORD *)(v12 + 32) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
    WdLogEvent5_WdWarning(v12);
  }
  return (unsigned int)v11;
}
