/*
 * XREFs of DeInitSideband @ 0x1C0006C2C
 * Callers:
 *     DeviceStart @ 0x1C0017260 (DeviceStart.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0017570 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     DeviceStop @ 0x1C0017730 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C00178D0 (DeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     ?DeInitIoQueue@CSidebandDevice@@QEAAJXZ @ 0x1C000727C (-DeInitIoQueue@CSidebandDevice@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeInitSideband(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  struct _IO_REMOVE_LOCK *v7; // rbp
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  void *v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-30h]
  NTSTATUS v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+28h] [rbp-30h]

  v3 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    9u,
    0xEu,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 848);
  if ( v6 )
  {
    v7 = (struct _IO_REMOVE_LOCK *)(v5 + 704);
    v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 704), 0LL, File, 1u, 0x20u);
    if ( v3 >= 0 )
    {
      KeSetEvent((PRKEVENT)(v5 + 816), 0, 0);
      v8 = 0;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        0x10u,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids);
      v11 = *(void **)(v6 + 240);
      if ( v11 )
      {
        v8 = IoUnregisterPlugPlayNotificationEx(v11);
        *(_QWORD *)(v6 + 240) = 0LL;
      }
      v21 = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        9u,
        0x11u,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids,
        v21);
      if ( *(_WORD *)(v6 + 48) )
      {
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 48), 0);
        RtlFreeUnicodeString((PUNICODE_STRING)(v6 + 48));
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        9u,
        0x1Bu,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids);
      LODWORD(v22) = 0;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        9u,
        0x1Cu,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids,
        v22);
      CSidebandDevice::DeInitIoQueue((CSidebandDevice *)v6);
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        9u,
        0x53u,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids);
      v16 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 16LL) + 104LL);
      v17 = (_QWORD *)*v16;
      while ( v17 != v16 )
      {
        v18 = (void *)v17[6];
        v17 = (_QWORD *)*v17;
        ObfDereferenceObject(v18);
      }
      LODWORD(v23) = 0;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        9u,
        0x55u,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids,
        v23);
      v3 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      IoReleaseRemoveLockAndWaitEx(v7, 0LL, 0x20u);
    }
  }
  LODWORD(v20) = v3;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v4,
    9u,
    0xFu,
    (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids,
    v20);
  return (unsigned int)v3;
}
