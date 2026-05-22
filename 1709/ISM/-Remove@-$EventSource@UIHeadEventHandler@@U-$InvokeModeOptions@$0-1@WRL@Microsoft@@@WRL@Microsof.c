/*
 * XREFs of ?Remove@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180069A40
 * Callers:
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180069918 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_ @ 0x18006A564 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHea.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800690EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18006A100 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<IHeadEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r12
  volatile signed __int32 *v5; // rdi
  _QWORD *Ptr; // r13
  int v7; // ebx
  struct IUnknown **v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r13
  bool v12; // cl
  PVOID v13; // rax
  void **v14; // r15
  struct IUnknown **v15; // r12
  void **v16; // rax
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v19; // [rsp+20h] [rbp-10h] BYREF
  void **v20; // [rsp+28h] [rbp-8h]
  char v21; // [rsp+70h] [rbp+40h]
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v7 = 0;
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v7;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = Ptr[3] - (_QWORD)v8;
  v22 = 0LL;
  v11 = (v10 >> 3) - 1;
  v21 = 0;
  v23 = v11;
  if ( v11 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
           &v22,
           &v23);
    if ( v7 < 0 )
    {
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v22 + 24LL))(
            v22,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      goto LABEL_10;
    }
    v13 = a1->Ptr;
    v9 = (volatile signed __int32 *)v22;
    v20 = (void **)*((_QWORD *)a1->Ptr + 4);
    if ( *((_QWORD *)v13 + 2) == *((_QWORD *)v13 + 3) )
      goto LABEL_31;
    v14 = v20;
    v15 = (struct IUnknown **)*((_QWORD *)v13 + 2);
    v12 = 0;
    do
    {
      if ( v12 || a2 != *v15 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v9, *v15, *v14);
        v12 = v21;
        ++v14;
        v23 = --v11;
      }
      else
      {
        v12 = 1;
        v21 = 1;
      }
      ++v15;
    }
    while ( v15 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
  }
  else
  {
    v12 = *v8 == a2;
  }
  if ( v12 )
  {
    AcquireSRWLockExclusive(a1 + 1);
    v19 = 0LL;
    if ( &v19 != (volatile signed __int32 **)a1 )
    {
      v5 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
      v19 = v5;
    }
    v17 = v9;
    v9 = 0LL;
    v20 = (void **)a1->Ptr;
    v16 = v20;
    v22 = 0LL;
    a1->Ptr = (PVOID)v17;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 3, 0xFFFFFFFF) == 1 )
      {
        (*((void (__fastcall **)(void **, __int64))*v20 + 3))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v9 = (volatile signed __int32 *)v22;
    }
    if ( a1 == (RTL_SRWLOCK *)-8LL )
      goto LABEL_35;
    ReleaseSRWLockExclusive(a1 + 1);
  }
LABEL_31:
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_35:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v7 = 0;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v7;
}
