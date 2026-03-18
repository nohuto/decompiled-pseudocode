/*
 * XREFs of PopThermalWorker @ 0x1405D7C20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401689E4 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x14022F4D4 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140232414 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140232544 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopPrepareIoctl @ 0x1405D8058 (PopPrepareIoctl.c)
 *     PopCheckThermalPolicy @ 0x1405D80C8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1405D8210 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1405D8294 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTracePassiveCooling @ 0x1406CDA58 (PopDiagTracePassiveCooling.c)
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
  __int64 v12; // rcx
  _QWORD *v13; // r9
  int v14; // eax
  int v15; // r9d
  int v16; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v18; // al
  bool v19; // r12
  unsigned int v20; // r13d
  unsigned int v21; // esi
  unsigned int v22; // r14d
  char v23; // al
  char v24; // al
  int v25; // ecx
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // r8
  unsigned int v29; // ecx
  char v30; // al
  int v31; // eax
  int v32; // ecx
  char v33; // r11
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // [rsp+30h] [rbp-58h]
  bool v41; // [rsp+31h] [rbp-57h] BYREF
  char v42; // [rsp+32h] [rbp-56h]
  unsigned int v43; // [rsp+34h] [rbp-54h] BYREF
  IRP *v44; // [rsp+38h] [rbp-50h]
  _QWORD v45[2]; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1 + 432;
  v40 = 0;
  v42 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v44 = v4;
  v41 = 0;
  v43 = 0;
  PopAcquireRwLockExclusive(a1 + 432);
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    goto LABEL_68;
  }
  Status = v4->IoStatus.Status;
  if ( Status < 0 )
  {
    if ( Status == -1073741667 || Status == -1073741536 )
      goto LABEL_8;
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
      goto LABEL_8;
    }
    *(_BYTE *)(a1 + 64) = 5;
LABEL_68:
    KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v18 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v3;
    if ( (v18 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v18 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 856),
        (__int64)BugCheckParameter4);
    }
    PopCheckThermalPolicy(a1, v3, &v41, &v43);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v19 = v41;
    v20 = v43;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
LABEL_7:
        v1 = a1 + 432;
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        goto LABEL_7;
      case 6:
        *(_BYTE *)(a1 + 64) = 10;
        goto LABEL_7;
      case 7:
        *(_BYTE *)(a1 + 228) = 1;
        *(_BYTE *)(a1 + 64) = 8;
        break;
      case 8:
        break;
      case 0xA:
        *(_BYTE *)(a1 + 64) = 7;
        goto LABEL_7;
      default:
        PopInternalAddToDumpFile((__int64)v4, 0xD0u, (__int64)BugCheckParameter4);
        KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v4, (ULONG_PTR)BugCheckParameter4);
    }
    v29 = *(_DWORD *)(a1 + 216);
    v19 = v29 < 0x64;
    v30 = *(_BYTE *)(a1 + 65);
    v20 = 10 * (*(_DWORD *)(a1 + 80) - v29);
    if ( (v30 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v30 | 2;
      PopDiagTraceThermalZoneEnumeration(
        (char *)(a1 + 112),
        (unsigned __int16 *)(a1 + 856),
        (__int64)BugCheckParameter4);
    }
LABEL_34:
    v21 = *(_DWORD *)(a1 + 220);
    v22 = *(unsigned __int8 *)(a1 + 144);
    if ( v21 != *(unsigned __int8 *)(a1 + 69) )
    {
LABEL_35:
      *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
      v23 = *(_BYTE *)(a1 + 65);
      v40 = 1;
      if ( v21 < v22 )
      {
        if ( (v23 & 4) == 0 )
        {
          LOBYTE(v6) = 1;
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v6, 0LL);
          LOBYTE(v28) = 1;
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v28, 1LL);
          *(_QWORD *)(a1 + 248) = v3;
        }
      }
      else if ( (v23 & 4) != 0 )
      {
        PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 0LL);
        PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 1LL);
      }
      if ( v21 >= v22 )
        *(_BYTE *)(a1 + 65) &= ~4u;
      else
        *(_BYTE *)(a1 + 65) |= 4u;
      goto LABEL_54;
    }
    v24 = *(_BYTE *)(a1 + 65);
    if ( v21 < v22 )
    {
      if ( (v24 & 4) == 0 )
        goto LABEL_35;
    }
    else if ( (v24 & 4) != 0 )
    {
      goto LABEL_35;
    }
LABEL_54:
    v25 = *(_DWORD *)(a1 + 216);
    v26 = *(unsigned int *)(a1 + 80);
    if ( v25 != (_DWORD)v26 )
      goto LABEL_76;
    v27 = *(_BYTE *)(a1 + 65);
    if ( v19 )
    {
      if ( (v27 & 1) != 0 )
        goto LABEL_57;
    }
    else if ( (v27 & 1) == 0 )
    {
LABEL_57:
      PopCheckAndHandleThermalConditions(a1, v26);
      v8 = v40;
      v1 = a1 + 432;
      v4 = v44;
      goto LABEL_9;
    }
    if ( v25 != (_DWORD)v26 )
    {
LABEL_76:
      PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
      v31 = *(_DWORD *)(a1 + 216);
      v32 = *(_DWORD *)(a1 + 128);
      v42 = v33;
      *(_DWORD *)(a1 + 84) = v31;
      PopDiagTraceThermalZoneThrottlePerfTrack(v32, 100 - v31, (__int64)BugCheckParameter4);
    }
    LOBYTE(v6) = v19;
    PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, v6, v20, 0);
    v35 = *(_BYTE *)(a1 + 65);
    if ( v19 )
    {
      if ( (v35 & 1) != 0 )
      {
LABEL_83:
        *(_BYTE *)(a1 + 65) |= 1u;
        goto LABEL_57;
      }
      LOBYTE(v34) = 1;
      PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, v34, v20, 1);
      *(_QWORD *)(a1 + 256) = v3;
    }
    else
    {
      if ( (v35 & 1) == 0 )
        goto LABEL_84;
      PopDiagTracePassiveCooling(a1 + 112, BugCheckParameter4, 0LL, v20, 1);
      PopDiagTraceThermalZoneThrottleDurationPerfTrack(
        (v3 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
        (__int64)BugCheckParameter4);
    }
    if ( v19 )
      goto LABEL_83;
LABEL_84:
    *(_BYTE *)(a1 + 65) &= ~1u;
    goto LABEL_57;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v1 = a1 + 432;
  v8 = 1;
LABEL_9:
  v9 = v42;
  v10 = v8;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v10 = 1;
  v11 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v9 = 1;
  switch ( v11 )
  {
    case 6:
      goto LABEL_24;
    case 10:
      v15 = a1 + 856;
      v14 = 16;
      LODWORD(v6) = 0;
      v16 = 2703512;
      goto LABEL_25;
    case 7:
LABEL_59:
      v15 = a1 + 204;
      v14 = 24;
      *(_DWORD *)(a1 + 204) = 1;
      LODWORD(v6) = 0;
      v16 = 2703508;
      goto LABEL_25;
  }
  if ( v10 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 3;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719880, v6, a1 + 70, 4, 0);
    goto LABEL_26;
  }
  if ( v9 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 4;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719884, v6, a1 + 84, 4, 0);
    goto LABEL_26;
  }
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    *(_BYTE *)(a1 + 68) = PopCoolingMode;
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 2;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719876, v6, a1 + 68, 1, 0);
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_59;
  }
  v12 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v36 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v36 )
    {
      v37 = *(_QWORD *)(a1 + 96) + v36;
      if ( v37 <= v3 )
        *(_DWORD *)(a1 + 112) = 0;
      else
        v12 = v37;
    }
  }
  v13 = 0LL;
  if ( PopThermalPollingMode )
  {
    v38 = *(unsigned int *)(a1 + 232);
    if ( (_DWORD)v38 )
    {
      v39 = *(_QWORD *)(a1 + 240) + v38;
      if ( v39 <= v3 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v12 = 0LL;
      }
      else if ( !v12 || v12 >= v39 )
      {
        v12 = v39;
      }
    }
    if ( !PopThermalPollingWakesAllowed )
    {
      v13 = v45;
      v45[1] = -1LL;
      v45[0] = 0LL;
    }
  }
  if ( v12 )
    KeSetTimer2(a1 + 296, v3 - v12, 0LL, (__int64)v13);
LABEL_24:
  v14 = 92;
  v15 = a1 + 112;
  LOBYTE(v6) = 1;
  v16 = 2703488;
LABEL_25:
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), v16, v6, v15, v14, v14);
LABEL_26:
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v4);
LABEL_27:
  PopReleaseRwLock(v1);
}
