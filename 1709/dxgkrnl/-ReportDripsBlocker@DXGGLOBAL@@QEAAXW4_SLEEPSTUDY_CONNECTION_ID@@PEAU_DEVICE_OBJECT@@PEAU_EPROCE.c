/*
 * XREFs of ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01ABA2C
 * Callers:
 *     ?DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z @ 0x1C00EF8C0 (-DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0173190 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B8E4C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     RtlStringCchCopyA @ 0x1C0028638 (RtlStringCchCopyA.c)
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z @ 0x1C01A98F0 (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z.c)
 */

void __fastcall DXGGLOBAL::ReportDripsBlocker(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // ebp
  const char *ProcessImageFileName; // rax
  size_t v10; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-78h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  STRING v21; // [rsp+50h] [rbp-58h] BYREF
  char pszDest[16]; // [rsp+60h] [rbp-48h] BYREF

  v7 = a2;
  if ( a4 && a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(a1 + 1480));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a4);
    RtlStringCchCopyA(pszDest, v10, ProcessImageFileName);
    RtlInitAnsiString(&DestinationString, pszDest);
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v21 = DestinationString;
    v12 = DeviceAttachmentBaseRef;
    v13 = (int)DripsBlockerInfoList::AddDripsBlocker(
                 (unsigned int *)(a1 + 1528),
                 v7,
                 &v21,
                 (__int64)DeviceAttachmentBaseRef,
                 a5);
    ObfDereferenceObject(v12);
    if ( (int)v13 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = pszDest;
      *(_QWORD *)(v17 + 32) = v13;
      WdLogEvent5_WdWarning(v17);
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  else
  {
    v18 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = a4;
    *(_QWORD *)(v18 + 32) = a3;
    WdLogEvent5_WdEvent(v18);
  }
}
