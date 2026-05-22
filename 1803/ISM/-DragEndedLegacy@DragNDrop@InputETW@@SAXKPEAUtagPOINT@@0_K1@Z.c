/*
 * XREFs of ?DragEndedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B18BC
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B2220 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void InputETW::DragNDrop::DragEndedLegacy(unsigned int a1, struct tagPOINT *a2, struct tagPOINT *a3, __int64 a4, ...)
{
  __int64 v5; // rsi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp-81h] BYREF
  __int64 x; // [rsp+40h] [rbp-79h] BYREF
  __int64 y; // [rsp+48h] [rbp-71h] BYREF
  __int64 v12; // [rsp+50h] [rbp-69h] BYREF
  __int64 v13; // [rsp+58h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v15; // [rsp+88h] [rbp-31h]
  __int64 v16; // [rsp+90h] [rbp-29h]
  __int64 *p_x; // [rsp+98h] [rbp-21h]
  __int64 v18; // [rsp+A0h] [rbp-19h]
  __int64 *p_y; // [rsp+A8h] [rbp-11h]
  __int64 v20; // [rsp+B0h] [rbp-9h]
  __int64 *v21; // [rsp+B8h] [rbp-1h]
  __int64 v22; // [rsp+C0h] [rbp+7h]
  __int64 *v23; // [rsp+C8h] [rbp+Fh]
  __int64 v24; // [rsp+D0h] [rbp+17h]
  __int64 *v25; // [rsp+D8h] [rbp+1Fh]
  __int64 v26; // [rsp+E0h] [rbp+27h]
  va_list v27; // [rsp+E8h] [rbp+2Fh]
  __int64 v28; // [rsp+F0h] [rbp+37h]
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  va_list va; // [rsp+138h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v29 = a4;
  v5 = a1;
  v7 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v8 = *((_QWORD *)InputETW::Instance() + 1);
    if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v9 = v5;
      v15 = &v9;
      x = a2->x;
      p_x = &x;
      y = a2->y;
      p_y = &y;
      v12 = a3->x;
      v21 = &v12;
      v13 = a3->y;
      v23 = &v13;
      v25 = &v29;
      va_copy(v27, va);
      v16 = 8LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 8LL;
      v28 = 8LL;
      TlgWrite((TraceLoggingHProvider)v8, &unk_180110803, 0LL, 0LL, 9u, &pData);
    }
  }
}
