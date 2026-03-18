/*
 * XREFs of PiCMCaptureObjectInputData @ 0x140531014
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140451DE0 (PiCMGetDeviceDepth.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140530950 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140530BE0 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiCMCreateObject @ 0x1406CF784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406CF8DC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406CFD04 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406D0000 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406D064C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v13; // r8

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a4 + 7) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)a4 + 4) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = a4 + 16;
    v10 = (void *)*((_QWORD *)a4 + 2);
    *((_QWORD *)a4 + 2) = 0LL;
    if ( v10 )
    {
      v11 = *((_DWORD *)a4 + 6);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *((_DWORD *)a4 + 6) = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
        }
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_35;
      }
    }
    else if ( !*((_DWORD *)a4 + 6) )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_35:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
