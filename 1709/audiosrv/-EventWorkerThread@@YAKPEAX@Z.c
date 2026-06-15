/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180059F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x18000C5F0 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0 (--_EGENERIC_EVENT@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  CAudioDGProcess *v2; // rcx
  GENERIC_EVENT *v4; // rbx
  void (__fastcall *v5)(ARM_EVENT *); // rax
  GENERIC_EVENT *(__fastcall *v6)(GENERIC_EVENT *, char); // rax
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
        v2 = WPP_GLOBAL_Control;
      }
      if ( v2 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v2 + 28) & 0x10) != 0
        && *((_BYTE *)v2 + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)v2 + 2), 18LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v1);
      }
    }
    return v1;
  }
  else
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
      v4 = (GENERIC_EVENT *)CompletionKey;
      v5 = **(void (__fastcall ***)(ARM_EVENT *))CompletionKey;
      if ( v5 == ARM_EVENT::Invoke )
        ARM_EVENT::Invoke((ARM_EVENT *)CompletionKey);
      else
        v5((ARM_EVENT *)CompletionKey);
      v6 = *(GENERIC_EVENT *(__fastcall **)(GENERIC_EVENT *, char))(*(_QWORD *)v4 + 8LL);
      if ( v6 == GENERIC_EVENT::`vector deleting destructor' )
        GENERIC_EVENT::`vector deleting destructor'(v4, 1);
      else
        v6(v4, 1);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0LL;
  }
}
