/*
 * XREFs of ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x180065248
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+68h] [rbp-40h]
  __int64 v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+78h] [rbp-30h]

  v6 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v9 = a1;
    v10 = 1LL;
    v11 = a2;
    v12 = 4LL;
    v13 = a3;
    v14 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1801F5E77, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
