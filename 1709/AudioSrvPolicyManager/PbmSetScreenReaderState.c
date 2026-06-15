/*
 * XREFs of PbmSetScreenReaderState @ 0x180019140
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUScreenReaderStateChangedContext@@@Z0@Z @ 0x18001955C (--$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetScreenReaderState(CApplicationManager *a1, int a2, int a3)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 **v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 **v9; // rbx
  struct CProcess *v10; // rax
  volatile signed __int32 *v11; // rsi
  struct CProcess *v12; // rbx
  struct CProcess *v14; // [rsp+20h] [rbp-28h] BYREF

  Process = 0;
  v14 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v14);
    if ( Process >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v7 = (volatile signed __int32 **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v9 = v7;
      if ( v7 )
      {
        *((_DWORD *)v7 + 2) = a2;
        *((_DWORD *)v7 + 3) = a3;
        v10 = v14;
        *v9 = (volatile signed __int32 *)v14;
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 )
      {
        Process = QueueApplicationManagerWorkItem<ScreenReaderStateChangedContext>(v8, v9);
        if ( Process >= 0 )
          v9 = 0LL;
      }
      else
      {
        Process = -2147024882;
      }
      if ( v9 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
          }
          *v9 = 0LL;
        }
        operator delete(v9, (const struct std::nothrow_t *)0x10);
      }
    }
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = v14;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v14 + 32LL))(v14);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
    }
  }
  return (unsigned int)Process;
}
