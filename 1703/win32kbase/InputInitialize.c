/*
 * XREFs of InputInitialize @ 0x1C006DA98
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C00493C4 (--0CInputGlobals@@AEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     CreateKernelSemaphore @ 0x1C0058750 (CreateKernelSemaphore.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0069480 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     intializeGlobalRecorder @ 0x1C006DD68 (intializeGlobalRecorder.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 InputInitialize()
{
  __int64 *v0; // rbx
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
  unsigned int v19; // ebx
  int v21; // [rsp+30h] [rbp+8h] BYREF
  int v22; // [rsp+34h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v21, 1, 0);
  gbInputInitialized = 1;
  gInputLock = 0LL;
  qword_1C018E820 = 0LL;
  gQueueLock = 0LL;
  qword_1C018E810 = 0LL;
  gWndLock = 0LL;
  qword_1C018E830 = 0LL;
  gHmLock = 0LL;
  qword_1C018E840 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C018EC98 = 0LL;
  intializeGlobalRecorder();
  CBaseInput::_sessionInitialized = 1;
  v0 = &qword_1C0186018;
  v1 = 0;
  while ( 1 )
  {
    v2 = ((__int64 (*)(void))*(v0 - 3))();
    *v0 = v2;
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
      v5 = (CTouchProcessor *)Win32AllocPoolZInit(0x160uLL, 1919964227LL);
      if ( v5 )
        v6 = CTouchProcessor::CTouchProcessor(v5);
      else
        v6 = 0LL;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v6;
      if ( !v6 )
      {
LABEL_37:
        v19 = -1073741801;
        goto LABEL_31;
      }
      v7 = 0;
      v8 = &qword_1C0186098;
      while ( 1 )
      {
        v9 = (int)IsEditionGetDefaultMouseSensitivitySupported() >= 0
           ? (unsigned int)EditionGetDefaultMouseSensitivity(v7)
           : 10LL;
        v10 = ((__int64 (__fastcall *)(__int64))*(v8 - 1))(v9);
        *v8 = (CDeviceAcceleration *)v10;
        if ( !v10 )
          goto LABEL_46;
        ++v7;
        v8 += 3;
        if ( v7 >= 2 )
        {
          v11 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL, 1919964227LL);
          if ( v11 )
            v12 = CInputGlobals::CInputGlobals(v11);
          else
            v12 = 0LL;
          gpInputGlobals = v12;
          if ( v12 )
          {
            v13 = (DRIVER_CONTROL *)Win32AllocPoolZInit(0x40uLL, 1919964227LL);
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
            if ( v14 )
            {
              v15 = Win32AllocPoolZInit(0xC8uLL, 1919964227LL);
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
              if ( v16 )
              {
                v17 = Win32AllocPool(48LL, 0x7054494Du);
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
                if ( v17 )
                {
                  v18 = Win32AllocPoolZInit(0x18uLL, 1883524675LL);
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
                  if ( v18 )
                  {
                    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) = CreateKernelSemaphore(0, 0x7FFFFFFF);
                    if ( *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 2) )
                    {
                      v19 = 0;
                      goto LABEL_31;
                    }
                    InputExtensibilityCallout::UnInitialize();
                  }
                }
              }
            }
          }
          goto LABEL_37;
        }
      }
    }
  }
LABEL_46:
  v19 = -1073741823;
LABEL_31:
  if ( v21 && !v22 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  return v19;
}
