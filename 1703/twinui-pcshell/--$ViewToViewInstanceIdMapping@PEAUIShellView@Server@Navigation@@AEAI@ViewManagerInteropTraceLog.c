/*
 * XREFs of ??$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAI@Z @ 0x18010DD1C
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B4E0 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewToViewInstanceIdMapping<Navigation::Server::IShellView *,unsigned int &>(
        __int64 *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+6Ch] [rbp-3Ch]
  int *v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a1;
    v12 = 0;
    v15 = 0;
    v8 = v5;
    v10 = &v8;
    v7 = *a2;
    v13 = &v7;
    v11 = 8;
    v14 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_1801FE1FC, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
