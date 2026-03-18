/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0221A24 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C022400C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C022449C (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0224E54 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C022558C (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        ULONG a2,
        GUID *a3,
        const GUID *a4,
        PVOID OutputBuffer,
        ULONG a6,
        unsigned int *a7)
{
  ULONG v7; // r13d
  unsigned int Status; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v13; // rbx
  PIRP v14; // rax
  ULONG OutputBufferLength; // [rsp+50h] [rbp-81h] BYREF
  ULONG v17; // [rsp+54h] [rbp-7Dh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-51h] BYREF
  const char *v21; // [rsp+A0h] [rbp-31h]
  int v22; // [rsp+A8h] [rbp-29h]
  int v23; // [rsp+ACh] [rbp-25h]
  ULONG *p_OutputBufferLength; // [rsp+B0h] [rbp-21h]
  int v25; // [rsp+B8h] [rbp-19h]
  int v26; // [rsp+BCh] [rbp-15h]

  v7 = (unsigned int)a4;
  OutputBufferLength = a6;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    Status = -1073741436;
LABEL_13:
    if ( (unsigned int)dword_1C0320150 > 2 )
    {
      v23 = 0;
      v26 = 0;
      p_OutputBufferLength = &OutputBufferLength;
      v21 = "SimpleHapticsController::SendDeviceIOControl failed.";
      v22 = 53;
      OutputBufferLength = Status;
      v25 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, a3, a4, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SendDeviceIOControl",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      423,
      Status,
      "SimpleHapticsController::SendDeviceIOControl failed.");
    return Status;
  }
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v23 = 0;
    v26 = 0;
    v21 = "SimpleHapticsController::SendDeviceIOControl entry";
    p_OutputBufferLength = &v17;
    v22 = 51;
    v17 = a2;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E9822, a3, a4, 4u, &pData);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)this + 7));
  v13 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v14 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                a3,
                v7,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock)) == 0LL )
  {
    Status = -1073741823;
    goto LABEL_13;
  }
  v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)this + 7);
  if ( IofCallDriver(v13, v14) == 259 )
  {
    if ( OutputBuffer )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    goto LABEL_13;
  return Status;
}
