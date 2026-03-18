/*
 * XREFs of RIMDeviceIoControl @ 0x1C000AC40
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C00FFD20 (NtRIMDeviceIoControl.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000C81C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        volatile void *Address,
        ULONG Length,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        KPROCESSOR_MODE a12)
{
  __int64 v13; // rsi
  __int64 v15; // r8
  int v16; // edx
  NTSTATUS Status; // ebx
  _BYTE *v18; // r14
  int v19; // edx
  __int64 v20; // r8
  struct _FILE_OBJECT *v21; // rdx
  _QWORD *v22; // rsi
  void *v23; // rcx
  ULONG64 v25; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v27; // rax
  _DWORD *v28; // rdx
  PVOID v29; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+68h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-30h] BYREF

  v13 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    129,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v25 = (ULONG64)a4 + InputBufferLength;
      if ( v25 > MmUserProbeAddress || v25 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, Length, 1u);
  }
  LOBYTE(v15) = 1;
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, v15, &v29);
  if ( Status >= 0 )
  {
    v18 = v29;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v31,
      (struct RIMLOCK *)((char *)v29 + 96));
    if ( v18[73] )
    {
      Status = -1073741637;
      LOBYTE(v19) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        18,
        131,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      LOBYTE(v20) = 1;
      Status = RawInputManagerDeviceObjectResolveHandle(v13, 3LL, v20, &Object);
      if ( Status >= 0 )
      {
        v22 = Object;
        v23 = (void *)*((_QWORD *)Object + 36);
        if ( v23 && (v21 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 37)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 62) & 0x1000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( a12 == 1 )
              NtDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject(v21);
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v27 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v32);
            if ( v27 )
            {
              v27->RequestorMode = a12;
              v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22[37];
              Status = IofCallDriver(RelatedDeviceObject, v27);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v32.Status;
              }
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v28 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v28 = (_DWORD *)MmUserProbeAddress;
              *v28 = v32.Information;
            }
            else
            {
              *a8 = v32.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          LOBYTE(v21) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v21,
            18,
            130,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
        }
        ObfDereferenceObject(v22);
      }
    }
    ObfDereferenceObject(v18);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v31);
  }
  LOBYTE(v16) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v16,
    19,
    132,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    Status);
  return (unsigned int)Status;
}
