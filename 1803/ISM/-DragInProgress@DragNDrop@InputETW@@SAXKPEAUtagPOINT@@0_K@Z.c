/*
 * XREFs of ?DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063310
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall InputETW::DragNDrop::DragInProgress(
        unsigned int a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp-69h] BYREF
  __int64 x; // [rsp+40h] [rbp-61h] BYREF
  __int64 y; // [rsp+48h] [rbp-59h] BYREF
  __int64 v12; // [rsp+50h] [rbp-51h] BYREF
  __int64 v13; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+88h] [rbp-19h]
  int v16; // [rsp+90h] [rbp-11h]
  int v17; // [rsp+94h] [rbp-Dh]
  __int64 *p_x; // [rsp+98h] [rbp-9h]
  int v19; // [rsp+A0h] [rbp-1h]
  int v20; // [rsp+A4h] [rbp+3h]
  __int64 *p_y; // [rsp+A8h] [rbp+7h]
  int v22; // [rsp+B0h] [rbp+Fh]
  int v23; // [rsp+B4h] [rbp+13h]
  __int64 *v24; // [rsp+B8h] [rbp+17h]
  int v25; // [rsp+C0h] [rbp+1Fh]
  int v26; // [rsp+C4h] [rbp+23h]
  __int64 *v27; // [rsp+C8h] [rbp+27h]
  int v28; // [rsp+D0h] [rbp+2Fh]
  int v29; // [rsp+D4h] [rbp+33h]
  __int64 *v30; // [rsp+D8h] [rbp+37h]
  int v31; // [rsp+E0h] [rbp+3Fh]
  int v32; // [rsp+E4h] [rbp+43h]
  __int64 v33; // [rsp+120h] [rbp+7Fh] BYREF

  v33 = a4;
  v5 = a1;
  v7 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( v7 )
  {
    if ( *v7 > 1u )
    {
      v8 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v15 = &v9;
        x = a2->x;
        p_x = &x;
        y = a2->y;
        p_y = &y;
        v12 = a3->x;
        v24 = &v12;
        v13 = a3->y;
        v27 = &v13;
        v30 = &v33;
        v9 = v5;
        v16 = 8;
        v19 = 8;
        v22 = 8;
        v25 = 8;
        v28 = 8;
        v31 = 8;
        TlgWrite((TraceLoggingHProvider)v8, &unk_18010EB0A, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
