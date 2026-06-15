/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000A0DC
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // esi
  int v5; // r14d
  int v6; // edi
  RPC_STATUS v7; // eax
  signed int v8; // ebx
  BOOL v9; // eax
  unsigned int v10; // eax
  DWORD pSessionId; // [rsp+38h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h] BYREF
  __int64 v16; // [rsp+58h] [rbp-29h] BYREF
  PROPVARIANT pvar; // [rsp+60h] [rbp-21h] BYREF
  __int64 v18; // [rsp+68h] [rbp-19h]
  __int64 v19; // [rsp+70h] [rbp-11h]
  PROPVARIANT v20; // [rsp+78h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  DEVPROPGUID fmtid; // [rsp+98h] [rbp+17h] BYREF
  int v25; // [rsp+A8h] [rbp+27h]

  v23 = -2LL;
  v4 = 0;
  v5 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v6 = 0;
  pSessionId = 0;
  pvar = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x200u, v8);
      goto LABEL_14;
    }
  }
  v5 = 1;
  v9 = ProcessIdToSessionId(dwProcessId, &pSessionId);
  pSessionId &= -v9;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v16);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v15);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
              v15,
              &PKEY_Endpoint_Devnode,
              &pvar)
        && (_WORD)pvar == 31 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
               *(_QWORD *)&g_DeviceEnumerator,
               v18,
               &v13);
        if ( v8 < 0 )
          goto LABEL_14;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v14);
        if ( v8 < 0 )
          goto LABEL_14;
        fmtid = DEVPKEY_Device_SessionId.fmtid;
        v25 = 6;
        if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(v14, &fmtid, &v20) >= 0
          && (_WORD)v20 == 19 )
        {
          v6 = v21;
        }
      }
      if ( pSessionId && v6 && pSessionId != v6 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
        }
        v4 = 0;
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_14:
  PropVariantClear(&pvar);
  PropVariantClear(&v20);
  if ( v5 )
  {
    v10 = RpcRevertToSelf();
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v10);
      }
    }
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 0x252u, v8);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v4;
}
