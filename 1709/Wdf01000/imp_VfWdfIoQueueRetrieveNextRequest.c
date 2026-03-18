/*
 * XREFs of imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00D3140
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     McTemplateK0cpp @ 0x1C0074C9C (McTemplateK0cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int16 v12; // ax
  const void *Context; // rdx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v4 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveNextRequest)(
         DriverGlobals,
         Queue);
  if ( !v4 )
  {
    v5 = (unsigned __int64)*OutRequest;
    v6 = (unsigned __int64)*OutRequest;
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    v7 = (unsigned __int16 *)(~v6 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v5 & 1) != 0 )
      v7 = (unsigned __int16 *)((char *)v7 - *v7);
    v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
    if ( (v8->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v8->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v8, v5, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext & 1) != 0 )
      {
        v10 = 0LL;
        if ( !*((_BYTE *)PPObject + 214) )
          v10 = *((_QWORD *)PPObject + 31);
        v11 = *(_QWORD *)(v10 + 96);
        v12 = *(_WORD *)(v11 + 10);
        Context = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v12 )
          Context = 0LL;
        McTemplateK0cpp(
          *(_MCGEN_TRACE_CONTEXT **)(*((_QWORD *)PPObject + 19) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v4;
}
