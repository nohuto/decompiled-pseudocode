/*
 * XREFs of ACPIThermalLoopEx @ 0x1C0021610
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C00211A0 (ACPIThermalDeviceControl.c)
 *     ACPIThermalLoop @ 0x1C0021600 (ACPIThermalLoop.c)
 *     ACPIThermalEvent @ 0x1C0058100 (ACPIThermalEvent.c)
 *     ACPIThermalReadTemperatureComplete @ 0x1C0058260 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalRereadTemperature @ 0x1C00584BC (ACPIThermalRereadTemperature.c)
 *     ACPIThermalStopZone @ 0x1C00585CC (ACPIThermalStopZone.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0058610 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIThermalTMPCallback @ 0x1C0020DA0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1C0021600 (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0021A24 (ACPIThermalCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x1C0021CF4 (ACPISetDeviceWorker.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0022174 (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0022858 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C0022938 (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C0022B1C (AcpiDiagTraceTemperatureChange.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  __int64 v9; // rdx
  int v10; // ebp
  KIRQL v11; // r15
  char v12; // r12
  int v13; // ecx
  bool v14; // cl
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // edx
  KIRQL v26; // al
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  bool v35; // cc
  unsigned int v36; // eax
  unsigned int v37; // ecx
  bool v38; // cc
  unsigned int v39; // eax
  unsigned int v40; // ecx
  bool v41; // cc
  unsigned int v42; // eax
  unsigned int v43; // ecx
  bool v44; // cc
  unsigned int v45; // ecx
  unsigned int v46; // eax
  bool v47; // cc

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v10 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v11 = v8;
  *(_DWORD *)(a1 + 192) = v10;
  v12 = 1;
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v10 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v12 )
        {
          v11 = KeAcquireSpinLockRaiseToDpc(v4);
          v12 = 1;
        }
        v13 = *(_DWORD *)(a1 + 192);
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_21;
        if ( (v13 & 0x10000000) != 0 )
        {
          v14 = 0;
        }
        else
        {
          v29 = v13 | 0x8000000;
          v14 = (v13 & 0x8000000) == 0;
          *(_DWORD *)(a1 + 192) = v29;
        }
        if ( v14 )
          ACPISetDeviceWorker(a1, 0x2000LL);
        v15 = *(_DWORD *)(a1 + 192);
        if ( (v15 & 0x8000000) != 0 )
        {
LABEL_21:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          goto LABEL_22;
        }
        if ( (v15 & 0x10) == 0 )
        {
          v22 = v15 | 0x40000010;
          v23 = 17LL;
          goto LABEL_42;
        }
        if ( (v15 & 8) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x40000008;
          KeReleaseSpinLock(v4, v11);
          v24 = *(unsigned int *)(v3 + 100);
          v25 = 1346589535;
          goto LABEL_45;
        }
        if ( (v15 & 2) != 0 && *(_QWORD *)(v3 + 120) )
          break;
LABEL_15:
        if ( (v15 & 4) == 0 )
        {
          v22 = v15 | 0x40000004;
          v23 = 4LL;
          goto LABEL_42;
        }
        if ( (v15 & 1) == 0 )
        {
          v22 = v15 | 0x40000001;
          v23 = 1LL;
LABEL_42:
          *(_DWORD *)(a1 + 192) = v22;
          goto LABEL_43;
        }
        if ( (v15 & 0x100) == 0 )
        {
          v22 = v15 | 0x40000100;
          v23 = 256LL;
          goto LABEL_42;
        }
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
        if ( (v15 & 0x202) == 2 && (_BYTE)v9 )
        {
          v22 = v15 | 0x40000200;
          v23 = 512LL;
          goto LABEL_42;
        }
        if ( (v15 & 0x20000002) == 0x20000002 )
          goto LABEL_21;
        if ( *(_BYTE *)(v3 + 273) || (v15 & 2) != 0 )
        {
          if ( (v15 & 0x40) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v15 | 0x40;
            AcpiDiagTraceThermalNotification(v3, a1, 128LL);
          }
          v16 = *(_DWORD *)(a1 + 192);
          if ( (v16 & 0x80u) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v16 | 0x80;
            AcpiDiagTraceThermalNotification(v3, a1, 129LL);
          }
          v17 = *(_DWORD *)(a1 + 192);
          if ( (v17 & 0x800) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v17 | 0x800;
            AcpiDiagTraceTemperatureChange(v3, a1);
          }
          v18 = *(_DWORD *)(a1 + 192);
          if ( (v18 & 0x4000) == 0 )
          {
            *(_DWORD *)(a1 + 192) = v18 | 0x4000;
            AcpiDiagTraceTemperatureTelemetry(a1, v9);
          }
          v19 = *(_DWORD *)(a1 + 192);
          if ( (v19 & 0x1000) != 0 )
          {
            if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, v9) )
              goto LABEL_21;
          }
          else
          {
            *(_DWORD *)(a1 + 192) = v19 | 0x1000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            v26 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
            v27 = (_QWORD *)qword_1C0076948;
            v11 = v26;
            v28 = (_QWORD *)(a1 + 208);
            if ( *(__int64 **)qword_1C0076948 != &AcpiThermalZoneList )
              __fastfail(3u);
            *v28 = &AcpiThermalZoneList;
            *(_QWORD *)(a1 + 216) = v27;
            *v27 = v28;
            qword_1C0076948 = a1 + 208;
            KeReleaseSpinLock(&AcpiThermalConstraintLock, v11);
          }
        }
        else
        {
          ++*(_DWORD *)v3;
          *(_DWORD *)(a1 + 192) |= 2u;
          v20 = *(_DWORD *)(a1 + 192);
          if ( (_BYTE)v9 )
          {
            v23 = 514LL;
            *(_DWORD *)(a1 + 192) = v20 | 0x40000200;
LABEL_43:
            ACPISetDeviceWorker(a1, v23);
          }
          else if ( *(_QWORD *)(v3 + 112) )
          {
            *(_DWORD *)(a1 + 192) = v20 | 0x40000000;
            KeReleaseSpinLock(v4, v11);
            v12 = 0;
            memset((void *)(v3 + 136), 0, 0x28uLL);
            *(_WORD *)(v3 + 138) = 0;
            if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1) || *(_DWORD *)(a1 + 500) == 1 )
            {
              v21 = AMLIAsyncEvalObject(*(_QWORD *)(v3 + 112), v3 + 136, 0LL, 0LL, ACPIThermalTMPCallback, a1);
              if ( v21 != 259 )
                goto LABEL_40;
            }
            else
            {
              v21 = -1073741661;
LABEL_40:
              ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v21, v3 + 136, a1);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 192) = v20 & 0xEFFFFFFF;
          }
        }
      }
      v30 = *(_DWORD *)(v3 + 104);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v3 + 108);
        if ( v31 > v30 && *(_DWORD *)(v3 + 16) <= v31 - v30 )
          *(_DWORD *)(a1 + 192) = v15 & 0xFFFFFBFF;
        v32 = *(_DWORD *)(v3 + 104);
        if ( ~*(_DWORD *)(v3 + 108) > v32 && *(_DWORD *)(v3 + 16) >= *(_DWORD *)(v3 + 108) + v32 )
          *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
      v33 = *(_DWORD *)(v3 + 20);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v3 + 108);
        v35 = v34 <= v33;
        if ( v34 < v33 )
        {
          if ( *(_DWORD *)(v3 + 16) >= v33 )
            goto LABEL_66;
          v35 = v34 <= v33;
        }
        if ( !v35 && *(_DWORD *)(v3 + 16) <= v33 )
LABEL_66:
          *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
      v36 = *(_DWORD *)(v3 + 28);
      if ( !v36 )
        goto LABEL_74;
      v37 = *(_DWORD *)(v3 + 108);
      v38 = v37 <= v36;
      if ( v37 < v36 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v36 )
          goto LABEL_73;
        v38 = v37 <= v36;
      }
      if ( !v38 && *(_DWORD *)(v3 + 16) <= v36 )
LABEL_73:
        *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_74:
      v39 = *(_DWORD *)(v3 + 76);
      if ( !v39 )
        goto LABEL_81;
      v40 = *(_DWORD *)(v3 + 108);
      v41 = v40 <= v39;
      if ( v40 < v39 )
      {
        if ( *(_DWORD *)(v3 + 16) >= v39 )
          goto LABEL_80;
        v41 = v40 <= v39;
      }
      if ( !v41 && *(_DWORD *)(v3 + 16) <= v39 )
LABEL_80:
        *(_DWORD *)(a1 + 192) &= ~0x400u;
LABEL_81:
      v42 = *(_DWORD *)(v3 + 24);
      if ( v42 )
      {
        v43 = *(_DWORD *)(v3 + 108);
        v44 = v43 <= v42;
        if ( v43 >= v42 )
          goto LABEL_85;
        if ( *(_DWORD *)(v3 + 16) < v42 )
        {
          v44 = v43 <= v42;
LABEL_85:
          if ( v44 || *(_DWORD *)(v3 + 16) > v42 )
            goto LABEL_88;
        }
        *(_DWORD *)(a1 + 192) &= ~0x400u;
      }
LABEL_88:
      v9 = 0LL;
      if ( *(_BYTE *)(v3 + 32) )
      {
        while ( 1 )
        {
          v45 = *(_DWORD *)(v3 + 4LL * (unsigned int)v9 + 36);
          if ( v45 )
            break;
LABEL_96:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(unsigned __int8 *)(v3 + 32) )
            goto LABEL_97;
        }
        v46 = *(_DWORD *)(v3 + 108);
        v47 = v46 <= v45;
        if ( v46 >= v45 )
        {
LABEL_93:
          if ( v47 || *(_DWORD *)(v3 + 16) > v45 )
            goto LABEL_96;
        }
        else if ( *(_DWORD *)(v3 + 16) < v45 )
        {
          v47 = v46 <= v45;
          goto LABEL_93;
        }
        *(_DWORD *)(a1 + 192) &= ~0x400u;
        goto LABEL_96;
      }
LABEL_97:
      v15 = *(_DWORD *)(a1 + 192);
      if ( (v15 & 0x400) != 0 )
        goto LABEL_15;
      *(_DWORD *)(a1 + 192) = v15 & 0xBFFFF9FF | 0x40000400;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
      KeReleaseSpinLock(v4, v11);
      v24 = *(unsigned int *)(v3 + 108);
      v25 = 1230259295;
LABEL_45:
      v12 = 0;
      if ( (unsigned int)ACPIGet((__int64 *)a1, v25, 546308096, v24, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
        ACPIThermalLoop(a1, 0x40000000LL);
    }
  }
LABEL_22:
  KeReleaseSpinLock(v4, v11);
}
