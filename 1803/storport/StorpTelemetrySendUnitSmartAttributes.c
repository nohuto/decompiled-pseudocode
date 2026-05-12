/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0002D10 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00011AC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001FB8 (StorpTelemetrySmartCommand.c)
 *     McTemplateK0qcccjjzssxqtqb @ 0x1C000210C (McTemplateK0qcccjjzssxqtqb.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0045354 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rsi
  NTSTATUS v4; // eax
  char *v5; // rdi
  char *v6; // rcx
  char *v7; // r8
  __int64 i; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int v26; // eax
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
      if ( v4 >= 0 )
      {
        v5 = (char *)v3 + (unsigned int)*v3;
        if ( *(_DWORD *)v5 < 8u )
          goto LABEL_61;
        if ( v5[19] == -12 && v5[20] == 44 )
          *(_DWORD *)(a1 + 1736) |= 0x10u;
        else
          *(_DWORD *)(a1 + 1736) &= ~0x10u;
        v4 = StorpTelemetrySmartCommand(a1, 208, v3);
        if ( v4 >= 0 )
        {
          v6 = (char *)v3 + (unsigned int)*v3;
          v29[4] = v6;
          v7 = v6 + 16;
          v29[5] = v6 + 16;
          if ( *(_DWORD *)v5 >= 0x200u )
          {
            if ( v6 != (char *)-16LL )
            {
              for ( i = 0LL; i < 360; i += 12LL )
              {
                v9 = (unsigned __int8)v7[i + 2];
                if ( v9 > 0xC1 )
                {
                  v19 = v9 - 194;
                  if ( !v19 )
                  {
                    BYTE2(v29[7]) = v7[i + 7];
                    continue;
                  }
                  v20 = v19 - 2;
                  if ( !v20 )
                  {
                    v29[14] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    continue;
                  }
                  v21 = v20 - 1;
                  if ( !v21 )
                  {
                    v29[15] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    continue;
                  }
                  v22 = v21 - 1;
                  if ( !v22 )
                  {
                    v29[16] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    continue;
                  }
                  v23 = v22 - 3;
                  if ( !v23 )
                  {
                    v29[17] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    continue;
                  }
                  v24 = v23 - 24;
                  if ( v24 )
                  {
                    v25 = v24 - 5;
                    if ( v25 )
                    {
                      if ( v25 == 3 )
                        v29[19] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    }
                    else
                    {
                      v29[18] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    }
                    continue;
                  }
                }
                else if ( v9 != 193 )
                {
                  v10 = v9 - 4;
                  if ( v10 )
                  {
                    v11 = v10 - 1;
                    if ( v11 )
                    {
                      v12 = v11 - 4;
                      if ( v12 )
                      {
                        v13 = v12 - 1;
                        if ( v13 )
                        {
                          v14 = v13 - 173;
                          if ( v14 )
                          {
                            v15 = v14 - 1;
                            if ( v15 )
                            {
                              v16 = v15 - 3;
                              if ( v16 )
                              {
                                if ( v16 == 1 )
                                  v29[13] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                              }
                              else
                              {
                                v29[12] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                              }
                            }
                            else
                            {
                              v29[11] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                            }
                          }
                          else
                          {
                            v29[10] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v29[9] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        HIDWORD(v29[6]) = *(_DWORD *)&v7[i + 7];
                      }
                    }
                    else
                    {
                      v29[8] = (unsigned __int8)v7[i + 7] | (((unsigned __int8)v7[i + 8] | (((unsigned __int8)v7[i + 9] | (((unsigned __int8)v7[i + 10] | ((unsigned __int64)*(unsigned __int16 *)&v7[i + 11] << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    LOWORD(v29[6]) = *(_WORD *)&v7[i + 7];
                  }
                  continue;
                }
                LOWORD(v29[7]) = *(_WORD *)&v7[i + 7];
              }
            }
            v17 = *(_QWORD *)(a1 + 96);
            if ( v17 )
            {
              v29[0] = *(_QWORD *)(v17 + 8);
              *(_OWORD *)((char *)&v29[1] + 1) = *(_OWORD *)(v17 + 16);
            }
            if ( LOBYTE(WPP_MAIN_CB.Reserved) == 1 && !HIDWORD(WPP_MAIN_CB.Reserved)
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_35;
            }
            if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
              HIDWORD(WPP_MAIN_CB.Reserved) = -1;
            if ( *(_BYTE *)(a1 + 1740) )
              HIDWORD(WPP_MAIN_CB.Reserved) = -1;
            if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
              HIDWORD(WPP_MAIN_CB.Reserved) = -1;
            if ( HIDWORD(WPP_MAIN_CB.Reserved) )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v29);
            else
LABEL_35:
              StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
            if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 8) != 0 )
            {
              v18 = *(_QWORD *)(a1 + 24);
              McTemplateK0qcccjjzssxqtqb(
                *(unsigned __int16 *)v29[5],
                (*(_DWORD *)(a1 + 1736) >> 4) & 1,
                v18 + 5192,
                *(_DWORD *)(v18 + 56),
                *(_BYTE *)(a1 + 88),
                *(_BYTE *)(a1 + 89),
                *(_BYTE *)(a1 + 90),
                a1 + 1720,
                v18 + 5192,
                *(const wchar_t **)(v18 + 4800),
                (const char *)v29,
                (const char *)&v29[1] + 1,
                v27,
                *(_WORD *)v29[5],
                (*(_DWORD *)(a1 + 1736) & 0x10) != 0,
                v28,
                v29[5]);
            }
            goto LABEL_38;
          }
          goto LABEL_61;
        }
      }
      if ( v4 == -1073741670 )
      {
LABEL_38:
        ExFreePoolWithTag(v3, 0x65546152u);
        return;
      }
LABEL_61:
      v26 = *(_DWORD *)(a1 + 1736);
      if ( (v26 & 1) == 0 )
        *(_DWORD *)(a1 + 1736) = v26 | 2;
      goto LABEL_38;
    }
  }
}
