/*
 * XREFs of imp_VfWdfRequestComplete @ 0x1C00D44D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     McTemplateK0cpp @ 0x1C0074C9C (McTemplateK0cpp.c)
 */

void __fastcall imp_VfWdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int Status)
{
  unsigned __int16 *v4; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbp
  __int64 v9; // r10
  __int64 v10; // r10
  __int16 v11; // ax
  const void *Context; // r10
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v4 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( ((unsigned __int8)Request & 1) != 0 )
    v4 = (unsigned __int16 *)((char *)v4 - *v4);
  v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v4 + 2);
  if ( (v7->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v7->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v7, (unsigned __int64)Request, 0x1008u, &PPObject);
    if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
    }
    if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext & 1) != 0 )
    {
      v9 = 0LL;
      if ( !*((_BYTE *)PPObject + 214) )
        v9 = *((_QWORD *)PPObject + 31);
      v10 = *(_QWORD *)(v9 + 96);
      v11 = *(_WORD *)(v10 + 10);
      Context = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11 )
        Context = 0LL;
      McTemplateK0cpp(
        (_MCGEN_TRACE_CONTEXT *)PPObject,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
        _Arg2,
        Context);
    }
  }
  WdfVersion.Functions.pfnWdfRequestComplete(DriverGlobals, Request, Status);
}
