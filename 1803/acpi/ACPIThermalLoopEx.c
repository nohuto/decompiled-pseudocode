/*
 * XREFs of ACPIThermalLoopEx @ 0x1C003CE8C
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C003C2C0 (ACPIThermalDeviceControl.c)
 *     ACPIThermalEvent @ 0x1C003C890 (ACPIThermalEvent.c)
 *     ACPIThermalLoop @ 0x1C003CE74 (ACPIThermalLoop.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C003D690 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalRereadTemperature @ 0x1C003DA78 (ACPIThermalRereadTemperature.c)
 *     ACPIThermalStopZone @ 0x1C003DB88 (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C003DBCC (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C000771C (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C000783C (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0007964 (AcpiDiagTraceThermalNotification.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001202C (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C003BF8C (ACPIThermalCompletePendingIrps.c)
 *     ACPIThermalLoop @ 0x1C003CE74 (ACPIThermalLoop.c)
 *     ACPIThermalTMPCallback @ 0x1C003DDA0 (ACPIThermalTMPCallback.c)
 *     ACPISetDeviceWorker @ 0x1C0042E9C (ACPISetDeviceWorker.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  int v9; // ebp
  KIRQL v10; // r15
  char v11; // r12
  int v12; // eax
  unsigned int v13; // edx
  bool v14; // cl
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // r8d
  bool v26; // cc
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  bool v30; // cc
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // r8d
  bool v34; // cc
  unsigned int v35; // edx
  unsigned int v36; // r8d
  bool v37; // cc
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  bool v41; // cc
  char v42; // dl
  int v43; // eax
  unsigned int v44; // eax
  KIRQL v45; // al
  _QWORD *v46; // rcx
  _QWORD *v47; // rax

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  *(_DWORD *)(a1 + 192) |= a3;
  v9 = *(_DWORD *)(a1 + 192) & ~a2;
  v10 = v8;
  *(_DWORD *)(a1 + 192) = v9;
  v11 = 1;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v11 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v4);
          v11 = 1;
        }
        v12 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x40000000) != 0 )
          goto LABEL_101;
        v13 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x10000000) != 0 )
        {
          v14 = 0;
        }
        else
        {
          v13 = v12 | 0x8000000;
          *(_DWORD *)(a1 + 192) = v12 | 0x8000000;
          v14 = (v12 & 0x8000000) == 0;
        }
        if ( v14 )
        {
          ACPISetDeviceWorker(a1, 0x2000LL);
          v13 = *(_DWORD *)(a1 + 192);
        }
        if ( (v13 & 0x8000000) != 0 )
        {
LABEL_101:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          goto LABEL_102;
        }
        if ( (v13 & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v13 | 0x40000010;
          v15 = 17LL;
          goto LABEL_14;
        }
        if ( (v13 & 8) != 0 )
          break;
        *(_DWORD *)(a1 + 192) = v13 | 0x40000008;
        KeReleaseSpinLock(v4, v10);
        v16 = *(unsigned int *)(v3 + 100);
        v17 = 1346589535;
LABEL_17:
        v11 = 0;
        if ( (unsigned int)ACPIGet(a1, v17, 546308096, v16, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
          ACPIThermalLoop(a1, 0x40000000LL);
      }
      v18 = v13;
      if ( (v13 & 2) == 0 || !*(_QWORD *)(v3 + 120) )
        goto LABEL_68;
      v19 = *(_DWORD *)(v3 + 104);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v3 + 108);
        v21 = *(_DWORD *)(v3 + 104);
        v22 = v20;
        if ( v20 > v19 && *(_DWORD *)(v3 + 16) <= v20 - v19 )
        {
          v18 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
          v22 = *(_DWORD *)(v3 + 108);
          v21 = *(_DWORD *)(v3 + 104);
        }
        v13 = v18;
        if ( ~v22 > v21 && *(_DWORD *)(v3 + 16) >= v21 + v22 )
        {
          v13 = v18 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v18 & 0xFFFFFBFF;
        }
      }
      v23 = *(_DWORD *)(v3 + 20);
      v24 = v13;
      if ( v23 )
      {
        v25 = *(_DWORD *)(v3 + 108);
        v26 = v25 <= v23;
        if ( v25 < v23 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v23 )
            goto LABEL_34;
          v26 = v25 <= v23;
        }
        if ( !v26 && *(_DWORD *)(v3 + 16) <= v23 )
        {
LABEL_34:
          v24 = v13 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v13 & 0xFFFFFBFF;
        }
      }
      v27 = *(_DWORD *)(v3 + 28);
      v28 = v24;
      if ( !v27 )
        goto LABEL_42;
      v29 = *(_DWORD *)(v3 + 108);
      v30 = v29 <= v27;
      if ( v29 < v27 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v27 )
          goto LABEL_41;
        v30 = v29 <= v27;
      }
      if ( !v30 && *(_DWORD *)(v3 + 16) <= v27 )
      {
LABEL_41:
        v28 = v24 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v24 & 0xFFFFFBFF;
      }
LABEL_42:
      v31 = *(_DWORD *)(v3 + 76);
      v32 = v28;
      if ( !v31 )
        goto LABEL_49;
      v33 = *(_DWORD *)(v3 + 108);
      v34 = v33 <= v31;
      if ( v33 < v31 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v31 )
          goto LABEL_48;
        v34 = v33 <= v31;
      }
      if ( !v34 && *(_DWORD *)(v3 + 16) <= v31 )
      {
LABEL_48:
        v32 = v28 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v28 & 0xFFFFFBFF;
      }
LABEL_49:
      v35 = *(_DWORD *)(v3 + 24);
      v18 = v32;
      if ( !v35 )
        goto LABEL_56;
      v36 = *(_DWORD *)(v3 + 108);
      v37 = v36 <= v35;
      if ( v36 < v35 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v35 )
          goto LABEL_55;
        v37 = v36 <= v35;
      }
      if ( !v37 && *(_DWORD *)(v3 + 16) <= v35 )
      {
LABEL_55:
        v18 = v32 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v32 & 0xFFFFFBFF;
      }
LABEL_56:
      v38 = 0;
      if ( !*(_BYTE *)(v3 + 32) )
        goto LABEL_66;
      do
      {
        v39 = *(_DWORD *)(v3 + 4LL * v38 + 36);
        if ( !v39 )
          goto LABEL_64;
        v40 = *(_DWORD *)(v3 + 108);
        v41 = v40 <= v39;
        if ( v40 < v39 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v39 )
            goto LABEL_63;
          v41 = v40 <= v39;
        }
        if ( !v41 && *(_DWORD *)(v3 + 16) <= v39 )
LABEL_63:
          *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_64:
        ++v38;
      }
      while ( v38 < *(unsigned __int8 *)(v3 + 32) );
      v18 = *(_DWORD *)(a1 + 192);
LABEL_66:
      if ( (v18 & 0x400) == 0 )
      {
        *(_DWORD *)(a1 + 192) = v18 & 0xBFFFF9FF | 0x40000400;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
        KeReleaseSpinLock(v4, v10);
        v16 = *(unsigned int *)(v3 + 108);
        v17 = 1230259295;
        goto LABEL_17;
      }
LABEL_68:
      if ( (v18 & 4) == 0 )
      {
        v15 = 4LL;
        *(_DWORD *)(a1 + 192) = v18 | 0x40000004;
        goto LABEL_14;
      }
      if ( (v18 & 1) == 0 )
      {
        v15 = 1LL;
        *(_DWORD *)(a1 + 192) = v18 | 0x40000001;
        goto LABEL_14;
      }
      if ( (v18 & 0x100) == 0 )
      {
        v15 = 256LL;
        *(_DWORD *)(a1 + 192) = v18 | 0x40000100;
        goto LABEL_14;
      }
      v42 = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
      if ( (v18 & 0x202) == 2 && v42 )
      {
        v15 = 512LL;
        *(_DWORD *)(a1 + 192) = v18 | 0x40000200;
        goto LABEL_14;
      }
      if ( (v18 & 0x20000002) == 0x20000002 )
        goto LABEL_101;
      if ( *(_BYTE *)(v3 + 273) || (v18 & 2) != 0 )
      {
        if ( (v18 & 0x40) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v18 | 0x40;
          AcpiDiagTraceThermalNotification((_DWORD *)v3, a1, 128);
          v18 = *(_DWORD *)(a1 + 192);
        }
        if ( (v18 & 0x80u) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v18 | 0x80;
          AcpiDiagTraceThermalNotification((_DWORD *)v3, a1, 129);
          v18 = *(_DWORD *)(a1 + 192);
        }
        if ( (v18 & 0x800) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v18 | 0x800;
          AcpiDiagTraceTemperatureChange(v3, a1);
          v18 = *(_DWORD *)(a1 + 192);
        }
        if ( (v18 & 0x4000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v18 | 0x4000;
          AcpiDiagTraceTemperatureTelemetry(a1);
          v18 = *(_DWORD *)(a1 + 192);
        }
        if ( (v18 & 0x1000) != 0 )
        {
          if ( !ACPIThermalCompletePendingIrps(a1) )
            goto LABEL_101;
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v18 | 0x1000;
          KeReleaseSpinLock(v4, v10);
          v11 = 0;
          v45 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          v46 = (_QWORD *)qword_1C00669E8;
          v10 = v45;
          v47 = (_QWORD *)(a1 + 208);
          if ( *(__int64 **)qword_1C00669E8 != &AcpiThermalZoneList )
            __fastfail(3u);
          *(_QWORD *)(a1 + 216) = qword_1C00669E8;
          *v47 = &AcpiThermalZoneList;
          *v46 = v47;
          qword_1C00669E8 = a1 + 208;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
        }
      }
      else
      {
        ++*(_DWORD *)v3;
        v43 = *(_DWORD *)(a1 + 192) | 2;
        *(_DWORD *)(a1 + 192) = v43;
        if ( v42 )
        {
          v15 = 514LL;
          *(_DWORD *)(a1 + 192) = v43 | 0x40000200;
LABEL_14:
          ACPISetDeviceWorker(a1, v15);
        }
        else if ( *(_QWORD *)(v3 + 112) )
        {
          *(_DWORD *)(a1 + 192) = v43 | 0x40000000;
          KeReleaseSpinLock(v4, v10);
          v11 = 0;
          memset((void *)(v3 + 136), 0, 0x28uLL);
          *(_WORD *)(v3 + 138) = 0;
          if ( ACPIDeviceHasFirmwareDependencies(a1) && *(_DWORD *)(a1 + 500) != 1 )
          {
            v44 = -1073741661;
            goto LABEL_88;
          }
          v44 = AMLIAsyncEvalObject(*(_QWORD *)(v3 + 112), v3 + 136, 0LL, 0LL, ACPIThermalTMPCallback, a1);
          if ( v44 != 259 )
LABEL_88:
            ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v44, v3 + 136, a1);
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v43 & 0xEFFFFFFF;
        }
      }
    }
  }
LABEL_102:
  KeReleaseSpinLock(v4, v10);
}
