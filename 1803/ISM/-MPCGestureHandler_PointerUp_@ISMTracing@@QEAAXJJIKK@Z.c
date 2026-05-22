/*
 * XREFs of ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x18005A518
 * Callers:
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800599A0 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUp_(ISMTracing *this, int a2, int a3, int a4, char a5, char a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v9; // [rsp+58h] [rbp-19h]
  int v10; // [rsp+60h] [rbp-11h]
  int v11; // [rsp+64h] [rbp-Dh]
  int *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  int *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  char *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  char *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  int v24; // [rsp+D0h] [rbp+5Fh] BYREF
  int v25; // [rsp+D8h] [rbp+67h] BYREF
  int v26; // [rsp+E0h] [rbp+6Fh] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 )
  {
    if ( *v6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v9 = &v26;
        v12 = &v24;
        v15 = &v25;
        v18 = &a5;
        v21 = &a6;
        v10 = 4;
        v13 = 4;
        v16 = 4;
        v19 = 4;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)v7, &unk_18010E596, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
