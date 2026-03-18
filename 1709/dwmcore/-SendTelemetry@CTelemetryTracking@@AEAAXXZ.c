/*
 * XREFs of ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012F174
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18012EED8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::SendTelemetry(CTelemetryTracking *this)
{
  _QWORD *v2; // rcx
  CTelemetryTracking::CTelemetryTrackingInfo *v3; // rbx
  _BYTE *i; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // rdi
  _BYTE *j; // rbx
  const WCHAR *v7; // rdx
  const WCHAR *v8; // rdx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx
  __int64 v12; // [rsp+38h] [rbp-79h]
  __int64 v13; // [rsp+38h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-39h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp-29h]
  __int64 v18; // [rsp+90h] [rbp-21h]
  char *v19; // [rsp+98h] [rbp-19h]
  __int64 v20; // [rsp+A0h] [rbp-11h]
  _QWORD *v21; // [rsp+A8h] [rbp-9h]
  __int64 v22; // [rsp+B0h] [rbp-1h]
  char *v23; // [rsp+B8h] [rbp+7h]
  __int64 v24; // [rsp+C0h] [rbp+Fh]
  _QWORD *v25; // [rsp+C8h] [rbp+17h]
  __int64 v26; // [rsp+D0h] [rbp+1Fh]
  char *v27; // [rsp+D8h] [rbp+27h]
  __int64 v28; // [rsp+E0h] [rbp+2Fh]

  v2 = (_QWORD *)*((_QWORD *)this + 65);
  if ( !v2 || (v3 = (CTelemetryTracking::CTelemetryTrackingInfo *)*v2, (*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_29;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)i;
  }
LABEL_29:
  while ( v3 )
  {
    v5 = v3;
    v12 = *((_QWORD *)v3 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(*((_QWORD *)this + 65)
                        + 8LL
                        * ((37
                          * (BYTE6(v12)
                           + 37
                           * (BYTE5(v12)
                            + 37
                            * (BYTE4(v12)
                             + 37
                             * (BYTE3(v12)
                              + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
                          + HIBYTE(v12)) & (unsigned int)((*((_DWORD *)this + 129) >> 5) - 1))
                        + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_15;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)j;
    }
LABEL_15:
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v7 = (const WCHAR *)&word_1801EFDD8;
      if ( *((_QWORD *)v5 + 2) )
        v7 = (const WCHAR *)*((_QWORD *)v5 + 2);
      TlgCreateWsz(&pDesc, v7);
      v8 = (const WCHAR *)&word_1801EFDD8;
      if ( *((_QWORD *)v5 + 3) )
        v8 = (const WCHAR *)*((_QWORD *)v5 + 3);
      TlgCreateWsz(&v16, v8);
      v18 = 4LL;
      v19 = (char *)v5 + 44;
      v17 = (_QWORD *)((char *)v5 + 40);
      v21 = (_QWORD *)((char *)v5 + 48);
      v23 = (char *)v5 + 52;
      v25 = (_QWORD *)((char *)v5 + 56);
      v27 = (char *)v5 + 60;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802126A7, v9, v10, 0xAu, &pData);
    }
    v13 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8LL
                                                           * ((37
                                                             * (BYTE6(v13)
                                                              + 37
                                                              * (BYTE5(v13)
                                                               + 37
                                                               * (BYTE4(v13)
                                                                + 37
                                                                * (BYTE3(v13)
                                                                 + 37
                                                                 * (BYTE2(v13)
                                                                  + 37
                                                                  * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                                             + HIBYTE(v13)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
                                                                                           - 1)));
          (*(_QWORD *)k & 1) == 0;
          k = *(CTelemetryTracking::CTelemetryTrackingInfo **)k )
    {
      if ( *(CTelemetryTracking::CTelemetryTrackingInfo **)k == v5 )
      {
        *(_QWORD *)k = *(_QWORD *)v5;
        --*((_DWORD *)this + 128);
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
    }
    CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(v5);
  }
}
