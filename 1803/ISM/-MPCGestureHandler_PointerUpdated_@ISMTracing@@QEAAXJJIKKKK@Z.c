/*
 * XREFs of ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x18005A400
 * Callers:
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800599A0 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUpdated_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-69h] BYREF
  int *v11; // [rsp+58h] [rbp-49h]
  int v12; // [rsp+60h] [rbp-41h]
  int v13; // [rsp+64h] [rbp-3Dh]
  int *v14; // [rsp+68h] [rbp-39h]
  int v15; // [rsp+70h] [rbp-31h]
  int v16; // [rsp+74h] [rbp-2Dh]
  int *v17; // [rsp+78h] [rbp-29h]
  int v18; // [rsp+80h] [rbp-21h]
  int v19; // [rsp+84h] [rbp-1Dh]
  char *v20; // [rsp+88h] [rbp-19h]
  int v21; // [rsp+90h] [rbp-11h]
  int v22; // [rsp+94h] [rbp-Dh]
  char *v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  char *v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+B0h] [rbp+Fh]
  int v28; // [rsp+B4h] [rbp+13h]
  char *v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+C0h] [rbp+1Fh]
  int v31; // [rsp+C4h] [rbp+23h]
  int v32; // [rsp+F0h] [rbp+4Fh] BYREF
  int v33; // [rsp+F8h] [rbp+57h] BYREF
  int v34; // [rsp+100h] [rbp+5Fh] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      v9 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v11 = &v32;
        v14 = &v33;
        v17 = &v34;
        v20 = &a5;
        v23 = &a6;
        v26 = &a7;
        v29 = &a8;
        v12 = 4;
        v15 = 4;
        v18 = 4;
        v21 = 4;
        v24 = 4;
        v27 = 4;
        v30 = 4;
        TlgWrite((TraceLoggingHProvider)v9, &unk_18010E602, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
