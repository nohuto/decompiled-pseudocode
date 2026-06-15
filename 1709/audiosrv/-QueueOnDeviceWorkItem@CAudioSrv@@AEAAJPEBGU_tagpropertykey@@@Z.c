/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18002C738
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x18002C700 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180009DC0 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F4F0 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18002ABC8 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(CAudioSrv *this, char *a2, struct _tagpropertykey *a3)
{
  CAudioSrv *v5; // r15
  int v6; // r14d
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  DWORD pid; // ebx
  struct _TP_WORK *v10; // rdx
  void (__fastcall *v11)(CAudioThreadPool *, struct _TP_WORK *); // rax
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = this;
  v6 = 0;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v17 = v7;
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
  v17 = v8;
  if ( !v8 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v8[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
LABEL_18:
    v6 = -2147024882;
    goto LABEL_11;
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
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail((__int64)v5 + 152, &v17);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v13 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v17) = *(_DWORD *)v13;
    v5 = this;
    v6 = (int)v17;
  }
  if ( LOBYTE(lpCriticalSection[1]) )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    LOBYTE(lpCriticalSection[1]) = 0;
  }
  v10 = (struct _TP_WORK *)*((_QWORD *)v5 + 25);
  v11 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
  if ( v11 == CAudioThreadPool::SubmitWork )
    CAudioThreadPool::SubmitWork(ThreadPool, v10);
  else
    v11(ThreadPool, v10);
LABEL_11:
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 0x700u, v6);
  return (unsigned int)v6;
}
