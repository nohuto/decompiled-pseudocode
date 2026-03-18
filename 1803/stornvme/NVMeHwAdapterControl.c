/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0001C50
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0004594 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart1 @ 0x1C0004780 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004AEC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004EAC (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004FE4 (NVMeControllerRemove.c)
 *     NVMeControllerPowerDown @ 0x1C0005174 (NVMeControllerPowerDown.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C00053A4 (NVMeControllerCompleteAllIORequests.c)
 *     ControllerReset @ 0x1C0005494 (ControllerReset.c)
 *     NVMePowerActive @ 0x1C000627C (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C00063EC (NVMePowerSetFState.c)
 *     NVMeSystemPowerHint @ 0x1C0006540 (NVMeSystemPowerHint.c)
 *     NVMeMaxOperationalPower @ 0x1C00065F8 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C0006728 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C00068B8 (NVMePowerSettingChangeNotification.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, int *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  char inited; // al
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // esi
  bool v22; // cf

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
          v20 = *(_QWORD *)(a1 + 1112);
          if ( v20 )
          {
            if ( *a3 == 1 )
            {
              *(_OWORD *)((char *)a3 + 9) = *(_OWORD *)(v20 + 4);
              *(int *)((char *)a3 + 25) = *(_DWORD *)(v20 + 20);
              *((_BYTE *)a3 + 29) = 0;
              *((_BYTE *)a3 + 8) = 0;
              return v3;
            }
          }
        }
      }
      return 1;
    }
    v21 = *a3;
    v22 = *a3 == 0;
    if ( *a3 )
    {
      NVMeControllerFilterResouceRequirements(a1, a3);
      v22 = v21 == 0;
    }
    LOBYTE(v3) = v22;
  }
  else
  {
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
          if ( !v7 )
          {
            NVMePowerSettingChangeNotification(a1, a3);
            return v3;
          }
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
          v9 = a3[5];
          if ( v9 == 1 )
          {
            *(_DWORD *)(a1 + 20) &= ~4u;
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
            NVMeQueuesReInit(a1);
            inited = ControllerReset(a1, v10);
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
            v12 = a3[4];
            if ( v12 != 5 && ((*(_DWORD *)(a1 + 20) & 0x40) == 0 || v12 != 3) )
              NVMeControllerPowerDown(a1);
          }
        }
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 20);
        if ( (v13 & 8) != 0 )
        {
          NVMeControllerRemove(a1);
        }
        else if ( (v13 & 2) != 0 )
        {
          NVMeControllerStop(a1);
        }
      }
    }
    else
    {
      v14 = *a3;
      if ( *a3 )
        *((_BYTE *)a3 + 4) = 1;
      if ( v14 > 1 )
      {
        *((_BYTE *)a3 + 5) = 1;
        v14 = *a3;
      }
      if ( v14 > 2 )
      {
        *((_BYTE *)a3 + 6) = 1;
        v14 = *a3;
      }
      if ( v14 > 6 )
      {
        *((_BYTE *)a3 + 10) = 1;
        v14 = *a3;
      }
      if ( v14 > 8 )
      {
        *((_BYTE *)a3 + 12) = 1;
        v14 = *a3;
      }
      if ( v14 > 9 )
      {
        *((_BYTE *)a3 + 13) = 1;
        v14 = *a3;
      }
      if ( v14 > 0xC )
      {
        *((_BYTE *)a3 + 16) = 1;
        v14 = *a3;
      }
      if ( v14 > 0xD )
      {
        *((_BYTE *)a3 + 17) = 1;
        v14 = *a3;
      }
      if ( v14 > 0xE )
      {
        *((_BYTE *)a3 + 18) = 1;
        v14 = *a3;
      }
      if ( v14 > 0xF )
      {
        *((_BYTE *)a3 + 19) = 1;
        v14 = *a3;
      }
      if ( v14 > 0x10 )
      {
        *((_BYTE *)a3 + 20) = 1;
        v14 = *a3;
      }
      if ( v14 > 5 )
      {
        *((_BYTE *)a3 + 9) = 1;
        v14 = *a3;
      }
      if ( v14 > 0x11 )
        *((_BYTE *)a3 + 21) = 1;
    }
  }
  return v3;
}
