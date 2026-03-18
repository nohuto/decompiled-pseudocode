/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1404E8E44
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404E812C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1404E833C (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMCreateObject @ 0x1406A44AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406A4604 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406A4A2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406A4D28 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x1406A5670 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406A574C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14047FBFC (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r8

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_17;
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
  if ( UserModeCallersCopy < 0 )
    goto LABEL_34;
  v9 = a4 + 16;
  v10 = (void *)*((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0LL;
  if ( !v10 )
  {
    if ( !*((_DWORD *)a4 + 6) )
      goto LABEL_17;
    goto LABEL_33;
  }
  v12 = *((_DWORD *)a4 + 6);
  if ( v12 >= 2 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v10, v12, 2u, PreviousMode, 1);
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
LABEL_17:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_34;
  }
LABEL_33:
  UserModeCallersCopy = -1073741811;
LABEL_34:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
