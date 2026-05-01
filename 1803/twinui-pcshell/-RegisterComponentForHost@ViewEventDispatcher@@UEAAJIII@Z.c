/*
 * XREFs of ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x1800342B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x18002FCE0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct IViewWrapperInternal *v8; // r15
  RTL_SRWLOCK *Ptr; // rcx
  __int64 (__fastcall *v10)(RTL_SRWLOCK *, unsigned int, int, int); // rax
  int v11; // eax
  unsigned int v12; // ebp
  RTL_SRWLOCK *v13; // rdi
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  unsigned int (__fastcall *v16)(ViewWrapperBase *__hidden); // rax
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rbx
  _DWORD *v22; // rcx
  unsigned int (__fastcall *v23)(ViewWrapperBase *__hidden); // rax
  int v24; // eax
  __int64 (__fastcall ***v25)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v26; // eax
  int v27; // ebx
  struct IViewWrapperInternal *v28; // rcx
  struct IViewWrapperInternal *v29; // rcx
  int v31; // [rsp+20h] [rbp-58h]
  struct IViewWrapperInternal *v32[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IViewWrapperInternal *v34; // [rsp+80h] [rbp+8h] BYREF

  v32[1] = (struct IViewWrapperInternal *)-2LL;
  v8 = (struct IViewWrapperInternal *)&this[12];
  AcquireSRWLockExclusive(this + 12);
  v32[2] = v8;
  Ptr = (RTL_SRWLOCK *)this[41].Ptr;
  v10 = (__int64 (__fastcall *)(RTL_SRWLOCK *, unsigned int, int, int))*((_QWORD *)Ptr->Ptr + 18);
  if ( v10 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost )
    v11 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost(
            Ptr,
            a2,
            a3,
            a4);
  else
    v11 = v10(Ptr, a2, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v11,
      v31);
  }
  else
  {
    v13 = this - 25;
    v12 = 0;
    v32[0] = 0LL;
    v14 = 0LL;
    if ( v13[47].Ptr )
    {
      while ( 1 )
      {
        v15 = (_DWORD *)*((_QWORD *)v13[46].Ptr + v14);
        v16 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v15 + 592LL);
        v17 = v16 == ViewWrapperBase::GetViewInstanceId ? v15[35] : ((__int64 (*)(void))v16)();
        if ( v17 == a2 )
          break;
        if ( (PVOID)++v14 >= v13[47].Ptr )
          goto LABEL_25;
      }
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IViewWrapperInternal **))*((_QWORD *)v13[46].Ptr + v14);
      v19 = (**v18)(v18, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, v32);
      v20 = v19;
      if ( v19 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B8,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v19,
          v31);
      if ( v20 >= 0 )
      {
        v34 = 0LL;
        v21 = 0LL;
        if ( v13[47].Ptr )
        {
          while ( 1 )
          {
            v22 = (_DWORD *)*((_QWORD *)v13[46].Ptr + v21);
            v23 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v22 + 592LL);
            v24 = v23 == ViewWrapperBase::GetViewInstanceId ? v22[35] : ((__int64 (*)(void))v23)();
            if ( v24 == a3 )
              break;
            if ( (PVOID)++v21 >= v13[47].Ptr )
              goto LABEL_34;
          }
          v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IViewWrapperInternal **))*((_QWORD *)v13[46].Ptr + v21);
          v26 = (**v25)(v25, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v34);
          v27 = v26;
          if ( v26 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9B8,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)v26,
              v31);
        }
        else
        {
LABEL_34:
          v27 = -2147319765;
        }
        if ( v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4EF,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v27,
            v31);
        ViewEventDispatcher::_PropagateNewRegistration((ViewEventDispatcher *)v13, v34, v32[0]);
        v28 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
LABEL_25:
    v29 = v32[0];
    if ( v32[0] )
    {
      v32[0] = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  if ( v8 )
    ReleaseSRWLockExclusive((PSRWLOCK)v8);
  return v12;
}
