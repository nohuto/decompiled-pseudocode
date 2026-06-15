/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180038440
 * Callers:
 *     <none>
 * Callees:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180025B90 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180025BF0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ?Invoke@ARM_EVENT@@UEAAXXZ @ 0x180045020 (-Invoke@ARM_EVENT@@UEAAXXZ.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  SESSION_EVENT *v2; // rbx
  void (__fastcall *v3)(SESSION_EVENT *); // rax
  SESSION_EVENT *(__fastcall *v4)(SESSION_EVENT *, char); // rax
  CVolumeStrip *v5; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
        v5 = WPP_GLOBAL_Control;
      }
      if ( v5 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v5 + 28) & 0x10) != 0 && *((_BYTE *)v5 + 25) >= 2u )
        WPP_SF_d(*((_QWORD *)v5 + 2), 18LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v1);
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
      v2 = (SESSION_EVENT *)CompletionKey;
      v3 = **(void (__fastcall ***)(SESSION_EVENT *))CompletionKey;
      if ( v3 == SESSION_EVENT::Invoke )
      {
        SESSION_EVENT::Invoke((SESSION_EVENT *)CompletionKey);
      }
      else if ( v3 == ARM_EVENT::Invoke )
      {
        ARM_EVENT::Invoke((ARM_EVENT *)CompletionKey);
      }
      else
      {
        v3((SESSION_EVENT *)CompletionKey);
      }
      v4 = *(SESSION_EVENT *(__fastcall **)(SESSION_EVENT *, char))(*(_QWORD *)v2 + 8LL);
      if ( v4 == SESSION_EVENT::`scalar deleting destructor' )
      {
        SESSION_EVENT::`scalar deleting destructor'(v2, 1);
      }
      else if ( (char *)v4 == (char *)ARM_EVENT::`scalar deleting destructor' )
      {
        ARM_EVENT::`scalar deleting destructor'(v2, 1u);
      }
      else
      {
        v4(v2, 1);
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 16LL))(*(_QWORD *)&g_DeviceEnumerator);
    CoUninitialize();
    return 0LL;
  }
}
