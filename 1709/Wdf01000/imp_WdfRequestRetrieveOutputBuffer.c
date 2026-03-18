/*
 * XREFs of imp_WdfRequestRetrieveOutputBuffer @ 0x1C00070D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0009E50 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0009F40 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qiid @ 0x1C006D6E0 (WPP_IFR_SF_qiid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  __int64 Offset; // rcx
  FxRequest *v9; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 *v11; // rdi
  unsigned __int8 MajorFunction; // al
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  IFxMemory *pMemory; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 length; // [rsp+58h] [rbp-30h] BYREF
  void *pBuffer[5]; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxRequest *pRequest; // [rsp+98h] [rbp+10h] BYREF

  pMemory = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4104 )
  {
    pRequest = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v9 = pRequest;
  }
  m_Globals = v9->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  v11 = Length;
  *Buffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  MajorFunction = v9->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x1Au, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      LODWORD(result) = FxRequest::GetMemoryObject(v9, &pMemory, pBuffer, &length);
    else
      LODWORD(result) = FxRequest::GetDeviceControlOutputMemoryObject(v9, &pMemory, pBuffer, &length);
    if ( (int)result < 0 )
      return (unsigned int)result;
    v14 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer[0];
      if ( v11 )
        *v11 = v14;
      return (unsigned int)result;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qiid(
        m_Globals,
        5u,
        0x10u,
        0x1Bu,
        WPP_FxRequestApi_cpp_Traceguids,
        (const void *)Request,
        length,
        RequiredLength,
        -1073741789);
    return 3221225507LL;
  }
}
