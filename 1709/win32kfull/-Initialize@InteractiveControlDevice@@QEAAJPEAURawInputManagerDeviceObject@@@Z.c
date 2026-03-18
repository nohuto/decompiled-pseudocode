/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0220758 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0220824 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C0221404 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02237D4 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0223BF8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C02252D8 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0225990 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

NTSTATUS __fastcall InteractiveControlDevice::Initialize(PHIDP_PREPARSED_DATA *this, struct _UNICODE_STRING *Object)
{
  NTSTATUS result; // eax
  int v5; // ecx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  __int64 v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  SimpleHapticsController *v10; // rcx
  SimpleHapticsController *v11; // rcx
  const struct _DEVPROPKEY *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rcx
  SimpleHapticsController *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  SimpleHapticsController *v22; // rcx
  int v23; // eax
  const GUID *v24; // r8
  const GUID *v25; // r9
  const GUID *v26; // r8
  const GUID *v27; // r9
  unsigned int ObjectType; // [rsp+20h] [rbp-59h]
  unsigned int AccessMode; // [rsp+28h] [rbp-51h]
  int v30; // [rsp+40h] [rbp-39h] BYREF
  int v31; // [rsp+44h] [rbp-35h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const char *v35; // [rsp+80h] [rbp+7h]
  __int64 v36; // [rsp+88h] [rbp+Fh]
  int *v37; // [rsp+90h] [rbp+17h]
  __int64 v38; // [rsp+98h] [rbp+1Fh]

  v30 = 0;
  Handle = 0LL;
  LODWORD(Size) = 0;
  if ( !Object )
  {
    v30 = -1073741811;
LABEL_47:
    InteractiveControlDevice::Deinitialize((InteractiveControlDevice *)this);
    return v30;
  }
  result = RawInputManagerDeviceObjectReference(Object);
  v30 = result;
  if ( result >= 0 )
  {
    v5 = dword_1C0324304;
    *this = (PHIDP_PREPARSED_DATA)Object;
    *((_DWORD *)this + 2) = v5;
    dword_1C0324304 = v5 + 1;
    result = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, &Handle);
    v30 = result;
    if ( result >= 0 )
    {
      result = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      v30 = result;
      if ( result >= 0 )
      {
        v6 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        this[32] = v6;
        if ( !v6 )
        {
LABEL_7:
          result = -1073741670;
LABEL_8:
          v30 = result;
          goto LABEL_44;
        }
        memset(v6, 0, (unsigned int)Size);
        result = RIMGetDevicePreparsedDataLockfree(Handle, this[32], &Size, 0LL);
        v30 = result;
        if ( result >= 0 )
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
          this[48] = (PHIDP_PREPARSED_DATA)v7;
          if ( !v7 )
            goto LABEL_7;
          v30 = SimpleHapticsController::Initialize((SimpleHapticsController *)v7, Object + 17);
          if ( v30 < 0 )
          {
            if ( (unsigned int)dword_1C0320190 > 4 )
            {
              v36 = 49LL;
              v35 = "SimpleHapticsController->Initialize failed with.";
              v37 = &v30;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v8, v9, 4u, &pData);
            }
            v10 = this[48];
            if ( v10 )
            {
              SimpleHapticsController::DeInitialize(v10);
              v11 = this[48];
              if ( v11 )
                SimpleHapticsController::`scalar deleting destructor'(v11);
              this[48] = 0LL;
            }
            v30 = 0;
          }
          result = InteractiveControlParser::BuildDeviceCapabilities(this[32], (struct InteractiveControlDevice *)this);
          v30 = result;
          if ( result >= 0 )
          {
            if ( *((_DWORD *)this + 18) != 1 )
            {
              result = -1073741637;
              goto LABEL_8;
            }
            if ( this[30] )
              InteractiveControlDevice::CreateDeadzone((InteractiveControlDevice *)this);
            if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
            {
              v31 = 235930369;
              LeaveDeviceInfoListCrit_(v13, v12, v14);
              if ( gdwInAtomicOperation )
              {
                v16 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
              v17 = this[48];
              if ( v17 )
                SimpleHapticsController::SendDeviceIOControl(v17, 0xB0191u, &v31, 4u, 0LL, 0, 0LL);
              EnterCrit(0LL, 1LL);
              EnterDeviceInfoListCrit_(v19, v18, v20, v21);
            }
            if ( (*((_DWORD *)*this + 62) & 0x1000) == 0 && *((_DWORD *)this + 18) == 1 )
            {
              v22 = this[48];
              if ( v22 )
              {
                v23 = SimpleHapticsController::SetDevicePropertyData(
                        v22,
                        v12,
                        v14,
                        v15,
                        ObjectType,
                        AccessMode,
                        this + 9);
                v30 = v23;
                if ( v23 < 0 && (unsigned int)dword_1C0320190 > 2 )
                {
                  v31 = v23;
                  v37 = &v31;
                  v35 = "Function failed.";
                  v36 = 17LL;
                  v38 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v24, v25, 4u, &pData);
                }
                v30 = 0;
              }
            }
            result = InteractiveControlDevice::InitializeWaveformOrdinalForDevice((InteractiveControlDevice *)this);
            v30 = result;
            if ( result < 0 && (unsigned int)dword_1C0320190 > 2 )
            {
              v31 = result;
              v37 = &v31;
              v35 = "Function failed.";
              v36 = 17LL;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v26, v27, 4u, &pData);
              result = v30;
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
    result = v30;
  }
  if ( result < 0 )
    goto LABEL_47;
  return result;
}
