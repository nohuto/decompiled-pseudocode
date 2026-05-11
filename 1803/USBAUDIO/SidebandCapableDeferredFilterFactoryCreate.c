/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x1C0017570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x1C0006F44 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(PVOID IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rsi
  int v6; // edi
  int v7; // r15d
  GUID *v8; // rbx
  __int64 v9; // rdx
  GUID v10; // xmm0
  __int64 v11; // rdx
  struct _KEVENT *v12; // rcx
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(Context + 16);
  v14 = 0;
  v6 = -1073741437;
  v7 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    Context,
    9u,
    0x14u,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids);
  KeSetEvent((PRKEVENT)(v3 + 944), 0, 0);
  IoFreeWorkItem(IoWorkItem);
  if ( v3 == -128 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v3 + 176) )
    goto LABEL_11;
  v8 = *(GUID **)(v3 + 184);
  v6 = IsDeviceInSidebandMode(Context, &v14);
  if ( v6 < 0 )
    goto LABEL_11;
  if ( v14 )
  {
    v10 = (GUID)USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v10 = KSCATEGORY_AUDIO;
  }
  *v8 = v10;
  if ( (unsigned int)(*(_DWORD *)(v3 + 844) - 1) <= 1 )
  {
    v6 = KsCreateFilterFactory(
           *(PDEVICE_OBJECT *)(Context + 24),
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *(_QWORD *)(v3 + 120) = FilterFactory;
    }
  }
  if ( !v7 )
  {
LABEL_11:
    KeWaitForSingleObject((PVOID)(v3 + 736), Executive, 0, 0, 0LL);
    DeInitSideband(Context, v11);
    KeReleaseMutex((PRKMUTEX)(v3 + 736), 0);
  }
  v12 = *(struct _KEVENT **)(v3 + 968);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  LODWORD(v13) = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    9u,
    0x15u,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    v13);
}
