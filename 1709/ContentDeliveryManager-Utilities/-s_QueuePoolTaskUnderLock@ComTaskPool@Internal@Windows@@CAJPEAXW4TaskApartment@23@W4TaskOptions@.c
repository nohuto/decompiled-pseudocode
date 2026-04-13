/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800059DC
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005750 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x1800047AC (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180004B70 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004CD4 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004E34 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x1800167F0 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        HMODULE *a5,
        _QWORD *a6,
        HMODULE **a7)
{
  unsigned int v8; // esi
  int v9; // r14d
  struct Windows::Internal::ComTaskPool::CThread **v11; // r12
  signed int started; // edi
  struct Windows::Internal::ComTaskPool::CThread *i; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  DWORD v17; // eax
  __int64 v18; // rdx
  DWORD TickCount; // ecx
  unsigned __int64 v20; // r8
  __int64 dwLowDateTime; // r9
  __int64 v22; // rbx
  struct Windows::Internal::ComTaskPool::CThread **v23; // r12
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  struct _TP_TIMER *v26; // rcx
  HMODULE *v27; // rcx
  HMODULE *v28; // rbx
  HMODULE *v29; // rax
  HMODULE v30; // rax
  char v32; // [rsp+38h] [rbp-D0h]
  char v33; // [rsp+39h] [rbp-CFh]
  int v34; // [rsp+3Ch] [rbp-CCh]
  bool v35; // [rsp+40h] [rbp-C8h]
  _FILETIME pftDueTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  PVOID pv; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v42[4]; // [rsp+78h] [rbp-90h] BYREF
  HMODULE *v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  _DWORD v45[4]; // [rsp+98h] [rbp-70h] BYREF
  HMODULE *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  _DWORD v48[4]; // [rsp+B8h] [rbp-50h] BYREF
  HMODULE *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  _DWORD v51[4]; // [rsp+D8h] [rbp-30h] BYREF
  HMODULE *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  _DWORD v54[4]; // [rsp+F8h] [rbp-10h] BYREF
  HMODULE *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  __int64 v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v59; // [rsp+178h] [rbp+70h] BYREF

  v59 = a3;
  v58 = a2;
  v57 = -2LL;
  v8 = a3;
  v9 = a2;
  v11 = (struct Windows::Internal::ComTaskPool::CThread **)a7;
  *a7 = 0LL;
  started = 0;
  LODWORD(v37) = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    for ( i = Windows::Internal::ComTaskPool::s_pThreadList;
          i;
          i = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)i + 2) )
    {
      if ( *((_DWORD *)i + 34) == a4
        && *((_QWORD *)i + 18)
        && (a2 == *((_DWORD *)i + 20) || a2 == 3)
        && (((unsigned __int8)a3 ^ *((_BYTE *)i + 84)) & 9) == 0
        && (*((_BYTE *)i + 132) & 2) != 0 )
      {
        if ( (a3 & 0x100) != 0 )
        {
          v14 = *((_QWORD *)i + 3);
          if ( v14 )
          {
            *((_QWORD *)i + 3) = *(_QWORD *)(v14 + 24);
            *(_QWORD *)(v14 + 24) = 0LL;
            if ( *((_QWORD *)i + 4) == v14 )
              *((_QWORD *)i + 4) = 0LL;
            v15 = a6;
            while ( 1 )
            {
              v16 = v15[1];
              if ( v16 )
                *(_QWORD *)(v16 + 24) = v14;
              else
                *v15 = v14;
              v15[1] = v14;
              v14 = *((_QWORD *)i + 3);
              if ( !v14 )
                break;
              *((_QWORD *)i + 3) = *(_QWORD *)(v14 + 24);
              *(_QWORD *)(v14 + 24) = 0LL;
              if ( *((_QWORD *)i + 4) == v14 )
                *((_QWORD *)i + 4) = 0LL;
            }
          }
        }
        v42[0] = v9;
        v42[1] = a3;
        v42[2] = a4;
        v43 = a5;
        if ( a5 )
          (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
        v44 = 0LL;
        started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)i + 3, v42);
        if ( v43 )
          (*((void (__fastcall **)(HMODULE *))*v43 + 2))(v43);
        if ( started >= 0 && *((int *)i + 12) < 0 )
        {
          *v11 = i;
          (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)i + 8LL))(i);
        }
        return (unsigned int)started;
      }
    }
  }
  if ( (a3 & 0x13) != 0 || (v32 = 1, a1) )
    v32 = 0;
  v17 = a3 >> 2;
  LOBYTE(v17) = (a3 & 4) != 0;
  pftDueTime.dwLowDateTime = v17;
  v33 = a3 & 1;
  v40 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  TickCount = GetTickCount();
  v34 = TickCount;
  v22 = 0LL;
  v35 = (v8 & 0x200) != 0;
  v23 = &Windows::Internal::ComTaskPool::s_pThreadList;
  if ( Windows::Internal::ComTaskPool::s_pThreadList )
  {
    LOBYTE(v18) = v32;
    dwLowDateTime = pftDueTime.dwLowDateTime;
    while ( 1 )
    {
      v22 = (__int64)*v23;
      if ( (v9 == *((_DWORD *)*v23 + 20) || v9 == 3)
        && (((unsigned __int8)v8 ^ *(_BYTE *)(v22 + 84)) & 9) == 0
        && *(int *)(v22 + 48) >= 0 )
      {
        if ( *(_QWORD *)(v22 + 144) || *(_BYTE *)(v22 + 96) )
        {
          v35 = 1;
          if ( *(_DWORD *)(v22 + 136) == a4 )
          {
            if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads )
            {
              if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !*(_QWORD *)(v22 + 24) && !a1 && *(int *)(v22 + 92) <= 1 )
                {
                  v45[0] = v58;
                  v45[1] = v59;
                  v45[2] = a4;
                  v46 = a5;
                  if ( a5 )
                    (*((void (__fastcall **)(HMODULE *, __int64, unsigned __int64, _QWORD))*a5 + 1))(
                      a5,
                      v18,
                      v20,
                      pftDueTime.dwLowDateTime);
                  v47 = 0LL;
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)(v22 + 24), v45);
                  if ( v46 )
                    (*((void (__fastcall **)(HMODULE *))*v46 + 2))(v46);
                  if ( started >= 0 )
                  {
                    *(_BYTE *)(v22 + 97) = 1;
                    if ( !*(_QWORD *)(v22 + 104) )
                      *(_QWORD *)(v22 + 104) = CreateThreadpoolTimer(
                                                 (PTP_TIMER_CALLBACK)Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback,
                                                 (PVOID)v22,
                                                 0LL);
                    v26 = *(struct _TP_TIMER **)(v22 + 104);
                    if ( v26 )
                    {
                      pftDueTime.dwLowDateTime = -5000000;
                      pftDueTime.dwHighDateTime = -1;
                      SetThreadpoolTimer(v26, &pftDueTime, 0, 0xFAu);
                    }
                  }
                  return (unsigned int)started;
                }
              }
              TickCount = v34;
            }
            if ( v32 )
            {
              v24 = TickCount - *(_DWORD *)(v22 + 160);
              v20 = v39;
              v25 = v39 + 1;
              if ( v24 >= 0xBB8 )
                v25 = v39;
              v39 = v25;
              if ( (unsigned __int64)++v40 >= 0x64 || v25 >= 8 )
              {
                v48[0] = v58;
                v48[1] = v59;
                v48[2] = a4;
                v49 = a5;
                if ( a5 )
                  (*((void (__fastcall **)(HMODULE *, __int64))*a5 + 1))(a5, v18);
                v50 = 0LL;
                started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                            &Windows::Internal::ComTaskPool::s_taskFloodingList,
                            v48);
                v27 = v49;
                goto LABEL_96;
              }
            }
            v8 = v59;
            v9 = v58;
            TickCount = v34;
          }
        }
        else
        {
          if ( *(int *)(v22 + 92) <= 1 )
            break;
          if ( *(_DWORD *)(v22 + 136) == a4 )
          {
            if ( v33 && (*(_BYTE *)(v22 + 132) & 1) != 0 )
              break;
            if ( LOBYTE(pftDueTime.dwLowDateTime) )
            {
              if ( (*(_BYTE *)(v22 + 132) & 4) != 0 && ++v38 == 30 )
                break;
            }
          }
        }
      }
      v23 = (struct Windows::Internal::ComTaskPool::CThread **)(v22 + 16);
      if ( !*(_QWORD *)(v22 + 16) )
        goto LABEL_77;
    }
  }
  if ( !*v23 )
  {
LABEL_77:
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      &pv,
      &v58,
      &v59,
      dwLowDateTime);
    v28 = (HMODULE *)pv;
    started = pv == 0LL ? 0x8007000E : 0;
    if ( pv )
    {
      v51[0] = v9;
      v51[1] = v8;
      v51[2] = a4;
      v52 = a5;
      if ( a5 )
        (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
      v53 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v28, (__int64)v51, v34, a1, 0LL);
      if ( v52 )
        (*((void (__fastcall **)(HMODULE *))*v52 + 2))(v52);
      if ( v35 && !(_DWORD)v37 )
      {
        started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v28);
        goto LABEL_87;
      }
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v28);
      if ( started >= 0 )
      {
        *a7 = v28;
        (*((void (__fastcall **)(HMODULE *))*v28 + 1))(v28);
LABEL_87:
        if ( started >= 0 )
        {
          v29 = v28;
          v28 = 0LL;
          *v23 = (struct Windows::Internal::ComTaskPool::CThread *)v29;
        }
      }
    }
    if ( !v28 )
      return (unsigned int)started;
    v30 = *v28;
    v27 = v28;
LABEL_98:
    (*((void (__fastcall **)(HMODULE *))v30 + 2))(v27);
    return (unsigned int)started;
  }
  if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v22 + 88) )
    Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
  v54[0] = v58;
  v54[1] = v59;
  v54[2] = a4;
  v55 = a5;
  if ( a5 )
    (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
  v56 = 0LL;
  Windows::Internal::ComTaskPool::CThread::SetThreadTask(v22, (__int64)v54, v34, a1, 0LL);
  v27 = v55;
LABEL_96:
  if ( v27 )
  {
    v30 = *v27;
    goto LABEL_98;
  }
  return (unsigned int)started;
}
