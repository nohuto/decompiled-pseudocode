/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x1C0018F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C001778C (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C00178B0 (XilEndpoint_FreeResources.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C001DAF4 (WPP_RECORDER_SF_ddqqq.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1C00351E0 (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     Etw_EndpointDelete @ 0x1C00388E4 (Etw_EndpointDelete.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  PIRP *v9; // rax
  struct _IO_WORKITEM *v10; // rcx
  __int64 v11; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E1D8);
  v3 = v2;
  v4 = v2 + 1312;
  if ( *(_BYTE *)(v2 + 1336) )
    XilEndpoint_DestroySecureObject((__int64 *)(v2 + 1312));
  result = XilEndpoint_FreeResources(v4);
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 == a1 )
  {
    WPP_RECORDER_SF_ddqqq(*(_QWORD *)(*(_QWORD *)v3 + 72LL), *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), v6, 21);
    v7 = *(unsigned int *)(v3 + 144);
    if ( (_DWORD)v7 != 1 )
    {
      v8 = *(_QWORD *)(v3 + 16);
      if ( v3 == *(_QWORD *)(v8 + 8 * v7 + 168) )
        *(_QWORD *)(v8 + 8 * v7 + 168) = 0LL;
    }
    v9 = *(PIRP **)(v3 + 264);
    if ( v9 )
    {
      if ( *v9 )
      {
        IoFreeIrp(*v9);
        **(_QWORD **)(v3 + 264) = 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v3 + 264) + 144LL) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(*(_QWORD *)(v3 + 264) + 144LL) = 0LL;
      }
      ExFreePoolWithTag(*(PVOID *)(v3 + 264), 0x49434858u);
    }
    v10 = *(struct _IO_WORKITEM **)(v3 + 1272);
    if ( v10 )
    {
      IoFreeWorkItem(v10);
      *(_QWORD *)(v3 + 1272) = 0LL;
    }
    UsbDevice_RemoveEndpointFromDeviceEndpointList(*(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 24), v3 + 64);
    return Etw_EndpointDelete(v11, v3);
  }
  return result;
}
