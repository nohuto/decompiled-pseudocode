/*
 * XREFs of ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z @ 0x18008CDD0
 * Callers:
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180092294 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInputControllerCollection_Initialized_(
        RawInputProvidersTracing *this,
        char a2)
{
  __int64 v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  char v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 2) != 0 && (*(_QWORD *)(v2 + 24) & 2LL) == *(_QWORD *)(v2 + 24) )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 1;
    TlgWrite((TraceLoggingHProvider)v2, &unk_1800F06E5, 0LL, 0LL, 3u, &pData);
  }
}
