/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18019C780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     ?RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180199EE4 (-RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18019BCA4 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18019D214 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___ @ 0x18019E988 (wil--ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  struct EventRegistrationToken v8; // r8
  __int64 *Ptr; // rbx
  __int64 *i; // rsi
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  struct KBViewInfo *v16; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-20h]
  _QWORD v18[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 *v21; // [rsp+B8h] [rbp+48h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v20);
  if ( v5 < 0 )
  {
    v6 = 1070LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !v20 )
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)a2 + 336LL))(
           a2,
           4LL);
    if ( v5 < 0 )
    {
      v6 = 1075LL;
      goto LABEL_3;
    }
    v5 = TouchKeyboardExperienceManager::OnViewCreated((TouchKeyboardExperienceManager *)this, a2, v8);
    if ( v5 < 0 )
    {
      v6 = 1076LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  if ( v20 != 4 )
    return 0LL;
  AcquireSRWLockExclusive(this + 78);
  LODWORD(this[77].Ptr) = 4;
  if ( this != (RTL_SRWLOCK *)-624LL )
    ReleaseSRWLockExclusive(this + 78);
  AcquireSRWLockExclusive(this + 48);
  Ptr = (__int64 *)this[50].Ptr;
  for ( i = (__int64 *)this[49].Ptr;
        i != Ptr
     && !(unsigned int)SHIsSameObject(
                         *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))*i,
                         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
        i += 2 )
  {
    ;
  }
  v21 = i;
  if ( i == this[50].Ptr )
  {
LABEL_32:
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockExclusive(this + 48);
    if ( this[58].Ptr )
    {
      v5 = TouchKeyboardExperienceManager::RelaunchSIPWithDelay((TouchKeyboardExperienceManager *)this);
      if ( v5 < 0 )
      {
        v6 = 1109LL;
        goto LABEL_3;
      }
    }
    return 0LL;
  }
  std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(&v16, i);
  v11 = TouchKeyboardExperienceManager::DismissView((TouchKeyboardExperienceManager *)this, v16);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 1097LL;
    goto LABEL_21;
  }
  v18[0] = this;
  v18[1] = &v21;
  v11 = wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___(v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        v15 = v17;
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    goto LABEL_32;
  }
  v13 = 1101LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      v14 = v17;
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  if ( this != (RTL_SRWLOCK *)-384LL )
    ReleaseSRWLockExclusive(this + 48);
  return v12;
}
