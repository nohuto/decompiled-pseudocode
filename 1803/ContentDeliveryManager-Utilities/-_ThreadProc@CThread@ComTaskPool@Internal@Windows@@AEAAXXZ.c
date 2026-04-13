/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800054DC
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180005200 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x180005250 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x18000535C (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x1800053FC (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800061A8 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180006234 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z @ 0x180006420 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800064F4 (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  int TaskPoolTlsSlot; // r14d
  IUnknown *v3; // rbx
  struct IUnknown *v4; // rdi
  int *v5; // r15
  void *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  bool v9; // di
  void *v10; // rcx
  bool v11; // zf
  ULONGLONG TickCount64; // rax
  ULONGLONG v13; // rbx
  ULONGLONG v14; // rax
  ULONGLONG v15; // rbx
  ULONGLONG v16; // rax
  ULONGLONG v17; // rbx
  void *v18; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  DWORD dwTlsIndex; // [rsp+38h] [rbp-29h] BYREF
  __int64 TlsValue; // [rsp+40h] [rbp-21h] BYREF
  struct IUnknown *v24; // [rsp+48h] [rbp-19h]
  IUnknown *punk; // [rsp+50h] [rbp-11h] BYREF
  struct IUnknown *v26[2]; // [rsp+58h] [rbp-9h] BYREF
  MSG Msg; // [rsp+68h] [rbp+7h] BYREF

  v26[1] = (struct IUnknown *)-2LL;
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  v24 = 0LL;
  TlsValue = 0x7FFFFFFFLL;
  dwTlsIndex = -1;
  if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
  {
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex);
  }
  else
  {
    dwTlsIndex = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
    TaskPoolTlsSlot = 0;
  }
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_55;
  TlsSetValue(dwTlsIndex, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_55;
  v26[0] = 0LL;
  v3 = 0LL;
  punk = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, v26);
  v4 = v26[0];
  if ( TaskPoolTlsSlot >= 0 )
  {
    v24 = v26[0];
    v5 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, &punk);
    v3 = punk;
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk);
      if ( TaskPoolTlsSlot >= 0 )
      {
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
        *((_DWORD *)this + 13) = 0;
        v6 = (void *)*((_QWORD *)this + 7);
        if ( v6 )
          SetEvent(v6);
        v7 = (_QWORD *)*((_QWORD *)this + 8);
        if ( v7 )
        {
          v8 = v7[2];
          if ( v8 )
          {
            v7[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
          operator delete(v7);
        }
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        v9 = 1;
        do
        {
          while ( 1 )
          {
            if ( !*((_QWORD *)this + 18) )
            {
              v11 = *v5 == 1;
              if ( *v5 > 1 )
              {
                Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, 0xFFFFFFFF);
                v11 = *((_DWORD *)this + 23) == 1;
              }
              if ( v11 )
              {
                v9 = 1;
                if ( *((_BYTE *)this + 48) )
                {
                  TickCount64 = GetTickCount64();
                  v13 = TickCount64 + 30000;
                  while ( !*((_QWORD *)this + 18) && TickCount64 < v13 )
                  {
                    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(
                      (const HANDLE *)this,
                      v13 - TickCount64);
                    TickCount64 = GetTickCount64();
                  }
                }
                else if ( SHIDWORD(TlsValue) <= 1 )
                {
                  if ( Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
                  {
                    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering) <= 0xA )
                    {
                      v16 = GetTickCount64();
                      v17 = v16 + 30000;
                      while ( !*((_QWORD *)this + 18) && v16 < v17 )
                      {
                        Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v17 - v16);
                        v16 = GetTickCount64();
                      }
                      v9 = 0;
                    }
                    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering);
                  }
                }
                else
                {
                  v14 = GetTickCount64();
                  v15 = v14 + 30000;
                  while ( !*((_QWORD *)this + 18) && v14 < v15 )
                  {
                    Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v15 - v14);
                    v14 = GetTickCount64();
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
            v10 = (void *)*((_QWORD *)this + 5);
            if ( v10 )
            {
              SetEvent(v10);
              *((_QWORD *)this + 5) = 0LL;
            }
            Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(this);
          }
        }
        while ( *v5 > 1 || SHIDWORD(TlsValue) > 1 || !Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0, v9) );
        SHSetThreadRef(0LL);
        v24 = 0LL;
        LODWORD(TlsValue) = 0x7FFFFFFF;
        v4 = v26[0];
        v3 = punk;
      }
    }
  }
  CoUninitialize();
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_55:
    *((_DWORD *)this + 13) = TaskPoolTlsSlot;
    v18 = (void *)*((_QWORD *)this + 7);
    if ( v18 )
      SetEvent(v18);
    v19 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v19 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v19);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1, 0);
    while ( 1 )
    {
      v21 = (_QWORD *)*((_QWORD *)this + 3);
      if ( !v21 )
        break;
      *((_QWORD *)this + 3) = v21[3];
      v21[3] = 0LL;
      if ( *((_QWORD **)this + 4) == v21 )
        *((_QWORD *)this + 4) = 0LL;
      v20 = v21[2];
      if ( v20 )
      {
        v21[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      operator delete(v21);
    }
  }
  if ( dwTlsIndex != -1 )
    TlsSetValue(dwTlsIndex, 0LL);
}
