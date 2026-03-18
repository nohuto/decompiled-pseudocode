/*
 * XREFs of RIMDeviceIoControl @ 0x1C006E8B0
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E700 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C00FF8E0 (NtRIMDeviceIoControl.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00276B0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00906DC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0090700 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        char *a1,
        char *a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        volatile void *Address,
        ULONG Length,
        CTouchProcessor *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        KPROCESSOR_MODE a12)
{
  char *v13; // rsi
  unsigned __int64 v15; // rcx
  int Status; // ebx
  _BYTE *v17; // r14
  int v18; // edx
  struct _FILE_OBJECT *v19; // rdx
  PVOID *v20; // rsi
  void *v21; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v23; // rax
  IRP *v24; // rbx
  CTouchProcessor *v25; // rcx
  __int64 IoControlCode; // [rsp+28h] [rbp-90h]
  PVOID v28; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  _BYTE v31[8]; // [rsp+68h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+70h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-38h] BYREF

  v13 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    129,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v15 = (unsigned __int64)a4 + InputBufferLength;
      if ( v15 > (unsigned __int64)W32UserProbeAddress || v15 < (unsigned __int64)a4 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    ProbeForWrite(Address, Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v28);
  if ( Status >= 0 )
  {
    v17 = v28;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v31,
      (struct RIMLOCK *)((char *)v28 + 96));
    if ( v17[73] )
    {
      Status = -1073741637;
      LOBYTE(v18) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        18,
        131,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v13, 3u, 1, &Object);
      if ( Status >= 0 )
      {
        v20 = (PVOID *)Object;
        v21 = (void *)*((_QWORD *)Object + 36);
        if ( v21 && (v19 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 37)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 62) & 0x1000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( a12 == 1 )
              NtDeviceIoControlFile(v21, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v21, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject(v19);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v23 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v32);
            v24 = v23;
            if ( v23 )
            {
              v23->RequestorMode = a12;
              ObfReferenceObject(v20[37]);
              v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v20[37];
              Status = IofCallDriver(DeviceObject, v24);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v32.Status;
              }
              ObfDereferenceObject(v20[37]);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v25 = a8;
              if ( a8 >= W32UserProbeAddress )
                v25 = W32UserProbeAddress;
              *(_DWORD *)v25 = v32.Information;
            }
            else
            {
              *(_DWORD *)a8 = v32.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v19,
            18,
            130,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
        }
        CompositionObject::Release(v20);
      }
    }
    ObfDereferenceObject(v17);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v31);
  }
  LODWORD(IoControlCode) = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x84u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    IoControlCode);
  return (unsigned int)Status;
}
