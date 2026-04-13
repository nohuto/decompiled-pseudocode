/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180005B98
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x18000590C (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x180004A5C (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180004E20 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004F84 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800050E4 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x180018DE0 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rax
  char *v11; // r13
  HMODULE **v12; // r12
  signed int started; // edi
  _QWORD *v14; // rbx
  DWORD v15; // eax
  DWORD TickCount; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax
  PVOID *v21; // r12
  char *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  HMODULE *v28; // rcx
  HMODULE *v29; // rbx
  HMODULE *v30; // rax
  HMODULE v31; // rax
  char v33; // [rsp+38h] [rbp-D0h]
  char v34; // [rsp+39h] [rbp-CFh]
  __int64 v35; // [rsp+40h] [rbp-C8h]
  bool v36; // [rsp+48h] [rbp-C0h]
  int v37; // [rsp+4Ch] [rbp-BCh]
  _FILETIME pftDueTime; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  PVOID pv; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v44[4]; // [rsp+80h] [rbp-88h] BYREF
  HMODULE *v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  _DWORD v47[4]; // [rsp+A0h] [rbp-68h] BYREF
  HMODULE *v48; // [rsp+B0h] [rbp-58h]
  __int64 v49; // [rsp+B8h] [rbp-50h]
  _DWORD v50[4]; // [rsp+C0h] [rbp-48h] BYREF
  HMODULE *v51; // [rsp+D0h] [rbp-38h]
  __int64 v52; // [rsp+D8h] [rbp-30h]
  _DWORD v53[4]; // [rsp+E0h] [rbp-28h] BYREF
  HMODULE *v54; // [rsp+F0h] [rbp-18h]
  __int64 v55; // [rsp+F8h] [rbp-10h]
  _DWORD v56[4]; // [rsp+100h] [rbp-8h] BYREF
  HMODULE *v57; // [rsp+110h] [rbp+8h]
  __int64 v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  int v61; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v62; // [rsp+178h] [rbp+70h] BYREF

  v62 = a3;
  v61 = a2;
  v59 = -2LL;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  v11 = 0LL;
  v12 = a7;
  *a7 = 0LL;
  started = 0;
  LODWORD(v39) = a3 & 2;
  if ( (a3 & 2) == 0 || (v14 = Windows::Internal::ComTaskPool::s_pThreadList) == 0LL )
  {
LABEL_11:
    if ( (a3 & 0x13) != 0 || (v33 = 1, v10) )
      v33 = 0;
    v15 = a3 >> 2;
    LOBYTE(v15) = (a3 & 4) != 0;
    pftDueTime.dwLowDateTime = v15;
    v34 = a3 & 1;
    v42 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
    TickCount = GetTickCount();
    v19 = TickCount;
    v37 = TickCount;
    v20 = 0LL;
    v35 = 0LL;
    v36 = (v8 & 0x200) != 0;
    v21 = &Windows::Internal::ComTaskPool::s_pThreadList;
    v22 = (char *)Windows::Internal::ComTaskPool::s_pThreadList;
    if ( Windows::Internal::ComTaskPool::s_pThreadList )
    {
      v17 = a1;
      LOBYTE(v18) = v33;
      do
      {
        v20 = v22;
        v35 = (__int64)v22;
        if ( v9 == *((_DWORD *)v22 + 20) || v9 == 3 )
        {
          if ( (((unsigned __int8)v8 ^ (unsigned __int8)v22[84]) & 9) == 0 && *((int *)v22 + 13) >= 0 && !v22[49] )
          {
            if ( *((_QWORD *)v22 + 18) || v22[96] )
            {
              v36 = 1;
              if ( !v11 || v22[48] )
                v11 = v22;
              if ( *((_DWORD *)v22 + 34) == a4 )
              {
                if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads
                  && Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *((_DWORD *)v22 + 22) )
                {
                  Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                  if ( !*((_QWORD *)v22 + 3) && !a1 && *((int *)v22 + 23) <= 1 )
                  {
                    v47[0] = v61;
                    v47[1] = v62;
                    v47[2] = a4;
                    v48 = a5;
                    if ( a5 )
                      (*((void (__fastcall **)(HMODULE *, _QWORD, __int64, __int64))*a5 + 1))(a5, 0LL, v18, v19);
                    v49 = 0LL;
                    started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)v22 + 3, v47);
                    if ( v48 )
                      (*((void (__fastcall **)(HMODULE *))*v48 + 2))(v48);
                    if ( started >= 0 )
                    {
                      v22[97] = 1;
                      ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)v22 + 13);
                      if ( ThreadpoolTimer
                        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                                (PTP_TIMER_CALLBACK)Windows::Internal::ComTaskPool::CThread::s_CheckForDeadlockTimerCallback,
                                                v22,
                                                0LL),
                            (*((_QWORD *)v22 + 13) = ThreadpoolTimer) != 0LL) )
                      {
                        pftDueTime.dwLowDateTime = -5000000;
                        pftDueTime.dwHighDateTime = -1;
                        SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0xFAu);
                      }
                    }
                    return (unsigned int)started;
                  }
                }
                if ( v33 )
                {
                  v26 = v41 + 1;
                  if ( (unsigned int)(v19 - *((_DWORD *)v22 + 40)) >= 0xBB8 )
                    v26 = v41;
                  v41 = v26;
                  if ( (unsigned __int64)++v42 >= 0x64 || v26 >= 8 )
                  {
                    v50[0] = v61;
                    v50[1] = v62;
                    v50[2] = a4;
                    v51 = a5;
                    if ( a5 )
                      (*((void (__fastcall **)(HMODULE *, __int64, __int64))*a5 + 1))(a5, a1, v18);
                    v52 = 0LL;
                    started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                                &Windows::Internal::ComTaskPool::s_taskFloodingList,
                                v50);
                    v28 = v51;
                    goto LABEL_102;
                  }
                }
                v8 = v62;
                v9 = v61;
              }
            }
            else
            {
              if ( *((int *)v22 + 23) <= 1 )
                goto LABEL_79;
              if ( *((_DWORD *)v22 + 34) == a4 )
              {
                if ( v34 && (v22[132] & 1) != 0 )
                {
LABEL_79:
                  v20 = v22;
                  break;
                }
                if ( LOBYTE(pftDueTime.dwLowDateTime) && (v22[132] & 4) != 0 )
                {
                  ++v40;
                  v20 = v22;
                  if ( v40 == 30 )
                    break;
                  goto LABEL_66;
                }
              }
            }
          }
          v20 = v22;
        }
LABEL_66:
        v21 = (PVOID *)(v22 + 16);
        v22 = (char *)*((_QWORD *)v22 + 2);
      }
      while ( v22 );
    }
    if ( *v21 )
    {
      if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *((_DWORD *)v20 + 22) )
        Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
      v56[0] = v61;
      v56[1] = v62;
      v56[2] = a4;
      v57 = a5;
      if ( a5 )
        (*((void (__fastcall **)(HMODULE *, __int64, __int64, __int64))*a5 + 1))(a5, v17, v18, v19);
      v58 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask(v35, (__int64)v56, v37, a1, 0LL);
      v28 = v57;
LABEL_102:
      if ( !v28 )
        return (unsigned int)started;
      v31 = *v28;
LABEL_104:
      (*((void (__fastcall **)(HMODULE *))v31 + 2))(v28);
      return (unsigned int)started;
    }
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      &pv,
      &v61,
      &v62,
      v19);
    v29 = (HMODULE *)pv;
    started = pv == 0LL ? 0x8007000E : 0;
    if ( pv )
    {
      v53[0] = v9;
      v53[1] = v8;
      v53[2] = a4;
      v54 = a5;
      if ( a5 )
        (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
      v55 = 0LL;
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v29, (__int64)v53, v37, a1, 0LL);
      if ( v54 )
        (*((void (__fastcall **)(HMODULE *))*v54 + 2))(v54);
      if ( v36 && !(_DWORD)v39 )
      {
        if ( v11 )
          v11[48] = 1;
        started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v29);
        goto LABEL_93;
      }
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v29);
      if ( started >= 0 )
      {
        *a7 = v29;
        (*((void (__fastcall **)(HMODULE *))*v29 + 1))(v29);
LABEL_93:
        if ( started >= 0 )
        {
          v30 = v29;
          v29 = 0LL;
          *v21 = v30;
        }
      }
    }
    if ( !v29 )
      return (unsigned int)started;
    v31 = *v29;
    v28 = v29;
    goto LABEL_104;
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
    v23 = v14[3];
    if ( v23 )
    {
      v14[3] = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v23 + 24) = 0LL;
      if ( v14[4] == v23 )
        v14[4] = 0LL;
      v24 = a6;
      while ( 1 )
      {
        v25 = v24[1];
        if ( v25 )
          *(_QWORD *)(v25 + 24) = v23;
        else
          *v24 = v23;
        v24[1] = v23;
        v23 = v14[3];
        if ( !v23 )
          break;
        v14[3] = *(_QWORD *)(v23 + 24);
        *(_QWORD *)(v23 + 24) = 0LL;
        if ( v14[4] == v23 )
          v14[4] = 0LL;
      }
    }
  }
  v44[0] = v9;
  v44[1] = a3;
  v44[2] = a4;
  v45 = a5;
  if ( a5 )
    (*((void (__fastcall **)(HMODULE *))*a5 + 1))(a5);
  v46 = 0LL;
  started = Windows::Internal::ComTaskPool::TaskList::PushBack(v14 + 3, v44);
  if ( v45 )
    (*((void (__fastcall **)(HMODULE *))*v45 + 2))(v45);
  if ( started >= 0 && *((int *)v14 + 13) < 0 )
  {
    *v12 = (HMODULE *)v14;
    (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
  }
  return (unsigned int)started;
}
