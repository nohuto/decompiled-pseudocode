/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180112EF4
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180112D3C (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x18010E7E8 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     ??0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x18010F3F4 (--0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPool.c)
 *     ?CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x18010FD08 (-CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x18011010C (-Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1801113A8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x1801113C8 (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180111F34 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180112008 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1801120EC (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        struct Windows::Internal::ComTaskPool::TaskData **a6,
        HMODULE **a7)
{
  HMODULE **v7; // r12
  PVOID *v8; // r13
  unsigned int v10; // esi
  int v11; // r14d
  int started; // edi
  _QWORD *v13; // rbx
  DWORD TickCount; // eax
  PVOID *v15; // rbx
  PVOID *v16; // r12
  __int64 v17; // r10
  char v18; // r11
  HMODULE *v19; // rbx
  __int64 v20; // rax
  struct Windows::Internal::ComTaskPool::TaskData *v21; // rax
  struct Windows::Internal::ComTaskPool::TaskData **v22; // r8
  struct Windows::Internal::ComTaskPool::TaskData *v23; // rcx
  _DWORD *v24; // rax
  unsigned __int64 v25; // rcx
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rax
  bool v31; // [rsp+3Ch] [rbp-CCh]
  int v32; // [rsp+40h] [rbp-C8h]
  char v33; // [rsp+44h] [rbp-C4h]
  int v34; // [rsp+48h] [rbp-C0h]
  int v35; // [rsp+4Ch] [rbp-BCh]
  PVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  char v43[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-60h] BYREF
  char v45[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v46; // [rsp+C8h] [rbp-40h] BYREF
  char v47[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-20h] BYREF
  char v49[16]; // [rsp+F8h] [rbp-10h] BYREF
  char v50; // [rsp+108h] [rbp+0h] BYREF
  int v52; // [rsp+160h] [rbp+58h] BYREF
  int v53; // [rsp+168h] [rbp+60h] BYREF

  v53 = a3;
  v52 = a2;
  v7 = a7;
  v8 = 0LL;
  v10 = a3;
  v11 = a2;
  *a7 = 0LL;
  started = 0;
  v35 = a3 & 2;
  if ( (a3 & 2) == 0 || (v13 = Windows::Internal::ComTaskPool::s_pThreadList) == 0LL )
  {
LABEL_10:
    v39 = 0LL;
    v38 = 0LL;
    v34 = a3 & 4;
    v37 = 0LL;
    v33 = a3 & 1;
    TickCount = GetTickCount();
    v15 = (PVOID *)Windows::Internal::ComTaskPool::s_pThreadList;
    v16 = &Windows::Internal::ComTaskPool::s_pThreadList;
    v32 = TickCount;
    v40 = 0LL;
    v17 = 0LL;
    v31 = (v10 & 0x200) != 0;
    if ( Windows::Internal::ComTaskPool::s_pThreadList )
    {
      v31 = (v10 & 0x200) != 0;
      do
      {
        v40 = (__int64)v15;
        if ( Windows::Internal::ComTaskPool::CThread::Eligible((__int64)v15, v11, v10) )
        {
          if ( v15[18] || *((_BYTE *)v15 + 96) )
          {
            v31 = 1;
            if ( !v8 || *((_BYTE *)v15 + 48) )
              v8 = v15;
            if ( *((_DWORD *)v15 + 34) == a4 )
            {
              if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads
                && Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *((_DWORD *)v15 + 22) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !v15[3] && !a1 && *((int *)v15 + 23) <= 1 )
                {
                  v26 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v43, v52, v53, a4, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack(v15 + 3, v26);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
                  if ( started >= 0 )
                    Windows::Internal::ComTaskPool::CThread::CheckForDeadlock(v15);
                  return (unsigned int)started;
                }
              }
              if ( v18 )
              {
                v25 = v38 + 1;
                if ( (unsigned int)(v32 - *((_DWORD *)v15 + 40)) >= 0xBB8 )
                  v25 = v38;
                v38 = v25;
                if ( (unsigned __int64)++v39 >= 0x64 || v25 >= 8 )
                {
                  v27 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v45, v52, v53, a4, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                              &Windows::Internal::ComTaskPool::s_taskFloodingList,
                              v27);
                  v28 = (__int64 *)&v46;
                  goto LABEL_68;
                }
              }
              v10 = v53;
              v11 = v52;
            }
          }
          else
          {
            if ( *((int *)v15 + 23) <= 1 )
              break;
            if ( *((_DWORD *)v15 + 34) == a4 )
            {
              if ( v33 && (*((_BYTE *)v15 + 132) & 1) != 0 )
                break;
              if ( v34 )
              {
                if ( (*((_BYTE *)v15 + 132) & 4) != 0 && ++v37 == 30 )
                  break;
              }
            }
          }
        }
        v16 = v15 + 2;
        v15 = (PVOID *)v15[2];
      }
      while ( v15 );
    }
    if ( *v16 )
    {
      if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v17 + 88) )
        Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
      v29 = Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v49, v52, v53, a4, a5);
      Windows::Internal::ComTaskPool::CThread::SetThreadTask(v40, v29, v32, a1, 0LL);
      v28 = (__int64 *)&v50;
LABEL_68:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
      return (unsigned int)started;
    }
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      (__int64 *)&pv,
      (unsigned int *)&v52,
      (unsigned int *)&v53);
    v19 = (HMODULE *)pv;
    if ( !pv )
    {
      started = -2147024882;
LABEL_64:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pv);
      return (unsigned int)started;
    }
    v20 = Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v47, v11, v10, a4, a5);
    Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v19, v20, v32, a1, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v48);
    if ( !v31 || v35 )
    {
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v19);
      if ( started < 0 )
        goto LABEL_64;
      *a7 = v19;
      (*((void (__fastcall **)(HMODULE *))*v19 + 1))(v19);
    }
    else
    {
      if ( v8 )
        *((_BYTE *)v8 + 48) = 1;
      started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v19);
    }
    if ( started >= 0 )
    {
      pv = 0LL;
      *v16 = v19;
    }
    goto LABEL_64;
  }
  while ( *((_DWORD *)v13 + 34) != a4
       || !v13[18]
       || a2 != *((_DWORD *)v13 + 20) && a2 != 3
       || (((unsigned __int8)a3 ^ *((_BYTE *)v13 + 84)) & 9) != 0
       || (*((_BYTE *)v13 + 132) & 2) == 0 )
  {
    v13 = (_QWORD *)v13[2];
    if ( !v13 )
      goto LABEL_10;
  }
  if ( (a3 & 0x100) != 0 )
  {
    v21 = Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)(v13 + 3));
    if ( v21 )
    {
      v22 = a6;
      do
      {
        v23 = v22[1];
        if ( v23 )
          *((_QWORD *)v23 + 3) = v21;
        else
          *v22 = v21;
        v22[1] = v21;
        v21 = Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)(v13 + 3));
      }
      while ( v21 );
    }
  }
  v24 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)&v41, v11, v10, a4, a5);
  started = Windows::Internal::ComTaskPool::TaskList::PushBack(v13 + 3, v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
  if ( started >= 0 && *((int *)v13 + 13) < 0 )
  {
    *v7 = (HMODULE *)v13;
    (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
  }
  return (unsigned int)started;
}
