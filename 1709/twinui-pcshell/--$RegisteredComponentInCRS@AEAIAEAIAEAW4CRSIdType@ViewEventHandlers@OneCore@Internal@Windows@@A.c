/*
 * XREFs of ??$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAI0AEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7720
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C48D0 (-Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CUITelemetry::RegisteredComponentInCRS<unsigned int &,unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5)
{
  const struct _TlgProvider_t *v9; // rax
  int v10; // ecx
  int v12; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  int *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  __int64 v23; // [rsp+B0h] [rbp+37h]

  v9 = CUITelemetry::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a3;
    v18 = &v12;
    v22 = a5;
    v14 = a1;
    v15 = 4LL;
    v16 = a2;
    v17 = 4LL;
    v12 = v10;
    v19 = 4LL;
    v20 = a4;
    v21 = 4LL;
    v23 = 4LL;
    LODWORD(v9) = TlgWrite(v9, &unk_180268858, 0LL, 0LL, 7u, &pData);
  }
  return (int)v9;
}
