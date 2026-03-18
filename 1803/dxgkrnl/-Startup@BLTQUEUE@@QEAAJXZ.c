/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01D7144
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01BC3F0 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C01D4B14 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0036A1C (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 v3; // rax
  __int64 Timer; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  if ( v2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 75) & 0x100) != 0 )
      StartContext[317] = 1;
  }
  else if ( StartContext[316] )
  {
    v3 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v3 + 24) = 694LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  Timer = ExAllocateTimer(0LL, 0LL, StartContext[317] != 0 ? 4 : 0);
  *((_QWORD *)StartContext + 58) = Timer;
  if ( !Timer )
  {
    v7 = WdLogNewEntry5_WdError(v6);
LABEL_8:
    *(_QWORD *)(v7 + 24) = StartContext;
    WdLogEvent5_WdError(v7);
    return 3221225495LL;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = PsCreateSystemThread(
         (PHANDLE)StartContext + 55,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)BLTQUEUE::BltQueueWorkerThread,
         StartContext);
  v10 = v8;
  if ( v8 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v7 + 32) = v10;
    goto LABEL_8;
  }
  KeWaitForSingleObject(StartContext + 328, Executive, 0, 0, 0LL);
  return 0LL;
}
