/*
 * XREFs of ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x180138CC0
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180137D58 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
        __int64 a1,
        int *a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  const WCHAR *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v11 = *a2;
    v7 = *a3;
    v8 = &word_18021F3A8;
    v13 = &v11;
    v14 = 4LL;
    LODWORD(v9) = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = -1LL;
      do
        ++v9;
      while ( v7[v9] );
    }
    v15 = v8;
    v16 = 2 * v9 + 2;
    v17 = 0;
    LODWORD(v6) = TlgWrite(v6, &unk_180261566, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return (int)v6;
}
