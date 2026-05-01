/*
 * XREFs of ??$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z @ 0x1801C78CC
 * Callers:
 *     ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x1801C57D0 (-RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C48D0 (-Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CUITelemetry::RegisteringDisconnectedComponent<unsigned int &,unsigned int &>(__int64 a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v4 = CUITelemetry::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v9 = 0;
    v12 = 0;
    v8 = 4;
    v11 = 4;
    v7 = a1;
    v10 = a2;
    LODWORD(v4) = TlgWrite(v4, &unk_180268811, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
