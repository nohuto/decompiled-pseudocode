/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180046490
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18003B964 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800F77A4 (--0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPool.c)
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x1800F77E0 (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180105974 (-CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
        HMODULE a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        _QWORD *a6,
        HMODULE **a7)
{
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  HMODULE v10; // rax
  PVOID *v11; // rdi
  HMODULE **v12; // r12
  int started; // esi
  _QWORD *v14; // rbx
  DWORD TickCount; // eax
  __int64 v16; // rdx
  PVOID *v17; // rcx
  PVOID *v18; // r12
  PVOID *v19; // rbx
  HMODULE *v20; // rbx
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  _DWORD *v23; // rcx
  HMODULE v24; // rdi
  HMODULE v25; // rcx
  DWORD v26; // edi
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned int *v30; // rax
  unsigned int *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  HMODULE Event; // rax
  HMODULE v38; // rax
  HANDLE v39; // rax
  HMODULE *v40; // rax
  void *v41; // rbx
  PVOID v42; // rcx
  DWORD v43; // ebx
  bool v45; // [rsp+30h] [rbp-D0h]
  DWORD v46; // [rsp+34h] [rbp-CCh]
  char lpParameter; // [rsp+38h] [rbp-C8h]
  HMODULE *lpParametera; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  PVOID *v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  void *v55[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-78h]
  unsigned int v57; // [rsp+8Ch] [rbp-74h]
  unsigned int v58; // [rsp+90h] [rbp-70h]
  void *v59[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v60; // [rsp+A8h] [rbp-58h]
  unsigned int v61; // [rsp+ACh] [rbp-54h]
  unsigned int v62; // [rsp+B0h] [rbp-50h]
  void *v63[3]; // [rsp+B8h] [rbp-48h] BYREF
  char v64[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-20h]
  char v66[16]; // [rsp+F0h] [rbp-10h] BYREF
  void *v67; // [rsp+100h] [rbp+0h] BYREF
  DWORD ThreadId; // [rsp+160h] [rbp+60h] BYREF

  v63[2] = (void *)-2LL;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  v12 = a7;
  *a7 = 0LL;
  started = 0;
  v50 = a3 & 2;
  if ( (a3 & 2) == 0 || (v14 = Windows::Internal::ComTaskPool::s_pThreadList) == 0LL )
  {
LABEL_11:
    if ( (a3 & 0x13) != 0 || (LOBYTE(ThreadId) = 1, v10) )
      LOBYTE(ThreadId) = 0;
    v49 = a3 & 4;
    lpParameter = a3 & 1;
    v54 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    TickCount = GetTickCount();
    v16 = TickCount;
    v46 = TickCount;
    v45 = (v8 & 0x200) != 0;
    v17 = 0LL;
    v51 = 0LL;
    v18 = &Windows::Internal::ComTaskPool::s_pThreadList;
    v19 = (PVOID *)Windows::Internal::ComTaskPool::s_pThreadList;
    if ( Windows::Internal::ComTaskPool::s_pThreadList )
    {
      v45 = (v8 & 0x200) != 0;
      while ( 1 )
      {
        v11 = v19;
        if ( (v9 == *((_DWORD *)v19 + 20) || v9 == 3)
          && (((unsigned __int8)v8 ^ *((_BYTE *)v19 + 84)) & 9) == 0
          && *((int *)v19 + 13) >= 0
          && !*((_BYTE *)v19 + 49) )
        {
          if ( v19[18] || *((_BYTE *)v19 + 96) )
          {
            v45 = 1;
            if ( !v17 || *((_BYTE *)v19 + 48) )
              v51 = v19;
            if ( *((_DWORD *)v19 + 34) == v7 )
            {
              if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads
                && Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *((_DWORD *)v19 + 22) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !v19[3] && !a1 && *((int *)v19 + 23) <= 1 )
                {
                  v34 = Windows::Internal::ComTaskPool::TaskData::TaskData(v66, v9, v8, v7, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack(v19 + 3, v34);
                  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v67);
                  if ( started >= 0 )
                    Windows::Internal::ComTaskPool::CThread::CheckForDeadlock(v19);
                  return (unsigned int)started;
                }
              }
              if ( (_BYTE)ThreadId )
              {
                v33 = v53 + 1;
                if ( (unsigned int)(v16 - *((_DWORD *)v19 + 40)) >= 0xBB8 )
                  v33 = v53;
                v53 = v33;
                if ( (unsigned __int64)++v54 >= 0x64 || v33 >= 8 )
                {
                  v35 = Windows::Internal::ComTaskPool::TaskData::TaskData(v64, v9, v8, v7, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                              &Windows::Internal::ComTaskPool::s_taskFloodingList,
                              v35);
                  v36 = v65;
                  if ( v65 )
                  {
                    v65 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                  }
                  return (unsigned int)started;
                }
                v16 = TickCount;
              }
            }
          }
          else
          {
            if ( *((int *)v19 + 23) <= 1 )
              break;
            if ( *((_DWORD *)v19 + 34) == v7 )
            {
              if ( lpParameter && (*((_BYTE *)v19 + 132) & 1) != 0 )
                break;
              if ( v49 )
              {
                if ( (*((_BYTE *)v19 + 132) & 4) != 0 && ++v52 == 30 )
                  break;
              }
            }
          }
        }
        v18 = v19 + 2;
        v19 = (PVOID *)v19[2];
        if ( !v19 )
          break;
        v17 = v51;
      }
    }
    if ( *v18 )
    {
      if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *((_DWORD *)v11 + 22) )
        Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
      v60 = v9;
      v61 = v8;
      v62 = v7;
      v41 = a5;
      v63[0] = a5;
      if ( a5 )
      {
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)a5 + 8LL))(a5, v16);
        v41 = v63[0];
        v7 = v62;
        v8 = v61;
        v9 = v60;
      }
      v63[1] = 0LL;
      *((_DWORD *)v11 + 32) = v9;
      *((_DWORD *)v11 + 33) = v8;
      *((_DWORD *)v11 + 34) = v7;
      v63[0] = 0LL;
      v42 = v11[18];
      if ( v42 )
        (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v42 + 16LL))(v42, v16);
      v11[18] = v41;
      *((_DWORD *)v11 + 40) = v46;
      v11[5] = a1;
      *((_BYTE *)v11 + 97) = 0;
      v43 = *((_DWORD *)v11 + 22);
      if ( GetCurrentThreadId() != v43 && v43 )
      {
        if ( *((_BYTE *)v11 + 120) )
          SetEvent(v11[14]);
        else
          PostThreadMessageW(v43, 0, 0LL, 0LL);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v63);
      return (unsigned int)started;
    }
    v20 = 0LL;
    lpParametera = 0LL;
    v21 = operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    v23 = 0LL;
    if ( v21 )
    {
      v21[3] = 1;
      *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v22 = &Windows::Internal::ComTaskPool::CThread::`vftable';
      *((_QWORD *)v22 + 2) = 0LL;
      *((_QWORD *)v22 + 3) = 0LL;
      *((_QWORD *)v22 + 4) = 0LL;
      *((_QWORD *)v22 + 5) = 0LL;
      *((_WORD *)v22 + 24) = 0;
      v22[13] = -2147467259;
      *((_QWORD *)v22 + 7) = 0LL;
      *((_QWORD *)v22 + 8) = 0LL;
      *((_QWORD *)v22 + 9) = 0LL;
      v22[20] = v9;
      v22[21] = v8 & 9;
      *((_QWORD *)v22 + 11) = 0LL;
      *((_BYTE *)v22 + 96) = 1;
      *((_QWORD *)v22 + 13) = 0LL;
      *((_QWORD *)v22 + 14) = 0LL;
      *((_BYTE *)v22 + 120) = 0;
      *((_QWORD *)v22 + 16) = 1LL;
      v22[34] = 0;
      *((_QWORD *)v22 + 18) = 0LL;
      *((_QWORD *)v22 + 19) = 0LL;
      v23 = v22;
      v20 = (HMODULE *)v22;
      lpParametera = (HMODULE *)v22;
    }
    if ( !v23 )
    {
      started = -2147024882;
      goto LABEL_116;
    }
    v56 = v9;
    v57 = v8;
    v58 = v7;
    v59[0] = a5;
    if ( a5 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)a5 + 8LL))(a5);
      v9 = v56;
    }
    v59[1] = 0LL;
    *((_DWORD *)v20 + 32) = v9;
    *((_DWORD *)v20 + 33) = v57;
    *((_DWORD *)v20 + 34) = v58;
    v24 = (HMODULE)v59[0];
    v59[0] = 0LL;
    v25 = v20[18];
    if ( v25 )
      (*(void (__fastcall **)(HMODULE))(*(_QWORD *)v25 + 16LL))(v25);
    v20[18] = v24;
    *((_DWORD *)v20 + 40) = v46;
    v20[5] = a1;
    *((_BYTE *)v20 + 97) = 0;
    v26 = *((_DWORD *)v20 + 22);
    if ( GetCurrentThreadId() != v26 && v26 )
    {
      if ( *((_BYTE *)v20 + 120) )
        SetEvent(v20[14]);
      else
        PostThreadMessageW(v26, 0, 0LL, 0LL);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v59);
    if ( v45 && !v50 )
    {
      if ( v51 )
        *((_BYTE *)v51 + 48) = 1;
      started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v20);
LABEL_114:
      if ( started >= 0 )
      {
        v40 = v20;
        v20 = 0LL;
        *v18 = v40;
      }
      goto LABEL_116;
    }
    Event = (HMODULE)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    v20[14] = Event;
    if ( Event || (started = ResultFromKnownLastError(), started >= 0) )
    {
      if ( GetModuleHandleExW(4u, (LPCWSTR)Windows::Internal::ComTaskPool::CThread::s_ThreadProc, v20 + 9) )
      {
LABEL_105:
        v38 = (HMODULE)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        v20[7] = v38;
        if ( v38 || (started = ResultFromKnownLastError(), started >= 0) )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
          v20 = lpParametera;
          (*((void (__fastcall **)(HMODULE *))*lpParametera + 1))(lpParametera);
          v39 = CreateThread(
                  0LL,
                  0LL,
                  Windows::Internal::ComTaskPool::CThread::s_ThreadProc,
                  lpParametera,
                  0,
                  &ThreadId);
          if ( v39 )
          {
            started = 0;
            CloseHandle(v39);
          }
          else
          {
            started = ResultFromKnownLastError();
            if ( started < 0 )
            {
              (*((void (__fastcall **)(HMODULE *))*lpParametera + 2))(lpParametera);
              FreeLibrary(lpParametera[9]);
              lpParametera[9] = 0LL;
              _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
              v20 = lpParametera;
            }
            else
            {
              CloseHandle(0LL);
            }
          }
        }
        if ( started < 0 )
          goto LABEL_116;
        *a7 = v20;
        (*((void (__fastcall **)(HMODULE *))*v20 + 1))(v20);
        goto LABEL_114;
      }
      started = ResultFromKnownLastError();
    }
    if ( started < 0 )
    {
LABEL_116:
      if ( v20 )
        (*((void (__fastcall **)(HMODULE *))*v20 + 2))(v20);
      return (unsigned int)started;
    }
    goto LABEL_105;
  }
  while ( *((_DWORD *)v14 + 34) != a4
       || !v14[18]
       || a2 != *((_DWORD *)v14 + 20) && a2 != 3
       || (((unsigned __int8)a3 ^ *((_BYTE *)v14 + 84)) & 9) != 0
       || (*((_BYTE *)v14 + 132) & 2) == 0 )
  {
    v14 = (_QWORD *)v14[2];
    if ( !v14 )
    {
      v10 = a1;
      goto LABEL_11;
    }
  }
  if ( (a3 & 0x100) != 0 )
  {
    v27 = v14[3];
    if ( v27 )
    {
      v14[3] = *(_QWORD *)(v27 + 24);
      *(_QWORD *)(v27 + 24) = 0LL;
      if ( v14[4] == v27 )
        v14[4] = 0LL;
      v28 = a6;
      while ( 1 )
      {
        v29 = v28[1];
        if ( v29 )
          *(_QWORD *)(v29 + 24) = v27;
        else
          *v28 = v27;
        v28[1] = v27;
        v27 = v14[3];
        if ( !v27 )
          break;
        v14[3] = *(_QWORD *)(v27 + 24);
        *(_QWORD *)(v27 + 24) = 0LL;
        if ( v14[4] == v27 )
          v14[4] = 0LL;
      }
    }
  }
  v55[0] = a5;
  if ( a5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a5 + 8LL))(a5);
  v55[1] = 0LL;
  v30 = (unsigned int *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v31 = v30;
  if ( v30 )
  {
    *v30 = v9;
    v30[1] = v8;
    v30[2] = v7;
    *((_QWORD *)v30 + 2) = 0LL;
    if ( v30 + 4 != (unsigned int *)v55 )
    {
      *((void **)v30 + 2) = v55[0];
      v55[0] = 0LL;
    }
    *((_QWORD *)v30 + 3) = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  started = 0;
  if ( v31 )
  {
    v32 = v14[4];
    if ( v32 )
      *(_QWORD *)(v32 + 24) = v31;
    else
      v14[3] = v31;
    v14[4] = v31;
  }
  else
  {
    started = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v55);
  if ( v31 && *((int *)v14 + 13) < 0 )
  {
    *v12 = (HMODULE *)v14;
    (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
  }
  return (unsigned int)started;
}
