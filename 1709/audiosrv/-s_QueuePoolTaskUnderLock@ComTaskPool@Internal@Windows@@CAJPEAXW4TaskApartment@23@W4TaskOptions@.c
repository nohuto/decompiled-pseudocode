/*
 * XREFs of ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800E5F10
 * Callers:
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800E5D58 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCThread@ComTaskPool@Internal@Windows@@@12@AEAW4TaskApartment@Internal@Windows@@AEAW4TaskOptions@56@@Z @ 0x1800E18A4 (--$Make@VCThread@ComTaskPool@Internal@Windows@@AEAW4TaskApartment@34@AEAW4TaskOptions@34@@Detail.c)
 *     ??0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800E25B4 (--0TaskData@ComTaskPool@Internal@Windows@@QEAA@W4TaskApartment@23@W4TaskOptions@23@KPEAUIComPool.c)
 *     ?CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x1800E2CD0 (-CheckForDeadlock@CThread@ComTaskPool@Internal@Windows@@QEAAXXZ.c)
 *     ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x1800E30D4 (-Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x1800E43C8 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x1800E43E8 (-PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z.c)
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x1800E5000 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800E50D4 (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x1800E51B8 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
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
  struct Windows::Internal::ComTaskPool::CThread **v7; // r15
  __int64 v8; // rax
  unsigned int v10; // esi
  int v11; // r14d
  int started; // edi
  struct Windows::Internal::ComTaskPool::CThread *v13; // rbx
  char v14; // r13
  __int64 *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r10
  int v18; // r11d
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
  bool v31; // [rsp+38h] [rbp-D0h]
  DWORD TickCount; // [rsp+3Ch] [rbp-CCh]
  char v33; // [rsp+40h] [rbp-C8h]
  int v34; // [rsp+44h] [rbp-C4h]
  int v35; // [rsp+48h] [rbp-C0h]
  PVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  char v42[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-68h] BYREF
  char v44[16]; // [rsp+B0h] [rbp-58h] BYREF
  char v45; // [rsp+C0h] [rbp-48h] BYREF
  char v46[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h] BYREF
  char v48[16]; // [rsp+F0h] [rbp-18h] BYREF
  char v49; // [rsp+100h] [rbp-8h] BYREF
  int v51; // [rsp+160h] [rbp+58h] BYREF
  int v52; // [rsp+168h] [rbp+60h] BYREF

  v52 = a3;
  v51 = a2;
  v7 = (struct Windows::Internal::ComTaskPool::CThread **)a7;
  v8 = a1;
  v10 = a3;
  v11 = a2;
  *a7 = 0LL;
  started = 0;
  v35 = a3 & 2;
  if ( (a3 & 2) == 0 || (v13 = Windows::Internal::ComTaskPool::s_pThreadList) == 0LL )
  {
LABEL_11:
    if ( (a3 & 0x13) != 0 || (v14 = 1, v8) )
      v14 = 0;
    v39 = 0LL;
    v38 = 0LL;
    v34 = a3 & 4;
    v37 = 0LL;
    v33 = a3 & 1;
    TickCount = GetTickCount();
    v15 = (__int64 *)&Windows::Internal::ComTaskPool::s_pThreadList;
    v16 = 0LL;
    v31 = (v10 & 0x200) != 0;
    if ( Windows::Internal::ComTaskPool::s_pThreadList )
    {
      do
      {
        v16 = *v15;
        if ( Windows::Internal::ComTaskPool::CThread::Eligible(*v15, v11, v10) )
        {
          if ( *(_QWORD *)(v16 + 144) || *(_BYTE *)(v16 + 96) )
          {
            v31 = 1;
            if ( *(_DWORD *)(v16 + 136) == a4 )
            {
              if ( Windows::Internal::ComTaskPool::s_fCanReuseThreads
                && Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v16 + 88) )
              {
                Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
                if ( !*(_QWORD *)(v16 + 24) && !v17 && *(int *)(v16 + 92) <= 1 )
                {
                  v26 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v42, v51, v52, a4, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)(v16 + 24), v26);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
                  if ( started >= 0 )
                    Windows::Internal::ComTaskPool::CThread::CheckForDeadlock((_QWORD *)v16);
                  return (unsigned int)started;
                }
              }
              if ( v14 )
              {
                v25 = v38 + 1;
                if ( (unsigned int)(v18 - *(_DWORD *)(v16 + 160)) >= 0xBB8 )
                  v25 = v38;
                v38 = v25;
                if ( (unsigned __int64)++v39 >= 0x64 || v25 >= 8 )
                {
                  v27 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v44, v51, v52, a4, a5);
                  started = Windows::Internal::ComTaskPool::TaskList::PushBack(
                              &Windows::Internal::ComTaskPool::s_taskFloodingList,
                              v27);
                  v28 = (__int64 *)&v45;
                  goto LABEL_66;
                }
              }
              v10 = v52;
              v11 = v51;
            }
          }
          else
          {
            if ( *(int *)(v16 + 92) <= 1 )
              break;
            if ( *(_DWORD *)(v16 + 136) == a4 )
            {
              if ( v33 && (*(_BYTE *)(v16 + 132) & 1) != 0 )
                break;
              if ( v34 )
              {
                if ( (*(_BYTE *)(v16 + 132) & 4) != 0 && ++v37 == 30 )
                  break;
              }
            }
          }
        }
        v15 = (__int64 *)(v16 + 16);
      }
      while ( *(_QWORD *)(v16 + 16) );
    }
    if ( *v15 )
    {
      if ( Windows::Internal::ComTaskPool::s_dwThreadIdReuse == *(_DWORD *)(v16 + 88) )
        Windows::Internal::ComTaskPool::s_dwThreadIdReuse = 0;
      v29 = Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v48, v51, v52, a4, a5);
      Windows::Internal::ComTaskPool::CThread::SetThreadTask(v16, v29, TickCount, a1, 0LL);
      v28 = (__int64 *)&v49;
LABEL_66:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28);
      return (unsigned int)started;
    }
    Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CThread,enum Windows::Internal::TaskApartment &,enum Windows::Internal::TaskOptions &>(
      (__int64 *)&pv,
      (unsigned int *)&v51,
      (unsigned int *)&v52);
    v19 = (HMODULE *)pv;
    if ( !pv )
    {
      started = -2147024882;
LABEL_62:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pv);
      return (unsigned int)started;
    }
    v20 = Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)v46, v11, v10, a4, a5);
    Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)v19, v20, TickCount, a1, 0LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
    if ( !v31 || v35 )
    {
      started = Windows::Internal::ComTaskPool::CThread::StartThread(v19);
      if ( started < 0 )
        goto LABEL_62;
      *a7 = v19;
      (*((void (__fastcall **)(HMODULE *))*v19 + 1))(v19);
    }
    else
    {
      started = Windows::Internal::ComTaskPool::CThread::StartThreadWithFallback(v19);
    }
    if ( started >= 0 )
    {
      pv = 0LL;
      *v15 = (__int64)v19;
    }
    goto LABEL_62;
  }
  while ( *((_DWORD *)v13 + 34) != a4
       || !*((_QWORD *)v13 + 18)
       || a2 != *((_DWORD *)v13 + 20) && a2 != 3
       || (((unsigned __int8)a3 ^ *((_BYTE *)v13 + 84)) & 9) != 0
       || (*((_BYTE *)v13 + 132) & 2) == 0 )
  {
    v13 = (struct Windows::Internal::ComTaskPool::CThread *)*((_QWORD *)v13 + 2);
    if ( !v13 )
    {
      v8 = a1;
      goto LABEL_11;
    }
  }
  if ( (a3 & 0x100) != 0 )
  {
    v21 = Windows::Internal::ComTaskPool::TaskList::PopFront((struct Windows::Internal::ComTaskPool::CThread *)((char *)v13 + 24));
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
        v21 = Windows::Internal::ComTaskPool::TaskList::PopFront((struct Windows::Internal::ComTaskPool::CThread *)((char *)v13 + 24));
      }
      while ( v21 );
    }
  }
  v24 = (_DWORD *)Windows::Internal::ComTaskPool::TaskData::TaskData((__int64)&v40, v11, v10, a4, a5);
  started = Windows::Internal::ComTaskPool::TaskList::PushBack((_QWORD *)v13 + 3, v24);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
  if ( started >= 0 && *((int *)v13 + 12) < 0 )
  {
    *v7 = v13;
    (*(void (__fastcall **)(struct Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  return (unsigned int)started;
}
