/*
 * XREFs of ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150704
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801506D4 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::ClearAllTelemetry(CTelemetryTracking *this)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 *i; // rdx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int64 v10; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx

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
        goto LABEL_24;
    }
    v3 = 0LL;
  }
LABEL_24:
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
    v10 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8
                                                           * ((HIBYTE(v10)
                                                             + 37
                                                             * (BYTE6(v10)
                                                              + 37
                                                              * (BYTE5(v10)
                                                               + 37
                                                               * (BYTE4(v10)
                                                                + 37
                                                                * (((*((_DWORD *)v5 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
                                                                 + 37
                                                                 * ((unsigned __int8)((*((_DWORD *)v5 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
                                                                  + 37
                                                                  * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v5 + 4) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
                                                                   + 37 * ((unsigned __int8)v10 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1)));
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
