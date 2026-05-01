/*
 * XREFs of ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0
 * Callers:
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18008E8B8 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 * Callees:
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x18003AFEC (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x18003B870 (-_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z.c)
 *     ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x18003B8E0 (-Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18003BB20 (--B-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800835D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x18008E570 (-Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z @ 0x18009CFFC (-WaitForWork@CThread@ComTaskPool@Internal@Windows@@AEAAXK@Z.c)
 *     ?s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z @ 0x18009D074 (-s_TryRemoveThread@ComTaskPool@Internal@Windows@@CA_NPEAVCThread@123@_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z @ 0x18010F354 (-_DispatchMessage@CThread@ComTaskPool@Internal@Windows@@AEAAXPEAUtagMSG@@@Z.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180111AFC (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Windows::Internal::ComTaskPool::CThread::_ThreadProc(Windows::Internal::ComTaskPool::CThread *this)
{
  HRESULT Error; // r12d
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rbx
  LONG v5; // eax
  DWORD v6; // ebx
  HANDLE SemaphoreW; // rdi
  DWORD v8; // r14d
  IUnknown *v9; // rbx
  IUnknown *v10; // rdi
  bool v11; // al
  __int64 v12; // rcx
  IUnknown *v13; // rcx
  int *v14; // r14
  bool v15; // al
  __int64 v16; // rcx
  IUnknown *v17; // rcx
  void *v18; // rcx
  char *v19; // rbx
  bool v20; // r13
  char *v21; // rbx
  unsigned int v22; // edx
  void *v23; // rcx
  char v24; // di
  Windows::Internal::ComTaskPool::TaskData *v25; // rbx
  DWORD TickCount; // eax
  __int64 v27; // rbx
  struct Windows::Internal::ComTaskPool::TaskData *v28; // r14
  Windows::Internal::ComTaskPool::TaskData *v29; // rdi
  __int64 v30; // rax
  DWORD v31; // eax
  bool v32; // zf
  void *v33; // rcx
  struct Windows::Internal::ComTaskPool::TaskData *v34; // rcx
  char v35; // [rsp+38h] [rbp-D0h]
  DWORD v36; // [rsp+3Ch] [rbp-CCh]
  IUnknown *ppunk; // [rsp+40h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  __int64 TlsValue; // [rsp+50h] [rbp-B8h] BYREF
  IUnknown *v40; // [rsp+58h] [rbp-B0h]
  int PreviousCount[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  IUnknown *v45; // [rsp+80h] [rbp-88h]
  IUnknown *v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  tagMSG Msg; // [rsp+98h] [rbp-70h] BYREF
  WCHAR Name[264]; // [rsp+C8h] [rbp-40h] BYREF

  v47 = -2LL;
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  v40 = 0LL;
  TlsValue = 0x7FFFFFFFLL;
  Error = 0;
  if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
  {
    CurrentProcessId = GetCurrentProcessId();
    Error = StringCchPrintfW(Name, 0x104uLL, L"ComTaskPool:%d", CurrentProcessId);
    while ( Error >= 0 )
    {
      if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1 )
        break;
      v4 = OpenSemaphoreW(0x1F0003u, 0, Name);
      if ( v4 )
      {
        PreviousCount[0] = 0;
        while ( !ReleaseSemaphore(v4, 1, PreviousCount) )
        {
          if ( GetLastError() != 298 )
          {
            CloseHandle(v4);
            goto LABEL_19;
          }
        }
        WaitForSingleObject(v4, 0);
        `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = PreviousCount[0];
        CloseHandle(v4);
        continue;
      }
      if ( GetLastError() != 2 || (v5 = TlsAlloc(), v6 = v5, v5 == -1) )
      {
        Error = ResultFromKnownLastError();
      }
      else
      {
        SemaphoreW = CreateSemaphoreW(0LL, v5, v5 + 1, Name);
        if ( !SemaphoreW )
        {
          Error = ResultFromKnownLastError();
          goto LABEL_18;
        }
        if ( GetLastError() == 183 )
        {
          CloseHandle(SemaphoreW);
LABEL_18:
          TlsFree(v6);
          continue;
        }
        `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = v6;
      }
LABEL_19:
      ;
    }
  }
  v8 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  v36 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  if ( Error < 0 )
    goto LABEL_95;
  TlsSetValue(`Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool, &TlsValue);
  Error = CoInitializeEx(0LL, *((_DWORD *)this + 20) != 0 ? 2 : 0);
  if ( Error < 0 )
    goto LABEL_95;
  v9 = 0LL;
  v45 = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  ppunk = 0LL;
  Error = SHCreateThreadRef((LONG *)&TlsValue + 1, &ppunk);
  if ( Error < 0 )
    goto LABEL_29;
  v42 = 0LL;
  v11 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))ppunk->lpVtbl->QueryInterface)(
          ppunk,
          &GUID_853513c1_37ae_4cec_b347_ec9ead33065a,
          &v42) >= 0;
  *((_BYTE *)this + 120) = v11;
  if ( v11 )
    Error = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 24LL))(v42, *((_QWORD *)this + 14));
  v12 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( Error < 0 )
  {
LABEL_29:
    v13 = ppunk;
  }
  else
  {
    v10 = ppunk;
    v13 = 0LL;
    ppunk = 0LL;
    v46 = v10;
  }
  if ( v13 )
  {
    ppunk = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  if ( Error >= 0 )
  {
    v40 = v10;
    v9 = 0LL;
    v45 = 0LL;
    punk = 0LL;
    v14 = (int *)((char *)this + 92);
    Error = SHCreateThreadRef((LONG *)this + 23, &punk);
    if ( Error < 0 )
      goto LABEL_40;
    v43 = 0LL;
    v15 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))punk->lpVtbl->QueryInterface)(
            punk,
            &GUID_853513c1_37ae_4cec_b347_ec9ead33065a,
            &v43) >= 0;
    *((_BYTE *)this + 120) = v15;
    if ( v15 )
      Error = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 24LL))(v43, *((_QWORD *)this + 14));
    v16 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( Error < 0 )
    {
LABEL_40:
      v17 = punk;
    }
    else
    {
      v9 = punk;
      v17 = 0LL;
      punk = 0LL;
      v45 = v9;
    }
    if ( v17 )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v17->lpVtbl->Release)(v17);
    }
    if ( Error >= 0 )
    {
      Error = SHSetThreadRef(v9);
      if ( Error >= 0 )
      {
        LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
        *((_DWORD *)this + 13) = 0;
        v18 = (void *)*((_QWORD *)this + 7);
        if ( v18 )
          SetEvent(v18);
        v19 = (char *)*((_QWORD *)this + 8);
        if ( v19 )
        {
          Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v19 + 16);
          operator delete(v19, (const struct std::nothrow_t *)0x20);
        }
        *((_QWORD *)this + 8) = 0LL;
        *((_BYTE *)this + 96) = 0;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
        v20 = 1;
        v35 = 1;
        v21 = (char *)this + 144;
        do
        {
          if ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*(v21) != -1 )
          {
            do
            {
              while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
                Windows::Internal::ComTaskPool::CThread::_DispatchMessage(this, &Msg);
              LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24) | 0x800000) + 1;
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18));
              LODWORD(TlsValue) = (*((_DWORD *)this + 21) | (*((_DWORD *)this + 20) << 24)) + 1;
              v23 = (void *)*((_QWORD *)this + 5);
              if ( v23 )
              {
                SetEvent(v23);
                *((_QWORD *)this + 5) = 0LL;
              }
              v24 = 0;
              v44 = 0LL;
              AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
              v25 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 3);
              if ( v25 )
              {
                *((_QWORD *)this + 3) = *((_QWORD *)v25 + 3);
                *((_QWORD *)v25 + 3) = 0LL;
                if ( *((Windows::Internal::ComTaskPool::TaskData **)this + 4) == v25 )
                  *((_QWORD *)this + 4) = 0LL;
                TickCount = GetTickCount();
                Windows::Internal::ComTaskPool::CThread::SetThreadTask(
                  (__int64)this,
                  (__int64)v25,
                  TickCount,
                  0LL,
                  &v44);
                Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v25);
                v27 = v44;
              }
              else
              {
                *((_BYTE *)this + 97) = 0;
                v27 = *((_QWORD *)this + 18);
                *((_QWORD *)this + 18) = 0LL;
                v44 = v27;
                *((_BYTE *)this + 49) = 1;
                v24 = 1;
              }
              ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
              if ( v27 )
              {
                v44 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
              }
              if ( v24 )
              {
                v28 = 0LL;
                AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                *((_BYTE *)this + 49) = 0;
                v29 = Windows::Internal::ComTaskPool::s_taskFloodingList;
                if ( !Windows::Internal::ComTaskPool::s_taskFloodingList )
                  goto LABEL_69;
                Windows::Internal::ComTaskPool::s_taskFloodingList = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)Windows::Internal::ComTaskPool::s_taskFloodingList + 3);
                *((_QWORD *)v29 + 3) = 0LL;
                v30 = qword_180438B00;
                if ( (Windows::Internal::ComTaskPool::TaskData *)qword_180438B00 == v29 )
                  v30 = 0LL;
                qword_180438B00 = v30;
                if ( *((_DWORD *)v29 + 2) == *((_DWORD *)this + 34)
                  && (unsigned __int8)Windows::Internal::ComTaskPool::CThread::Eligible(
                                        this,
                                        *(unsigned int *)v29,
                                        *((unsigned int *)v29 + 1)) )
                {
                  v31 = GetTickCount();
                  Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)this, (__int64)v29, v31, 0LL, 0LL);
                  Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v29);
                }
                else
                {
LABEL_69:
                  v28 = v29;
                }
                ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                if ( v28 )
                  Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v28);
              }
            }
            while ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*((char *)this + 144) != -1 );
            v20 = v35;
            v14 = (int *)((char *)this + 92);
            v21 = (char *)this + 144;
          }
          v32 = *v14 == 1;
          if ( *v14 > 1 )
          {
            Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(this, 0xFFFFFFFF);
            v32 = *((_DWORD *)this + 23) == 1;
          }
          if ( v32 )
          {
            v20 = 1;
            v35 = 1;
            if ( *((_BYTE *)this + 48) || SHIDWORD(TlsValue) > 1 )
            {
              Windows::Internal::ComTaskPool::CThread::WaitForWork(this, v22);
            }
            else if ( Windows::Internal::ComTaskPool::s_fWaitForMoreTasks )
            {
              if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering) <= 0xA )
              {
                Windows::Internal::ComTaskPool::CThread::WaitForWork(this, v22);
                v20 = 0;
                v35 = 0;
              }
              _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsLingering);
            }
          }
        }
        while ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::operator int Microsoft::WRL::Details::BoolStruct::*(v21) != -1
             || *v14 > 1
             || SHIDWORD(TlsValue) > 1
             || !Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 0, v20) );
        SHSetThreadRef(0LL);
        v40 = 0LL;
        LODWORD(TlsValue) = 0x7FFFFFFF;
        v10 = v46;
        v9 = v45;
      }
    }
    v8 = v36;
  }
  CoUninitialize();
  if ( v9 )
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v10 )
    ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
  if ( Error < 0 )
  {
LABEL_95:
    *((_DWORD *)this + 13) = Error;
    v33 = (void *)*((_QWORD *)this + 7);
    if ( v33 )
      SetEvent(v33);
    v34 = (struct Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 8);
    if ( v34 )
    {
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v34);
      *((_QWORD *)this + 8) = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
    Windows::Internal::ComTaskPool::s_TryRemoveThread(this, 1, 0);
    Windows::Internal::ComTaskPool::TaskList::Clear((Windows::Internal::ComTaskPool::CThread *)((char *)this + 24));
  }
  if ( v8 != -1 )
    TlsSetValue(v8, 0LL);
}
