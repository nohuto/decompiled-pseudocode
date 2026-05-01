/*
 * XREFs of ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180066D48
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180065E60 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v6 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v9 = a1;
    v10 = 4LL;
    v11 = a2;
    v12 = 4LL;
    v13 = a3;
    v14 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_180257619, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
