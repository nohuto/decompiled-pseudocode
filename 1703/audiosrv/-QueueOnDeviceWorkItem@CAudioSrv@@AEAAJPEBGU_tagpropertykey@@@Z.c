/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180023F38
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180023F00 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180023CF4 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXXZ @ 0x180024108 (-GetFreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@A.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180024210 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(CAudioSrv *this, unsigned __int16 *a2, struct _tagpropertykey *a3)
{
  CAudioSrv *v5; // r15
  int v6; // r14d
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  DWORD pid; // ebx
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rcx
  struct _TP_WORK *v14; // rdx
  void (__fastcall *v15)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax
  int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = this;
  v6 = 0;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *(GUID *)lpCriticalSection = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v7, a2, 4);
    *v8 = &COnDevicePropertyChangedWorkItem::`vftable';
    *(_OWORD *)(v8 + 3) = *(_OWORD *)lpCriticalSection;
    *((_DWORD *)v8 + 10) = pid;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_24;
  if ( !*(_DWORD *)(v8[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
LABEL_24:
    v6 = -2147024882;
    goto LABEL_16;
  }
  if ( !*((_QWORD *)v5 + 25) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    return (unsigned int)v6;
  }
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)v5 + 112);
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock(lpCriticalSection);
  v6 = 0;
  try
  {
    v10 = *((_QWORD *)v5 + 20);
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::GetFreeNode((char *)v5 + 152);
    v11 = (__int64 *)*((_QWORD *)v5 + 23);
    v12 = *v11;
    if ( v11 )
      v11[2] = (__int64)v8;
    *((_QWORD *)v5 + 23) = v12;
    v11[1] = v10;
    *v11 = 0LL;
    ++*((_QWORD *)v5 + 21);
    v13 = (__int64 **)*((_QWORD *)v5 + 20);
    if ( v13 )
      *v13 = v11;
    else
      *((_QWORD *)v5 + 19) = v11;
    *((_QWORD *)v5 + 20) = v11;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v5 = this;
    v6 = *v17;
  }
  if ( LOBYTE(lpCriticalSection[1]) )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    LOBYTE(lpCriticalSection[1]) = 0;
  }
  v14 = (struct _TP_WORK *)*((_QWORD *)v5 + 25);
  v15 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v15 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v14);
  else
    v15(ThreadPool, v14);
LABEL_16:
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 0x6FFu, v6);
  return (unsigned int)v6;
}
