/*
 * XREFs of ??$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180144890
 * Callers:
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x180141A40 (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int const &,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy const &>(
        int *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a1;
    v12 = 0;
    v15 = 0;
    v7 = v5;
    v10 = &v7;
    v8 = *a2;
    v13 = &v8;
    v11 = 4;
    v14 = 4;
    LODWORD(v4) = TlgWrite(v4, &unk_180263D46, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
