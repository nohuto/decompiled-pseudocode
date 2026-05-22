/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800589A0
 * Callers:
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const bool *v10; // [rsp+50h] [rbp-48h]
  int v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+5Ch] [rbp-3Ch]
  const bool *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  const bool *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v7 )
  {
    if ( *v7 )
    {
      v8 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v10 = a2;
        v11 = 1;
        v13 = a3;
        v14 = 1;
        v16 = a4;
        v17 = 1;
        TlgWrite((TraceLoggingHProvider)v8, &unk_18010E4EE, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
