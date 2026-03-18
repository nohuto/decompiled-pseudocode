/*
 * XREFs of ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012EF08
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18012EED8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::ClearAllTelemetry(CTelemetryTracking *this)
{
  _QWORD *v2; // rcx
  CTelemetryTracking::CTelemetryTrackingInfo *v3; // rbx
  _BYTE *i; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // r10
  _BYTE *j; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h]
  __int64 v9; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)*((_QWORD *)this + 65);
  if ( !v2 || (v3 = (CTelemetryTracking::CTelemetryTrackingInfo *)*v2, (*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_22;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)i;
  }
LABEL_22:
  while ( v3 )
  {
    v5 = v3;
    v8 = *((_QWORD *)v3 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(*((_QWORD *)this + 65)
                        + 8LL
                        * ((37
                          * (BYTE6(v8)
                           + 37
                           * (BYTE5(v8)
                            + 37
                            * (BYTE4(v8)
                             + 37
                             * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                          + HIBYTE(v8)) & (unsigned int)((*((_DWORD *)this + 129) >> 5) - 1))
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
    v9 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8LL
                                                           * ((37
                                                             * (BYTE6(v9)
                                                              + 37
                                                              * (BYTE5(v9)
                                                               + 37
                                                               * (BYTE4(v9)
                                                                + 37
                                                                * (BYTE3(v9)
                                                                 + 37
                                                                 * (BYTE2(v9)
                                                                  + 37
                                                                  * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                                                             + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
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
