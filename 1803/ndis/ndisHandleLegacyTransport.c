/*
 * XREFs of ndisHandleLegacyTransport @ 0x1C00C89C4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisHandleLegacyTransport(__int64 a1)
{
  const WCHAR *v2; // rdx
  NTSTATUS v3; // eax
  int v4; // ebx
  PCWSTR v6; // rdi
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Context; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v10[16]; // [rsp+58h] [rbp-B0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  void *v12; // [rsp+A0h] [rbp-68h]
  int v13; // [rsp+A8h] [rbp-60h]
  const wchar_t *v14; // [rsp+B0h] [rbp-58h]
  PCWSTR *p_SourceString; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  __int64 v17; // [rsp+D8h] [rbp-30h]
  int v18; // [rsp+E0h] [rbp-28h]
  __int64 v19; // [rsp+E8h] [rbp-20h]

  SourceString = 0LL;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_q(0x26u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, a1);
  Context = 0LL;
  if ( ndisTdiRegisterCallback )
  {
    v2 = *(const WCHAR **)(a1 + 8);
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"Linkage";
    QueryTable.Flags = 1;
    v12 = &ndisReadParameter;
    v13 = 20;
    v14 = L"Export";
    p_SourceString = &SourceString;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v3 = RtlQueryRegistryValuesEx(1u, v2, &QueryTable, &Context, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( (_DWORD)Context == 7 )
      {
        v6 = SourceString;
        if ( !SourceString )
        {
LABEL_9:
          if ( (unsigned __int8)byte_1C009960C >= 4u )
            WPP_SF_(0x28u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
          return (unsigned int)v4;
        }
        do
        {
          if ( !*v6 )
            break;
          RtlInitUnicodeString(&DestinationString, v6);
          v4 = ((__int64 (__fastcall *)(_UNICODE_STRING *, _BYTE *))ndisTdiRegisterCallback)(&DestinationString, v10);
          if ( v4 < 0 )
            break;
          v6 = (PCWSTR)((char *)v6 + DestinationString.MaximumLength);
        }
        while ( v6 );
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else if ( v3 == -1073741772 )
    {
      v4 = 0;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    goto LABEL_9;
  }
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_(0x27u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  return 3221225473LL;
}
