/*
 * XREFs of ?remove_KindChanged@ThumbnailInteropVisual@@UEAAJUEventRegistrationToken@@@Z @ 0x180169A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18005D2A8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18005F930 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall ThumbnailInteropVisual::remove_KindChanged(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v3; // r14
  volatile signed __int32 *v4; // rdi
  const char *v5; // r9
  _QWORD *Ptr; // rax
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  __int64 v8; // r15
  bool v9; // r13
  int v10; // ebx
  PVOID v11; // rax
  void **v12; // rcx
  struct IUnknown **v13; // r12
  Microsoft::WRL::Details::EventTargetArray *v14; // rax
  volatile signed __int32 *v15; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  PSRWLOCK v18; // [rsp+70h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    v3 = this + 8;
    v4 = 0LL;
    wil::srwlock::lock_exclusive(this + 10, &SRWLock);
    Ptr = v3->Ptr;
    if ( !v3->Ptr )
    {
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
LABEL_32:
      v10 = 0;
LABEL_33:
      if ( v10 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x6F,
          (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
          (const char *)(unsigned int)v10);
      return 0LL;
    }
    v7 = 0LL;
    v18 = 0LL;
    v8 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) - 1;
    v20 = v8;
    v9 = 0;
    if ( v8 )
    {
      v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
              (volatile signed __int32 **)&v18,
              (unsigned __int64 *)&v20);
      if ( v10 < 0 )
      {
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v18);
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        goto LABEL_33;
      }
      v11 = v3->Ptr;
      v12 = (void **)*((_QWORD *)v3->Ptr + 4);
      v20 = (__int64)v12;
      v13 = (struct IUnknown **)*((_QWORD *)v11 + 2);
      v7 = (Microsoft::WRL::Details::EventTargetArray *)v18;
      if ( v13 == *((struct IUnknown ***)v11 + 3) )
        goto LABEL_26;
      do
      {
        if ( v9 || (struct IUnknown *)a2.value != *v13 )
        {
          if ( !v8 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v7, *v13, *v12);
          v12 = (void **)(v20 + 8);
          v20 += 8LL;
          --v8;
        }
        else
        {
          v9 = 1;
        }
        ++v13;
      }
      while ( v13 != *((struct IUnknown ***)v3->Ptr + 3) );
    }
    else
    {
      v9 = *(_QWORD *)Ptr[2] == a2.value;
    }
    if ( v9 )
    {
      wil::srwlock::lock_exclusive(v3 + 1, &v18);
      if ( &v20 != (__int64 *)v3 )
      {
        v4 = (volatile signed __int32 *)v3->Ptr;
        v3->Ptr = 0LL;
      }
      v14 = v7;
      v7 = 0LL;
      v15 = (volatile signed __int32 *)v3->Ptr;
      v3->Ptr = v14;
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
      if ( !v18 )
        goto LABEL_28;
      ReleaseSRWLockExclusive(v18);
    }
LABEL_26:
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v7);
LABEL_28:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
    goto LABEL_32;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x72,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\visual.cpp",
                           v5);
  }
  return result;
}
