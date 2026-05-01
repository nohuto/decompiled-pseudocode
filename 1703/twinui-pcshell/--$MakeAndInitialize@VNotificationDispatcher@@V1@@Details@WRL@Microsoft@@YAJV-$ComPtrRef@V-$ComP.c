/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180074938
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180071850 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180079608 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher>(
        volatile signed __int32 **a1)
{
  unsigned int v2; // esi
  volatile signed __int32 *v3; // rcx
  Microsoft::WRL::FtmBase *v4; // rax
  Microsoft::WRL::FtmBase *v5; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  int LastError; // ebp
  signed __int32 v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  APTTYPE pAptType; // [rsp+50h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
  *a1 = 0LL;
  v4 = (Microsoft::WRL::FtmBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::FtmBase::FtmBase(v4);
  *((_DWORD *)v5 + 7) = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v5 + 4) = 0LL;
  *(_QWORD *)v5 = &NotificationDispatcher::`vftable';
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  InitializeSRWLock((PSRWLOCK)v5 + 9);
  *((_BYTE *)v5 + 80) = 0;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType && pAptType != APTTYPE_MAINSTA )
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x8000FFFFLL);
LABEL_19:
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
    return (unsigned int)LastError;
  }
  v6 = SHCreateWorkerWindowW(NotificationDispatcher::WndProc, -3LL, 0LL, 0LL, 0LL, v5);
  *((_QWORD *)v5 + 4) = v6;
  if ( v6 )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x47,
                  (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                  v7);
  if ( LastError < 0 )
    goto LABEL_19;
  do
    v9 = *((_DWORD *)v5 + 7);
  while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 7, v9 + 1, v9) );
  *a1 = (volatile signed __int32 *)v5;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
  return v2;
}
