/*
 * XREFs of VfIoDeleteDevice @ 0x140772498
 * Callers:
 *     IovDeleteDevice @ 0x140763308 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x1401556EC (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x14025111C (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140768824 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x140768958 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x140772724 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObject @ 0x140772D18 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140772DB8 (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140773940 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x14077ED90 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(__int64 a1, const void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObject; // rsi
  char pszDest[40]; // [rsp+20h] [rbp-68h] BYREF
  char v11[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  if ( ViVerifyDma )
  {
    v4 = *(_QWORD *)(a1 + 312);
    if ( !v4 )
      goto LABEL_21;
    do
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( !v5 )
        break;
      v4 = *(_QWORD *)(v5 + 312);
      a1 = v5;
    }
    while ( v4 );
    if ( a1 == v3 )
    {
LABEL_21:
      while ( 1 )
      {
        v6 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(v3);
        if ( !v6 )
          break;
        ViReleaseDmaAdapter((__int64)v6);
      }
    }
    else
    {
      VF_MARK_FOR_DEFERRED_REMOVE(a1);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove(v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
    {
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject(v3, 0LL);
    LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(v8);
    if ( LowerDeviceObject )
    {
      ViErrorDisplayDescription(513LL);
      if ( RtlStringCbPrintfA(v11, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(v11);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      ObfDereferenceObject(LowerDeviceObject);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
