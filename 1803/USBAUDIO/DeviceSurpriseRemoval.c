/*
 * XREFs of DeviceSurpriseRemoval @ 0x1C00178D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     ExitIrpThreadAndQueue @ 0x1C0002668 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DeviceSurpriseRemoval(_QWORD *Object, __int64 a2))(_QWORD *)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  void *v5; // rcx
  PVOID i; // rax
  struct _KSFILTER *j; // rax
  ULONG k; // ebp
  PKSPIN m; // rax
  _QWORD *Context; // r13
  void (__fastcall *v11)(struct _KSPIN *); // rax
  struct _KSPIN *v12; // rdi
  struct _KSFILTER *v13; // rbx
  void *v14; // rsi
  struct _KSFILTERFACTORY *v15; // rcx
  __int64 (__fastcall *result)(_QWORD *); // rax

  v2 = Object[2];
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0x19u,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    Object);
  KeWaitForSingleObject((PVOID)(v2 + 736), Executive, 0, 0, 0LL);
  DeInitSideband((__int64)Object, v4);
  KeReleaseMutex((PRKMUTEX)(v2 + 736), 0);
  v5 = *(void **)(v2 + 968);
  if ( v5 )
  {
    KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v2 + 968), 0x65627845u);
    *(_QWORD *)(v2 + 968) = 0LL;
  }
  ExitIrpThreadAndQueue(v2);
  for ( i = KsGetFirstChild(Object); ; i = KsGetNextSibling(v14) )
  {
    v14 = i;
    if ( !i )
      break;
    for ( j = (struct _KSFILTER *)KsGetFirstChild(i); ; j = (struct _KSFILTER *)KsGetNextSibling(v13) )
    {
      v13 = j;
      if ( !j )
        break;
      KsAcquireControl(j);
      for ( k = 0; k < v13->Descriptor->PinDescriptorsCount; ++k )
      {
        for ( m = KsFilterGetFirstChildPin(v13, k); ; m = KsPinGetNextSiblingPin(v12) )
        {
          v12 = m;
          if ( !m )
            break;
          Context = m->Context;
          v11 = *(void (__fastcall **)(struct _KSPIN *))(*(_QWORD *)(Context[18] + 128LL) + 32LL);
          if ( v11 )
            v11(v12);
          *((_BYTE *)Context + 46) = 1;
        }
      }
      KsReleaseControl(v13);
    }
  }
  v15 = *(struct _KSFILTERFACTORY **)(v2 + 120);
  if ( v15 )
    KsFilterFactorySetDeviceClassesState(v15, 0);
  *(_BYTE *)(Object[2] + 67LL) = 1;
  result = *(__int64 (__fastcall **)(_QWORD *))(pExtBusDeviceDispatchTable + 32);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *))result(Object);
  return result;
}
