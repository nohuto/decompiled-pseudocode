/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0001C90
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C000456C (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C0004758 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004AC8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004E58 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004F80 (NVMeControllerRemove.c)
 *     NVMeControllerPowerDown @ 0x1C00050F8 (NVMeControllerPowerDown.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0005320 (NVMeControllerCompleteAllIORequests.c)
 *     ControllerReset @ 0x1C0005420 (ControllerReset.c)
 *     NVMePowerActive @ 0x1C00060B0 (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C000628C (NVMePowerSetFState.c)
 *     NVMeSystemPowerHint @ 0x1C00063A4 (NVMeSystemPowerHint.c)
 *     NVMeMaxOperationalPower @ 0x1C0006468 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C000659C (NVMePowerSetPerfState.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  char inited; // al
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax

  v3 = 0;
  if ( a2 > 9 )
  {
    v15 = a2 - 12;
    if ( !v15 )
    {
      NVMeSystemPowerHint(a1, a3);
      return v3;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        NVMeMaxOperationalPower(a1, a3);
        return v3;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        NVMePowerSetPerfState(a1, a3);
        return v3;
      }
      v19 = (unsigned int)(v18 - 1);
      if ( !(_DWORD)v19 )
      {
        LODWORD(v19) = 17;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
        NVMeControllerCompleteAllIORequests(a1, v19);
        *(_DWORD *)(a1 + 20) &= ~0x10u;
        return v3;
      }
      if ( (_DWORD)v19 == 1 )
      {
        if ( a3 )
        {
          v20 = *(_QWORD *)(a1 + 1080);
          if ( v20 )
          {
            if ( *(_DWORD *)a3 == 1 )
            {
              *(_OWORD *)(a3 + 9) = *(_OWORD *)(v20 + 4);
              *(_DWORD *)(a3 + 25) = *(_DWORD *)(v20 + 20);
              *(_BYTE *)(a3 + 29) = 0;
              *(_BYTE *)(a3 + 8) = 0;
              return v3;
            }
          }
        }
      }
    }
    else if ( *(_DWORD *)a3 )
    {
      NVMeControllerFilterResouceRequirements(a1, a3);
      return v3;
    }
    return 1;
  }
  if ( a2 == 9 )
  {
    NVMePowerSetFState(a1, a3);
    return v3;
  }
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 3;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 2 )
            {
              NVMePowerActive(a1, a3);
              return v3;
            }
            return 1;
          }
          v9 = *(_DWORD *)(a3 + 20);
          if ( v9 == 1 )
          {
            *(_DWORD *)(a1 + 20) &= ~4u;
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
            NVMeQueuesReInit(a1);
            inited = ControllerReset(a1);
            if ( inited == 1 )
            {
              inited = NVMeControllerInitPart1(a1, 0LL);
              if ( inited == 1 )
                inited = NVMeControllerInitPart2(a1);
            }
            if ( !inited )
              NVMeControllerStartFailureEventLog(a1);
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
          }
          else if ( v9 == 4 )
          {
            v11 = *(_DWORD *)(a3 + 16);
            if ( v11 != 5 && ((*(_DWORD *)(a1 + 20) & 0x40) == 0 || v11 != 3) )
              NVMeControllerPowerDown(a1);
          }
        }
        else if ( (*(_DWORD *)(a1 + 1120) & 1) != 0 )
        {
          if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data1
            && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data4
            && *(_DWORD *)(a3 + 24) == 4 )
          {
            v12 = *(_DWORD *)(a1 + 1132) == 1;
            v13 = **(_DWORD **)(a3 + 16);
            *(_DWORD *)(a1 + 1140) = v13;
            if ( !v12 && *(_DWORD *)(a1 + 80) == -1 )
              *(_DWORD *)(a1 + 1136) = v13;
          }
          else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT.Data1
                 && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT.Data4
                 && *(_DWORD *)(a3 + 24) == 4
                 && *(_DWORD *)(a1 + 64) == -1 )
          {
            *(_DWORD *)(a1 + 1144) = **(_DWORD **)(a3 + 16);
          }
        }
      }
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 20);
      if ( (v14 & 8) != 0 )
      {
        NVMeControllerRemove(a1);
      }
      else if ( (v14 & 2) != 0 )
      {
        NVMeControllerStop(a1);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( *(_DWORD *)a3 > 1u )
      *(_BYTE *)(a3 + 5) = 1;
    if ( *(_DWORD *)a3 > 2u )
      *(_BYTE *)(a3 + 6) = 1;
    if ( *(_DWORD *)a3 > 6u )
      *(_BYTE *)(a3 + 10) = 1;
    if ( *(_DWORD *)a3 > 8u )
      *(_BYTE *)(a3 + 12) = 1;
    if ( *(_DWORD *)a3 > 9u )
      *(_BYTE *)(a3 + 13) = 1;
    if ( *(_DWORD *)a3 > 0xCu )
      *(_BYTE *)(a3 + 16) = 1;
    if ( *(_DWORD *)a3 > 0xDu )
      *(_BYTE *)(a3 + 17) = 1;
    if ( *(_DWORD *)a3 > 0xEu )
      *(_BYTE *)(a3 + 18) = 1;
    if ( *(_DWORD *)a3 > 0xFu )
      *(_BYTE *)(a3 + 19) = 1;
    if ( *(_DWORD *)a3 > 0x10u )
      *(_BYTE *)(a3 + 20) = 1;
    if ( *(_DWORD *)a3 > 5u )
      *(_BYTE *)(a3 + 9) = 1;
    if ( *(_DWORD *)a3 > 0x11u )
      *(_BYTE *)(a3 + 21) = 1;
  }
  return v3;
}
