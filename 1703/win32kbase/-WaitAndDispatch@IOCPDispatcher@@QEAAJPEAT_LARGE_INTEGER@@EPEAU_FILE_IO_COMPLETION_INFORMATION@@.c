/*
 * XREFs of ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C004C980
 * Callers:
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 * Callees:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004C868 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::WaitAndDispatch(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  int v8; // edx
  __int64 result; // rax
  int v10; // edx
  unsigned int v11; // edi
  int ApcContext; // edx
  int v13; // edx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  memset(a4, 0, sizeof(struct _FILE_IO_COMPLETION_INFORMATION));
  if ( PsIsThreadTerminating(KeGetCurrentThread()) )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(gBaseLog, v8, 2, 21, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, 75);
    return 3221225547LL;
  }
  result = ZwRemoveIoCompletionEx(*((_QWORD *)this + 322), a4, 1LL, v14, a2, a3);
  v11 = result;
  if ( (int)result < 0 )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_D(gBaseLog, v10, 2, 22, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, result);
  }
  else
  {
    if ( (unsigned int)(result - 257) <= 1 )
      return result;
    ApcContext = (int)a4->ApcContext;
    if ( ApcContext )
    {
      v13 = ApcContext - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          a4->ApcContext = (PVOID)3;
        else
          return (unsigned int)-1073741823;
      }
      else
      {
        a4->ApcContext = (PVOID)2;
      }
    }
    else
    {
      IOCPDispatcher::HandleSensorDispatcherSignal(this, (unsigned int)a4->KeyContext);
      a4->KeyContext = 0LL;
      a4->ApcContext = (PVOID)1;
    }
  }
  return v11;
}
