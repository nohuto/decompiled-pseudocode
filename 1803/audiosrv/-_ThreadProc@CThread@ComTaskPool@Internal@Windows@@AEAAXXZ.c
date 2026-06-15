/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180112454
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x180112B70 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z @ 0x180065468 (-WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z @ 0x1800654B0 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18010F590 (--B-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18010FB64 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x18010FF0C (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x180112284 (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x180112340 (-_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x180112738 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180112954 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180112A20 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180112BBC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  DWORD CurrentThreadId; // eax
  int TaskPoolTlsSlot; // edi
  DWORD v4; // esi
  int *v5; // r14
  int v6; // eax
  void *v7; // rcx
  Windows::Internal::ComTaskPool::TaskData *v8; // rcx
  char v9; // r15
  __int64 v10; // rcx
  void *v11; // rcx
  bool v12; // zf
  void *v13; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v14; // rcx
  __int64 TlsValue; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v16; // [rsp+38h] [rbp-38h]
  tagMSG Msg; // [rsp+40h] [rbp-30h] BYREF
  DWORD dwTlsIndex; // [rsp+B0h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+B8h] [rbp+48h] BYREF
  struct IUnknown *v20; // [rsp+C0h] [rbp+50h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  dwTlsIndex = -1;
  *((_DWORD *)this + 22) = CurrentThreadId;
  TlsValue = 0x7FFFFFFFLL;
  v16 = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_33;
  v4 = dwTlsIndex;
  TlsSetValue(dwTlsIndex, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_33;
  v20 = 0LL;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, &v20);
  if ( TaskPoolTlsSlot >= 0 )
  {
    v16 = v20;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v5 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, &punk);
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk);
      if ( TaskPoolTlsSlot >= 0 )
      {
        v6 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 13) = 0;
        v7 = (void *)*((_QWORD *)this + 7);
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (v6 << 24)) + 1;
        if ( v7 )
          SetEvent(v7);
        v8 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
        if ( v8 )
          Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v8);
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        v9 = 1;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        do
        {
          while ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*((_QWORD *)this + 18) != -1 )
          {
            while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
              Windows::Internal::ComTaskPool::CThread::_DispatchMessage(this, &Msg);
            v10 = *((_QWORD *)this + 18);
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24) | 0x800000) + 1;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
            v11 = (void *)*((_QWORD *)this + 5);
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
            if ( v11 )
            {
              SetEvent(v11);
              *((_QWORD *)this + 5) = 0LL;
            }
            Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(this);
          }
          v12 = *v5 == 1;
          if ( *v5 > 1 )
          {
            Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, 0xFFFFFFFF);
            v12 = *v5 == 1;
          }
          if ( v12 )
          {
            v9 = 1;
            if ( *((_BYTE *)this + 48) || SHIDWORD(TlsValue) > 1 )
            {
              Windows::Internal::ComTaskPool::CThread::WaitForWork(this);
            }
            else if ( Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
            {
              if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering) <= 0xA )
              {
                Windows::Internal::ComTaskPool::CThread::WaitForWork(this);
                v9 = 0;
              }
              _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering);
            }
          }
        }
        while ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*((_QWORD *)this + 18) != -1
             || *v5 > 1
             || SHIDWORD(TlsValue) > 1
             || !Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0, v9) );
        SHSetThreadRef(0LL);
        v16 = 0LL;
        v4 = dwTlsIndex;
        LODWORD(TlsValue) = 0x7FFFFFFF;
      }
    }
  }
  CoUninitialize();
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_33:
    v13 = (void *)*((_QWORD *)this + 7);
    *((_DWORD *)this + 13) = TaskPoolTlsSlot;
    if ( v13 )
      SetEvent(v13);
    v14 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v14 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v14);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1, 0);
    Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::CThread *)((char *)this + 24));
    v4 = dwTlsIndex;
  }
  if ( v4 != -1 )
    TlsSetValue(v4, 0LL);
}
