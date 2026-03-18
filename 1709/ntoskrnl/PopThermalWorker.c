/*
 * XREFs of PopThermalWorker @ 0x140700090
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopFireThermalWmiEvent @ 0x140243974 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140247248 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140247598 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402476C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopCheckThermalPolicy @ 0x1406FFC0C (PopCheckThermalPolicy.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14070003C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceActiveCooling @ 0x1407018C0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14070420C (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140705478 (PopDiagTraceThermalCoolingMode.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 */

void __fastcall PopThermalWorker(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // r15
  IRP *v4; // rsi
  struct _DEVICE_OBJECT *BugCheckParameter4; // rbp
  __int64 v6; // r8
  int Status; // eax
  char v8; // al
  char v9; // dl
  char v10; // cl
  char v11; // al
  int v12; // r9d
  int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  bool v16; // r12
  char v17; // al
  unsigned int v18; // r13d
  char v19; // al
  unsigned int v20; // esi
  unsigned int v21; // r14d
  __int64 v22; // r8
  char v23; // al
  int v24; // eax
  int v25; // ecx
  char v26; // r11
  __int64 v27; // r8
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v36; // [rsp+30h] [rbp-58h]
  bool v37; // [rsp+31h] [rbp-57h] BYREF
  char v38; // [rsp+32h] [rbp-56h]
  unsigned int v39; // [rsp+34h] [rbp-54h] BYREF
  IRP *v40; // [rsp+38h] [rbp-50h]
  _QWORD v41[2]; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1 + 432;
  v36 = 0;
  v38 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v40 = v4;
  v37 = 0;
  v39 = 0;
  PopAcquireRwLockExclusive(a1 + 432);
  if ( !*(_BYTE *)(a1 + 66) )
  {
    Status = v4->IoStatus.Status;
    if ( Status < 0 )
    {
      if ( Status != -1073741667 && Status != -1073741536 )
      {
        if ( *(_BYTE *)(a1 + 64) != 7 )
        {
          *(_BYTE *)(a1 + 64) = 5;
          goto LABEL_3;
        }
        *(_BYTE *)(a1 + 64) = 1;
      }
      goto LABEL_16;
    }
    if ( *(_BYTE *)(a1 + 64) != 1 )
    {
      switch ( *(_BYTE *)(a1 + 64) )
      {
        case 2:
          *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
          PopDiagTraceThermalCoolingMode(BugCheckParameter4);
          if ( WmiThermalPolicyEventEnabled )
            PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
          v1 = a1 + 432;
          v8 = 1;
LABEL_17:
          v9 = v38;
          v10 = v8;
          if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
            v10 = 1;
          v11 = *(_BYTE *)(a1 + 64);
          if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
            v9 = 1;
          if ( v11 != 6 )
          {
            if ( v11 == 10 )
            {
              v12 = a1 + 856;
              v13 = 16;
              LODWORD(v6) = 0;
              v14 = 2703512;
LABEL_97:
              PopPrepareIoctl(*(_QWORD *)(a1 + 56), v14, v6, v12, v13, v13);
              goto LABEL_98;
            }
            if ( v11 == 7 )
            {
LABEL_71:
              v12 = a1 + 204;
              v13 = 24;
              *(_DWORD *)(a1 + 204) = 1;
              LODWORD(v6) = 0;
              v14 = 2703508;
              goto LABEL_97;
            }
            if ( v10 )
            {
              LOBYTE(v6) = 1;
              *(_BYTE *)(a1 + 64) = 3;
              PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719880, v6, a1 + 70, 4, 0);
LABEL_98:
              CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
              CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
              CurrentStackLocation[-1].Context = (PVOID)a1;
              CurrentStackLocation[-1].Control = -32;
              IofCallDriver(BugCheckParameter4, v4);
              goto LABEL_99;
            }
            if ( v9 )
            {
              LOBYTE(v6) = 1;
              *(_BYTE *)(a1 + 64) = 4;
              PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719884, v6, a1 + 84, 4, 0);
              goto LABEL_98;
            }
            if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
            {
              *(_BYTE *)(a1 + 68) = PopCoolingMode;
              LOBYTE(v6) = 1;
              *(_BYTE *)(a1 + 64) = 2;
              PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719876, v6, a1 + 68, 1, 0);
              goto LABEL_98;
            }
            if ( *(_BYTE *)(a1 + 228) )
            {
              *(_BYTE *)(a1 + 64) = 8;
              *(_BYTE *)(a1 + 208) = 1;
              goto LABEL_71;
            }
            v29 = 0LL;
            *(_BYTE *)(a1 + 64) = 1;
            if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
            {
              v30 = *(unsigned int *)(a1 + 104);
              if ( (_DWORD)v30 )
              {
                v31 = *(_QWORD *)(a1 + 96) + v30;
                if ( v31 <= v3 )
                  *(_DWORD *)(a1 + 112) = 0;
                else
                  v29 = v31;
              }
            }
            v32 = 0LL;
            if ( PopThermalPollingMode )
            {
              v33 = *(unsigned int *)(a1 + 232);
              if ( (_DWORD)v33 )
              {
                v34 = *(_QWORD *)(a1 + 240) + v33;
                if ( v34 <= v3 )
                {
                  *(_DWORD *)(a1 + 112) = 0;
                  v29 = 0LL;
                }
                else if ( !v29 || v29 >= v34 )
                {
                  v29 = v34;
                }
              }
              if ( !PopThermalPollingWakesAllowed )
              {
                v32 = v41;
                v41[1] = -1LL;
                v41[0] = 0LL;
              }
            }
            if ( v29 )
              KeSetTimer2(a1 + 296, v3 - v29, 0LL, (__int64)v32);
          }
          v13 = 92;
          v12 = a1 + 112;
          LOBYTE(v6) = 1;
          v14 = 2703488;
          goto LABEL_97;
        case 3:
          *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
          break;
        case 4:
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
          break;
        case 6:
          *(_BYTE *)(a1 + 64) = 10;
          break;
        default:
          switch ( *(_BYTE *)(a1 + 64) )
          {
            case 7:
              *(_BYTE *)(a1 + 228) = 1;
              *(_BYTE *)(a1 + 64) = 8;
              break;
            case 8:
              break;
            case 0xA:
              *(_BYTE *)(a1 + 64) = 7;
              goto LABEL_15;
            default:
              PopInternalAddToDumpFile((__int64)v4, 0xD0u, (__int64)BugCheckParameter4);
              KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v4, (ULONG_PTR)BugCheckParameter4);
          }
          v15 = *(_DWORD *)(a1 + 216);
          v16 = v15 < 0x64;
          v17 = *(_BYTE *)(a1 + 65);
          v18 = 10 * (*(_DWORD *)(a1 + 80) - v15);
          if ( (v17 & 2) == 0 )
          {
            *(_BYTE *)(a1 + 65) = v17 | 2;
            PopDiagTraceThermalZoneEnumeration(
              (char *)(a1 + 112),
              (unsigned __int16 *)(a1 + 856),
              (__int64)BugCheckParameter4);
          }
LABEL_36:
          v20 = *(_DWORD *)(a1 + 220);
          v21 = *(unsigned __int8 *)(a1 + 144);
          if ( v20 == *(unsigned __int8 *)(a1 + 69) )
          {
            if ( v20 < v21 )
            {
              if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
                goto LABEL_49;
            }
            else if ( (*(_BYTE *)(a1 + 65) & 4) == 0 )
            {
              goto LABEL_49;
            }
          }
          *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
          v36 = 1;
          if ( v20 >= v21 )
          {
            if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
            {
              PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 0LL);
              PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 1LL);
            }
          }
          else if ( (*(_BYTE *)(a1 + 65) & 4) == 0 )
          {
            LOBYTE(v6) = 1;
            PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v6, 0LL);
            LOBYTE(v22) = 1;
            PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v22, 1LL);
            *(_QWORD *)(a1 + 248) = v3;
          }
          if ( v20 < v21 )
            *(_BYTE *)(a1 + 65) |= 4u;
          else
            *(_BYTE *)(a1 + 65) &= ~4u;
LABEL_49:
          if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
          {
            v23 = *(_BYTE *)(a1 + 65);
            if ( v16 )
            {
              if ( (v23 & 1) != 0 )
              {
LABEL_64:
                PopCheckAndHandleThermalConditions(a1);
                v8 = v36;
                v1 = a1 + 432;
                v4 = v40;
                goto LABEL_17;
              }
            }
            else if ( (v23 & 1) == 0 )
            {
              goto LABEL_64;
            }
          }
          else
          {
            PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
            v24 = *(_DWORD *)(a1 + 216);
            v25 = *(_DWORD *)(a1 + 128);
            v38 = v26;
            *(_DWORD *)(a1 + 84) = v24;
            PopDiagTraceThermalZoneThrottlePerfTrack(v25, 100 - v24, (__int64)BugCheckParameter4);
          }
          LOBYTE(v6) = v16;
          PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, v6, v18, 0);
          v28 = *(_BYTE *)(a1 + 65);
          if ( v16 )
          {
            if ( (v28 & 1) != 0 )
            {
LABEL_62:
              *(_BYTE *)(a1 + 65) |= 1u;
              goto LABEL_64;
            }
            LOBYTE(v27) = 1;
            PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, v27, v18, 1);
            *(_QWORD *)(a1 + 256) = v3;
          }
          else
          {
            if ( (v28 & 1) == 0 )
              goto LABEL_63;
            PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, 0LL, v18, 1);
            PopDiagTraceThermalZoneThrottleDurationPerfTrack(
              (v3 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
              (__int64)BugCheckParameter4);
          }
          if ( v16 )
            goto LABEL_62;
LABEL_63:
          *(_BYTE *)(a1 + 65) &= ~1u;
          goto LABEL_64;
      }
LABEL_15:
      v1 = a1 + 432;
LABEL_16:
      v8 = 0;
      goto LABEL_17;
    }
    v19 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v3;
    if ( (v19 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v19 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 856),
        (__int64)BugCheckParameter4);
    }
    PopCheckThermalPolicy(a1, v3, &v37, (int *)&v39);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v16 = v37;
    v18 = v39;
    goto LABEL_36;
  }
  *(_BYTE *)(a1 + 64) = 0;
LABEL_3:
  KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
LABEL_99:
  PopReleaseRwLock(v1);
}
