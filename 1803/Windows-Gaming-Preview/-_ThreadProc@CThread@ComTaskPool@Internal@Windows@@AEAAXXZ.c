/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180024C8C
 * Callers:
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800243C0 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18002508C (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 * Callees:
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x18002461C (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x1800247B8 (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180024898 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x180024A8C (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180024B2C (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z @ 0x180024BB8 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800258FC (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  DWORD v2; // r14d
  int TaskPoolTlsSlot; // r15d
  IUnknown *v4; // rbx
  struct IUnknown *v5; // rdi
  int *v6; // r12
  void *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  char v10; // di
  void *v11; // rcx
  bool v12; // zf
  ULONGLONG TickCount64; // rax
  ULONGLONG v14; // rbx
  ULONGLONG v15; // rax
  ULONGLONG v16; // rbx
  ULONGLONG v17; // rax
  ULONGLONG v18; // rbx
  void *v19; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v20; // rcx
  DWORD dwTlsIndex; // [rsp+38h] [rbp-29h] BYREF
  __int64 TlsValue; // [rsp+40h] [rbp-21h] BYREF
  struct IUnknown *v23; // [rsp+48h] [rbp-19h]
  IUnknown *punk; // [rsp+50h] [rbp-11h] BYREF
  struct IUnknown *v25[2]; // [rsp+58h] [rbp-9h] BYREF
  MSG Msg; // [rsp+68h] [rbp+7h] BYREF

  v25[1] = (struct IUnknown *)-2LL;
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  v23 = 0LL;
  TlsValue = 0x7FFFFFFFLL;
  dwTlsIndex = -1;
  v2 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
  {
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex);
    v2 = dwTlsIndex;
  }
  else
  {
    dwTlsIndex = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
    TaskPoolTlsSlot = 0;
  }
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_55;
  TlsSetValue(v2, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_55;
  v25[0] = 0LL;
  v4 = 0LL;
  punk = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, v25);
  v5 = v25[0];
  if ( TaskPoolTlsSlot >= 0 )
  {
    v23 = v25[0];
    v6 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, &punk);
    v4 = punk;
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk);
      if ( TaskPoolTlsSlot >= 0 )
      {
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
        *((_DWORD *)this + 13) = 0;
        v7 = (void *)*((_QWORD *)this + 7);
        if ( v7 )
          SetEvent(v7);
        v8 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v8 )
        {
          v9 = v8[2];
          if ( v9 )
          {
            v8[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          operator delete(v8);
        }
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        v10 = 1;
        do
        {
          while ( 1 )
          {
            if ( !*((_QWORD *)this + 18) )
            {
              v12 = *v6 == 1;
              if ( *v6 > 1 )
              {
                Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, 0xFFFFFFFF);
                v12 = *((_DWORD *)this + 23) == 1;
              }
              if ( v12 )
              {
                v10 = 1;
                if ( *((_BYTE *)this + 48) )
                {
                  TickCount64 = GetTickCount64();
                  v14 = TickCount64 + 30000;
                  while ( !*((_QWORD *)this + 18) && TickCount64 < v14 )
                  {
                    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(
                      (const HANDLE *)this,
                      v14 - TickCount64);
                    TickCount64 = GetTickCount64();
                  }
                }
                else if ( SHIDWORD(TlsValue) <= 1 )
                {
                  if ( Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
                  {
                    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering) <= 0xA )
                    {
                      v17 = GetTickCount64();
                      v18 = v17 + 30000;
                      while ( !*((_QWORD *)this + 18) && v17 < v18 )
                      {
                        Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v18 - v17);
                        v17 = GetTickCount64();
                      }
                      v10 = 0;
                    }
                    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering);
                  }
                }
                else
                {
                  v15 = GetTickCount64();
                  v16 = v15 + 30000;
                  while ( !*((_QWORD *)this + 18) && v15 < v16 )
                  {
                    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v16 - v15);
                    v15 = GetTickCount64();
                  }
                }
              }
              if ( !*((_QWORD *)this + 18) )
                break;
            }
            while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
            {
              *((_BYTE *)this + 96) = 1;
              TranslateMessage(&Msg);
              DispatchMessageW(&Msg);
              *((_BYTE *)this + 96) = 0;
            }
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24) | 0x800000) + 1;
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18));
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
            v11 = (void *)*((_QWORD *)this + 5);
            if ( v11 )
            {
              SetEvent(v11);
              *((_QWORD *)this + 5) = 0LL;
            }
            Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(this);
          }
        }
        while ( *v6 > 1 || SHIDWORD(TlsValue) > 1 || !Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0, v10) );
        SHSetThreadRef(0LL);
        v23 = 0LL;
        LODWORD(TlsValue) = 0x7FFFFFFF;
        v2 = dwTlsIndex;
        v5 = v25[0];
        v4 = punk;
      }
    }
  }
  CoUninitialize();
  if ( v4 )
    ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_55:
    *((_DWORD *)this + 13) = TaskPoolTlsSlot;
    v19 = (void *)*((_QWORD *)this + 7);
    if ( v19 )
      SetEvent(v19);
    v20 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v20 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v20);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1, 0);
    Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::CThread *)((char *)this + 24));
    v2 = dwTlsIndex;
  }
  if ( v2 != -1 )
    TlsSetValue(v2, 0LL);
}
