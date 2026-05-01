/*
 * XREFs of _lambda_eccc1875da2115ade755cfcef89d88c7_::_lambda_invoker_cdecl_ @ 0x180058C60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG __fastcall lambda_eccc1875da2115ade755cfcef89d88c7_::_lambda_invoker_cdecl_(__int64 a1)
{
  const CHAR *v1; // rdx
  __int64 v2; // r9
  const CHAR *v3; // rdx
  __int64 v4; // r9
  ULONGLONG v5; // r11
  ULONG result; // eax
  int v7; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v10; // [rsp+60h] [rbp-19h]
  int v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+6Ch] [rbp-Dh]
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  __int64 v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+A0h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+B0h] [rbp+37h] BYREF

  if ( hProvider > 5u )
  {
    v1 = *(const CHAR **)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 4);
    v13 = &v7;
    v14 = 4LL;
    TlgCreateSz(&pDesc, v1);
    v3 = *(const CHAR **)(v2 + 40);
    v16 = v2 + 56;
    v17 = 4LL;
    TlgCreateSz(&v18, v3);
    TlgCreateWsz(&v19, *(LPCWSTR *)(v4 + 16));
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18042FE38;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180385821 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v5;
    UserData.Size = *(unsigned __int16 *)off_18042FE38;
    v10 = &unk_18038582C;
    UserData.Reserved = 2;
    v11 = 64;
    v12 = 1;
    return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
