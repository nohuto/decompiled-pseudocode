/*
 * XREFs of ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18008FB80
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180092EE0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::FailedToStartTracingSession_(RawInputProvidersTracing *this, int a2)
{
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*((_QWORD *)v2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 4;
    TlgWrite(v2, &unk_1800EFADD, 0LL, 0LL, 3u, &pData);
  }
}
