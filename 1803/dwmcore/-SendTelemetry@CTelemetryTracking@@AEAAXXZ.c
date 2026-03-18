/*
 * XREFs of ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x1801509A4
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801506D4 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::SendTelemetry(CTelemetryTracking *this)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 *i; // rdx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // rdi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 *j; // rdx
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  unsigned __int64 v12; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  char *v19; // [rsp+88h] [rbp-19h]
  __int64 v20; // [rsp+90h] [rbp-11h]
  _QWORD *v21; // [rsp+98h] [rbp-9h]
  __int64 v22; // [rsp+A0h] [rbp-1h]
  char *v23; // [rsp+A8h] [rbp+7h]
  __int64 v24; // [rsp+B0h] [rbp+Fh]
  _QWORD *v25; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]
  char *v27; // [rsp+C8h] [rbp+27h]
  __int64 v28; // [rsp+D0h] [rbp+2Fh]

  v1 = (unsigned __int64 *)*((_QWORD *)this + 65);
  if ( !v1 )
    goto LABEL_5;
  v3 = *v1;
  if ( (*v1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = *v1;
  if ( (v3 & 1) != 0 )
  {
LABEL_5:
    for ( i = v1 + 1;
          (unsigned __int64)i < *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5);
          ++i )
    {
      v3 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_31;
    }
    v3 = 0LL;
  }
LABEL_31:
  while ( v3 )
  {
    v5 = (CTelemetryTracking::CTelemetryTrackingInfo *)v3;
    v6 = *(_QWORD *)(v3 + 8) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v7 = *((_QWORD *)this + 65)
       + 8
       * ((HIBYTE(v6)
         + 37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6)
            + 37
            * (((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v3 + 8) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1));
    v8 = (unsigned __int64 *)v3;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v8;
    if ( (v3 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v7 + 8);
            (unsigned __int64)j < *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5);
            ++j )
      {
        v3 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_18;
      }
      v3 = 0LL;
    }
LABEL_18:
    if ( dword_1802D3FA0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
    {
      v10 = word_180252860;
      if ( *((_QWORD *)v5 + 2) )
        v10 = (const WCHAR *)*((_QWORD *)v5 + 2);
      TlgCreateWsz(&pDesc, v10);
      v11 = word_180252860;
      if ( *((_QWORD *)v5 + 3) )
        v11 = (const WCHAR *)*((_QWORD *)v5 + 3);
      TlgCreateWsz(&v16, v11);
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
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A702E, 0LL, 0LL, 0xAu, &pData);
    }
    v12 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8
                                                           * ((HIBYTE(v12)
                                                             + 37
                                                             * (BYTE6(v12)
                                                              + 37
                                                              * (BYTE5(v12)
                                                               + 37
                                                               * (BYTE4(v12)
                                                                + 37
                                                                * (((*((_DWORD *)v5 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
                                                                 + 37
                                                                 * ((unsigned __int8)((*((_DWORD *)v5 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
                                                                  + 37
                                                                  * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v5 + 4) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
                                                                   + 37 * ((unsigned __int8)v12 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1)));
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
