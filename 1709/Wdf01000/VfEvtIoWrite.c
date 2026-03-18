/*
 * XREFs of VfEvtIoWrite @ 0x1C00D77D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     McTemplateK0cpp @ 0x1C0074C9C (McTemplateK0cpp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0075174 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C007519C (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C00751F4 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D61C4 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoWrite(WDFQUEUE__ *Queue, unsigned __int64 Request, unsigned __int64 Length)
{
  char *TypedContext; // r14
  void (__fastcall *v7)(WDFQUEUE__ *, unsigned __int64, unsigned __int64); // rsi
  unsigned __int16 *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v11; // r10
  __int64 v12; // r10
  __int16 v13; // ax
  const void *Context; // r10
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64))*((_QWORD *)TypedContext + 5);
  if ( v7 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    v8 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( (Request & 1) != 0 )
      v8 = (unsigned __int16 *)((char *)v8 - *v8);
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v8 + 2);
    if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v9, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext & 1) != 0 )
      {
        v11 = 0LL;
        if ( !*((_BYTE *)PPObject + 214) )
          v11 = *((_QWORD *)PPObject + 31);
        v12 = *(_QWORD *)(v11 + 96);
        v13 = *(_WORD *)(v12 + 10);
        Context = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v13 )
          Context = 0LL;
        McTemplateK0cpp(
          (_MCGEN_TRACE_CONTEXT *)PPObject,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
          _Arg2,
          Context);
      }
      v7(Queue, Request, Length);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v7(Queue, Request, Length);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v7);
    }
  }
}
