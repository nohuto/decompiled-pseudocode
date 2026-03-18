/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C021F348 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C021F414 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220020 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0222320 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C0223E20 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C02244C0 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

__int64 __fastcall InteractiveControlDevice::Initialize(PHIDP_PREPARSED_DATA *this, struct _UNICODE_STRING *Object)
{
  int v4; // r9d
  int v5; // ecx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  __int64 v7; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  SimpleHapticsController *v10; // rcx
  SimpleHapticsController *v11; // rcx
  const struct _DEVPROPKEY *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  SimpleHapticsController *v19; // rcx
  __int64 v20; // rcx
  SimpleHapticsController *v21; // rcx
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPCGUID v25; // r8
  unsigned int ObjectType; // [rsp+20h] [rbp-59h]
  unsigned int AccessMode; // [rsp+28h] [rbp-51h]
  NTSTATUS v29; // [rsp+40h] [rbp-39h] BYREF
  int v30; // [rsp+44h] [rbp-35h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  int *v35; // [rsp+90h] [rbp+17h]
  __int64 v36; // [rsp+98h] [rbp+1Fh]

  v29 = 0;
  Handle = 0LL;
  LODWORD(Size) = 0;
  if ( !Object )
  {
    v29 = -1073741811;
LABEL_47:
    InteractiveControlDevice::Deinitialize((InteractiveControlDevice *)this);
    return (unsigned int)v29;
  }
  v29 = RawInputManagerDeviceObjectReference(Object);
  v4 = v29;
  if ( v29 >= 0 )
  {
    v5 = dword_1C032953C;
    *this = (PHIDP_PREPARSED_DATA)Object;
    *((_DWORD *)this + 2) = v5;
    dword_1C032953C = v5 + 1;
    v29 = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, &Handle);
    v4 = v29;
    if ( v29 >= 0 )
    {
      v29 = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      v4 = v29;
      if ( v29 >= 0 )
      {
        v6 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        this[31] = v6;
        if ( !v6 )
        {
LABEL_7:
          v4 = -1073741670;
LABEL_8:
          v29 = v4;
          goto LABEL_44;
        }
        memset(v6, 0, (unsigned int)Size);
        v29 = RIMGetDevicePreparsedDataLockfree(Handle, this[31], &Size, 0LL);
        v4 = v29;
        if ( v29 >= 0 )
        {
          v7 = Win32AllocPool(96LL, 1667787091LL);
          if ( v7 )
          {
            *(_QWORD *)(v7 + 16) = 0LL;
            *(_QWORD *)(v7 + 24) = 0LL;
            *(_QWORD *)(v7 + 32) = 0LL;
            *(_QWORD *)(v7 + 56) = 0LL;
            *(_QWORD *)(v7 + 64) = 0LL;
            *(_WORD *)(v7 + 72) = 0;
            *(_DWORD *)(v7 + 76) = 0;
            *(_QWORD *)(v7 + 80) = 0LL;
            *(_DWORD *)(v7 + 88) = 0;
            *(_BYTE *)(v7 + 92) = 0;
          }
          else
          {
            v7 = 0LL;
          }
          this[47] = (PHIDP_PREPARSED_DATA)v7;
          if ( !v7 )
            goto LABEL_7;
          v29 = SimpleHapticsController::Initialize((SimpleHapticsController *)v7, Object + 17);
          if ( v29 < 0 )
          {
            if ( (unsigned int)dword_1C0324190 > 4 )
            {
              TlgCreateSz(&pDesc, "SimpleHapticsController->Initialize failed with.");
              v36 = 4LL;
              v35 = &v29;
              TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v8, v9, 4u, &pData);
            }
            v10 = this[47];
            if ( v10 )
            {
              SimpleHapticsController::DeInitialize(v10);
              v11 = this[47];
              if ( v11 )
                SimpleHapticsController::`scalar deleting destructor'(v11);
              this[47] = 0LL;
            }
            v29 = 0;
          }
          v29 = InteractiveControlParser::BuildDeviceCapabilities(this[31], (struct InteractiveControlDevice *)this);
          v4 = v29;
          if ( v29 >= 0 )
          {
            if ( *((_DWORD *)this + 18) != 1 )
            {
              v4 = -1073741637;
              goto LABEL_8;
            }
            if ( this[30] )
              InteractiveControlDevice::CreateDeadzone((InteractiveControlDevice *)this);
            if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
            {
              v30 = 235930369;
              LeaveDeviceInfoListCrit_(v13);
              if ( gdwInAtomicOperation )
              {
                v16 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation, v17, v18);
              v19 = this[47];
              if ( v19 )
                SimpleHapticsController::SendDeviceIOControl(v19, 0xB0191u, &v30, 4u, 0LL, 0, 0LL);
              EnterCrit(0LL, 1LL);
              EnterDeviceInfoListCrit_(v20);
            }
            if ( (*((_DWORD *)*this + 62) & 0x1000) == 0 && *((_DWORD *)this + 18) == 1 )
            {
              v21 = this[47];
              if ( v21 )
              {
                v29 = SimpleHapticsController::SetDevicePropertyData(
                        v21,
                        v12,
                        v14,
                        v15,
                        ObjectType,
                        AccessMode,
                        this + 9);
                if ( v29 < 0 && (unsigned int)dword_1C0324190 > 2 )
                {
                  TlgCreateSz(&pDesc, "Function failed.");
                  v30 = (int)v22;
                  v35 = &v30;
                  v36 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v23, v22, 4u, &pData);
                }
                v29 = 0;
              }
            }
            v29 = InteractiveControlDevice::InitializeWaveformOrdinalForDevice((InteractiveControlDevice *)this);
            v4 = v29;
            if ( v29 < 0 && (unsigned int)dword_1C0324190 > 2 )
            {
              TlgCreateSz(&pDesc, "Function failed.");
              v30 = (int)v24;
              v35 = &v30;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v25, v24, 4u, &pData);
              v4 = v29;
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
    v4 = v29;
  }
  if ( v4 < 0 )
    goto LABEL_47;
  return (unsigned int)v4;
}
