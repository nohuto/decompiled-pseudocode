/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180018638
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180018610 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800188D0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18001892C (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180035DE0 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  CAudioSrv *v5; // rsi
  int v6; // r15d
  char *v7; // rax
  char *v8; // r14
  DWORD pid; // ebx
  __int64 v10; // rbx
  struct ATL::CAtlPlex *v11; // rax
  int v12; // r9d
  _QWORD *v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 **v16; // rax
  struct _TP_WORK *v17; // rdx
  void (__fastcall *v18)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax
  int *v20; // rbx
  ATL::CAtlException *v21; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = this;
  v6 = 0;
  v7 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(GUID *)lpCriticalSection = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v7, a2, 4LL);
    *(_QWORD *)v8 = &COnDevicePropertyChangedWorkItem::`vftable';
    *(_OWORD *)(v8 + 24) = *(_OWORD *)lpCriticalSection;
    *((_DWORD *)v8 + 10) = pid;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_28;
  if ( !*(_DWORD *)(*((_QWORD *)v8 + 1) - 16LL) )
  {
    (**(void (__fastcall ***)(void *, __int64))v8)(v8, 1LL);
LABEL_28:
    v6 = -2147024882;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)v5 + 25) )
  {
    (**(void (__fastcall ***)(void *, __int64))v8)(v8, 1LL);
    return (unsigned int)v6;
  }
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)v5 + 112);
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  v6 = 0;
  try
  {
    v10 = *((_QWORD *)v5 + 20);
    if ( !*((_QWORD *)v5 + 23) )
    {
      v11 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v5 + 22, *((unsigned int *)v5 + 48), 0x18uLL);
      if ( !v11 )
        ATL::AtlThrowImpl(-2147024882);
      v12 = *((_DWORD *)v5 + 48) - 1;
      v13 = (_QWORD *)((char *)v11 + 24 * (unsigned int)v12 + 8);
      while ( v12 >= 0 )
      {
        *v13 = *((_QWORD *)v5 + 23);
        *((_QWORD *)v5 + 23) = v13;
        v13 -= 3;
        --v12;
      }
    }
    v14 = (__int64 *)*((_QWORD *)v5 + 23);
    v15 = *v14;
    v14[2] = (__int64)v8;
    *((_QWORD *)v5 + 23) = v15;
    v14[1] = v10;
    *v14 = 0LL;
    ++*((_QWORD *)v5 + 21);
    v16 = (__int64 **)*((_QWORD *)v5 + 20);
    if ( v16 )
      *v16 = v14;
    else
      *((_QWORD *)v5 + 19) = v14;
    *((_QWORD *)v5 + 20) = v14;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v20 = (int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v5 = this;
    v6 = *v20;
  }
  if ( LOBYTE(lpCriticalSection[1]) )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    LOBYTE(lpCriticalSection[1]) = 0;
  }
  v17 = (struct _TP_WORK *)*((_QWORD *)v5 + 25);
  v18 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v18 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v17);
  else
    v18(ThreadPool, v17);
LABEL_19:
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 0x6FFu, v6);
  return (unsigned int)v6;
}
