/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C011F068
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103A18 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C011EC00 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002744 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext, __int64 a2)
{
  DXGDODPRESENT *v3; // rcx
  __int64 Timer; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(DXGDODPRESENT **)StartContext;
  if ( v3 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v3) + 75) & 0x100) != 0 )
      StartContext[317] = 1;
  }
  else if ( StartContext[316] )
  {
    v12 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v12 + 24) = 692LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  Timer = ExAllocateTimer(0LL, 0LL, StartContext[317] != 0 ? 4 : 0);
  *((_QWORD *)StartContext + 58) = Timer;
  if ( Timer )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = PsCreateSystemThread(
           (PHANDLE)StartContext + 55,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)BLTQUEUE::BltQueueWorkerThread,
           StartContext);
    v10 = v7;
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(StartContext + 328, Executive, 0, 0, 0LL);
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 32) = v10;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v6, v5);
  }
  *(_QWORD *)(v13 + 24) = StartContext;
  WdLogEvent5_WdError(v13);
  return 3221225495LL;
}
