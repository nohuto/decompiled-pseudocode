/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0105DD4
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C010439C (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C01055C8 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C00011F4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 Timer; // rax
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  if ( v2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 75) & 0x100) != 0 )
      StartContext[317] = 1;
  }
  else if ( StartContext[316] )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 692LL;
    WdLogEvent5_WdError(v9);
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
    v5 = PsCreateSystemThread(
           (PHANDLE)StartContext + 55,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)BLTQUEUE::BltQueueWorkerThread,
           StartContext);
    v7 = v5;
    if ( v5 >= 0 )
    {
      KeWaitForSingleObject(StartContext + 328, Executive, 0, 0, 0LL);
      return 0LL;
    }
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 32) = v7;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v4);
  }
  *(_QWORD *)(v10 + 24) = StartContext;
  WdLogEvent5_WdError(v10);
  return 3221225495LL;
}
