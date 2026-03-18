/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C022062C (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0222B5C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0222FE0 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0223984 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C02240CC (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG a6,
        unsigned int *a7)
{
  unsigned int Status; // ebx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v15; // rbx
  PIRP v16; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  ULONG OutputBufferLength; // [rsp+50h] [rbp-91h] BYREF
  ULONG v21; // [rsp+54h] [rbp-8Dh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-41h] BYREF
  ULONG *p_OutputBufferLength; // [rsp+B0h] [rbp-31h]
  int v27; // [rsp+B8h] [rbp-29h]
  int v28; // [rsp+BCh] [rbp-25h]

  OutputBufferLength = a6;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    Status = -1073741436;
LABEL_13:
    if ( (unsigned int)dword_1C0324150 > 2 )
    {
      TlgCreateSz(&pDesc, "SimpleHapticsController::SendDeviceIOControl failed.");
      v28 = 0;
      p_OutputBufferLength = &OutputBufferLength;
      OutputBufferLength = Status;
      v27 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v17, v18, 4u, &pData);
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
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SendDeviceIOControl entry");
    v28 = 0;
    p_OutputBufferLength = &v21;
    v21 = a2;
    v27 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBF9, v12, v13, 4u, &pData);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)this + 7));
  v15 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v16 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                a3,
                a4,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock)) == 0LL )
  {
    Status = -1073741823;
    goto LABEL_13;
  }
  v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)this + 7);
  if ( IofCallDriver(v15, v16) == 259 )
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
