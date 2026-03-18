/*
 * XREFs of ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01AECA4
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012113C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00D0EE0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall EDIDCACHE::WriteEdidToRegistry(
        EDIDCACHE *this,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a3)
{
  __int64 v4; // rdx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  const WCHAR *v13; // rdi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  NTSTATUS v19; // eax
  _QWORD *v20; // rax
  unsigned __int8 *ValueData; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING v22; // [rsp+30h] [rbp-28h] BYREF
  EDIDCACHE *v23; // [rsp+60h] [rbp+8h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v24; // [rsp+70h] [rbp+18h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+20h] BYREF

  v24 = a3;
  v23 = this;
  Path = 0LL;
  RtlInitUnicodeString(
    &v22,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid");
  v5 = OpenRegistrySubkey((PHANDLE)&Path, v4, 0LL, &v22, (unsigned int *)&v23);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v11 = Path;
    if ( !Path )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v12 + 24) = 208LL;
      WdLogEvent5_WdAssertion(v12);
      v11 = Path;
    }
    ValueData = a2;
    v13 = L"EDID";
    v14 = RtlWriteRegistryValue(0x40000000u, v11, L"EDID", 3u, ValueData, 0x80u);
    v18 = v14;
    if ( v14 < 0
      || (v13 = L"Origin", v19 = RtlWriteRegistryValue(0x40000000u, Path, L"Origin", 4u, &v24, 4u), v18 = v19, v19 < 0) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v20[3] = v18;
      v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
      v20[5] = v13;
      WdLogEvent5_WdWarning(v20);
    }
    ZwClose((HANDLE)Path);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v9;
    *(_QWORD *)(v10 + 32) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
    WdLogEvent5_WdWarning(v10);
  }
}
