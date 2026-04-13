/*
 * XREFs of ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x180006234
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800054DC (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoolTask@34@@Z @ 0x180004E20 (-SetThreadTask@CThread@ComTaskPool@Internal@Windows@@QEAAX$$QEAUTaskData@234@KPEAXPEAPEAUIComPoo.c)
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x1800061A8 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::s_ClearOrGetNextTask(
        struct Windows::Internal::ComTaskPool::CThread *a1)
{
  char v2; // si
  _QWORD *v3; // rbx
  DWORD TickCount; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct Windows::Internal::ComTaskPool::TaskData *v7; // rbp
  _DWORD *v8; // rsi
  __int64 v9; // rax
  DWORD v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0LL;
  AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  v3 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v3 )
  {
    *((_QWORD *)a1 + 3) = v3[3];
    v3[3] = 0LL;
    if ( *((_QWORD **)a1 + 4) == v3 )
      *((_QWORD *)a1 + 4) = 0LL;
    TickCount = GetTickCount();
    Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)a1, (__int64)v3, TickCount, 0LL, &v12);
    v5 = v3[2];
    if ( v5 )
    {
      v3[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v3);
    v6 = v12;
  }
  else
  {
    *((_BYTE *)a1 + 97) = 0;
    v6 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 18) = 0LL;
    v12 = v6;
    v2 = 1;
    *((_BYTE *)a1 + 49) = 1;
  }
  ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  if ( v6 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v2 )
  {
    v7 = 0LL;
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    *((_BYTE *)a1 + 49) = 0;
    v8 = (_DWORD *)Windows::Internal::ComTaskPool::s_taskFloodingList;
    if ( !Windows::Internal::ComTaskPool::s_taskFloodingList )
      goto LABEL_23;
    Windows::Internal::ComTaskPool::s_taskFloodingList = *(_QWORD *)(Windows::Internal::ComTaskPool::s_taskFloodingList
                                                                   + 24LL);
    *((_QWORD *)v8 + 3) = 0LL;
    v9 = qword_18017C170;
    if ( (_DWORD *)qword_18017C170 == v8 )
      v9 = 0LL;
    if ( (qword_18017C170 = v9, v8[2] == *((_DWORD *)a1 + 34))
      && (*v8 == *((_DWORD *)a1 + 20) || *v8 == 3)
      && ((*((_BYTE *)a1 + 84) ^ *((_BYTE *)v8 + 4)) & 9) == 0
      && *((int *)a1 + 13) >= 0
      && !*((_BYTE *)a1 + 49) )
    {
      v10 = GetTickCount();
      Windows::Internal::ComTaskPool::CThread::SetThreadTask((__int64)a1, (__int64)v8, v10, 0LL, 0LL);
      v11 = *((_QWORD *)v8 + 2);
      if ( v11 )
      {
        *((_QWORD *)v8 + 2) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      operator delete(v8);
    }
    else
    {
LABEL_23:
      v7 = (struct Windows::Internal::ComTaskPool::TaskData *)v8;
    }
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( v7 )
      Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(v7);
  }
}
