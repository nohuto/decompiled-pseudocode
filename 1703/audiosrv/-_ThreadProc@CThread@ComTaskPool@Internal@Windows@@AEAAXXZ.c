/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800D7B44
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x1800D825C (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x1800D53F4 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800D56E8 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x1800D7974 (-_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x1800D7A30 (-_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x1800D7E04 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800D8084 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x1800D8150 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800D82A8 (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z @ 0x1800D8AB8 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N@Z.c)
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
  bool v9; // zf
  DWORD TickCount; // eax
  DWORD v11; // esi
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v15; // rcx
  __int64 TlsValue; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v17; // [rsp+38h] [rbp-38h]
  tagMSG Msg; // [rsp+40h] [rbp-30h] BYREF
  DWORD dwTlsIndex; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+A8h] [rbp+38h] BYREF
  struct IUnknown *v21; // [rsp+B0h] [rbp+40h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  dwTlsIndex = -1;
  *((_DWORD *)this + 22) = CurrentThreadId;
  TlsValue = 0x7FFFFFFFLL;
  v17 = 0LL;
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_31;
  v4 = dwTlsIndex;
  TlsSetValue(dwTlsIndex, &TlsValue);
  TaskPoolTlsSlot = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( TaskPoolTlsSlot < 0 )
    goto LABEL_31;
  v21 = 0LL;
  punk = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
  TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)&TlsValue + 1, &v21);
  if ( TaskPoolTlsSlot >= 0 )
  {
    v17 = v21;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&punk);
    v5 = (int *)((char *)this + 92);
    TaskPoolTlsSlot = Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(this, (int *)this + 23, &punk);
    if ( TaskPoolTlsSlot >= 0 )
    {
      TaskPoolTlsSlot = SHSetThreadRef(punk);
      if ( TaskPoolTlsSlot >= 0 )
      {
        v6 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 12) = 0;
        v7 = (void *)*((_QWORD *)this + 7);
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (v6 << 24)) + 1;
        if ( v7 )
          SetEvent(v7);
        v8 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
        if ( v8 )
          Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v8);
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        while ( 1 )
        {
          if ( *((_QWORD *)this + 18) )
            goto LABEL_21;
          v9 = *v5 == 1;
          if ( *v5 > 1 )
          {
            Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, 0xFFFFFFFF);
            v9 = *v5 == 1;
          }
          if ( v9 && Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
          {
            TickCount = GetTickCount();
            v11 = TickCount + 30000;
            while ( !*((_QWORD *)this + 18) )
            {
              if ( TickCount >= v11 )
                goto LABEL_25;
              Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, v11 - TickCount);
              TickCount = GetTickCount();
            }
LABEL_21:
            while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
              Windows::Internal::ComTaskPool::CThread::_DispatchMessage(this, &Msg);
            v12 = *((_QWORD *)this + 18);
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24) | 0x800000) + 1;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
            v13 = (void *)*((_QWORD *)this + 5);
            LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
            if ( v13 )
            {
              SetEvent(v13);
              *((_QWORD *)this + 5) = 0LL;
            }
            Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(this);
          }
          else
          {
LABEL_25:
            if ( *((_QWORD *)this + 18) )
              goto LABEL_21;
            if ( *v5 <= 1 && SHIDWORD(TlsValue) <= 1 && Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0) )
            {
              SHSetThreadRef(0LL);
              v17 = 0LL;
              v4 = dwTlsIndex;
              LODWORD(TlsValue) = 0x7FFFFFFF;
              break;
            }
          }
        }
      }
    }
  }
  CoUninitialize();
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&punk);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
  if ( TaskPoolTlsSlot < 0 )
  {
LABEL_31:
    v14 = (void *)*((_QWORD *)this + 7);
    *((_DWORD *)this + 12) = TaskPoolTlsSlot;
    if ( v14 )
      SetEvent(v14);
    v15 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v15 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v15);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1);
    Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::CThread *)((char *)this + 24));
    v4 = dwTlsIndex;
  }
  if ( v4 != -1 )
    TlsSetValue(v4, 0LL);
}
