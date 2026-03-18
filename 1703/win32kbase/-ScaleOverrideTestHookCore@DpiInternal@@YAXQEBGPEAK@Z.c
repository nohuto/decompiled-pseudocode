/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C006985C
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006954C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C006A74C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h]
  const wchar_t *v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  _BYTE v35[40]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v36[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v37[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(v36, 0x16uLL, L"%d", v10);
  v14 = v11;
  if ( v11 < 0
    || (v15 = RtlStringCbPrintfW(
                v37,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                v36),
        v14 = v15,
        v15 < 0) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v21 + 24) = v14;
    *(_QWORD *)(v21 + 32) = v10;
    WdLogEvent5_WdAssertion(v21);
  }
  else
  {
    v23 = 0;
    QueryTable.Name = v37;
    v24 = 0;
    v28 = L"DesktopScaleFactor";
    QueryTable.QueryRoutine = 0LL;
    v29 = &v23;
    v31 = &v24;
    QueryTable.Flags = 5;
    QueryTable.EntryContext = 0LL;
    QueryTable.DefaultType = 0;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v26 = 0LL;
    v27 = 288;
    v30 = 0x4000000;
    v32 = 4;
    v33 = 0LL;
    v34 = 0;
    memset(v35, 0, sizeof(v35));
    v16 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
    v20 = v16;
    if ( v16 >= 0 )
    {
      if ( v23 != v24 )
        *(_DWORD *)a2 = v23;
    }
    else if ( v16 != -1073741772 )
    {
      v22 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v22 + 24) = v20;
      WdLogEvent5_WdError(v22);
    }
  }
}
