/*
 * XREFs of InputInitialize @ 0x1C000650C
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0004FB0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     intializeGlobalRecorder @ 0x1C0006830 (intializeGlobalRecorder.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000753C (--0CTouchProcessor@@QEAA@XZ.c)
 *     CreateKernelSemaphore @ 0x1C00085A0 (CreateKernelSemaphore.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C00112C4 (--0CInputGlobals@@AEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 InputInitialize()
{
  CMouseSensor **v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // esi
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v5; // rax
  CTouchProcessor *v6; // rax
  unsigned int v7; // ebx
  CDeviceAcceleration **v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  CInputGlobals *v11; // rax
  CInputGlobals *v12; // rax
  DRIVER_CONTROL *v13; // rax
  DRIVER_CONTROL *v14; // rbx
  _BYTE *v15; // rax
  _BYTE *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 KernelSemaphore; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  PVOID DeviceContext; // rcx
  __int64 v23; // rax
  unsigned int v24; // ebx
  int v26; // [rsp+30h] [rbp+8h] BYREF
  int v27; // [rsp+34h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v26, 1, 0);
  gbInputInitialized = 1;
  gInputLock = 0LL;
  qword_1C01936E0 = 0LL;
  gQueueLock = 0LL;
  qword_1C01936D0 = 0LL;
  gWndLock = 0LL;
  qword_1C01936F0 = 0LL;
  gHmLock = 0LL;
  qword_1C0193700 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C0193AF8 = 0LL;
  intializeGlobalRecorder();
  CBaseInput::_sessionInitialized = 1;
  v0 = &qword_1C0188018;
  v1 = 0;
  while ( 1 )
  {
    v2 = ((__int64 (*)(void))*(v0 - 3))();
    *v0 = (CMouseSensor *)v2;
    if ( !v2 )
      break;
    v3 = *((_DWORD *)v0 + 2);
    if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
      InputSensorThreadingModel = 0;
    else
      InputSensorThreadingModel = GetInputSensorThreadingModel(v3);
    *((_DWORD *)v0 - 2) = InputSensorThreadingModel;
    ++v1;
    v0 += 6;
    if ( v1 >= 3 )
    {
      v5 = (CTouchProcessor *)Win32AllocPoolZInit(0x178uLL);
      if ( v5 )
        v6 = CTouchProcessor::CTouchProcessor(v5);
      else
        v6 = 0LL;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v6;
      if ( !v6 )
      {
LABEL_48:
        v24 = -1073741801;
        goto LABEL_33;
      }
      v7 = 0;
      v8 = &qword_1C0188098;
      while ( 1 )
      {
        v9 = (int)IsEditionGetDefaultMouseSensitivitySupported() >= 0
           ? (unsigned int)EditionGetDefaultMouseSensitivity(v7)
           : 10LL;
        v10 = ((__int64 (__fastcall *)(__int64))*(v8 - 1))(v9);
        *v8 = (CDeviceAcceleration *)v10;
        if ( !v10 )
          goto LABEL_49;
        ++v7;
        v8 += 3;
        if ( v7 >= 2 )
        {
          v11 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL);
          if ( v11 )
            v12 = CInputGlobals::CInputGlobals(v11);
          else
            v12 = 0LL;
          gpInputGlobals = v12;
          if ( !v12 )
            goto LABEL_48;
          v13 = (DRIVER_CONTROL *)Win32AllocPoolZInit(0x40uLL);
          v14 = v13;
          if ( v13 )
          {
            memset(v13, 0, 0x20uLL);
            *((_QWORD *)v14 + 6) = 0LL;
            *((_QWORD *)v14 + 7) = 0LL;
            *((_QWORD *)v14 + 4) = 0LL;
            *((_QWORD *)v14 + 5) = 0LL;
          }
          else
          {
            v14 = 0LL;
          }
          WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = v14;
          if ( !v14 )
            goto LABEL_48;
          v15 = (_BYTE *)Win32AllocPoolZInit(0xC8uLL);
          v16 = v15;
          if ( v15 )
          {
            memset(v15, 0, 0xC0uLL);
            v16[192] = 0;
          }
          else
          {
            v16 = 0LL;
          }
          *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v16;
          if ( !v16 )
            goto LABEL_48;
          v17 = Win32AllocPool(48LL, 1884571981LL);
          if ( v17 )
          {
            *(_DWORD *)(v17 + 16) = 0;
            *(_QWORD *)(v17 + 24) = 0LL;
            *(_QWORD *)(v17 + 32) = 0LL;
            *(_DWORD *)(v17 + 40) = 0;
            *(_QWORD *)v17 = 0LL;
            *(_QWORD *)(v17 + 8) = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = v17;
          if ( !v17 )
            goto LABEL_48;
          v18 = (_QWORD *)Win32AllocPoolZInit(0x18uLL);
          if ( v18 )
          {
            *v18 = 0LL;
            v18[1] = 0LL;
            *((_BYTE *)v18 + 8) = 0;
            *((_DWORD *)v18 + 3) = 0;
            v18[2] = 0LL;
          }
          else
          {
            v18 = 0LL;
          }
          WPP_MAIN_CB.Queue.Wcb.DeviceContext = v18;
          if ( !v18 )
            goto LABEL_48;
          KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
          DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) = KernelSemaphore;
          if ( !*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) )
          {
            InputExtensibilityCallout::UnInitialize((__int64)DeviceContext, v20, v21);
            goto LABEL_48;
          }
          CInputConfig::slock = 0LL;
          qword_1C0193710 = 0LL;
          v23 = Win32AllocPoolZInit(0x30uLL);
          if ( v23 )
          {
            *(_QWORD *)(v23 + 16) = 0LL;
            *(_DWORD *)(v23 + 24) = 1;
            *(_QWORD *)(v23 + 32) = 0LL;
            *(_BYTE *)(v23 + 40) = 1;
            *(_QWORD *)v23 = 0LL;
            *(_QWORD *)(v23 + 8) = 0LL;
          }
          else
          {
            v23 = 0LL;
          }
          gpInputConfig = (struct _SINGLE_LIST_ENTRY *)v23;
          v24 = v23 == 0 ? 0xC0000017 : 0;
          goto LABEL_33;
        }
      }
    }
  }
LABEL_49:
  v24 = -1073741823;
LABEL_33:
  if ( v26 && !v27 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return v24;
}
