/*
 * XREFs of ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C003B460
 * Callers:
 *     UserProcessMITInput @ 0x1C003B0F0 (UserProcessMITInput.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003B34C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::WaitAndDispatch(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int ApcContext; // eax
  int v11; // eax
  __int64 v12; // [rsp+28h] [rbp-20h]
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  memset(a4, 0, sizeof(struct _FILE_IO_COMPLETION_INFORMATION));
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x15u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, -1073741749);
    return 3221225547LL;
  }
  result = ZwRemoveIoCompletionEx(*((_QWORD *)this + 322), a4, 1LL, v13, a2, a3);
  v9 = result;
  if ( (int)result < 0 )
  {
    LODWORD(v12) = result;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x16u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v12);
  }
  else
  {
    if ( (unsigned int)(result - 257) <= 1 )
      return result;
    ApcContext = (int)a4->ApcContext;
    if ( ApcContext )
    {
      v11 = ApcContext - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          a4->ApcContext = (PVOID)2;
        else
          return (unsigned int)-1073741823;
      }
      else
      {
        IOCPDispatcher::HandleSensorDispatcherSignal(this, (unsigned int)a4->KeyContext);
        a4->KeyContext = 0LL;
        a4->ApcContext = (PVOID)1;
      }
    }
    else
    {
      a4->ApcContext = (PVOID)3;
    }
  }
  return v9;
}
