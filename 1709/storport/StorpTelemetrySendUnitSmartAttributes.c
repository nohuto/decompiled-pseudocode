/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00035B0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001390 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     McTemplateK0qcccjjzssxqtqb @ 0x1C00017F8 (McTemplateK0qcccjjzssxqtqb.c)
 *     StorpTelemetrySmartCommand @ 0x1C0002D6C (StorpTelemetrySmartCommand.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00454B8 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rsi
  NTSTATUS v4; // eax
  int v5; // eax
  char *v6; // rdi
  char *v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // [rsp+68h] [rbp-B0h]
  int v28; // [rsp+80h] [rbp-98h]
  _QWORD v29[20]; // [rsp+98h] [rbp-80h] BYREF

  memset(v29, 0, sizeof(v29));
  if ( (*(_DWORD *)(a1 + 1736) & 2) == 0 && !KeGetCurrentIrql() )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      HIDWORD(v29[6]) = -1;
      LOWORD(v29[6]) = -1;
      LOWORD(v29[7]) = -1;
      BYTE2(v29[7]) = -1;
      memset(&v29[8], 255, 96);
      v4 = StorpTelemetrySmartCommand(a1, 218, PoolWithTag);
      if ( v4 < 0 )
        goto LABEL_5;
      v6 = (char *)v3 + (unsigned int)*v3;
      if ( *(_DWORD *)v6 < 8u )
        goto LABEL_6;
      if ( v6[19] == -12 && v6[20] == 44 )
        *(_DWORD *)(a1 + 1736) |= 0x10u;
      else
        *(_DWORD *)(a1 + 1736) &= ~0x10u;
      v4 = StorpTelemetrySmartCommand(a1, 208, v3);
      if ( v4 < 0 )
      {
LABEL_5:
        if ( v4 == -1073741670 )
        {
LABEL_8:
          ExFreePoolWithTag(v3, 0x65546152u);
          return;
        }
      }
      else
      {
        v7 = (char *)v3 + (unsigned int)*v3;
        v29[4] = v7;
        v29[5] = v7 + 16;
        if ( *(_DWORD *)v6 >= 0x200u )
        {
          if ( v7 == (char *)-16LL )
          {
LABEL_29:
            v18 = *(_QWORD *)(a1 + 96);
            if ( v18 )
            {
              v29[0] = *(_QWORD *)(v18 + 8);
              *(_OWORD *)((char *)&v29[1] + 1) = *(_OWORD *)(v18 + 16);
            }
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !WPP_MAIN_CB.DeviceLock.Header.LockNV
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_40;
            }
            if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
              WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
            if ( *(_BYTE *)(a1 + 1740) )
              WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
            if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
              WPP_MAIN_CB.DeviceLock.Header.LockNV = -1;
            if ( WPP_MAIN_CB.DeviceLock.Header.LockNV )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v29);
            else
LABEL_40:
              StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
            if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 8) != 0 )
            {
              v19 = *(_QWORD *)(a1 + 24);
              McTemplateK0qcccjjzssxqtqb(
                *(unsigned __int16 *)v29[5],
                (*(_DWORD *)(a1 + 1736) >> 4) & 1,
                v19 + 5192,
                *(_DWORD *)(v19 + 56),
                *(_BYTE *)(a1 + 88),
                *(_BYTE *)(a1 + 89),
                *(_BYTE *)(a1 + 90),
                a1 + 1720,
                v19 + 5192,
                *(const wchar_t **)(v19 + 4800),
                (const char *)v29,
                (const char *)&v29[1] + 1,
                v27,
                *(_WORD *)v29[5],
                (*(_DWORD *)(a1 + 1736) & 0x10) != 0,
                v28,
                v29[5]);
            }
            goto LABEL_8;
          }
          v8 = (unsigned __int16 *)(v7 + 27);
          v9 = 30LL;
          while ( 1 )
          {
            v10 = *((unsigned __int8 *)v8 - 9);
            if ( v10 > 0xC1 )
            {
              v20 = v10 - 194;
              if ( !v20 )
              {
                BYTE2(v29[7]) = *((_BYTE *)v8 - 4);
                goto LABEL_28;
              }
              v21 = v20 - 2;
              if ( !v21 )
              {
                v29[14] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v22 = v21 - 1;
              if ( !v22 )
              {
                v29[15] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v23 = v22 - 1;
              if ( !v23 )
              {
                v29[16] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v24 = v23 - 3;
              if ( !v24 )
              {
                v29[17] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v25 = v24 - 24;
              if ( v25 )
              {
                v26 = v25 - 5;
                if ( v26 )
                {
                  if ( v26 == 3 )
                    v29[19] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8
                                                                                                - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  v29[18] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                }
                goto LABEL_28;
              }
            }
            else if ( v10 != 193 )
            {
              v11 = v10 - 4;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = v12 - 4;
                  if ( v13 )
                  {
                    v14 = v13 - 1;
                    if ( v14 )
                    {
                      v15 = v14 - 173;
                      if ( v15 )
                      {
                        v16 = v15 - 1;
                        if ( v16 )
                        {
                          v17 = v16 - 3;
                          if ( v17 )
                          {
                            if ( v17 == 1 )
                              v29[13] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                          }
                          else
                          {
                            v29[12] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v29[11] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        v29[10] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                      }
                    }
                    else
                    {
                      v29[9] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8
                                                                                                 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    HIDWORD(v29[6]) = *((_DWORD *)v8 - 1);
                  }
                }
                else
                {
                  v29[8] = *((unsigned __int8 *)v8 - 4) | ((*((unsigned __int8 *)v8 - 3) | ((*((unsigned __int8 *)v8 - 2) | ((*((unsigned __int8 *)v8 - 1) | ((unsigned __int64)*v8 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                LOWORD(v29[6]) = *(v8 - 2);
              }
              goto LABEL_28;
            }
            LOWORD(v29[7]) = *(v8 - 2);
LABEL_28:
            v8 += 6;
            if ( !--v9 )
              goto LABEL_29;
          }
        }
      }
LABEL_6:
      v5 = *(_DWORD *)(a1 + 1736);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 1736) = v5 | 2;
      goto LABEL_8;
    }
  }
}
