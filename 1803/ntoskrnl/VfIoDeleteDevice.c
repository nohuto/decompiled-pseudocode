/*
 * XREFs of VfIoDeleteDevice @ 0x1408213F8
 * Callers:
 *     IovDeleteDevice @ 0x140811F98 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x1402AAAF8 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x14081752C (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x140817664 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x14081BBFC (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x140821688 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1408227C4 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140822870 (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x1408233E8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x14082E290 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *BugCheckParameter2, const void *a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObjectWithTag; // rsi
  char pszDest[40]; // [rsp+20h] [rbp-68h] BYREF
  char v11[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = BugCheckParameter2;
  if ( ViVerifyDma )
  {
    Blink = BugCheckParameter2[19].Blink;
    if ( !Blink )
      goto LABEL_21;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      BugCheckParameter2 = Flink;
    }
    while ( Blink );
    if ( BugCheckParameter2 == v3 )
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
      VF_MARK_FOR_DEFERRED_REMOVE(BugCheckParameter2);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove((ULONG_PTR)v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
    {
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject((__int64)v3, 0LL);
    LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v8);
    if ( LowerDeviceObjectWithTag )
    {
      ViErrorDisplayDescription(513LL);
      if ( RtlStringCbPrintfA(v11, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(v11);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
