/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x180018D50
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_PlayToStreamStateChangedContext@@@Z0@Z @ 0x1800193BC (--$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(CApplicationManager *a1, int a2)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  struct CProcess **v5; // rax
  __int64 v6; // rcx
  struct CProcess **v7; // rbx
  struct CProcess *v8; // rax
  volatile signed __int32 *v9; // rsi
  struct CProcess *v10; // rbx
  struct CProcess *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  Process = 0;
  if ( a2 <= 1 )
  {
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v12);
      if ( Process >= 0 )
      {
        ProcessHeap = GetProcessHeap();
        v5 = (struct CProcess **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
        v7 = v5;
        if ( v5 )
        {
          *((_DWORD *)v5 + 2) = a2;
          v8 = v12;
          *v7 = v12;
          _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        }
        else
        {
          v7 = 0LL;
        }
        if ( v7 )
        {
          Process = QueueApplicationManagerWorkItem<_PlayToStreamStateChangedContext>(v6, v7);
          if ( Process >= 0 )
            v7 = 0LL;
        }
        else
        {
          Process = -2147024882;
        }
        if ( v7 )
        {
          v9 = (volatile signed __int32 *)*v7;
          if ( *v7 )
          {
            if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
            }
            *v7 = 0LL;
          }
          operator delete(v7, (const struct std::nothrow_t *)0x10);
        }
      }
      if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v12;
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v12 + 32LL))(v12);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)Process;
}
