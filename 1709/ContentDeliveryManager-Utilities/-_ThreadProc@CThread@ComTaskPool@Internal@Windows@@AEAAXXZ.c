/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000522C
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180004F50 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x180004FA0 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180004B70 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x1800050AC (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x18000514C (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180005FA4 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z @ 0x180006030 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800060EC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  int TaskPoolTlsSlot; // r14d
  IUnknown *v3; // rbx
  struct IUnknown *v4; // rdi
  int *v5; // r15
  void *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  void *v9; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v10; // rdi
  struct Windows::Internal::ComTaskPool::TaskData *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  DWORD v14; // eax
  __int64 v15; // rcx
  bool v16; // zf
  DWORD TickCount; // eax
  DWORD v18; // ebx
  void *v19; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v20; // rcx
  struct Windows::Internal::ComTaskPool::CThread **v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  DWORD dwTlsIndex; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  __int64 TlsValue; // [rsp+48h] [rbp-29h] BYREF
  struct IUnknown *v27; // [rsp+50h] [rbp-21h]
  IUnknown *punk; // [rsp+58h] [rbp-19h] BYREF
  struct IUnknown *v29[2]; // [rsp+60h] [rbp-11h] BYREF
  MSG Msg; // [rsp+70h] [rbp-1h] BYREF

  v29[1] = (struct IUnknown *)-2LL;
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  v27 = 0LL;
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
    goto LABEL_62;
  TlsSetValue(dwTlsIndex, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_62;
  v29[0] = 0LL;
  v3 = 0LL;
  punk = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, v29);
  v4 = v29[0];
  if ( TaskPoolTlsSlot >= 0 )
  {
    v27 = v29[0];
    v5 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, &punk);
    v3 = punk;
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk);
      if ( TaskPoolTlsSlot >= 0 )
      {
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
        *((_DWORD *)this + 12) = 0;
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
        while ( 1 )
        {
          while ( !*((_QWORD *)this + 18) )
          {
            v16 = *v5 == 1;
            if ( *v5 > 1 )
            {
              Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, 0xFFFFFFFF);
              v16 = *v5 == 1;
            }
            if ( v16 && Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
            {
              TickCount = GetTickCount();
              v18 = TickCount + 30000;
              while ( !*((_QWORD *)this + 18) && TickCount < v18 )
              {
                Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate((const HANDLE *)this, v18 - TickCount);
                TickCount = GetTickCount();
              }
            }
            if ( *((_QWORD *)this + 18) )
              break;
            if ( *v5 <= 1 && SHIDWORD(TlsValue) <= 1 && Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0) )
            {
              SHSetThreadRef(0LL);
              v27 = 0LL;
              LODWORD(TlsValue) = 0x7FFFFFFF;
              v4 = v29[0];
              v3 = punk;
              goto LABEL_57;
            }
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
          v9 = (void *)*((_QWORD *)this + 5);
          if ( v9 )
          {
            SetEvent(v9);
            *((_QWORD *)this + 5) = 0LL;
          }
          v10 = 0LL;
          v25 = 0LL;
          AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
          v11 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 3);
          if ( v11 )
          {
            *((_QWORD *)this + 3) = *((_QWORD *)v11 + 3);
            *((_QWORD *)v11 + 3) = 0LL;
            if ( *((struct Windows::Internal::ComTaskPool::TaskData **)this + 4) == v11 )
              *((_QWORD *)this + 4) = 0LL;
          }
          else
          {
            v11 = (struct Windows::Internal::ComTaskPool::TaskData *)Windows::Internal::ComTaskPool::s_taskFloodingList;
            if ( !Windows::Internal::ComTaskPool::s_taskFloodingList )
              goto LABEL_35;
            Windows::Internal::ComTaskPool::s_taskFloodingList = *(_QWORD *)(Windows::Internal::ComTaskPool::s_taskFloodingList
                                                                           + 24LL);
            *((_QWORD *)v11 + 3) = 0LL;
            v12 = qword_18015DDE8;
            if ( (struct Windows::Internal::ComTaskPool::TaskData *)qword_18015DDE8 == v11 )
              v12 = 0LL;
            qword_18015DDE8 = v12;
            if ( !v11 )
              goto LABEL_35;
            if ( *((_DWORD *)v11 + 2) != *((_DWORD *)this + 34)
              || *(_DWORD *)v11 != *((_DWORD *)this + 20) && *(_DWORD *)v11 != 3
              || ((*((_BYTE *)this + 84) ^ *((_BYTE *)v11 + 4)) & 9) != 0
              || *((int *)this + 12) < 0 )
            {
              v10 = v11;
              v11 = 0LL;
            }
            if ( !v11 )
            {
LABEL_35:
              *((_BYTE *)this + 97) = 0;
              v13 = *((_QWORD *)this + 18);
              *((_QWORD *)this + 18) = 0LL;
              v25 = v13;
              goto LABEL_39;
            }
          }
          v14 = GetTickCount();
          Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)this, (__int64)v11, v14, 0LL, &v25);
          v15 = *((_QWORD *)v11 + 2);
          if ( v15 )
          {
            *((_QWORD *)v11 + 2) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          operator delete(v11);
          v13 = v25;
LABEL_39:
          ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
          if ( v13 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          if ( v10 )
            Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v10);
        }
      }
    }
  }
LABEL_57:
  CoUninitialize();
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_62:
    *((_DWORD *)this + 12) = TaskPoolTlsSlot;
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
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    v21 = &Windows::Internal::ComTaskPool::s_pThreadList;
    if ( Windows::Internal::ComTaskPool::s_pThreadList != this )
    {
      do
        v21 = (struct Windows::Internal::ComTaskPool::CThread **)((char *)*v21 + 16);
      while ( *v21 != this );
    }
    *v21 = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)this + 16LL))(this);
    if ( !Windows::Internal::ComTaskPool::s_pThreadList && Windows::Internal::ComTaskPool::s_hEventCache )
    {
      CloseHandle(Windows::Internal::ComTaskPool::s_hEventCache);
      Windows::Internal::ComTaskPool::s_hEventCache = 0LL;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    while ( 1 )
    {
      v23 = (_QWORD *)*((_QWORD *)this + 3);
      if ( !v23 )
        break;
      *((_QWORD *)this + 3) = v23[3];
      v23[3] = 0LL;
      if ( *((_QWORD **)this + 4) == v23 )
        *((_QWORD *)this + 4) = 0LL;
      v22 = v23[2];
      if ( v22 )
      {
        v23[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      operator delete(v23);
    }
  }
  if ( dwTlsIndex != -1 )
    TlsSetValue(dwTlsIndex, 0LL);
}
