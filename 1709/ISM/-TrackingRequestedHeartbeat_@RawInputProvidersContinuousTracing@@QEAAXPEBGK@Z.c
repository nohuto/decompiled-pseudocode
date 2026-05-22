/*
 * XREFs of ?TrackingRequestedHeartbeat_@RawInputProvidersContinuousTracing@@QEAAXPEBGK@Z @ 0x18009028C
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersContinuousTracing::TrackingRequestedHeartbeat_(
        RawInputProvidersContinuousTracing *this,
        const unsigned __int16 *a2,
        int a3)
{
  __int64 v4; // rcx
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  int *v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+A0h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = &word_1800DF514;
    LODWORD(v6) = 0;
    if ( a2 )
    {
      v5 = a2;
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
    v8 = v5;
    v9 = 2 * v6 + 2;
    v10 = 0;
    v11 = &v13;
    v12 = 4LL;
    TlgWrite((TraceLoggingHProvider)v4, &unk_1800EF892, 0LL, 0LL, 4u, &pData);
  }
}
