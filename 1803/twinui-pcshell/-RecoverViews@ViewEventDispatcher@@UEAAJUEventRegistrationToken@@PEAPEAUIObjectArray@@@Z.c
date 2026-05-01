/*
 * XREFs of ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1801CC4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18000C304 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  int v5; // r12d
  RTL_SRWLOCK *v6; // r15
  unsigned int v7; // edi
  char *v8; // rcx
  char *Ptr; // rdx
  HSTRING *v11; // rbx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char *v15; // r14
  RTL_SRWLOCK *v16; // r15
  __int64 v17; // rdi
  PCWSTR StringRawBuffer; // rax
  void *v19; // r8
  char v20; // r13
  PVOID v21; // rdx
  __int64 *v22; // rcx
  int v23; // eax
  struct IObjectArray *v24; // rax
  HSTRING *v25; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  RTL_SRWLOCK *v28; // [rsp+38h] [rbp-18h]
  __int64 *v29; // [rsp+40h] [rbp-10h]
  char v30; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v32; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray **v33; // [rsp+A0h] [rbp+50h]
  void *v34; // [rsp+A8h] [rbp+58h] BYREF

  v33 = a3;
  v27 = -2LL;
  v5 = 0;
  *a3 = 0LL;
  v6 = this + 34;
  v26 = this + 34;
  AcquireSRWLockExclusive(this + 34);
  v28 = v6;
  if ( LOBYTE(this[35].Ptr) )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v25 = 0LL;
    v8 = 0LL;
    if ( !this[40].Ptr )
      goto LABEL_7;
    Ptr = (char *)this[39].Ptr;
    while ( *(_QWORD *)(*(_QWORD *)Ptr + 40LL) != a2.value )
    {
      ++v8;
      Ptr += 8;
      if ( v8 >= this[40].Ptr )
        goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(
      (void **)&v25,
      (void **)this[39].Ptr + (_QWORD)v8);
    v11 = v25;
    if ( v25 )
    {
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v34);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)this[48].Ptr;
        if ( v15 )
        {
          v16 = this + 47;
          do
          {
            v17 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
            StringRawBuffer = WindowsGetStringRawBuffer(v11[2], 0LL);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v17 + 616LL))(v17, StringRawBuffer) )
            {
              v32 = *((_QWORD *)v16->Ptr + (_QWORD)v15 - 1);
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v32);
              CTSimpleArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::RemoveAt(
                &this[47].Ptr,
                (unsigned __int64)(v15 - 1));
              (*(void (__fastcall **)(__int64, HSTRING *, __int64))(*(_QWORD *)v32 + 584LL))(v32, v11 + 1, 1LL);
              v29 = &v32;
              v20 = 1;
              v30 = 1;
              v21 = this[44].Ptr;
              if ( v21 != this[46].Ptr
                || (v5 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                           (__int64)&this[43],
                           (unsigned __int64)v21 + 1,
                           v19),
                    v5 >= 0) )
              {
                v22 = (__int64 *)((char *)this[43].Ptr + 8 * (__int64)this[44].Ptr++);
                if ( v22 )
                {
                  *v22 = v32;
                  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v22);
                }
              }
              if ( v5 >= 0 )
              {
                v23 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 40LL))(v34, v32);
                v5 = 0;
                if ( v23 >= 0 )
                {
                  v20 = 0;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    1685LL,
                    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                    (const char *)(unsigned int)v23);
                  CTSimpleArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::RemoveAt(
                    &this[43].Ptr,
                    (unsigned __int64)this[44].Ptr - 1);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  1683LL,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                  (const char *)(unsigned int)v5);
                v5 = 0;
              }
              if ( v20 )
              {
                v30 = 0;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 720LL))(v32);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v32);
            }
            --v15;
          }
          while ( v15 );
          v6 = v26;
        }
        v24 = (struct IObjectArray *)v34;
        v34 = 0LL;
        *v33 = v24;
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67D,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    }
    else
    {
LABEL_7:
      v7 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x677,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x80070490LL);
    }
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v25);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v7;
}
