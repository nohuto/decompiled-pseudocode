/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C01245C0
 * Callers:
 *     UserProcessMITInput @ 0x1C01311BC (UserProcessMITInput.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  memset(a4, 0, sizeof(struct _FILE_IO_COMPLETION_INFORMATION));
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    v9 = -1073741749;
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0x16u,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
      v9);
    return 3221225547LL;
  }
  else
  {
    v10 = a3;
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 343), a4, 1LL, v11, a2, v10);
  }
}
