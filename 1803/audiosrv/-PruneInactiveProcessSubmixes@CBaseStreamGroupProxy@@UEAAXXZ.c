/*
 * XREFs of ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x180046410
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call @ 0x180045B60 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B680 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973A8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180097844 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800999C0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneInactiveProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  Microsoft::WRL::Details::WeakReferenceImpl **v3; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl **v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // r9
  struct IInspectable *v6; // rcx
  __int64 (__fastcall *v7)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v8; // eax
  bool v9; // si
  __int64 *v10; // rsi
  __int64 *v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rcx
  void (*v14)(void); // rax
  __int64 *i; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  struct IInspectable *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  _QWORD v21[8]; // [rsp+20h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  struct IInspectable *v23; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+B0h] [rbp+77h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 144LL))(this) )
  {
    EnterCriticalSection(v1);
    v3 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 28);
    v4 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 27);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *v4;
        v6 = 0LL;
        v23 = 0LL;
        v9 = 1;
        if ( v5 )
        {
          v7 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v5 + 24LL);
          v8 = v7 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
             ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v23)
             : v7(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v23);
          v6 = v23;
          if ( v8 >= 0 )
          {
            if ( v23 )
              v9 = 0;
          }
        }
        if ( v6 )
        {
          v23 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v6->lpVtbl->Release)(v6);
        }
        if ( v9 )
          break;
        ++v4;
      }
      while ( v4 != v3 );
      if ( v4 != v3 )
      {
        v10 = (__int64 *)(v4 + 1);
        if ( v4 + 1 != v3 )
        {
          do
          {
            if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v6, v10) )
            {
              v16 = 0LL;
              if ( &v24 != v10 )
              {
                v16 = *v10;
                *v10 = 0LL;
              }
              v6 = (struct IInspectable *)*v4;
              *v4 = (Microsoft::WRL::Details::WeakReferenceImpl *)v16;
              if ( v6 )
                ((void (__fastcall *)(struct IInspectable *))v6->lpVtbl->Release)(v6);
              ++v4;
            }
            ++v10;
          }
          while ( v10 != (__int64 *)v3 );
        }
      }
    }
    if ( v4 != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 28) )
    {
      v11 = (__int64 *)*((_QWORD *)this + 28);
      v12 = (__int64 *)v4;
      if ( v4 != (Microsoft::WRL::Details::WeakReferenceImpl **)v11 )
      {
        do
        {
          v13 = *v12;
          if ( *v12 )
          {
            *v12 = 0LL;
            v14 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
            if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v13);
            else
              v14();
          }
          ++v12;
        }
        while ( v12 != v11 );
      }
      *((_QWORD *)this + 28) = v4;
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    for ( i = (__int64 *)*((_QWORD *)this + 27); ; ++i )
    {
      if ( i == *((__int64 **)this + 28) )
        goto LABEL_25;
      v17 = *i;
      v25 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v24 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v25, &v24) < 0 || !v24 )
        break;
      v23 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v24, &v23) >= 0
        && !((unsigned int (__fastcall *)(struct IInspectable *))v23->lpVtbl[4].Release)(v23) )
      {
        ((void (__fastcall *)(struct IInspectable *))v23->lpVtbl[4].QueryInterface)(v23);
        v18 = v23;
        if ( v23 )
          ((void (__fastcall *)(struct IInspectable *))v23->lpVtbl->AddRef)(v23);
        v21[0] = off_1801228F0;
        v21[7] = v21;
        v21[1] = v18;
        v25 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        v19 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
        v20 = CSerialWorkQueue::QueueWorkItem(v19, v21);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1DC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v20,
            v21[0]);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v24);
      if ( v17 )
        goto LABEL_54;
LABEL_55:
      ;
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v24);
    if ( !v17 )
      goto LABEL_55;
LABEL_54:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_55;
  }
LABEL_25:
  if ( v1 )
    LeaveCriticalSection(v1);
}
