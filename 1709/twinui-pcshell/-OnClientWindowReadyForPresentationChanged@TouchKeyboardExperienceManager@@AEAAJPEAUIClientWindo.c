/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18019CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD **Ptr; // rbx
  _QWORD **v9; // rdi
  bool v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  RTL_SRWLOCK *v18; // [rsp+48h] [rbp-28h]
  _QWORD **v19; // [rsp+50h] [rbp-20h]
  _QWORD **v20; // [rsp+58h] [rbp-18h]
  _QWORD **v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v24; // [rsp+B0h] [rbp+40h] BYREF
  int v25; // [rsp+B8h] [rbp+48h] BYREF

  v17 = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v24);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x465,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( v24 )
  {
    v16 = 0LL;
    AcquireSRWLockShared(this + 48);
    v18 = this + 48;
    Ptr = (_QWORD **)this[50].Ptr;
    v19 = Ptr;
    v9 = (_QWORD **)this[49].Ptr;
    v20 = v9;
    while ( v9 != Ptr )
    {
      v15 = 0LL;
      (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))**v9)(**v9, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v15);
      v14 = 0;
      v25 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 48LL))(v15, &v14);
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, int *))(*(_QWORD *)a2 + 48LL))(
        a2,
        &v25);
      v10 = !*((_BYTE *)*v9 + 32) && v14 == v25;
      v11 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v10 )
        break;
      v9 += 2;
    }
    v21 = (_QWORD **)this[50].Ptr;
    if ( v9 == v21 )
    {
      v6 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x591,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x80070490LL);
      if ( this != (RTL_SRWLOCK *)-384LL )
        ReleaseSRWLockShared(this + 48);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x46A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x80070490LL);
      return v6;
    }
    std::shared_ptr<PeoplePaneViewInfo>::operator=((__int64 *)&v16, (__int64)v9);
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockShared(this + 48);
    v12 = v16;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      *(_QWORD *)(v16 + 24));
    v22 = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v13 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  return 0LL;
}
