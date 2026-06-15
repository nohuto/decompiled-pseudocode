/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000E95C
 * Callers:
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18000EBB0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000ECD0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180096690 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800966C0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800966F0 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x180030F50 (std--_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std--allocator_int__bool_ISaDeviceProx.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180095968 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl ***v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // rdx
  unsigned int i; // r13d
  Microsoft::WRL::Details::WeakReferenceImpl **j; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, __int64); // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(volatile signed __int32 *); // rax
  __int64 (__fastcall *v18)(volatile signed __int32 *); // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h]
  CProcessSubmixProxy *v22; // [rsp+A0h] [rbp+58h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v23; // [rsp+A8h] [rbp+60h] BYREF

  v21 = a2;
  v19[1] = -2LL;
  v5 = (Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 80);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v19[2] = v6;
  for ( i = 0; i < 4; ++i )
  {
    if ( *a3 )
      break;
    for ( j = *v5; j != v5[1]; ++j )
    {
      v14 = *j;
      v23 = v14;
      if ( v14 )
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v14 + 8LL))(v14);
      v22 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v23, (struct IInspectable **)&v22) >= 0 && v22 )
      {
        v20 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v22, &v20) >= 0 )
        {
          v19[0] = v20;
          v15 = *(_QWORD *)(a2 + 56);
          if ( !v15 )
          {
            std::_Xbad_function_call();
            JUMPOUT(0x1800480EBLL);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 16LL))(v15, v19) )
          {
            v16 = v20;
            v20 = 0LL;
            *a3 = v16;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v22);
            if ( v14 )
            {
              v17 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL);
              if ( v17 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v14);
              else
                v17((volatile signed __int32 *)v14);
            }
            break;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v22);
      if ( v14 )
      {
        v18 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL);
        if ( v18 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v14);
        else
          v18((volatile signed __int32 *)v14);
      }
    }
    v5 += 3;
  }
  v10 = *a3 == 0LL ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    LOBYTE(v7) = v11 != a2;
    v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL);
    if ( (char *)v12 == (char *)std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this(
        v11,
        v7);
    else
      v12(v11, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v10;
}
