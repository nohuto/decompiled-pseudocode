/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C0003774
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00026F0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     Template_qcccjjzssxqtqb @ 0x1C0001008 (Template_qcccjjzssxqtqb.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001374 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1C0003D1C (StorpTelemetrySmartCommand.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00448AC (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  char *PoolWithTag; // rax
  __int64 v3; // rdx
  char *v4; // rsi
  __int64 v5; // rdx
  unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  int SecurityDescriptor; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // [rsp+68h] [rbp-B0h]
  int v26; // [rsp+80h] [rbp-98h]
  _QWORD v27[20]; // [rsp+98h] [rbp-80h] BYREF

  memset(v27, 0, sizeof(v27));
  if ( KeGetCurrentIrql() )
    return;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  HIDWORD(v27[6]) = -1;
  LOWORD(v27[6]) = -1;
  LOWORD(v27[7]) = -1;
  LOBYTE(v3) = -38;
  BYTE2(v27[7]) = -1;
  memset(&v27[8], 255, 96);
  if ( (int)StorpTelemetrySmartCommand(a1, v3, PoolWithTag) < 0
    || *(_DWORD *)v4 != 28
    || *((_DWORD *)v4 + 6) < 0x10u
    || *((_DWORD *)v4 + 7) < 8u )
  {
    goto LABEL_4;
  }
  *(_BYTE *)(a1 + 1704) = v4[47] == -12 && v4[48] == 44;
  LOBYTE(v5) = -48;
  if ( (int)StorpTelemetrySmartCommand(a1, v5, v4) < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)v4 != 28 )
    goto LABEL_4;
  if ( *((_DWORD *)v4 + 6) < 0x10u )
    goto LABEL_4;
  v27[4] = v4 + 28;
  v27[5] = v4 + 44;
  if ( *((_DWORD *)v4 + 7) < 0x200u )
    goto LABEL_4;
  v6 = (unsigned __int16 *)(v4 + 55);
  v7 = 30LL;
  do
  {
    v8 = *((unsigned __int8 *)v6 - 9);
    if ( v8 > 0xC1 )
    {
      v18 = v8 - 194;
      if ( v18 )
      {
        v19 = v18 - 2;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 3;
              if ( v22 )
              {
                v23 = v22 - 24;
                if ( !v23 )
                {
LABEL_55:
                  LOWORD(v27[7]) = *(v6 - 2);
                  goto LABEL_27;
                }
                v24 = v23 - 5;
                if ( v24 )
                {
                  if ( v24 == 3 )
                    v27[19] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  v27[18] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v27[17] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
              }
            }
            else
            {
              v27[16] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
            }
          }
          else
          {
            v27[15] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
          }
        }
        else
        {
          v27[14] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
        }
      }
      else
      {
        BYTE2(v27[7]) = *((_BYTE *)v6 - 4);
      }
    }
    else
    {
      if ( v8 == 193 )
        goto LABEL_55;
      v9 = v8 - 4;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 4;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 173;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 3;
                  if ( v15 )
                  {
                    if ( v15 == 1 )
                      v27[13] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                  - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                  }
                  else
                  {
                    v27[12] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                  }
                }
                else
                {
                  v27[11] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v27[10] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
              }
            }
            else
            {
              v27[9] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
            }
          }
          else
          {
            HIDWORD(v27[6]) = *((_DWORD *)v6 - 1);
          }
        }
        else
        {
          v27[8] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
        }
      }
      else
      {
        LOWORD(v27[6]) = *(v6 - 2);
      }
    }
LABEL_27:
    v6 += 6;
    --v7;
  }
  while ( v7 );
  v16 = *(_QWORD *)(a1 + 96);
  if ( v16 )
  {
    v27[0] = *(_QWORD *)(v16 + 8);
    *(_OWORD *)((char *)&v27[1] + 1) = *(_OWORD *)(v16 + 16);
  }
  SecurityDescriptor = (int)WPP_MAIN_CB.SecurityDescriptor;
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !LODWORD(WPP_MAIN_CB.SecurityDescriptor)
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_39;
  }
  if ( *(_BYTE *)(a1 + 1704) )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( *(_BYTE *)(a1 + 1705) )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( SecurityDescriptor )
    StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v27);
  else
LABEL_39:
    StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
  if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
    Template_qcccjjzssxqtqb(
      *(unsigned __int16 *)v27[5],
      *(unsigned __int8 *)(a1 + 1704),
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      *(_BYTE *)(a1 + 89),
      *(_BYTE *)(a1 + 90),
      a1 + 1688,
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4800LL),
      (const char *)v27,
      (const char *)&v27[1] + 1,
      v25,
      *(_WORD *)v27[5],
      *(_BYTE *)(a1 + 1704),
      v26,
      v27[5]);
LABEL_4:
  ExFreePoolWithTag(v4, 0x65546152u);
}
