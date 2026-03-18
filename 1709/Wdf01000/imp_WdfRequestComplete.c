/*
 * XREFs of imp_WdfRequestComplete @ 0x1C00071F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0078458 (WPP_IFR_SF_qqxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00D7C88 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request, int RequestStatus)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxDeviceBase *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  const void *_a4; // rdx
  const _GUID *Offset; // [rsp+20h] [rbp-38h]
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v4 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v5) = 0;
  if ( (Request & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)v4;
    v4 -= v5;
  }
  if ( *(_WORD *)(v4 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pRequest, (void *)Request, 0x1008u, v5);
    v4 = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( v6->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v6, (FxRequest *)v4) < 0 )
      return;
    v4 = (unsigned __int64)pRequest;
  }
  v7 = *(FxDeviceBase **)(v4 + 96);
  v8 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( v8->FxVerboseOn )
  {
    _a4 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v4 + 10) )
      _a4 = 0LL;
    WPP_IFR_SF_qqxd(
      v8,
      (unsigned __int8)_a4,
      *(_QWORD *)(v4 + 152),
      0xBu,
      Offset,
      _a4,
      *(const void **)(v4 + 152),
      *(_QWORD *)(*(_QWORD *)(v4 + 152) + 56LL),
      RequestStatus);
  }
  if ( v7 )
    *(_BYTE *)(v4 + 236) = HIBYTE(v7[1].m_Globals);
  else
    *(_BYTE *)(v4 + 236) = 0;
  FxRequest::CompleteInternal((FxRequest *)v4, RequestStatus);
}
