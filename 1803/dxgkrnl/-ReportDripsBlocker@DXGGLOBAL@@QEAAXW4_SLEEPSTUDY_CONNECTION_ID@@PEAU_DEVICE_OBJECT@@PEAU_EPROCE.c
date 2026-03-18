/*
 * XREFs of ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01A0AC8
 * Callers:
 *     ?DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z @ 0x1C00E5A50 (-DxgkCddReportDripsBlocker@@YAXPEAXPEAU_EPROCESS@@@Z.c)
 *     DxgkReportDripsBlocker @ 0x1C01A1F10 (DxgkReportDripsBlocker.c)
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B6220 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RtlStringCchCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C0032D18 (-RtlStringCchCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z.c)
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z @ 0x1C019CC78 (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z.c)
 */

void __fastcall DXGGLOBAL::ReportDripsBlocker(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // esi
  __int64 v9; // rax
  const char *ProcessImageFileName; // rax
  size_t v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  char *v23; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  char *v31; // [rsp+30h] [rbp-51h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-41h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  STRING v35; // [rsp+60h] [rbp-21h] BYREF
  char v36[40]; // [rsp+70h] [rbp-11h] BYREF

  v7 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v9 + 24) = 4357LL;
    WdLogEvent5_WdEvent(v9);
    return;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)(a1 + 1608), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  if ( !a4 )
  {
    v23 = "External Activation";
    goto LABEL_23;
  }
  memset(v36, 0, 0x21uLL);
  v31 = 0LL;
  v32 = 0LL;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(a4);
  if ( RtlStringCchCopyExA(v36, v11, ProcessImageFileName, &v31, &v32) >= 0 && !v7 && v32 >= 0xC )
  {
    if ( !v31 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = 4389LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v15 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v15);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
    {
      v19 = 0LL;
      goto LABEL_18;
    }
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v18 = *ThreadWin32Thread;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 80);
LABEL_18:
          if ( v19 )
          {
            v20 = v31;
            *(_WORD *)v31 = 12383;
            v20[2] = 120;
            if ( RtlIntegerToChar(*(_DWORD *)(v19 + 144), 0x10u, 9u, v20 + 3) < 0 )
            {
              v22 = WdLogNewEntry5_WdAssertion(v21);
              *(_QWORD *)(v22 + 24) = 4405LL;
              WdLogEvent5_WdAssertion(v22);
            }
          }
        }
      }
    }
  }
  v23 = v36;
LABEL_23:
  RtlInitAnsiString(&DestinationString, v23);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
  v35 = DestinationString;
  v25 = DeviceAttachmentBaseRef;
  v26 = (int)DripsBlockerInfoList::AddDripsBlocker(
               (unsigned int *)(a1 + 1656),
               v7,
               &v35,
               (__int64)DeviceAttachmentBaseRef,
               a5);
  ObfDereferenceObject(v25);
  if ( (int)v26 < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = v26;
    WdLogEvent5_WdWarning(v30);
  }
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
}
