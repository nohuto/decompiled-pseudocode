/*
 * XREFs of ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x18010E7F4
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18010CB38 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
        __int64 a1,
        int *a2,
        void **a3)
{
  const struct _TlgProvider_t *v6; // rax
  void *v7; // rdx
  void *v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+68h] [rbp-40h]
  void *v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+7Ch] [rbp-2Ch]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v11 = *a2;
    v7 = *a3;
    v8 = &unk_1801C6ABC;
    v13 = &v11;
    v14 = 4LL;
    LODWORD(v9) = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)v7 + v9) );
    }
    v15 = v8;
    v16 = 2 * v9 + 2;
    v17 = 0;
    LODWORD(v6) = TlgWrite(v6, &unk_1801FE0BA, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return (int)v6;
}
