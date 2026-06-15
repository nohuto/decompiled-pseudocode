/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x18005F070
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180008A10 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180008A70 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall EventWorkerThread(PVOID Parameter)
{
  HRESULT result; // eax
  void **v2; // rbx
  void (__fastcall *v3)(SESSION_EVENT *); // rax
  void **(__fastcall *v4)(void **, char); // rax
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  result = CoInitializeEx(0LL, 0);
  if ( !result )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 8LL))(*(_QWORD *)&g_DeviceEnumerator);
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v2 = (void **)CompletionKey;
      v3 = **(void (__fastcall ***)(SESSION_EVENT *))CompletionKey;
      if ( v3 == SESSION_EVENT::Invoke )
        SESSION_EVENT::Invoke((SESSION_EVENT *)CompletionKey);
      else
        v3((SESSION_EVENT *)CompletionKey);
      v4 = (void **(__fastcall *)(void **, char))*((_QWORD *)*v2 + 1);
      if ( v4 == SESSION_EVENT::`scalar deleting destructor' )
        SESSION_EVENT::`scalar deleting destructor'(v2, 1);
      else
        v4(v2, 1);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0;
  }
  return result;
}
